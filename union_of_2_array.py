class Solution:
    def findUnion(self, a, b):
        i, j = 0, 0
        n, m = len(a), len(b)
        added = set()
        res = []
        while i < n and j < m:
            if (a[i] < b[j]):
                if (a[i] not in added):
                    res.append(a[i])
                    added.add(a[i])
                i += 1
            else:
                if (b[j] not in added):
                    res.append(b[j])
                    added.add(b[j])
                j += 1
        while i < n:
            if (a[i] not in added):
                res.append(a[i])
            i += 1
        while j < m:
            if (b[j] not in added):
                res.append(b[j])
            j += 1
        return res
