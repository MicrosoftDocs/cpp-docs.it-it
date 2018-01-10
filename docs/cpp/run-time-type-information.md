---
title: Run-Time Type Information | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs: C++
helpviewer_keywords:
- RTTI compiler option
- run-time type information
- run time, type checking
- type information, run-time type checking
- run-time checks, type checking
ms.assetid: becbd0e5-0439-4c61-854f-8a74f7160c54
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0b0b0124a69a0110bda94055964fbcdb54e5a754
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="run-time-type-information"></a>Informazioni sui tipi di runtime
Le informazioni sui tipi in fase di esecuzione (RTTI) sono un meccanismo che consente di determinare il tipo di un oggetto durante l'esecuzione del programma. RTTI è stato aggiunto al linguaggio C++ perché molti fornitori di librerie di classi stavano implementando questa funzionalità per conto proprio. Questa situazione ha provocato incompatibilità tra le librerie. Pertanto, è diventato evidente che erano necessario fornire supporto per le informazioni sui tipi in fase di esecuzione a livello di linguaggio.  
  
 Per maggiore chiarezza, la discussione di RTTI si limita quasi completamente ai puntatori. Tuttavia, i concetti illustrati sono applicabili anche ai riferimenti.  
  
 Esistono tre elementi principali del linguaggio C++ per eseguire informazioni sui tipi in fase di esecuzione:  
  
-   Il [dynamic_cast](../cpp/dynamic-cast-operator.md) operatore.  
  
     Utilizzato per la conversione dei tipi polimorfici.  
  
-   Il [typeid](../cpp/typeid-operator.md) operatore.  
  
     Utilizzato per l'identificazione del tipo esatto di un oggetto.  
  
-   Il [type_info](../cpp/type-info-class.md) classe.  
  
     Utilizzata per conservare le informazioni sul tipo restituite dall'operatore `typeid`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cast](../cpp/casting.md)