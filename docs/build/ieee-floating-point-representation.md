---
title: Formato a virgola mobile IEEE
ms.date: 05/06/2019
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
ms.openlocfilehash: bb8523256c05479b303dec66ca79caa28e7cda03
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169812"
---
# <a name="ieee-floating-point-representation"></a>Formato a virgola mobile IEEE

Microsoft C++ (MSVC) è coerente con gli standard numerici IEEE. Lo standard IEEE-754 descrive i formati a virgola mobile, un modo per rappresentare i numeri reali nell'hardware. Esistono almeno cinque formati interni per i numeri a virgola mobile che possono essere rappresentati nell'hardware di destinazione del compilatore MSVC, ma il compilatore ne utilizza solo due. I formati con *precisione singola* (4 byte) e *precisione doppia* (8 byte) vengono usati in MSVC. La precisione singola viene dichiarata con la parola chiave **float**. La precisione doppia viene dichiarata con la parola chiave **Double**. Lo standard IEEE specifica anche i formati a *metà precisione* (a 2 byte) e a *quadrupla* (a 16 byte), nonché un formato a *precisione doppia (a* 10 byte), che alcuni C e C++ compilatori implementano come tipo di dati **long double** . Nel compilatore MSVC, il tipo di dati **long double** viene considerato come un tipo distinto, ma il tipo di archiviazione viene mappato a **Double**. Esistono, tuttavia, il supporto del linguaggio intrinseco e dell'assembly per i calcoli che usano gli altri formati, incluso il formato a precisione doppia (a 10 byte), dove supportato dall'hardware.

I valori vengono archiviati come indicato di seguito:

|valore|Archiviato come|
|-----------|---------------|
|precisione singola|bit di segno, esponente a 8 bit, separatore a 23 bit|
|precisione doppia|bit di segno, esponente a 11 bit, separatore a 52 bit|
|precisione doppia-estesa|bit di segno, esponente a 15 bit, separatore a 64 bit|

Nei formati con precisione singola e precisione doppia, esiste un primo presupposto nella parte frazionaria, denominato *separatore* (e talvolta definito *mantissa*), che non viene archiviato in memoria, quindi i significandi sono in realtà 24 o 53 bit, anche se vengono archiviati solo 23 o 52 bit. Il formato con precisione doppia viene archiviato in questo bit.

Gli esponenti sono distorti dalla metà del valore possibile. Ciò significa che si sottrae questa distorsione dall'esponente archiviato per ottenere l'esponente effettivo. Se l'esponente archiviato è minore della distorsione, si tratta in realtà di un esponente negativo.

Gli esponenti sono distorti come segue:

|Exponent|Polarizzato da|
|--------------|---------------|
|a 8 bit (precisione singola)|127|
|a 11 bit (precisione doppia)|1023|
|15 bit (doppia precisione estesa)|16383|

Questi esponenti non sono potenze di dieci. sono potenze di due. Ovvero, gli esponenti archiviati a 8 bit possono variare da-127 a 127, archiviati come 0 a 254. Il valore 2<sup>127</sup> è approssimativamente equivalente a 10<sup>38</sup>, che corrisponde al limite effettivo di precisione singola.

Separatore viene archiviato come frazione binaria nel formato 1.XXX.... Questa frazione ha un valore maggiore o uguale a 1 e minore di 2. Si noti che i numeri reali vengono sempre archiviati in *forma normalizzata*; ovvero, la separatore viene spostata a sinistra in modo tale che il bit più significativo di separatore sia sempre 1. Poiché questo bit è sempre 1, viene presupposto (non archiviato) nei formati con precisione singola e precisione doppia. Si presuppone che il punto binario (non decimale) si trovi solo a destra dell'1 di primo livello.

Il formato, quindi, per le varie dimensioni è il seguente:

