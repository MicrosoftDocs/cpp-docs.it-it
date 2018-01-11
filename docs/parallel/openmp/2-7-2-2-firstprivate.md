---
title: 2.7.2.2 firstprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1e4f73b3cb418204008fda9962cf67797c8182f4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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