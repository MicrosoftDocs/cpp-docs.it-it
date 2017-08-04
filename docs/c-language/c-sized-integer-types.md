---
title: Tipi Integer con dimensione C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- sized integer types
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: db04c6862be26d5641a485c47ac7fd71b43d16fe
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="c-sized-integer-types"></a>Tipi Integer con dimensione C
**Sezione specifica Microsoft**  
  
 Le funzionalità di Microsoft C supportano i tipi Integer ridimensionati. È possibile dichiarare variabili Integer a 8, 16, 32 o 64 bit usando l'identificatore di tipo __int*n*, dove *n* è la dimensione in bit della variabile Integer. Il valore di *n* può essere 8, 16, 32 o 64. Nell'esempio seguente viene dichiarata una variabile di ognuno dei quattro tipi Integer ridimensionati:  
  
```  
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 I primi tre tipi Integer ridimensionati sono sinonimi per i tipi ANSI con la stessa dimensione e sono utili per la scrittura di codice portabile che si comporta in modo identico in più piattaforme. Si noti che il tipo di dati __int8 è sinonimo del tipo char, \__int16 è sinonimo del tipo short e \__int32 è sinonimo del tipo int. Il tipo \__int64 non ha un elemento ANSI equivalente.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
