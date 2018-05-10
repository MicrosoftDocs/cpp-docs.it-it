---
title: 2.7.2.8 copyprivate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c382348c-c785-45b2-8ee6-a66b76b97f3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c809f297da5059a98915e8055dfe23f45074366f
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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