---
title: Conversioni dai tipi integrali senza segno
ms.date: 10/02/2019
helpviewer_keywords:
- integers, converting
- type casts, involving integers
- data type conversion [C++], signed and unsigned integers
- type conversion [C++], signed and unsigned integers
- integral conversions, from unsigned
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
ms.openlocfilehash: 08b88b1343f56f8d79fc39c53505b26caecfe3c4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226464"
---
# <a name="conversions-from-unsigned-integral-types"></a>Conversioni dai tipi integrali senza segno

Quando un Unsigned Integer viene convertito in un tipo Integer o a virgola mobile, se il valore originale è rappresentabile nel tipo di risultato, il valore è invariato.

Quando si converte un Unsigned Integer in un numero intero di dimensioni maggiori, il valore viene esteso con zero. Quando si esegue la conversione in un numero intero di dimensioni inferiori, i bit più significativi vengono troncati. Il risultato viene interpretato usando il tipo di risultato, come illustrato in questo esempio.

```C
unsigned k = 65533;
short j;

j = k;
printf_s( "%hd\n", j );   // Prints -3
```

Quando si converte un Unsigned Integer in un tipo a virgola mobile, se il valore originale non può essere rappresentato esattamente nel tipo di risultato, il risultato è il valore più alto o inferiore rappresentabile successivo.

Per informazioni sulle dimensioni dei tipi a virgola mobile e integrali, vedere [archiviazione dei tipi di base](../c-language/storage-of-basic-types.md) .

**Specifico di Microsoft**

Nel compilatore Microsoft **`unsigned`** (o **`unsigned int`** ) e **`unsigned long`** sono tipi Distinct ma equivalenti. La conversione di un **`unsigned int`** valore continua nello stesso modo della conversione di un oggetto **`unsigned long`** .

**TERMINA specifica Microsoft**

Nella tabella seguente sono riepilogate le conversioni dai tipi integrali senza segno.

## <a name="table-of-conversions-from-unsigned-integral-types"></a>Tabella delle conversioni dai tipi integrali senza segno

|From|A|Metodo|
|----------|--------|------------|
|**`unsigned char`**|**`char`**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**`unsigned char`**|**`short`**|Estensione zero|
|**`unsigned char`**|**`long`**|Estensione zero|
|**`unsigned char`**|**`long long`**|Estensione zero|
|**`unsigned char`**|**`unsigned short`**|Estensione zero|
|**`unsigned char`**|**`unsigned long`**|Estensione zero|
|**`unsigned char`**|**`unsigned long long`**|Estensione zero|
|**`unsigned char`**|**`float`**|Conversione in **`long`** ; conversione **`long`** in**`float`**|
|**`unsigned char`**|**`double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|
|**`unsigned char`**|**`long double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|
|**`unsigned short`**|**`char`**|Mantenimento del byte meno significativo|
|**`unsigned short`**|**`short`**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**`unsigned short`**|**`long`**|Estensione zero|
|**`unsigned short`**|**`long long`**|Estensione zero|
|**`unsigned short`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`unsigned short`**|**`unsigned long`**|Estensione zero|
|**`unsigned short`**|**`unsigned long long`**|Estensione zero|
|**`unsigned short`**|**`float`**|Conversione in **`long`** ; conversione **`long`** in**`float`**|
|**`unsigned short`**|**`double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|
|**`unsigned short`**|**`long double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|
|**`unsigned long`**|**`char`**|Mantenimento del byte meno significativo|
|**`unsigned long`**|**`short`**|Mantenimento della parola meno significativa|
|**`unsigned long`**|**`long`**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**`unsigned long`**|**`long long`**|Estensione zero|
|**`unsigned long`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`unsigned long`**|**`unsigned short`**|Mantenimento della parola meno significativa|
|**`unsigned long`**|**`unsigned long long`**|Estensione zero|
|**`unsigned long`**|**`float`**|Conversione in **`long`** ; conversione **`long`** in**`float`**|
|**`unsigned long`**|**`double`**|Converti direttamente in**`double`**|
|**`unsigned long`**|**`long double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|
|**`unsigned long long`**|**`char`**|Mantenimento del byte meno significativo|
|**`unsigned long long`**|**`short`**|Mantenimento della parola meno significativa|
|**`unsigned long long`**|**`long`**|Mantieni valore DWORD di ordine inferiore|
|**`unsigned long long`**|**`long long`**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**`unsigned long long`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`unsigned long long`**|**`unsigned short`**|Mantenimento della parola meno significativa|
|**`unsigned long long`**|**`unsigned long`**|Mantieni valore DWORD di ordine inferiore|
|**`unsigned long long`**|**`float`**|Conversione in **`long`** ; conversione **`long`** in**`float`**|
|**`unsigned long long`**|**`double`**|Converti direttamente in**`double`**|
|**`unsigned long long`**|**`long double`**|Conversione in **`long`** ; conversione **`long`** in**`double`**|

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
