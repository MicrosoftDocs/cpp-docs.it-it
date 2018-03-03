---
title: 2.7.2.8 copyprivate | Documenti Microsoft
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
ms.assetid: c382348c-c785-45b2-8ee6-a66b76b97f3e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 21d739fb3ead0512776cfd996b59f1ceab5e8250
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="2728-copyprivate"></a>2.7.2.8 copyprivate
Il **copyprivate** clausola fornisce un meccanismo per l'utilizzo di una variabile privata per la trasmissione di un valore da un membro di un gruppo per gli altri membri. È un'alternativa all'utilizzo di una variabile condivisa per il valore quando tale variabile condivisa fornendo sarebbe difficile (ad esempio, in una ricorsione di richiedere una variabile diversa a ogni livello). Il **copyprivate** clausola può apparire solo il **singolo** direttiva.  
  
 La sintassi del **copyprivate** clausola è il seguente:  
  
```  
  
copyprivate(  
variable-list  
)  
  
```  
  
 L'effetto del **copyprivate** clausola sulle variabili nel relativo elenco di variabili si verifica dopo l'esecuzione di un blocco strutturato associato il **singolo** costruire e prima di thread nel team hanno lasciato la barriera alla fine del costrutto. Quindi, in tutti gli altri thread del team, per ogni variabile nel *elenco variabili*, tale variabile diventa definita (come se fosse assegnazione) con il valore dell'oggetto corrispondente strutturata di variabile nel thread in cui è stato eseguito il costrutto blocco.  
  
 Restrizioni per il **copyprivate** clausola sono i seguenti:  
  
-   Una variabile specificata nella **copyprivate** clausola non deve essere presenti un **privata** o **firstprivate** clausola per lo stesso **singolo**direttiva.  
  
-   Se un **singolo** direttiva con un **copyprivate** clausola viene rilevata un extent dinamica di un'area parallela, tutte le variabili specificate nel **copyprivate** clausola deve essere privata nel contesto di inclusione.  
  
-   Una variabile specificata nella **copyprivate** clausola deve avere un operatore di assegnazione di copia non ambiguo accessibile.