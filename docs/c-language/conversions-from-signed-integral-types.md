---
description: 'Altre informazioni su: conversioni dai tipi integrali con segno'
title: Conversioni dai tipi integrali con segno
ms.date: 10/02/2019
helpviewer_keywords:
- integral conversions, from signed
- integers, converting
- conversions [C++], integral
- data type conversion [C++], signed and unsigned integers
- type conversion [C++], signed and unsigned integers
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
ms.openlocfilehash: 25ee07f0b3bac9cd954bc217a4a71e579e4eacda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293157"
---
# <a name="conversions-from-signed-integral-types"></a>Conversioni dai tipi integrali con segno

Quando un intero con segno viene convertito in un Integer o in un tipo a virgola mobile, se il valore originale è rappresentabile nel tipo di risultato, il valore è invariato.

Quando un intero con segno viene convertito in un numero intero di dimensioni maggiori, il valore viene esteso con segno. Quando viene convertito in un numero intero di dimensioni inferiori, i bit più significativi vengono troncati. Il risultato viene interpretato usando il tipo di risultato, come illustrato nell'esempio seguente:

```C
int i = -3;
unsigned short u;

u = i;
printf_s( "%hu\n", u );  // Prints 65533
```

Quando si converte un intero con segno in un tipo a virgola mobile, se il valore originale non è rappresentabile esattamente nel tipo di risultato, il risultato è il valore più alto o inferiore rappresentabile successivo.

Per informazioni sulle dimensioni dei tipi a virgola mobile e integrali, vedere [archiviazione di tipi di base](../c-language/storage-of-basic-types.md).

Nella tabella seguente sono riepilogate le conversioni dai tipi integrali con segno. Presuppone che il **`char`** tipo sia firmato per impostazione predefinita. Se si utilizza un'opzione in fase di compilazione per modificare l'impostazione predefinita per il **`char`** tipo su senza segno, le conversioni fornite nella tabella conversioni [da tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md) per il **`unsigned char`** tipo si applicano anziché le conversioni in questa tabella.

**Specifico di Microsoft**

Nel compilatore Microsoft **`int`** e **`long`** sono tipi Distinct ma equivalenti. La conversione di un **`int`** valore continua nello stesso modo della conversione di un oggetto **`long`** .

**TERMINA specifica Microsoft**

## <a name="table-of-conversions-from-signed-integral-types"></a>Tabella delle conversioni dai tipi integrali con segno

|Da|A|Metodo|
|----------|--------|------------|
|**`char`**<sup>1</sup>|**`short`**|Estensione del segno|
|**`char`**|**`long`**|Estensione del segno|
|**`char`**|**`long long`**|Estensione del segno|
|**`char`**|**`unsigned char`**|Mantenimento del modello; il bit più significativo perde la funzione come bit di segno|
|**`char`**|**`unsigned short`**|Estensione del segno a **`short`** ; conversione **`short`** in **`unsigned short`**|
|**`char`**|**`unsigned long`**|Estensione del segno a **`long`** ; conversione **`long`** in **`unsigned long`**|
|**`char`**|**`unsigned long long`**|Estensione del segno a **`long long`** ; conversione **`long long`** in **`unsigned long long`**|
|**`char`**|**`float`**|Estensione del segno a **`long`** ; conversione **`long`** in **`float`**|
|**`char`**|**`double`**|Estensione del segno a **`long`** ; conversione **`long`** in **`double`**|
|**`char`**|**`long double`**|Estensione del segno a **`long`** ; conversione **`long`** in **`double`**|
|**`short`**|**`char`**|Mantenimento del byte meno significativo|
|**`short`**|**`long`**|Estensione del segno|
|**`short`**|**`long long`**|Estensione del segno|
|**`short`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`short`**|**`unsigned short`**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**`short`**|**`unsigned long`**|Estensione del segno a **`long`** ; conversione **`long`** in **`unsigned long`**|
|**`short`**|**`unsigned long long`**|Estensione del segno a **`long long`** ; conversione **`long long`** in **`unsigned long long`**|
|**`short`**|**`float`**|Estensione del segno a **`long`** ; conversione **`long`** in **`float`**|
|**`short`**|**`double`**|Estensione del segno a **`long`** ; conversione **`long`** in **`double`**|
|**`short`**|**`long double`**|Estensione del segno a **`long`** ; conversione **`long`** in **`double`**|
|**`long`**|**`char`**|Mantenimento del byte meno significativo|
|**`long`**|**`short`**|Mantenimento della parola meno significativa|
|**`long`**|**`long long`**|Estensione del segno|
|**`long`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`long`**|**`unsigned short`**|Mantenimento della parola meno significativa|
|**`long`**|**`unsigned long`**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**`long`**|**`unsigned long long`**|Estensione del segno a **`long long`** ; conversione **`long long`** in **`unsigned long long`**|
|**`long`**|**`float`**|Rappresentare come **`float`** . Se **`long`** non può essere rappresentato esattamente, la precisione viene persa.|
|**`long`**|**`double`**|Rappresentare come **`double`** . Se **`long`** non può essere rappresentato esattamente come un **`double`** , viene persa una certa precisione.|
|**`long`**|**`long double`**|Rappresentare come **`double`** . Se **`long`** non può essere rappresentato esattamente come un **`double`** , viene persa una certa precisione.|
|**`long long`**|**`char`**|Mantenimento del byte meno significativo|
|**`long long`**|**`short`**|Mantenimento della parola meno significativa|
|**`long long`**|**`long`**|Mantieni valore DWORD di ordine inferiore|
|**`long long`**|**`unsigned char`**|Mantenimento del byte meno significativo|
|**`long long`**|**`unsigned short`**|Mantenimento della parola meno significativa|
|**`long long`**|**`unsigned long`**|Mantieni valore DWORD di ordine inferiore|
|**`long long`**|**`unsigned long long`**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**`long long`**|**`float`**|Rappresentare come **`float`** . Se **`long long`** non può essere rappresentato esattamente, la precisione viene persa.|
|**`long long`**|**`double`**|Rappresentare come **`double`** . Se **`long long`** non può essere rappresentato esattamente come un **`double`** , viene persa una certa precisione.|
|**`long long`**|**`long double`**|Rappresentare come **`double`** . Se **`long long`** non può essere rappresentato esattamente come un **`double`** , viene persa una certa precisione.|

<sup>1</sup> tutte **`char`** le voci presuppongono che il **`char`** tipo sia firmato per impostazione predefinita.

## <a name="see-also"></a>Vedi anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
