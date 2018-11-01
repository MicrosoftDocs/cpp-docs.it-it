---
title: Tipi scalari
ms.date: 11/04/2016
ms.assetid: 07c9195e-b6c7-4083-8ef0-8a93032e4d1e
ms.openlocfilehash: 0c2fa18022763564a29b6a96f8ce719039dcd216
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492063"
---
# <a name="scalar-types"></a>Tipi scalari

Anche se l'accesso ai dati può derivare da alcun allineamento, è consigliabile che i dati vengano allineati sul relativo limite naturale per evitare la perdita di prestazioni (o un multiplo della stessa). Le enumerazioni sono valori interi costanti e vengono trattate come interi a 32 bit. La tabella seguente descrive la definizione del tipo e l'archiviazione consigliato per tale relativamente all'allineamento con i valori di allineamento seguenti:

- Byte - 8 bit

- Word - 16 bit

- Valore Double Word - 32 bit

- QWORD - 64 bit

- Word ottaidrato - 128 bit

|||||
|-|-|-|-|
|Tipi scalari|Tipo di dati C|Dimensioni di archiviazione (in byte)|Allineamento consigliato|
|**INT8**|**char**|1|Byte|
|**UINT8**|**unsigned char**|1|Byte|
|**INT16**|**short**|2|Word|
|**UINT16**|**unsigned short**|2|Word|
|**INT32**|**int**, **long**|4|Double Word|
|**UINT32**|**valore unsigned int, long senza segno**|4|Double Word|
|**INT64**|**__int64**|8|Parola quadrupla|
|**UINT64**|**unsigned __int64**|8|Parola quadrupla|
|**FP32 (precisione singola)**|**float**|4|Double Word|
|**FP64 (precisione doppia)**|**double**|8|Parola quadrupla|
|**PUNTATORE**|<strong>\*</strong>|8|Parola quadrupla|
|**__m64**|**struct __m64**|8|Parola quadrupla|
|**__m128**|**struct __m128**|16|Octaword|

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)