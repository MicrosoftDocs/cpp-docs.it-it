---
title: grammatica based | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
caps.latest.revision: 10
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 427906751c57b8b5f0c46479e8481394fa20f56c
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="based-grammar"></a>Grammatica __based
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).  
  
 L'unica forma accettabile di indirizzamento di base, nelle compilazioni a 32 bit e a 64 bit, è "basata su un puntatore" che definisce un tipo contenente uno spostamento a 32 o 64 bit verso una base di 32 o 64 bit o che si basa su `void`.  
  
## <a name="grammar"></a>Grammatica  
 *modificatore di intervallo in base*:  
 **based (***base espressione***)    **  
  
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
