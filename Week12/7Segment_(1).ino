int num_array[10][7] =
{
    {1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}
};

const int segment_a = 2;
const int segment_b = 3;
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;

void setup()
{
    pinMode(segment_a, OUTPUT);
    pinMode(segment_b, OUTPUT);
    pinMode(segment_c, OUTPUT);
    pinMode(segment_d, OUTPUT);
    pinMode(segment_e, OUTPUT);
    pinMode(segment_f, OUTPUT);
    pinMode(segment_g, OUTPUT);
}

void loop()
{
    for (int digit = 0; digit < 10; digit++)
    {
        displayDigit(digit);
        delay(1000);
    }
}

void displayDigit(int digit)
{
    digitalWrite(segment_a, num_array[digit][0]);
    digitalWrite(segment_b, num_array[digit][1]);
    digitalWrite(segment_c, num_array[digit][2]);
    digitalWrite(segment_d, num_array[digit][3]);
    digitalWrite(segment_e, num_array[digit][4]);
    digitalWrite(segment_f, num_array[digit][5]);
    digitalWrite(segment_g, num_array[digit][6]);
}
