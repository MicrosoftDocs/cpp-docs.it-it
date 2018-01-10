---
title: grammatica based | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6a2cb2929fa595ad13746ea929217f41272a8189
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="based-grammar"></a>Grammatica __based
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).  
  
 L'unica forma accettabile di indirizzamento di base, nelle compilazioni a 32 bit e a 64 bit, è "basata su un puntatore" che definisce un tipo contenente uno spostamento a 32 o 64 bit verso una base di 32 o 64 bit o che si basa su `void`.  
  
## <a name="grammar"></a>Grammatica  
 *modificatore di intervallo in base*:  
 **based (***base espressione***)**   
  
 *espressione di base*:  
 *based-variablebased-abstract-declaratorsegment-namesegment-cast*  
  
 *variabile in base alla*:  
 *identifier*  
  
 *in base abstract-declarator*:  
 *abstract-declarator*  
  
 *tipo di base*:  
 *nome del tipo*  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Puntatori based](../cpp/based-pointers-cpp.md)