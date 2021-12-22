#include <bits/stdc++.h>
#include <ctime>

using namespace std;

double timeUsed;
clock_t ticksStart;

void sort_p(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    ticksStart = clock();
    for (int i = 1; i < mas_rand.size(); i++) {
        for (int r = 0; r < mas_rand.size()-i; r++) {
            if (mas_rand[r] >= mas_rand[r+1]) {
                int temp = mas_rand[r];
                mas_rand[r] = mas_rand[r+1];
                mas_rand[r+1] = temp;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << "Итог пузырьковой сортировки:" << "\n";
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_sort.size(); i++) {
        for (int r = 0; r < mas_sort.size()-i; r++) {
            if (mas_sort[r] >= mas_sort[r+1]) {
                int temp = mas_sort[r];
                mas_sort[r] = mas_sort[r+1];
                mas_sort[r+1] = temp;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_unsort.size(); i++) {
        for (int r = 0; r < mas_unsort.size()-i; r++) {
            if (mas_unsort[r] >= mas_unsort[r+1]) {
                int temp = mas_unsort[r];
                mas_unsort[r] = mas_unsort[r+1];
                mas_unsort[r+1] = temp;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_sort90.size(); i++) {
        for (int r = 0; r < mas_sort90.size()-i; r++) {
            if (mas_sort90[r] >= mas_sort90[r+1]) {
                int temp = mas_sort90[r];
                mas_sort90[r] = mas_sort90[r+1];
                mas_sort90[r+1] = temp;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

void sort_p_s(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    ticksStart = clock();
    for (int i = 1; i < mas_rand.size(); i++) {
        for (int r = 0; r < mas_rand.size()-i; r++) {
            if (mas_rand[r] >= mas_rand[r+1]) {
                int temp = mas_rand[r];
                mas_rand[r] = mas_rand[r+1];
                mas_rand[r+1] = temp;
            }
            if (mas_rand == mas_sort) {
                break;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << "Итог пузырьковой сортировки с выходом после окончания обменов:" << "\n";
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_unsort.size(); i++) {
        for (int r = 0; r < mas_unsort.size()-i; r++) {
            if (mas_unsort[r] >= mas_unsort[r+1]) {
                int temp = mas_unsort[r];
                mas_unsort[r] = mas_unsort[r+1];
                mas_unsort[r+1] = temp;
                if (mas_unsort == mas_sort) {
                    break;
                }
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_sort90.size(); i++) {
        for (int r = 0; r < mas_sort90.size()-i; r++) {
            if (mas_sort90[r] >= mas_sort90[r+1]) {
                int temp = mas_sort90[r];
                mas_sort90[r] = mas_sort90[r+1];
                mas_sort90[r+1] = temp;
                if (mas_sort90 == mas_sort) {
                    break;
                }
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

void sort_v(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    long long x, y;
    ticksStart = clock();
    for (int i = mas_rand.size()-1; i > 0; i--) {
        x = i;
        for (int j = i; j >= 0; j--) {
            if(mas_rand[j] > mas_rand[x]) {
                x = j;
            }
        }
        y = mas_rand[i];
        mas_rand[i] = mas_rand[x];
        mas_rand[x] = y;

    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << "Итог сортировки выбором:" << "\n";
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = mas_sort.size()-1; i > 0; i--) {
        x = i;
        for (int j = i; j >= 0; j--) {
            if(mas_sort[j] > mas_sort[x]) {
                x = j;
            }
        }
        y = mas_sort[i];
        mas_sort[i] = mas_sort[x];
        mas_sort[x] = y;

    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = mas_unsort.size()-1; i > 0; i--) {
        x = i;
        for (int j = i; j >= 0; j--) {
            if(mas_unsort[j] > mas_unsort[x]) {
                x = j;
            }
        }
        y = mas_unsort[i];
        mas_unsort[i] = mas_unsort[x];
        mas_unsort[x] = y;

    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = mas_sort90.size()-1; i > 0; i--) {
        x = i;
        for (int j = i; j >= 0; j--) {
            if(mas_sort90[j] > mas_sort90[x]) {
                x = j;
            }
        }
        y = mas_sort90[i];
        mas_sort90[i] = mas_sort90[x];
        mas_sort90[x] = y;

    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

void sort_vs(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    long long a, y;
    ticksStart = clock();
    for (int i = 1; i < mas_rand.size(); i++) {
        if (mas_rand[i] < mas_rand[i-1]) {
            a = i;
            while(mas_rand[a] < mas_rand[a-1] && a > 0) {
                y = mas_rand[a];
                mas_rand[a] = mas_rand[a-1];
                mas_rand[a-1] = y;
                a--;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << "Итог сортировки вставками:" << "\n";
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_sort.size(); i++) {
        if (mas_sort[i] < mas_sort[i-1]) {
            a = i;
            while(mas_sort[a] < mas_sort[a-1] && a > 0) {
                y = mas_sort[a];
                mas_sort[a] = mas_sort[a-1];
                mas_sort[a-1] = y;
                a--;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_unsort.size(); i++) {
        if (mas_unsort[i] < mas_unsort[i-1]) {
            a = i;
            while(mas_unsort[a] < mas_unsort[a-1] && a > 0) {
                y = mas_unsort[a];
                mas_unsort[a] = mas_unsort[a-1];
                mas_unsort[a-1] = y;
                a--;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    for (int i = 1; i < mas_sort90.size(); i++) {
        if (mas_sort90[i] < mas_sort90[i-1]) {
            a = i;
            while(mas_sort90[a] < mas_sort90[a-1] && a > 0) {
                y = mas_sort90[a];
                mas_sort90[a] = mas_sort90[a-1];
                mas_sort90[a-1] = y;
                a--;
            }
        }
    }
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

void merge_f(const vector <long long> & inp, vector<long long>& out, int l, int l_max, int r, int r_max) {
    int x = 0;
    while (l < l_max && r < r_max) {
        out[x++] = inp[l] < inp[r] ? inp[l++] : inp[r++];
    }
    while (l < l_max) {
        out[x++] = inp[l++];
    }
    while (r < r_max) {
        out[x++] = inp[r++];
    }
}

void merge_sort(vector <long long> &inp, int l, int r) {
    if (l >= r - 1) {
        return;
    }
    int m = (l+r)/2;
    vector <long long> out(r - l);
    merge_sort(inp,l,m);
    merge_sort(inp,m,r);
    merge_f(inp,out,l,m,m,r);
    for (int i = l,j = 0; i < r; i++,j++) {
        inp[i] = out[j];
    }
}
void p_sort(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    sort(mas_rand.begin(), mas_rand.end());
    cout << "Итог встроенной сортировки sort:" << "\n";
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    sort(mas_sort.begin(), mas_sort.end());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    sort(mas_unsort.begin(), mas_unsort.end());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    sort(mas_sort90.begin(), mas_sort90.end());
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

void p_stable_sort(vector <long long> &mas_rand, vector <long long> &mas_sort, vector <long long> &mas_unsort, vector <long long> &mas_sort90) {
    stable_sort(mas_rand.begin(), mas_rand.end());
    cout << "Итог встроенной сортировки stable_sort:" << "\n";
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_rand.size(); i++) {
        cout << mas_rand[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    stable_sort(mas_sort.begin(), mas_sort.end());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort.size(); i++) {
        cout << mas_sort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    stable_sort(mas_unsort.begin(), mas_unsort.end());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_unsort.size(); i++) {
        cout << mas_unsort[i] << " ";
    }
    cout << "\n";
    ticksStart = clock();
    stable_sort(mas_sort90.begin(), mas_sort90.end());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i = 0; i < mas_sort90.size(); i++) {
        cout << mas_sort90[i] << " ";
    }
    cout << "\n";
    cout << "\n";
}

vector <long long> quicksort(const vector<long long> &array) {
    if (array.empty()) {
        return array;
    }
    mt19937 gen(0);
    int random_index = gen() % array.size();
    int pivot = array[random_index];
    vector<long long> lower;
    vector<long long> upper;
    vector<long long> equal;
    for (int i : array) {
        if (i < pivot) {
            lower.push_back(i);
        } else if (i > pivot) {
            upper.push_back(i);
        } else {
            equal.push_back(i);
        }
    }
    vector<long long> lower_sort = quicksort(lower);
    vector<long long> upper_sort = quicksort(upper);
    for (int i : equal) {
        lower_sort.push_back(i);
    }
    for (int i : upper_sort) {
        lower_sort.push_back(i);
    }
    return lower_sort;
}

int main() {
    setlocale(LC_ALL, "Russian");
    long long n;
    cout << "Введите размер массива:" << "\n";
    cin >> n;
    vector <long long> mas_rand(n);
    vector <long long> mas_sort(n);
    vector <long long> mas_unsort(n);
    vector <long long> mas_sort90(n);
    cout << "Введите рандомный массив чисел" << "\n";
    for (int i = 0; i < n; i++) {
        cin >> mas_rand[i];
        mas_sort[i] = mas_rand[i];
        mas_unsort[i] = mas_rand[i];
        mas_sort90[i] = mas_rand[i];
    }
    cout << "\n";
    sort(mas_sort.begin(), mas_sort.end());
    sort(mas_unsort.begin(), mas_unsort.end());
    reverse(mas_unsort.begin(), mas_unsort.end());
    sort(mas_sort90.begin(), mas_sort90.end());
    vector <long long> c;
    for (int i = 0.9*n; i < mas_sort90.size(); i++) {
        c.push_back(mas_sort90[i]);
    }
    reverse (c.begin(), c.end());
    for (int i = 0.9*n; i < mas_sort90.size(); i++) {
        mas_sort90[i] = c[i - 0.9*n];
    }
    sort(mas_sort90.begin(), mas_sort90.end()-int(0.1*n));
    sort_p(mas_rand, mas_sort, mas_unsort, mas_sort90);
    sort_p_s(mas_rand, mas_sort, mas_unsort, mas_sort90);
    sort_v(mas_rand, mas_sort, mas_unsort, mas_sort90);
    sort_vs(mas_rand, mas_sort, mas_unsort, mas_sort90);
    vector <int> out(mas_rand.size());
    ticksStart = clock();
    merge_sort(mas_rand, 0, mas_rand.size());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    cout << "Итог сортировки слиянием:" << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (auto num : mas_rand) {
        cout << num++ << " ";
    }
    cout << "\n";
    ticksStart = clock();
    merge_sort(mas_sort, 0, mas_sort.size());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (auto num : mas_sort) {
        cout << num++ << " ";
    }
    cout << "\n";
    ticksStart = clock();
    merge_sort(mas_unsort, 0, mas_unsort.size());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (auto num : mas_unsort) {
        cout << num++ << " ";
    }
    cout << "\n";
    ticksStart = clock();
    merge_sort(mas_sort90, 0, mas_sort90.size());
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (auto num : mas_sort90) {
        cout << num++ << " ";
    }
    cout << "\n";
    cout << "\n";
    ticksStart = clock();
    p_sort(mas_rand, mas_sort, mas_unsort, mas_sort90);
    ticksStart = clock();
    p_stable_sort(mas_rand, mas_sort, mas_unsort, mas_sort90);
    ticksStart = clock();
    vector <long long> sorted_vector = quicksort(mas_rand);
    cout << "Итог быстрой сортировки:" << "\n";
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i : sorted_vector) {
        cout << i << " ";
    }
    cout << "\n";
    ticksStart = clock();
    sorted_vector = quicksort(mas_sort);
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i : sorted_vector) {
        cout << i << " ";
    }
    cout << "\n";
    ticksStart = clock();
    sorted_vector = quicksort(mas_unsort);
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i : sorted_vector) {
        cout << i << " ";
    }
    cout << "\n";
    ticksStart = clock();
    sorted_vector = quicksort(mas_sort90);
    cout << "clock(): " << clock() << "; ticksStart: " << ticksStart << "; CLOCKS_PER_SEC: " << (double)CLOCKS_PER_SEC << "\n";
    timeUsed = double(clock() - ticksStart) / (double)CLOCKS_PER_SEC;
    cout << timeUsed << "\n";
    for (int i : sorted_vector) {
        cout << i << " ";
    }
    cout << "\n";
    cout << "\n";
}
