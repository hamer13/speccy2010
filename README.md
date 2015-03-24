# speccy2010
Automatically exported from code.google.com/p/speccy2010

**Speccy2010** - это платформа на fpga, представляющая широкие возможности для реализации различных игровых компьютеров (в первую очередь ZX Spectrum).

Основные характеристики:
  * FPGA: EP2C8Q208C8N;
  * uC: STR755FV2T6 (или STR750FV2T6);
  * память: SDRAM 16 Mb K4S281632J-UC75 (или 32 Mb K4S561632J-UC75);
  * часики: DS1338Z-33+;
  * слот для SD флеш-карты;
  * 2 PS/2 порта (клавиатура, мышка);
  * 2 порта для джойстиков (обычные или от сеги);
  * USB - virtual com для отладки и программирования микроконтроллера;
  * видео 3 R-2R матрицы, по 8 бит (выведены на разъемы VGA, Composite, S-Video);
  * аудио TDA1543 или 2 R-2R матрицы, по 8 бит;
  * питание 5В, 1А.

Прошивка для ARM загружается по USB virtual com. Прошивка для FPGA загружается прямо с SD карточки. Это значит, что для программирования устройства программаторы не нужны вообще.

Состояние софта на сегодня:
  * полностью все функции Speccy2007 v1.06 (128k, эмулятор betadiskа, AY, загрузка tap/tzx/sna, выгрузка sna).

кроме этого
  * правильные времянки фирменного ZX Spectrum 48 и пентагона (все мультикололры и бордереффекты идут четко)
  * выход на TV - RGB, s-video, composit
  * выход на монитор - VGA в режиме скандаблера (с частотой 50, 60 или 75 Гц)
  * более правильная и быстрая работа со sna (теперь ни один байт дампа не портиться)
  * турбо (7, 14 и 28 MHz)
  * расширение памяти до 1МБ (стандарт пентагона)
  * безвейтовая клавиатура
  * эмуляция нескольких типов джойстиков
  * эмуляция kempston mouse
  * эмуляция gluk rtc (только чтение)

Обсуждение тут - http://zx.pk.ru/showthread.php?t=12425

Так выглядит собранная плата второй ревизии.
![https://github.com/hamer13/speccy2010/blob/master/documentation/speccy2010_r2_top.jpg](https://github.com/hamer13/speccy2010/blob/master/documentation/speccy2010_r2_top.jpg)
![https://github.com/hamer13/speccy2010/blob/master/documentation/speccy2010_r2_bottom.jpg](https://github.com/hamer13/speccy2010/blob/master/documentation/speccy2010_r2_bottom.jpg)
