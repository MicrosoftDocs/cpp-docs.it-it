---
title: Aggregati e unioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- aggregates [C++], and unions
ms.assetid: 859fc211-b111-4f12-af98-de78e48f9b92
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 74ee1bbcf1a39171b18c09274543c72e0b844748
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="aggregates-and-unions"></a>Aggregati e unioni
Altri tipi, ad esempio matrici, strutture e unioni presentano requisiti più vincolanti di allineamento che garantiscono coerenza unione e aggregazione archiviazione e recupero dei dati. Di seguito sono riportate le definizioni per la matrice, struttura e unione:  
  
 Matrice  
 Contiene un gruppo ordinato di oggetti dati adiacenti. Ogni oggetto viene definito un elemento. Tutti gli elementi all'interno di una matrice hanno lo stesso tipo di dati e dimensioni.  
  
 Struttura  
 Contiene un gruppo di oggetti dati ordinato. A differenza degli elementi di una matrice, gli oggetti di dati all'interno di una struttura possono avere dimensioni e tipi di dati diversi. Ogni oggetto in una struttura di dati viene chiamato un membro.  
  
 Unione  
 Oggetto che contiene uno di un set di membri denominati. I membri del set denominato possono essere di qualsiasi tipo. Lo spazio di archiviazione allocato per un'unione è uguale allo spazio di archiviazione necessario per il membro più grande di tale unione, oltre a qualsiasi richiesta per l'allineamento di riempimento.  
  
 La tabella seguente illustra l'allineamento consigliato per i membri di strutture e unioni scalari.  
  
||||  
|-|-|-|  
|Tipi scalari|Tipo di dati C|Allineamento richiesto|  
|**INT8**|`char`|Byte|  
|**UINT8**|`unsigned char`|Byte|  
|**INT16**|**short**|Word|  
|**UINT16**|**unsigned short**|Word|  
|**INT32**|**int, long**|Double Word|  
|**UINT32**|**valore unsigned int, long senza segno**|Double Word|  
|**INT64**|`__int64`|Parola quadrupla|  
|**UINT64**|**unsigned __int64**|Parola quadrupla|  
|**FP32 (precisione singola)**|**float**|Double Word|  
|**FP64 (precisione doppia)**|**double**|Parola quadrupla|  
|**PUNTATORE**|**\***|Parola quadrupla|  
|`__m64`|**m64 struct**|Parola quadrupla|  
|`__m128`|**m128 struct**|Octaword|  
  
 Si applicano le regole di allineamento di aggregazione seguenti:  
  
-   L'allineamento di una matrice è lo stesso come l'allineamento di uno degli elementi della matrice.  
  
-   L'allineamento dell'inizio di una struttura o un'unione è l'allineamento massimo tra i singoli membri. Ogni membro all'interno della struttura o unione deve trovarsi il relativo allineamento corretto come definito nella tabella precedente, che può richiedere una spaziatura interna implicita, a seconda del membro precedente.  
  
-   Dimensione della struttura deve essere un multiplo dell'allineamento, che può richiedere una spaziatura interna dopo l'ultimo membro. Poiché nelle matrici, strutture e unioni possono essere raggruppate, ogni elemento della matrice di una struttura o unione deve iniziare e terminare l'allineamento corretto indicato in precedenza è stato determinato.  
  
-   È possibile allineare i dati in modo da essere maggiore di requisiti di allineamento, purché le regole precedenti vengono mantenute.  
  
-   Un singolo compilatore può regolare la compressione di una struttura per motivi di dimensioni. Ad esempio [/Zp (Allineamento membri Struct)](../build/reference/zp-struct-member-alignment.md) consente la regolazione della compressione di strutture.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)