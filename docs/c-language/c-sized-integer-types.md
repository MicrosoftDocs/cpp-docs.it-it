---
title: "Tipi Integer con dimensione C | Microsoft Docs"
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
helpviewer_keywords: 
  - "tipi Integer con dimensione"
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Tipi Integer con dimensione C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Le funzionalità di Microsoft C supportano i tipi Integer ridimensionati.  È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit utilizzando l'identificatore di tipo \_\_int*n*, dove *n* è la dimensione, in bit, della variabile Integer.  Il valore di *n* può essere 8, 16, 32 o 64.  Nell'esempio seguente viene dichiarata una variabile di ognuno dei quattro tipi Integer ridimensionati:  
  
```  
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 I primi tre tipi Integer ridimensionati sono sinonimi per i tipi ANSI con la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme.  Si noti che il tipo di dati \_\_int8 è sinonimo del tipo char, \_\_int16 è sinonimo del tipo short e \_\_int32 è sinonimo del tipo int.  Il tipo \_\_int64 non ha un elemento ANSI equivalente.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)