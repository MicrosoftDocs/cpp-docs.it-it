---
title: 2.7.2.3 lastprivate
ms.date: 11/04/2016
ms.assetid: 77f6a5c9-704f-4a88-8476-29db852ed800
ms.openlocfilehash: 15f9af23c4f4e1c0ce2914a979f7a41e7b4a6bc1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428458"
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