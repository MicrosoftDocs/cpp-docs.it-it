---
title: 2.7.2.8 copyprivate
ms.date: 11/04/2016
ms.assetid: c382348c-c785-45b2-8ee6-a66b76b97f3e
ms.openlocfilehash: f46b8ae1d42083c770bbc84c46d13b02d5227498
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51521856"
---
# <a name="2728-copyprivate"></a>2.7.2.8 copyprivate

Il **copyprivate** clausola fornisce un meccanismo per usare una variabile privata per la trasmissione di un valore da un membro di un team agli altri membri. Rappresenta un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce questo tipo una variabile condivisa sarebbe difficile (ad esempio, in una ricorsione che richiedono una variabile diversa a ogni livello). Il **copyprivate** clausola può apparire solo il **singolo** direttiva.

La sintassi del **copyprivate** clausola è il seguente:

```

copyprivate(
variable-list
)
```

L'effetto del **copyprivate** clausola sulle variabili nel relativo elenco di variabili si verifica dopo l'esecuzione del blocco strutturato associato il **singolo** costruire e prima di qualsiasi thread di team hanno lasciato la barriera alla fine del costrutto. Quindi, in tutti gli altri thread del team, per ogni variabile nel *elenco di variabili*, tale variabile diventa definita (come se fosse assegnazione) con il valore dell'oggetto corrispondente strutturata di variabile nel thread che ha eseguito il costrutto blocco.

Restrizioni per il **copyprivate** clausola sono i seguenti:

- Una variabile specificata nella **copyprivate** clausola non deve comparire in un **privato** o **firstprivate** clausola per lo stesso **single**della direttiva.

- Se un **singolo** direttiva con un **copyprivate** clausola viene rilevata nell'extent dinamica di un'area parallela, tutte le variabili specificate nel **copyprivate** clausola deve essere privata nel contesto di inclusione.

- Una variabile specificata nella **copyprivate** clausola deve avere un operatore di assegnazione di copia non ambiguo accessibile.