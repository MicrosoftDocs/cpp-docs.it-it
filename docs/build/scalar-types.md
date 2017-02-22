---
title: "Tipi scalari | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 07c9195e-b6c7-4083-8ef0-8a93032e4d1e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Tipi scalari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene l'accesso ai dati può verificarsi con qualsiasi tipo di allineamento, per evitare un calo di prestazioni si consiglia che i dati vengano allineati sul relativo limite naturale.  I valori Enum sono integer costanti e vengono considerati come integer a 32 bit.  Nella tabella riportata di seguito sono indicate la definizione di tipo e la dimensione di memoria consigliata in base all'allineamento, utilizzando i seguenti valori di allineamento:  
  
-   Byte: 8 bit  
  
-   Word: 16 bit  
  
-   Double word: 32 bit  
  
-   Quad word: 64 bit  
  
-   Octa word: 128 bit  
  
|||||  
|-|-|-|-|  
|Tipo scalare|Tipo di dati di C|Dimensione memoria \(in byte\)|Allineamento consigliato|  
|**INT8**|`char`|1|Byte|  
|**UINT8**|`unsigned char`|1|Byte|  
|**INT16**|**short**|2|Word|  
|**UINT16**|**unsigned short**|2|Word|  
|**INT32**|**int, long**|4|Double word|  
|**UINT32**|**unsigned int, unsigned long**|4|Double word|  
|**INT64**|`__int64`|8|Quad word|  
|**UINT64**|**unsigned \_\_int64**|8|Quad word|  
|**FP32 \(precisione singola\)**|**float**|4|Double word|  
|**FP64 \(precisione doppia\)**|**double**|8|Quad word|  
|**POINTER**|**\***|8|Quad word|  
|`__m64`|**struct \_\_m64**|8|Quad word|  
|`__m128`|**struct \_\_m128**|16|Octa word|  
  
## Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)