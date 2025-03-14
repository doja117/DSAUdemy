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
            