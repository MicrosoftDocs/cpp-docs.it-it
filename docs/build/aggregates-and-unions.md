---
title: Aggregati e unioni
ms.date: 11/04/2016
helpviewer_keywords:
- aggregates [C++], and unions
ms.assetid: 859fc211-b111-4f12-af98-de78e48f9b92
ms.openlocfilehash: a4206a5e07c765e9c789eab5c8963c9db4c2f234
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50496256"
---
# <a name="aggregates-and-unions"></a>Aggregati e unioni

Altri tipi, ad esempio matrici, strutture e unioni, avere più rigorosi requisiti di allineamento che garantiscono coerenti con l'unione e aggregazione archiviazione e recupero dei dati. Di seguito sono le definizioni di matrice, la struttura e unione:

- Matrice

   Contiene un gruppo ordinato di oggetti di dati adiacenti. Ogni oggetto viene definito un elemento. Tutti gli elementi all'interno di una matrice hanno lo stesso tipo di dati e dimensioni.

- Struttura

   Contiene un gruppo ordinato di oggetti dati. A differenza degli elementi di una matrice, gli oggetti di dati all'interno di una struttura possono avere dimensioni e tipi di dati diversi. Ogni oggetto dati in una struttura viene chiamato un membro.

- Unione

   Oggetto che contiene un set di membri denominati di. I membri del set denominato possono essere di qualsiasi tipo. L'archiviazione allocata per un'unione è uguale all'archiviazione necessaria per il membro più grande di tale unione, oltre a eventuali spaziature interne necessarie per l'allineamento.

La tabella seguente illustra l'allineamento consigliato per i membri di strutture e unioni scalari.

||||
|-|-|-|
|Tipi scalari|Tipo di dati C|Allineamento richiesto|
|**INT8**|**char**|Byte|
|**UINT8**|**unsigned char**|Byte|
|**INT16**|**short**|Word|
|**UINT16**|**unsigned short**|Word|
|**INT32**|**int**, **long**|Double Word|
|**UINT32**|**valore unsigned int, long senza segno**|Double Word|
|**INT64**|**__int64**|Parola quadrupla|
|**UINT64**|**unsigned __int64**|Parola quadrupla|
|**FP32 (precisione singola)**|**float**|Double Word|
|**FP64 (precisione doppia)**|**double**|Parola quadrupla|
|**PUNTATORE**|<strong>\*</strong>|Parola quadrupla|
|**__m64**|**struct __m64**|Parola quadrupla|
|**__m128**|**struct __m128**|Octaword|

Si applicano le regole di allineamento di aggregazione seguenti:

- L'allineamento di una matrice è quello utilizzato per l'allineamento di uno degli elementi della matrice.

- L'allineamento dell'inizio di una struttura o un'unione è l'allineamento massimo tra i singoli membri. Ogni membro all'interno della struttura o unione deve essere inserito il relativo allineamento corretto come definito nella tabella precedente, che può richiedere una spaziatura interna implicita, a seconda del membro precedente.

- Dimensione della struttura deve essere un numero intero multiplo dell'allineamento, che può richiedere una spaziatura interna dopo l'ultimo membro. Poiché le strutture e unioni discriminate possono essere raggruppati in matrici, ogni elemento della matrice di una struttura o unione deve iniziare e terminare in corrispondenza di consentire il corretto allineamento stabilito in precedenza.

- È possibile allineare i dati in modo da superare i requisiti di allineamento, purché le regole precedenti vengono mantenute.

- Un singolo compilatore può regolare la compressione di una struttura per motivi di dimensioni. Ad esempio [/Zp (Allineamento membri Struct)](../build/reference/zp-struct-member-alignment.md) consente la regolazione della compressione di strutture.

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)
