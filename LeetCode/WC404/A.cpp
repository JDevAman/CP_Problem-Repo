class Solution {
public:
    int atOdd(int value) {
        int i = 1;
        while (i * i <= value) {
            i++;
        }
        return i - 1;
    }

    int atEven(int value) {
        int i = 1;
        while ((i * i) + i <= value) {
            i++;
        }
        return i - 1;
    }

    int maxHeightOfTriangle(int red, int blue) {
        int redAtOdd = atOdd(red);
        int blueAtOdd = atOdd(blue);
        int redAtEven = atEven(red);
        int blueAtEven = atEven(blue);

        // Why Even + 1? ->
        int heightWithRedOdd = min(redAtOdd, blueAtEven) * 2;
        int heightWithBlueOdd = min(blueAtOdd, redAtEven) * 2;

        // If it ends with odd, we need to increase cnt as we assume it to be [Odd,Even] pair
        if (redAtOdd > blueAtEven) {
            heightWithRedOdd++;
        }
        if (blueAtOdd > redAtEven) {
            heightWithBlueOdd++;
        }

        return max(heightWithRedOdd, heightWithBlueOdd);
    }
};
