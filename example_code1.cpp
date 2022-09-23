//À½°è ¼Ò¸® Å×½ºÆ® ÄÚµå
#define buzzer 7
int numTones = 8;

//¼ø¼­´ë·Î (4¿Áµµ,4¿Á·¹,4¿Á¹Ì,4¿ÁÆÄ,4¿Á¼Ö,4¿Á¶ó,4¿Á½Ã,5¿Áµµ)
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
