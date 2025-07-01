
  Devre Şemasını "main" içerisinden "DevreŞeması.jpg" dosyaında bulabilirisniz.

Bu devrede temel olarak bir **PIR hareket sensörü**, bir **Deneyap Kamera**, bir **9V pil**, bir **DC-DC voltaj regülatörü** ve bir **Deneyap Kart 1A** kullanılmıştır.

**  Güç Dağılımı

- 9V Pil  : Voltaj regülatörüne bağlanarak daha güvenli bir çıkış voltajı (genellikle 5V) elde edilir.
- Regülatör OUT+ (kırmızı) : Breadboard üzerinden **Deneyap Kart’ın VIN** pinine gider.
- Regülatör OUT- (siyah) : Breadboard üzerinden **Deneyap Kart’ın GND** pinine gider.

**  PIR Sensör Bağlantısı

- VCC (kırmızı kablo) : Breadboard üzerinden regülatör çıkışına (5V)
- GND (siyah kablo) : GND hattına
- OUT (sarı kablo) : Deneyap Kart’taki **GPIO4 (D4)** pinine

**  Kamera Bağlantısı

- VCC : 5V hattına  
- GND : GND hattına  
- Veri kabloları : Deneyap Kart üzerindeki UART/I2C/SPI pinlerinden birine (kullandığınız kameraya göre değişir)

**  Deneyap Kart Bağlantıları

- VIN : Regülatör OUT+  
- GND : Regülatör OUT-  
- GPIO4 (D4) : PIR sensör OUT çıkışı  
- UART/I2C/SPI pinleri : Kamera veri bağlantısı



 **  Not: Kamera modülünüzün türüne göre bağlantı protokolü değişebilir. En yaygınları UART (TX/RX), I2C (SCL/SDA), SPI’dir. Teknik dökümanlara göre bağlantı yapılmalıdır.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

< Bu devre sayesinde PIR sensörü hareket algıladığında, Deneyap Kart sinyal alır ve yazılıma göre kamera tetiklenerek fotoğraf çekebilir veya başka işlemler yapabilir. >
