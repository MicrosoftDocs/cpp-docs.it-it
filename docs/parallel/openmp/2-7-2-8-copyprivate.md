---
title: 2.7.2.8 copyprivate | Microsoft Docs
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
ms.openlocfilehash: 6815afe12344f94ed33d6b9260472f3e29eb72a0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46406360"
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