---
title: 2.7.2.3 lastprivate | Microsoft Docs
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
ms.openlocfilehash: 25edca8391eb094691ef4fea3c360d351f979b43
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385963"
---
# <a name="2723-lastprivate"></a>2.7.2.3 lastprivate

Il `lastprivate` clausola offre un soprainsieme delle funzionalità fornite dal `private` clausola. La sintassi del `lastprivate` clausola è il seguente:

```
lastprivate(variable-list)
```

Le variabili specificate nella *variabile-list* hanno `private` semantica clausola. Quando un `lastprivate` viene visualizzata nella direttiva che identifica un costrutto di condivisione del lavoro, il valore di ogni clausola `lastprivate` è assegnare la variabile da in modo sequenziale ultima iterazione del ciclo associato o la direttiva di sezione ultima livello lessicale, il oggetto originale della variabile. Le variabili non assegnato un valore dall'ultima iterazione del **per** o **parallele per**, o dal livello lessicale ultima sezione del **sezioni** o  **le sezioni in parallelo** direttiva, presentano valori indeterminati dopo il costrutto. Oggetti secondari non assegnati anche avere un valore indeterminato dopo il costrutto.

Le restrizioni per il `lastprivate` clausola sono i seguenti:

- Tutte le restrizioni per `private` applicare.

- Una variabile con un tipo di classe specificato come `lastprivate` deve avere un operatore di assegnazione copia accessibile e non ambigua.

- Le variabili che appartengono all'interno di un'area parallela o che vengono visualizzate nel `reduction` clausola di un **parallele** direttiva non è possibile specificare un `lastprivate` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.