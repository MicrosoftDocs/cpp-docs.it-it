---
title: "Aggregati e unioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregati [C++], e unioni"
ms.assetid: 859fc211-b111-4f12-af98-de78e48f9b92
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Aggregati e unioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per altri tipi, ad esempio matrici, strutture e unioni, sono definiti requisiti di allineamento più rigorosi che assicurano la coerenza delle operazioni di archiviazione e recupero dati per aggregati e unioni.  Di seguito sono riportate le definizioni di matrice, struttura e unione:  
  
 Matrice  
 Contiene un gruppo ordinato di oggetti dati adiacenti.  Ciascun oggetto è denominato elemento.  Tutti gli elementi all'interno di una matrice hanno la stessa dimensione e lo stesso tipo di dati.  
  
 Struttura  
 Contiene un gruppo ordinato di oggetti dati.  A differenza degli elementi di una matrice, gli oggetti dati all'interno di una struttura possono avere dimensione e tipo di dati differenti.  Ciascun oggetto dati in una struttura è denominato membro.  
  
 Unione  
 Oggetto contenente un qualsiasi insieme di membri denominati.  I membri dell'insieme possono essere di qualsiasi tipo.  Lo spazio di archiviazione allocato per un'unione è uguale allo spazio di archiviazione necessario per il membro più grande di tale unione, più l'eventuale spaziatura interna richiesta per l'allineamento.  
  
 Nella tabella riportata di seguito è indicato l'allineamento consigliato per i membri scalari di unioni e strutture.  
  
||||  
|-|-|-|  
|Tipo scalare|Tipo di dati di C|Allineamento consigliato|  
|**INT8**|`char`|Byte|  
|**UINT8**|`unsigned char`|Byte|  
|**INT16**|**short**|Word|  
|**UINT16**|**unsigned short**|Word|  
|**INT32**|**int, long**|Double word|  
|**UINT32**|**unsigned int, unsigned long**|Double word|  
|**INT64**|`__int64`|Quad word|  
|**UINT64**|**unsigned \_\_int64**|Quad word|  
|**FP32 \(precisione singola\)**|**float**|Double word|  
|**FP64 \(precisione doppia\)**|**double**|Quad word|  
|**POINTER**|**\***|Quad word|  
|`__m64`|**struct \_\_m64**|Quad word|  
|`__m128`|**struct \_\_m128**|Octa word|  
  
 Di seguito sono riportate le regole di allineamento valide per gli aggregati:  
  
-   L'allineamento di una matrice è uguale all'allineamento di uno degli elementi della matrice.  
  
-   L'allineamento dell'inizio di una struttura o di un'unione corrisponde all'allineamento massimo di un qualsiasi membro.  Ciascun membro all'interno della struttura o dell'unione deve essere posizionato con il relativo allineamento corretto, come definito nella tabella precedente. Questa condizione può richiedere l'inserimento di una spaziatura interna implicita, a seconda del membro precedente.  
  
-   La dimensione di una struttura deve essere un multiplo integrale del relativo allineamento. Questa condizione può richiedere l'inserimento di una spaziatura dopo l'ultimo membro.  Poiché le strutture e le unioni possono essere raggruppate in matrici, ciascun elemento della matrice di una struttura o un'unione deve iniziare e terminare con l'allineamento corretto indicato precedentemente.  
  
-   È possibile allineare i dati in modo da utilizzare un valore maggiore rispetto ai requisiti di allineamento, purché siano rispettate le regole indicate sopra.  
  
-   Un singolo compilatore può regolare il livello di compressione di una struttura per motivi di ridimensionamento.  Ad esempio, [\/Zp \(Allineamento membri struct\)](../build/reference/zp-struct-member-alignment.md) consente la regolazione della compressione delle strutture.  
  
## Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)