|Format|byte 1|byte 2|byte 3|byte 4|...|byte n|
|------------|------------|------------|------------|------------|---------|------------|
|precisione singola| `SXXXXXXX`|`XMMMMMMM`|`MMMMMMMM`|`MMMMMMMM`|||
|precisione doppia|`SXXXXXXX`|`XXXXMMMM`|`MMMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|
|precisione doppia-estesa|`SXXXXXXX`|`XXXXXXXX`|`1MMMMMMM`|`MMMMMMMM`|...|`MMMMMMMM`|

`S` rappresenta il bit di segno, i `X`sono i bit dell'esponente distorta e i `M`sono i bit separatore. Si noti che il bit più a sinistra si presuppone nei formati a precisione singola e precisione doppia, ma è presente come "1" in byte 3 del formato a precisione doppia.

Per spostare correttamente il punto binario, è necessario innanzitutto depolarizzare l'esponente, quindi spostare il punto binario a destra o a sinistra del numero di bit appropriato.

## <a name="special-values"></a>Valori speciali

I formati a virgola mobile includono alcuni valori trattati in modo specifico.

### <a name="zero"></a>Zero

Non è possibile normalizzare zero, rendendolo non rappresentabile nel formato normalizzato di un valore a precisione singola o a precisione doppia. Uno schema di bit speciale di tutti gli zeri rappresenta 0. È anche possibile rappresentare-0 come zero con il bit del segno impostato, ma-0 e 0 si confrontano sempre come uguali.

### <a name="infinities"></a>Infiniti

I valori + ∞ e − ∞ sono rappresentati da un esponente di tutti e da un separatore di tutti gli zeri. Sia gli infiniti positivi che quelli negativi possono essere rappresentati usando il bit di segno.

### <a name="subnormals"></a>Subnormali

È possibile rappresentare numeri di grandezza inferiore rispetto al numero normalizzato più piccolo. Questi numeri sono noti come numeri *subnormali* o *denormali* . Se l'esponente è costituito da tutti zeri e separatore è diverso da zero, il bit principale implicito di separatore viene considerato zero, non uno. La precisione dei numeri subnormali diventa inattiva con l'aumentare del numero di zeri iniziali nella separatore.

### <a name="nan---not-a-number"></a>NaN-non è un numero

È possibile rappresentare valori non un numero reale, ad esempio 0/0, nel formato a virgola mobile IEEE. Un valore di questo tipo è denominato *NaN*. NaN è rappresentato da un esponente di tutti i valori e da un separatore diverso da zero. Esistono due tipi di NaNs, *quiet* Nans o QNaNs, *signaling* Nans o SNaNs. I NaNs tranquilli hanno un primo separatore e vengono in genere propagati tramite un'espressione. Rappresentano un valore indeterminato, ad esempio il risultato della divisione per infinito o la moltiplicazione di un infinito per zero. i NaNs di segnalazione hanno uno zero principale in separatore. Questi vengono usati per le operazioni non valide, per segnalare un'eccezione hardware a virgola mobile.

## <a name="examples"></a>Esempi

Di seguito sono riportati alcuni esempi di formato a precisione singola:

- Per il valore 2, il bit di segno è zero e l'esponente archiviato è 128 o 1000 0000 in formato binario, ovvero 127 più 1. La separatore binaria archiviata è (1.) 000 0000 0000 0000 0000 0000, che include un punto binario e 1 di primo livello implicito, quindi il separatore effettivo è uno.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |2|1 * 2<sup>1</sup>|0100 0000 0000 0000 0000 0000 0000 0000|0x40000000|

- Valore-2. Uguale a + 2 ad eccezione del fatto che il bit di segno è impostato. Questo vale per il negativo di tutti i numeri a virgola mobile del formato IEEE.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |-2|-1 * 2<sup>1</sup>|1100 0000 0000 0000 0000 0000 0000 0000|0xC0000000|

- Valore 4. Lo stesso separatore, l'esponente aumenta di uno (il valore distorto è 129 o 100 0000 1 in formato binario.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |4|1 * 2<sup>2</sup>|0100 0000 1000 0000 0000 0000 0000 0000|0x40800000|

- Valore 6. Lo stesso esponente, separatore è maggiore di metà, ovvero (1.) 100 0000... 0000 0000, che, poiché si tratta di una frazione binaria, è 1 1/2 perché i valori delle cifre frazionarie sono 1/2, 1/4, 1/8 e così via.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |6|1,5 * 2<sup>2</sup>|0100 0000 1100 0000 0000 0000 0000 0000|0x40C00000|

- Il valore 1. Lo stesso separatore di altre potenze di due, l'esponente distorta è uno minore di due a 127 o 011 1111 1 in formato binario.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |1|1 * 2<sup>0</sup>|0011 1111 1000 0000 0000 0000 0000 0000|0x3F800000|

- Valore 0,75. L'esponente distorta è 126, 011 1111 0 in formato binario e separatore è (1.) 100 0000... 0000 0000, che è 1 1/2.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |0.75|1,5 * 2<sup>-1</sup>|0011 1111 0100 0000 0000 0000 0000 0000|0x3F400000|

- Valore 2,5. Esattamente uguale a due, tranne per il fatto che il bit che rappresenta 1/4 è impostato in separatore.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |2.5|1,25 * 2<sup>1</sup>|0100 0000 0010 0000 0000 0000 0000 0000|0x40200000|

- 1/10 è una frazione ripetuta in formato binario. Il valore di separatore è solo timido di 1,6 e l'esponente distorta indica che 1,6 deve essere diviso per 16 (è 011 1101 1 in formato binario, ovvero 123 in decimale). Il vero esponente è 123-127 =-4, il che significa che il fattore in base al quale moltiplicare è 2<sup>-4</sup> = 1/16. Si noti che il separatore archiviato viene arrotondato per eccesso nell'ultimo bit, ovvero un tentativo di rappresentare il numero non rappresentabile nel modo più accurato possibile. Il motivo per cui 1/10 e 1/100 non sono esattamente rappresentabili nel file binario è simile al motivo per cui 1/3 non è esattamente rappresentabile in decimale.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |0,1|1,6 * 2<sup>-4</sup>|0011 1101 1100 1100 1100 1100 1100 1101|0x3DCCCCCD|

- Zero è un caso speciale che usa la formula per il valore positivo minimo rappresentabile, che è costituito da tutti zeri.

   |valore|Formula|Rappresentazione binaria|Valore esadecimale|
   |-|-|-|-|
   |0|1 * 2<sup>-128</sup>|0000 0000 0000 0000 0000 0000 0000 0000|0x00000000|

## <a name="see-also"></a>Vedere anche

[Causa della possibile perdita di precisione dei numeri a virgola mobile](why-floating-point-numbers-may-lose-precision.md)
