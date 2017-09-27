---
title: Istruzioni di iterazione (C++) | Documenti Microsoft
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
- iteration statements
- loop structures, iteration statements
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: e00939a9ff383be4cf84c098ee7e93af307a1536
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="iteration-statements-c"></a>Istruzioni di iterazione (C++)
Le istruzioni di iterazione determinano l'esecuzione di istruzioni (o istruzioni composte) nessuna o più volte, soggette ad alcuni criteri di ciclo-chiusura. Quando queste istruzioni sono composte, vengono eseguiti in ordine, tranne quando entrambi i [interruzione](../cpp/break-statement-cpp.md) istruzione o [continuare](../cpp/continue-statement-cpp.md) viene rilevata un'istruzione.  
  
 C++ fornisce quattro istruzioni di iterazione, [mentre](../cpp/while-statement-cpp.md), [si](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), e [basato su intervallo per](../cpp/range-based-for-statement-cpp.md). Ognuno di questi scorre fino a quando la relativa espressione di terminazione restituisce zero (false) o fino a quando non viene forzata la chiusura ciclo con un **interruzione** istruzione. Nella tabella seguente vengono riepilogate le istruzioni e le relative azioni; ognuna viene illustrata in dettaglio nelle sezioni che seguono.  
  
### <a name="iteration-statements"></a>Istruzioni di iterazione  
  
|Istruzione|Valutato|Inizializzazione|Operatore di incremento|  
|---------------|------------------|--------------------|---------------|  
|`while`|All'inizio del ciclo|No|No|  
|**do**|Alla fine del ciclo|No|No|  
|**for**|All'inizio del ciclo|Sì|Sì|  
|**basato su intervallo per**|All'inizio del ciclo|Sì|Sì|  
  
 La parte di istruzione di un'istruzione di iterazione non può essere una dichiarazione. Tuttavia, può essere un'istruzione composta che contiene una dichiarazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)
