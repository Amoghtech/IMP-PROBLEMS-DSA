vector<vector<int>> fourSum(vector<int> &arr, int k)
{
    // Your code goes here
    vector<vector<int>> v;
    int p = 0;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int l = j + 1, h = n - 1;
            int sum = k - (arr[i] + arr[j]);
            while (l < h)
            {
                if ((arr[l] + arr[h]) == sum)
                {
                    vector<int> quadruplet(4, 0);
                    quadruplet[0] = arr[i];
                    quadruplet[1] = arr[j];
                    quadruplet[2] = arr[l];
                    quadruplet[3] = arr[h];
                    v.push_back(quadruplet);

                    while (l < h && arr[l] == quadruplet[2])
                        l++;
                    while (l < h && arr[h] == quadruplet[3])
                        h--;
                }
                else if ((arr[l] + arr[h]) < sum)
                {
                    l++;
                }
                else
                    h--;
            }
            while (j + 1 < n && arr[j] == arr[j + 1])
                j++;
        }

        while (i + 1 < n && arr[i] == arr[i + 1])
            i++;
    }
    return v;
}