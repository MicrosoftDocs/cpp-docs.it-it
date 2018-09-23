---
title: Tipo float | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- type float
- exponent length
- float keyword [C]
- mantissas, length
- floating-point numbers, float type
- ranges, floating-point types
- floating-point numbers, variables
- lengths, mantissa
- double data type, type float
- IEEE floating-point representation
- lengths, exponent
ms.assetid: 706e332b-17a0-4a30-b7d8-5d6cd372524b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8103ad4054210c7cb3847539f5cdc3f2cebfea6c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103828"
---
# <a name="type-float"></a>Tipo float

I numeri a virgola mobile utilizzano il formato IEEE (Institute of Electrical and Electronics Engineers). I valori a precisione singola con tipo float hanno 4 byte costituiti da un bit del segno, da un esponente binario a 8 bit excess-127 e da una mantissa a 23 bit. La mantissa rappresenta un numero compreso tra 1,0 e 2,0. Poiché il bit più significativo della mantissa è sempre 1, non viene archiviato nel numero. Questa rappresentazione specifica un intervallo incluso approssimativamente tra 3,4E-38 e 3,4E+38 per il tipo float.

È possibile dichiarare le variabili come float o double, a seconda delle esigenze dell'applicazione. Le differenze principali tra i due tipi sono costituite dal significato che possono rappresentare, dall'archiviazione che richiedono e dal relativo intervallo. Nella tabella riportata di seguito viene illustrata la relazione tra significato e requisiti di archiviazione.

### <a name="floating-point-types"></a>Tipi a virgola mobile

|Tipo|Cifre significative|Numero di byte|
|----------|------------------------|---------------------|
|float|6 - 7|4|
|double|15 - 16|8|

Le variabili a virgola mobile sono rappresentate da una mantissa che contiene il valore del numero e da un esponente che contiene l'ordine di grandezza di tale numero.

Nella tabella riportata di seguito viene indicato il numero di bit allocati alla mantissa e all'esponente per ogni tipo a virgola mobile. Il bit più significativo dei tipi float o double è sempre il bit del segno. Se il bit più significativo è 1, il numero viene considerato negativo; in caso contrario, viene considerato positivo.

### <a name="lengths-of-exponents-and-mantissas"></a>Lunghezza degli esponenti e delle mantisse

|Tipo|Lunghezza degli esponenti|Lunghezza delle mantisse|
|----------|---------------------|---------------------|
|float|8 bit|23 bit|
|double|11 bit|52 bit|

Poiché gli esponenti vengono archiviati in un formato senza segno, il valore della differenza dell'esponente viene calcolato sulla metà del valore possibile. Per il tipo Float il valore della distorsione è 127; per il tipo Double è 1023. È possibile calcolare il valore effettivo dell'esponente sottraendo il valore della distorsione dal valore dell'esponente.

La mantissa viene archiviata come frazione binaria maggiore o uguale a 1 e minore di 2. Per i tipi Float e Double, esiste un 1 iniziale implicito nella mantissa nella posizione del bit più significativo, quindi le mantisse sono in effetti rispettivamente di 24 e 53 bit, anche se il bit più significativo non viene mai archiviato in memoria.

A differenza del metodo di archiviazione appena descritto, il pacchetto a virgola mobile può archiviare i numeri binari a virgola mobile come numeri denormalizzati. I "numeri denormalizzati" sono numeri a virgola mobile diversi da zero con valori dell'esponente riservati in cui il bit più significativo della mantissa è 0. Utilizzando il formato denormalizzato, l'intervallo di un numero a virgola mobile può essere esteso a discapito di una minore precisione. Non è possibile determinare se un numero a virgola mobile venga rappresentato in forma normalizzata o denormalizzata; il pacchetto a virgola mobile determina la rappresentazione. Il pacchetto a virgola mobile non utilizza mai una forma denormalizzata a meno che l'esponente non diventi inferiore al valore minimo rappresentabile in forma normalizzata.

Nella tabella seguente vengono riportati i valori minimo e massimo che è possibile archiviare nelle variabili di ciascun tipo a virgola mobile. I valori elencati in questa tabella sono applicabili solo ai numeri a virgola mobile normalizzati; i numeri a virgola mobile denormalizzati hanno un valore minimo inferiore. Si noti che i numeri mantenuti nei registri 80*x*87 vengono sempre rappresentati in forma normalizzata a 80 bit. I numeri possono essere rappresentati in forma denormalizzata solo quando sono archiviati nelle variabili a virgola mobile a 32 o 64 bit (variabili di tipo float e long).

### <a name="range-of-floating-point-types"></a>Intervallo dei tipi a virgola mobile

|Tipo|Valore minimo|Valore massimo|
|----------|-------------------|-------------------|
|mobile|1,175494351 E - 38|3,402823466 E + 38|
|double|2,2250738585072014 E - 308|1,7976931348623158 E + 308|

Se la precisione costituisce un problema minore, considerare la possibilità di utilizzare il tipo Float per le variabili a virgola mobile. Al contrario, se la precisione costituisce il criterio più importante, utilizzare il tipo Double.

Le variabili a virgola mobile possono essere promosse a un tipo più significativo (dal tipo Float al tipo Double). La promozione si verifica in genere quando si eseguono operazioni aritmetiche sulle variabili a virgola mobile. Queste operazioni aritmetiche vengono sempre eseguite con un livello di precisione elevato come quello della variabile con il massimo livello di precisione. Si considerino ad esempio le seguenti dichiarazioni di tipo:

```
float f_short;
double f_long;
long double f_longer;

f_short = f_short * f_long;
```

Nell'esempio precedente la variabile `f_short` viene promossa al tipo Double e moltiplicata per `f_long`; il risultato viene arrotondato al tipo Float prima di essere assegnato a `f_short`.

Nell'esempio riportato di seguito (che utilizza le dichiarazioni dell'esempio precedente) l'operazione aritmetica viene eseguita sulle variabili con una precisione float a 32 bit; il risultato viene quindi promosso al tipo Double:

```
f_longer = f_short * f_short;
```

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)