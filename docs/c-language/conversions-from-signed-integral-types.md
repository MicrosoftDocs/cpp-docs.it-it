---
title: Conversioni dai tipi integrali con segno
ms.date: 10/02/2019
helpviewer_keywords:
- integral conversions, from signed
- integers, converting
- conversions [C++], integral
- data type conversion [C++], signed and unsigned integers
- type conversion [C++], signed and unsigned integers
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
ms.openlocfilehash: 79608b5ca4335ee3c30bdab27e7efade5b7e2f54
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998730"
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

Nella tabella seguente sono riepilogate le conversioni dai tipi integrali con segno. Presuppone che il tipo **char** sia firmato per impostazione predefinita. Se si usa un'opzione in fase di compilazione per modificare il valore predefinito per il tipo di **carattere** senza segno, le conversioni fornite nella tabella [conversioni da tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md) per il tipo **char senza** segno si applicano anziché le conversioni in questa tabella.

**Sezione specifica Microsoft**

Nel compilatore Microsoft, **int** e **Long** sono tipi distinti ma equivalenti. La conversione di un valore **int** continua nello stesso modo in cui si esegue la conversione di un valore **Long**.

**Fine sezione specifica Microsoft**

## <a name="table-of-conversions-from-signed-integral-types"></a>Tabella delle conversioni dai tipi integrali con segno

|Da|A|Metodo|
|----------|--------|------------|
|**carattere**<sup>1</sup>|**short**|Estensione del segno|
|**char**|**long**|Estensione del segno|
|**char**|**long long**|Estensione del segno|
|**char**|**unsigned char**|Mantenimento del modello; il bit più significativo perde la funzione come bit di segno|
|**char**|**unsigned short**|Estensione del segno a **short**; conversione di **short** in **short senza segno**|
|**char**|**long senza segno**|Estensione del segno a **long**; conversione di **long** in **long senza segno**|
|**char**|**Long Long senza segno**|Estensione del segno a Long **Long**; Converte **Long Long** a **unsigned** Long Long|
|**char**|**float**|Estensione del segno a **long**; conversione di **long** in **float**|
|**char**|**double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**char**|**long double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**short**|**char**|Mantenimento del byte meno significativo|
|**short**|**long**|Estensione del segno|
|**short**|**long long**|Estensione del segno|
|**short**|**char senza segno**|Mantenimento del byte meno significativo|
|**short**|**unsigned short**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**short**|**unsigned long**|Estensione del segno a **long**; conversione di **long** in **long senza segno**|
|**short**|**Long Long senza segno**|Estensione del segno a Long **Long**; Converte **Long Long** a **unsigned** Long Long|
|**short**|**float**|Estensione del segno a **long**; conversione di **long** in **float**|
|**short**|**double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**short**|**long double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**long**|**char**|Mantenimento del byte meno significativo|
|**long**|**short**|Mantenimento della parola meno significativa|
|**long**|**long long**|Estensione del segno|
|**long**|**unsigned char**|Mantenimento del byte meno significativo|
|**long**|**short senza segno**|Mantenimento della parola meno significativa|
|**long**|**unsigned long**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**long**|**Long Long senza segno**|Estensione del segno a Long **Long**; Converte **Long Long** a **unsigned** Long Long|
|**long**|**float**|Rappresentazione come **float**. Se **Long** non può essere rappresentato esattamente, la precisione viene persa.|
|**long**|**double**|Rappresentazione come **double**. Se **Long** non può essere rappresentato esattamente come **Double**, la precisione viene persa.|
|**long**|**long double**|Rappresentazione come **double**. Se **Long** non può essere rappresentato esattamente come **Double**, la precisione viene persa.|
|**long long**|**char**|Mantenimento del byte meno significativo|
|**long long**|**short**|Mantenimento della parola meno significativa|
|**long long**|**long**|Mantieni valore DWORD di ordine inferiore|
|**long long**|**unsigned char**|Mantenimento del byte meno significativo|
|**long long**|**unsigned short**|Mantenimento della parola meno significativa|
|**long long**|**unsigned long**|Mantieni valore DWORD di ordine inferiore|
|**long long**|**Long Long senza segno**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**long long**|**float**|Rappresentazione come **float**. Se **Long Long** non può essere rappresentato esattamente, la precisione viene persa.|
|**long long**|**double**|Rappresentazione come **double**. Se **Long Long** non può essere rappresentato esattamente come **Double**, la precisione viene persa.|
|**long long**|**long double**|Rappresentazione come **double**. Se **Long Long** non può essere rappresentato esattamente come **Double**, la precisione viene persa.|

<sup>1</sup> per tutte le voci **char** si presuppone che il tipo **char** sia firmato per impostazione predefinita.

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)
