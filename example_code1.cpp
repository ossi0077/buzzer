//���� �Ҹ� �׽�Ʈ �ڵ�
#define buzzer 7
int numTones = 8;

//������� (4����,4����,4����,4����,4����,4����,4����,5����)
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
