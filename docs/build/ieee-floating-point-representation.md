---
title: Formato a virgola mobile IEEE
ms.date: 11/04/2016
helpviewer_keywords:
- float keyword
- real*8 value
- floating-point numbers, IEEE representation
- double data type, floating-point representation
- IEEE floating point representation
- real*10 value
- long double
- real*4 value
ms.assetid: 537833e8-fe05-49fc-8169-55fd0314b195
ms.openlocfilehash: 69686e7e1c8994b799607eebf7e50387ed688272
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188834"
---
# <a name="ieee-floating-point-representation"></a>Formato a virgola mobile IEEE

Microsoft Visual C++ è coerente con gli standard di numerici IEEE. Lo standard IEEE 754 descrive formati a virgola mobile, un modo per rappresentare numeri reali in hardware. Sono presenti almeno cinque formati interni per i numeri a virgola mobile rappresentabili nell'hardware di destinazione per il compilatore MSVC, ma il compilatore Usa solo due di essi. Il *precisione singola* (4 byte) e *precisione doppia* formati (8 byte) vengono usati in Visual C++. Precisione singola viene dichiarata utilizzando la parola chiave **float**. Precisione doppia è dichiarata mediante la parola chiave **doppie**. Specifica inoltre lo standard IEEE *mezza precisione* (a 2 byte) e *quattro volte precisione* formati (16 byte), nonché un *esteso a precisione doppia* (10 byte) formato, che alcuni compilatori C e C++ implementano come le **long double** tipo di dati. Nel compilatore MSVC, il **long double** tipo di dati viene considerato come un tipo distinto, ma il tipo di archiviazione è mappato al **doppie**. C'è, tuttavia, intrinseco e supporto del linguaggio assembly per i calcoli usano altri formati, tra cui il formato esteso a precisione doppia (10 byte), in cui è supportata dall'hardware.

I valori vengono archiviati come indicato di seguito:

|Value|Archiviato come|
|-----------|---------------|
|precisione singola|il segno, 8 bit esponente, significando a 23 bit|
|precisione doppia|il segno, esponente a 11 bit, significando a 52 bit|
|esteso a precisione doppia|il segno, 15 bit esponente, significando a 64 bit|

Nei formati con precisione singola e precisione doppia, viene utilizzato un 1 iniziale nella parte frazionaria, denominata il *significando* (e talvolta come il *mantissa*), vale a dire non archiviati in memoria, in modo che i significandi siano effettivamente 24 o 53 bit, anche se vengono archiviati solo 23 o 52 bit. Il formato esteso a precisione doppia non archivia effettivamente tale bit.

Gli esponenti vengono influenzati dalla metà del loro valore possibile. Ciò significa che si sottrae questo distorsione dall'esponente archiviato per ottenere l'esponente effettivo. Se l'esponente archiviato è minore di deviazione, è effettivamente un esponente negativo.

Gli esponenti sono influenzati come segue:

|Esponente|Valore di distorsione|
|--------------|---------------|
|8 bit (precisione singola)|127|
|11-bit (precisione doppia)|1023|
|15 bit (esteso a precisione doppia)|16383|

Gli esponenti questi non sono potenze di 10; sono potenze di due. Vale a dire, gli esponenti a 8 bit archiviati possono variare da -127 a 127, archiviato come 0 a 254. Il valore 2<sup>127</sup> equivale approssimativamente a 10<sup>38</sup>, ovvero il limite effettivo di precisione singola.

Il significando viene archiviato come frazione binaria del modulo... 1, xxx. Questa frazione ha un valore maggiore o uguale a 1 e minore di 2. Si noti che i numeri reali sono sempre archiviati nel *normalizzato form*; vale a dire il significando viene spostato a sinistra i bit più significativo del significando sia sempre 1. Poiché questo bit è sempre 1, si presuppone (non archiviato) nei formati con precisione singola e precisione doppia. Il punto (non decimale) binario è considerato come immediatamente a destra di 1 iniziale.

Il formato, quindi, per le diverse dimensioni è come segue:

|Formato|Byte 1|Byte 2|Byte 3|4 byte|...|n byte|
|------------|------------|------------|------------|------------|---------|------------|
|precisione singola| `SXXXXXXX`|`XMMMMMMM`|`MMMMMMMM`|`MMMMMMMM`|||
|precisione doppia|`SXXXXXXX`|`XXXXMMMM`|`MMMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|
|esteso a precisione doppia|`SXXXXXXX`|`XXXXXXXX`|`1MMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|

`S` rappresenta i bit di segno, il `X`del sono i bit esponente distorto e il `M`del sono i bit significando. Si noti che il bit più a sinistra si presuppone che in formati con precisione singola e precisione doppia, ma è presente come "1" in byte 3 del formato esteso a precisione doppia.

Per spostare correttamente il punto binario, prima di tutto distorsione l'esponente e quindi spostare il punto binario a destra o sinistra del numero di bit appropriato.

## <a name="special-values"></a>Valori speciali

I formati a virgola mobile e includono alcuni valori sono trattati in modo speciale.

### <a name="zero"></a>Zero

Zero non può essere normalizzato, che rende non rappresentabile in forma normalizzata del valore a precisione singola o doppia precisione. Uno schema di bit speciali di tutti zero rappresenta 0. È anche possibile per rappresentare - impostato un bit 0 come zero con segno, ma - 0 e 0 sempre considerati uguali.

