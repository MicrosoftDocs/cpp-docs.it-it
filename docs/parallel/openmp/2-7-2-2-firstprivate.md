---
title: 2.7.2.2 firstprivate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b8e44ca52ba1f76d5b3791a1d08301bf06e7eab
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687400"
---
# <a name="2722-firstprivate"></a>2.7.2.2 firstprivate
Il **firstprivate** clausola fornisce un superset della funzionalità fornite dal **privata** clausola. La sintassi del **firstprivate** clausola è il seguente:  
  
```  
firstprivate(variable-list)  
```  
  
 Le variabili specificate nella *elenco variabili* hanno **privata** semantica clausola, come descritto in [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25. La costruzione o l'inizializzazione si verifica se sono stati eseguito una volta per ogni thread, prima dell'esecuzione del thread del costrutto. Per un **firstprivate** clausola in un costrutto parallelo, il valore iniziale del nuovo oggetto privato è il valore dell'oggetto originale presente immediatamente prima che il thread che rileva un costrutto parallelo. Per un **firstprivate** clausola in un costrutto di condivisione del lavoro, il valore iniziale del nuovo oggetto privato per ogni thread che esegue il costrutto di condivisione del lavoro è il valore dell'oggetto originale che esiste prima il punto nel tempo che lo stesso thread rileva il costrutto di condivisione del lavoro. Inoltre, per gli oggetti C++, il nuovo oggetto privato per ogni thread è copia costruita dall'oggetto originale.  
  
 Le restrizioni per il **firstprivate** clausola sono i seguenti:  
  
-   Una variabile specificata un **firstprivate** clausola non deve avere un tipo incompleto o un tipo riferimento.  
  
-   Una variabile con un tipo di classe specificato come **firstprivate** deve avere un costruttore di copia accessibile e non ambigua.  
  
-   Le variabili che sono private all'interno di un'area parallela o che vengono visualizzati nel **riduzione** clausola di un **parallela** direttiva può essere specificata in un **firstprivate** clausola in un direttiva condivisione del lavoro che viene associato a un costrutto parallelo.