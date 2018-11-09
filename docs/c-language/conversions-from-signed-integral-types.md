---
title: Conversioni dai tipi integrali con segno
ms.date: 11/04/2016
helpviewer_keywords:
- integral conversions, from signed
- integers, converting
- conversions [C++], integral
- data type conversion [C++], signed and unsigned integers
- type conversion [C++], signed and unsigned integers
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
ms.openlocfilehash: aec00ce21887759b2016523ff4044eb8389131fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431720"
---
# <a name="conversions-from-signed-integral-types"></a>Conversioni dai tipi integrali con segno

Quando un intero con segno viene convertito in un intero senza segno di dimensione uguale o maggiore e il valore dell'intero con segno non è negativo, tale valore rimane invariato. La conversione viene eseguita mediante l'estensione del segno dell'intero con segno. Un intero con segno viene convertito in un intero con segno più corto troncando i bit più significativi. Il risultato viene interpretato come un valore senza segno, come illustrato in questo esempio.

```C
int i = -3;
unsigned short u;

u = i;
printf_s( "%hu\n", u );  // Prints 65533
```

Quando un intero con segno viene convertito in un valore a virgola mobile non viene persa alcuna informazione, tuttavia parte della precisione può andare persa quando un valore **long int** or **long int senza segno** viene convertito in un valore **float**.

Nella tabella seguente sono riepilogate le conversioni dai tipi integrali con segno. In questa tabella si presuppone che il tipo **char** sia un tipo con segno per impostazione predefinita. Se si usa un'opzione in fase di compilazione per modificare l'impostazione predefinita del tipo **char** in un tipo senza segno, le conversioni indicate nella tabella [Conversioni dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md) per il tipo **char senza segno** si applicano al posto delle conversioni nella tabella riportata di seguito, Conversioni dai tipi integrali con segno.

### <a name="conversions-from-signed-integral-types"></a>Conversioni dai tipi integrali con segno

|Da|A|Metodo|
|----------|--------|------------|
|**char**1|**short**|Estensione del segno|
|**char**|**long**|Estensione del segno|
|**char**|**unsigned char**|Mantenimento del modello; il bit più significativo perde la funzione come bit di segno|
|**char**|**unsigned short**|Estensione del segno a **short**; conversione di **short** in **short senza segno**|
|**char**|**long senza segno**|Estensione del segno a **long**; conversione di **long** in **long senza segno**|
|**char**|**float**|Estensione del segno a **long**; conversione di **long** in **float**|
|**char**|**double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**char**|**long double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**short**|**char**|Mantenimento del byte meno significativo|
|**short**|**long**|Estensione del segno|
|**short**|**char senza segno**|Mantenimento del byte meno significativo|
|**short**|**unsigned short**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**short**|**unsigned long**|Estensione del segno a **long**; conversione di **long** in **long senza segno**|
|**short**|**float**|Estensione del segno a **long**; conversione di **long** in **float**|
|**short**|**double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**short**|**long double**|Estensione del segno a **long**; conversione di **long** in **double**|
|**long**|**char**|Mantenimento del byte meno significativo|
|**long**|**short**|Mantenimento della parola meno significativa|
|**long**|**unsigned char**|Mantenimento del byte meno significativo|
|**long**|**short senza segno**|Mantenimento della parola meno significativa|
|**long**|**unsigned long**|Mantenimento del modello di bit; il bit più significativo perde la funzione come bit di segno|
|**long**|**float**|Rappresentazione come **float**. Se **long** non può essere rappresentato con esattezza, la precisione diminuisce.|
|**long**|**double**|Rappresentazione come **double**. Se **long** non può essere rappresentato con esattezza come **double**, la precisione diminuisce.|
|**long**|**long double**|Rappresentazione come **double**. Se **long** non può essere rappresentato con esattezza come **double**, la precisione diminuisce.|

1. Tutte le voci **char** presuppongono che il tipo **char** sia un tipo con segno per impostazione predefinita.

**Sezione specifica Microsoft**

Per il compilatore C a 32 bit Microsoft , un intero è equivalente a un valore **long**. La conversione di un valore **int** viene eseguita in modo analogo a quella di un valore **long**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)