class Solution {
    public int maxPackages(int[] arr, int totaltime) {
        // code here
        int max=0;
        if(totaltime>=arr.length){
            for(int i:arr){
                max+=i;
            }
            return max;
        }
        int v=0;
        for(int i=0;i<totaltime;i++){
            v+=arr[i];
        }
        max=Math.max(max,v);
        for(int i=totaltime;i<arr.length;i++){
            v=v+arr[i]-arr[i-totaltime];
            max=Math.max(max,v);
        }
        return max;
    }
}

