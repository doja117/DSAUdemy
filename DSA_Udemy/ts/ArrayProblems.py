class Solution:
    def threeSum(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        ans=[]
        for i in range(0,len(arr)-1):
            if i>0 and arr[i]==arr[i-1]:
                continue
            j=i+1
            k=len(arr)-1
            while (j<k):
                target=arr[i]+arr[j]+arr[k]
                if (target==0):
                    ans.append([arr[i],arr[j],arr[k]])
                    while (j<k and arr[j]==arr[j+1]):
                        j+=1
                    while (j<k and arr[k]==arr[k-1]):
                        k-=1
                    j+=1
                    k-=1
                else:
                    if target>0:
                        k-=1
                    else:
                        j+=1
        return ans
            

    def longestMountain(self, arr: List[int]) -> int:
        peaks=[]

        for i in range(1,len(arr)-1):
            if (arr[i]>arr[i+1] and arr[i]>arr[i-1]):
                peaks.append(i)
        if (len(peaks)==0):
            return 0
        ans=-1
        for i in range(len(peaks)):
            p=peaks[i]
            curr_ans=1
            while (p>0 and arr[p]>arr[p-1]):
                print(p)
                curr_ans+=1
                p-=1
            p=peaks[i]
            
            while (p<len(arr)-1 and arr[p]>arr[p+1]):
                print(p)
                curr_ans+=1
                p+=1
            ans=max(ans,curr_ans)
        return ans
        
        