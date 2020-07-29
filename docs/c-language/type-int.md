---
title: Tipo int
ms.date: 11/04/2016
helpviewer_keywords:
- int data type
- type int
- portability [C++], type int
- signed integers
ms.assetid: 0067ce9a-281e-491a-ae63-632952981e13
ms.openlocfilehash: 2bfd9e108b36f073635c6d9e55e2299764dcb309
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87198866"
---
# <a name="type-int"></a>Tipo int

La dimensione di un **`signed int`** **`unsigned int`** elemento o è la dimensione standard di un Integer in un computer specifico. Ad esempio, nei sistemi operativi a 16 bit, il **`int`** tipo è in genere 16 bit o 2 byte. Nei sistemi operativi a 32 bit il **`int`** tipo è in genere 32 bit o 4 byte. Pertanto, il **`int`** tipo è equivalente a o al **`short int`** **`long int`** tipo e il **`unsigned int`** tipo è equivalente a **`unsigned short`** o al **`unsigned long`** tipo, a seconda dell'ambiente di destinazione. I **`int`** tipi rappresentano tutti i valori firmati, a meno che non sia specificato diversamente.

Gli identificatori **`int`** di tipo e **`unsigned int`** (o semplicemente **`unsigned`** ) definiscono determinate funzionalità del linguaggio C (ad esempio, il **`enum`** tipo). In questi casi, le definizioni di **`int`** e **`unsigned int`** per una determinata implementazione determinano l'archiviazione effettiva.

**Specifico di Microsoft**

I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo rappresenta il segno, ovvero 1 per il segno negativo, 0 per il segno positivo e zero. L'intervallo di valori viene specificato nei [limiti di interi C e C++](../c-language/cpp-integer-limits.md), che viene ricavato dai limiti. File di intestazione H.

**TERMINA specifica Microsoft**

> [!NOTE]
> Gli **`int`** **`unsigned int`** identificatori di tipo e vengono ampiamente usati nei programmi C perché consentono a un computer specifico di gestire i valori interi nel modo più efficiente per tale computer. Tuttavia, poiché le dimensioni dei **`int`** tipi e **`unsigned int`** variano, i programmi che dipendono da una **`int`** dimensione specifica potrebbero non essere portabili ad altri computer. Per rendere più portabili i programmi, è possibile usare espressioni con l' **`sizeof`** operatore, come illustrato nell' [ `sizeof` operatore](../c-language/sizeof-operator-c.md), anziché le dimensioni dei dati hardcoded.

## <a name="see-also"></a>Vedere anche

[Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
