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
ms.openlocfilehash: 3099f0113103223e392dc20560899b4a6e3ebf20
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998796"
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

**Sezione specifica Microsoft**

Nel compilatore Microsoft, **senza segno** (o **unsigned int**) e **unsigned long** sono tipi Distinct ma equivalenti. La conversione di un valore **unsigned int** viene eseguita nello stesso modo di una conversione di un valore **unsigned long**.

**Fine sezione specifica Microsoft**

Nella tabella seguente sono riepilogate le conversioni dai tipi integrali senza segno.

## <a name="table-of-conversions-from-unsigned-integral-types"></a>Tabella delle conversioni dai tipi integrali senza segno

|Da|A|Metodo|
|----------|--------|------------|
|**unsigned char**|**char**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**unsigned char**|**short**|Estensione zero|
|**unsigned char**|**long**|Estensione zero|
|**unsigned char**|**long long**|Estensione zero|
|**unsigned char**|**unsigned short**|Estensione zero|
|**unsigned char**|**unsigned long**|Estensione zero|
|**unsigned char**|**Long Long senza segno**|Estensione zero|
|**unsigned char**|**float**|Convertire a **long**; convertire **long** a **float**|
|**unsigned char**|**double**|Convertire a **long**; convertire **long** a **double**|
|**unsigned char**|**long double**|Convertire a **long**; convertire **long** a **double**|
|**unsigned short**|**char**|Mantenimento del byte meno significativo|
|**unsigned short**|**short**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**unsigned short**|**long**|Estensione zero|
|**unsigned short**|**long long**|Estensione zero|
|**unsigned short**|**unsigned char**|Mantenimento del byte meno significativo|
|**unsigned short**|**unsigned long**|Estensione zero|
|**unsigned short**|**Long Long senza segno**|Estensione zero|
|**unsigned short**|**float**|Convertire a **long**; convertire **long** a **float**|
|**unsigned short**|**double**|Convertire a **long**; convertire **long** a **double**|
|**unsigned short**|**long double**|Convertire a **long**; convertire **long** a **double**|
|**unsigned long**|**char**|Mantenimento del byte meno significativo|
|**unsigned long**|**short**|Mantenimento della parola meno significativa|
|**unsigned long**|**long**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**unsigned long**|**long long**|Estensione zero|
|**unsigned long**|**unsigned char**|Mantenimento del byte meno significativo|
|**unsigned long**|**unsigned short**|Mantenimento della parola meno significativa|
|**unsigned long**|**Long Long senza segno**|Estensione zero|
|**unsigned long**|**float**|Convertire a **long**; convertire **long** a **float**|
|**unsigned long**|**double**|Convertire direttamente a **double**|
|**unsigned long**|**long double**|Convertire a **long**; convertire **long** a **double**|
|**Long Long senza segno**|**char**|Mantenimento del byte meno significativo|
|**Long Long senza segno**|**short**|Mantenimento della parola meno significativa|
|**Long Long senza segno**|**long**|Mantieni valore DWORD di ordine inferiore|
|**Long Long senza segno**|**long long**|Viene mantenuto lo schema di bit; il bit più significativo diventa il bit di segno|
|**Long Long senza segno**|**unsigned char**|Mantenimento del byte meno significativo|
|**Long Long senza segno**|**unsigned short**|Mantenimento della parola meno significativa|
|**Long Long senza segno**|**unsigned long**|Mantieni valore DWORD di ordine inferiore|
|**Long Long senza segno**|**float**|Convertire a **long**; convertire **long** a **float**|
|**Long Long senza segno**|**double**|Convertire direttamente a **double**|
|**Long Long senza segno**|**long double**|Convertire a **long**; convertire **long** a **double**|

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