### <a name="infinities"></a>Valori infiniti

Il + ∞ e −∞ valori sono rappresentati da un esponente di tutti i costruttori e un significando del tutti zero. Valori infiniti positive e negative possono essere rappresentati usando il bit di segno.

### <a name="subnormals"></a>Subnormals

È possibile rappresentare i numeri di ordine di grandezza minore rispetto al numero più piccolo normalizzato. Questi numeri sono dette *subnormal* oppure *denormalizzato* numeri. Se l'esponente è tutti zero e il significando è diverso da zero, implicito bit iniziali del significando viene considerato uguale a zero, non uno. La precisione dei numeri subnormal si arresta perché aumenta il numero di zeri iniziali nel significando.

### <a name="nan---not-a-number"></a>NaN - non è un numero

È possibile rappresentare i valori che non sono un numero reale, ad esempio 0 0, nel formato a virgola mobile IEEE. Un valore di questo tipo viene chiamato un *NaN*. Un valore NaN da un esponente di tutti i valori uno e un significando a diverso da zero. Esistono due tipi di NaN, *quiet* NaN o QNaNs, e *segnalazione* NaN o SNaNs. Quiet, NaN hanno uno iniziale nel significando e vengono propagati a livello generale tramite un'espressione. Rappresentano un valore indeterminato, ad esempio il risultato della divisione per un numero infinito o un numero infinito di moltiplicazione per zero. Segnalazione NaN hanno uno zero iniziale nel significando. Questi vengono usati per le operazioni che non sono valide, per segnalare un'eccezione a virgola mobile hardware.

## <a name="examples"></a>Esempi

Di seguito sono riportati alcuni esempi in formato a precisione singola:

- Per il valore 2, il bit di segno è pari a zero e l'esponente stored è 128 o 1000 0000 in formato binario, ovvero 127 più 1. Il significando binario archiviato è (1). punto 000 0000 0000 0000 0000 0000, che ha un leader implicita 1 e binario, in modo che il significando effettivo è uno.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |2|1 * 2<sup>1</sup>|0100 0000 0000 0000 0000 0000 0000 0000|0x40000000|

- Il valore -2. Uguale a + 2, ad eccezione del fatto che sia stato impostato il bit di segno. Questo vale per il corrispondente negativo di tutti i numeri a virgola mobile formato IEEE.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |-2|-1 * 2<sup>1</sup>|1100 0000 0000 0000 0000 0000 0000 0000|0xC0000000|

- Il valore 4. Stesso significando, esponente aumenta di uno (valore distorto è 129 o 100 0000 1 nel file binario.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |4|1 * 2<sup>2</sup>|0100 0000 1000 0000 0000 0000 0000 0000|0x40800000|

- Il valore 6. Esponente stesso, significando è maggiore della metà, ovvero che (1). 100 0000 ... 0000 0000, poiché si tratta di una frazione binaria, ovvero 1 1/2 perché i valori delle cifre frazionarie sono 1 o 2, 1 e 4, 1 o 8 e così via.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |6|1.5 * 2<sup>2</sup>|0100 0000 1100 0000 0000 0000 0000 0000|0x40C00000|

- Il valore 1. Significando stesso come altra potenze di due, l'esponente distorta è una minore di due 127 o 011 1111 1 nel file binario.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |1|1 * 2<sup>0</sup>|0011 1111 1000 0000 0000 0000 0000 0000|0x3F800000|

- Il valore 0,75. L'esponente distorta è 126 011 1111 0 in formato binario e il significando è (1). 100 0000 ... 0000 0000, ovvero 1 1/2.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |0.75|1.5 * 2<sup>-1</sup>|0011 1111 0100 0000 0000 0000 0000 0000|0x3F400000|

- Il valore 2.5. Esattamente come due meno che il bit che rappresenta 1 e 4 viene impostato nel significando.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |2.5|1.25 * 2<sup>1</sup>|0100 0000 0010 0000 0000 0000 0000 0000|0x40200000|

- 1/10 è una frazione ripetuta in formato binario. Il significando è appena inferiore a 1,6 e l'esponente distorta afferma che deve essere diviso per 16 1.6 (è 011 1101 1 nel file binario, che corrisponde a 123 in formato decimale). L'esponente true è 123 e 127 = - 4, il che significa che il fattore per cui moltiplicare è 2<sup>-4</sup> = 1/16. Si noti che il significando archiviato viene arrotondato per eccesso nell'ultimo bit, ovvero un tentativo per rappresentare il numero non rappresentabile nel modo più accurato possibile. (Il motivo tale 1/10 e 1/100 sono non esattamente rappresentabili nel file binario è simile al motivo che è non esattamente rappresentabili in formato decimale 1 o 3.)

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |0.1|1.6 * 2<sup>-4</sup>|0011 1101 1100 1100 1100 1100 1100 1101|0x3DCCCCCD|

- Zero è un caso speciale che utilizza la formula per il valore minimo possibile rappresentabile positiva, ovvero tutti zero.

   |Value|Formula|Rappresentazione binaria|Esadecimale|
   |-|-|-|-|
   |0|1 * 2<sup>-128</sup>|0000 0000 0000 0000 0000 0000 0000 0000|0x00000000|

## <a name="see-also"></a>Vedere anche

[Causa della possibile perdita di precisione dei numeri a virgola mobile](why-floating-point-numbers-may-lose-precision.md)