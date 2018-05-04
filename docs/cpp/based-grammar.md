---
title: grammatica based | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- based addressing
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 20e1c14cd7add01f8583c24541987b2980da794a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="based-grammar"></a>Grammatica __based
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 L'indirizzamento di base è utile nei casi in cui si necessita di un controllo preciso del segmento in cui sono allocati gli oggetti (dati a base dinamica o statica).  
  
 L'unica forma accettabile di indirizzamento di base, nelle compilazioni a 32 bit e a 64 bit, è "basata su un puntatore" che definisce un tipo contenente uno spostamento a 32 o 64 bit verso una base di 32 o 64 bit o che si basa su `void`.  
  
## <a name="grammar"></a>Grammatica  
 *modificatore di intervallo in base*:  
 **based (***base-expression***)**   
  
 *espressione di base*:  
 *based-variablebased-abstract-declaratorsegment-namesegment-cast*  
  
 *variabile in base alla*:  
 *identifier*  
  
 *in base abstract-declarator*:  
 *abstract-declarator*  
  
 *tipo di base*:  
 *type-name*  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Puntatori based](../cpp/based-pointers-cpp.md)