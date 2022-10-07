//음계 소리 테스트 코드
#define buzzer 11
int numTones = 8;

//순서대로 (4옥도,4옥레,4옥미,4옥파,4옥솔,4옥라,4옥시,5옥도)
double tones[] = { 261.6256, 293.6648, 329.6276, 349.2282, 391.9954, 440, 493.8833, 523.2511 };

int cnt = 0;

void setup()
{

}

void loop()
{
    if (cnt == 0)
    {
        for (int i = 0; i < numTones; i++)
        {
            tone(buzzer, tones[i]);
            delay(500);
        }
        noTone(buzzer);
        delay(500);
        cnt++;
    }
    else
    {

    }
}
