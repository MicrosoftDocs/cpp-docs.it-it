---
title: 2.7.2.3 lastprivate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 77f6a5c9-704f-4a88-8476-29db852ed800
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08f331862d6e48b1c0882382285ddffa9699e79c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687342"
---
# <a name="2723-lastprivate"></a>2.7.2.3 lastprivate
Il `lastprivate` clausola fornisce un superset della funzionalità fornite dal `private` clausola. La sintassi del `lastprivate` clausola è il seguente:  
  
```  
lastprivate(variable-list)  
```  
  
 Le variabili specificate nella *elenco variabili* hanno `private` semantica clausola. Quando un `lastprivate` viene visualizzata clausola nella direttiva che identifica un costrutto di condivisione del lavoro, il valore di ogni `lastprivate` variabile in modo sequenziale ultima iterazione del ciclo associato, o la direttiva di sezione ultima livello lessicale, viene assegnato al oggetto originale della variabile. Le variabili non assegnato un valore per l'ultima iterazione del **per** o **parallela per**, o dalla sezione dell'ultimo livello lessicale la **sezioni** o  **parallela sezioni** direttiva, presentano valori indeterminati dopo il costrutto. Oggetti secondari non assegnati anche avere valore indeterminato dopo il costrutto.  
  
 Le restrizioni per il `lastprivate` clausola sono i seguenti:  
  
-   Tutte le restrizioni per `private` si applicano.  
  
-   Una variabile con un tipo di classe specificato come `lastprivate` deve avere un operatore di assegnazione di copia accessibile e non ambigua.  
  
-   Le variabili che sono private all'interno di un'area parallela o che vengono visualizzati nel `reduction` clausola di un **parallela** direttiva può essere specificata in un `lastprivate` clausola in una direttiva di condivisione del lavoro che viene associato a un costrutto parallelo.