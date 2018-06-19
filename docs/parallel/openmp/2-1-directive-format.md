---
title: 2.1 formato direttive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 918b6445-d35e-4176-9565-b045be941b4d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1eec5a2f0e91df6e8d71797199bd3a3911a3aab0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687272"
---
# <a name="21-directive-format"></a>2.1 Formato direttive
La sintassi di una direttiva OpenMP è formalmente specificata dalla grammatica in [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)e in modo informale come indicato di seguito:  
  
```  
#pragma omp directive-name  [clause[ [,] clause]...] new-line  
```  
  
 Ogni direttiva inizia con **#pragma omp**, per ridurre il rischio di conflitti con altre direttive pragma (estensioni non OpenMP o il fornitore per OpenMP) con gli stessi nomi. Il resto della direttiva segue le convenzioni degli standard per le direttive del compilatore C e C++. In particolare, lo spazio vuoto può essere utilizzato prima e dopo il **#**, e in alcuni casi lo spazio vuoto deve essere utilizzato per separare le parole in una direttiva. Pre-elaborazione token dopo il **#pragma omp** sono soggetti a sostituzione di macro.  
  
 Le direttive tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzate nelle direttive non è significativo. Le clausole in direttive possono essere ripetute in base alle esigenze, soggette alle restrizioni elencate nella descrizione di ogni clausola. Se *elenco variabili* viene visualizzato in una clausola, è necessario specificare solo le variabili. Un solo *nome di direttiva* può essere specificato per ogni direttiva.  Ad esempio, la direttiva seguente non è consentita:  
  
```  
/* ERROR - multiple directive names not allowed */  
#pragma omp parallel barrier  
```  
  
 Una direttiva OpenMP verrà applicata al massimo una successiva istruzione, che deve essere un blocco strutturato.