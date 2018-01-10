---
title: Tipi scalari | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 07c9195e-b6c7-4083-8ef0-8a93032e4d1e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 15b0915637025e176ee98d01be3991b30b4e6544
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="scalar-types"></a>Tipi scalari
Anche se l'accesso ai dati può derivare da alcun allineamento, è consigliabile che i dati vengano allineati sul relativo limite naturale per evitare la perdita di prestazioni (o un multiplo,). Le enumerazioni sono numeri interi costanti e vengono trattate come interi a 32 bit. La tabella seguente descrive la definizione del tipo e l'archiviazione consigliato per tale relativamente all'allineamento con i valori di allineamento seguenti:  
  
-   Byte - 8 bit  
  
-   Word - 16 bit  
  
-   Double Word - 32 bit  
  
-   QWORD - 64 bit  
  
-   Word ottaidrato - 128 bit  
  
|||||  
|-|-|-|-|  
|Tipi scalari|Tipo di dati C|Dimensioni di archiviazione (in byte)|Allineamento consigliato|  
|**INT8**|`char`|1|Byte|  
|**UINT8**|`unsigned char`|1|Byte|  
|**INT16**|**short**|2|Word|  
|**UINT16**|**unsigned short**|2|Word|  
|**INT32**|**int, long**|4|Double Word|  
|**UINT32**|**valore unsigned int, long senza segno**|4|Double Word|  
|**INT64**|`__int64`|8|Parola quadrupla|  
|**UINT64**|**unsigned __int64**|8|Parola quadrupla|  
|**FP32 (precisione singola)**|**float**|4|Double Word|  
|**FP64 (precisione doppia)**|**double**|8|Parola quadrupla|  
|**PUNTATORE**|**\***|8|Parola quadrupla|  
|`__m64`|**m64 struct**|8|Parola quadrupla|  
|`__m128`|**m128 struct**|16|Octaword|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)