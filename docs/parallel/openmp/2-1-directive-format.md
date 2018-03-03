---
title: 2.1 formato direttive | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 918b6445-d35e-4176-9565-b045be941b4d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c3ff4e0078ffd086ce3b62d8927184188f0ebdd8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="21-directive-format"></a>2.1 Formato direttive
La sintassi di una direttiva OpenMP è formalmente specificata dalla grammatica in [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)e in modo informale come indicato di seguito:  
  
```  
#pragma omp directive-name  [clause[ [,] clause]...] new-line  
```  
  
 Ogni direttiva inizia con **#pragma omp**, per ridurre il rischio di conflitti con altre direttive pragma (estensioni non OpenMP o il fornitore per OpenMP) con gli stessi nomi. Il resto della direttiva segue le convenzioni degli standard per le direttive del compilatore C e C++. In particolare, lo spazio vuoto può essere utilizzato prima e dopo il  **#** , e in alcuni casi lo spazio vuoto deve essere utilizzato per separare le parole in una direttiva. Pre-elaborazione token dopo il **#pragma omp** sono soggetti a sostituzione di macro.  
  
 Le direttive tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzate nelle direttive non è significativo. Le clausole in direttive possono essere ripetute in base alle esigenze, soggette alle restrizioni elencate nella descrizione di ogni clausola. Se *elenco variabili* viene visualizzato in una clausola, è necessario specificare solo le variabili. Un solo *nome di direttiva* può essere specificato per ogni direttiva.  Ad esempio, la direttiva seguente non è consentita:  
  
```  
/* ERROR - multiple directive names not allowed */  
#pragma omp parallel barrier  
```  
  
 Una direttiva OpenMP verrà applicata al massimo una successiva istruzione, che deve essere un blocco strutturato.