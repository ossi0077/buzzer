//������ ��ε� �ڵ�
#define buzzer 7
int numTones = 8;
double g_tones[] = { 195.9977, 220, 246.9417, 261.6256, 293.6648, 329.6276, 349.2282, 391.9954 };
//��0,��1,��2,��3,��4,��5,��6,��7
int cnt = 0;

void setup()
{

}

void loop()
{
    if (cnt == 0)
    {
        tone(buzzer, g_tones[0]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[2]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[4]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[4]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[5]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[5]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[6]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[5]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[1]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[4]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[4]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[2]);
        delay(250 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[1]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[2]);
        delay(125 * 2);
        noTone(buzzer);
        tone(buzzer, g_tones[3]);
        delay(250 * 4);
        noTone(buzzer);
        cnt++;
    }else
    {

    }
}
