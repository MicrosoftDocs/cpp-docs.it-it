---
title: 2.7.2.1 private
ms.date: 11/04/2016
ms.assetid: 079b4b84-f2b3-4050-a0ac-289493c36b3d
ms.openlocfilehash: c1a2560eb80c848605698c435e3a0f0f7e66b75a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536955"
---
# <a name="2721-private"></a>2.7.2.1 private

Il `private` clausola vengono dichiarate le variabili nell'elenco variabili per essere privata per ogni thread in un team. La sintassi del `private` clausola è il seguente:

```
private(variable-list)
```

Il comportamento di una variabile specificata un `private` clausola è come indicato di seguito. Un nuovo oggetto con durata di archiviazione automatica viene allocato per il costrutto. La dimensione e l'allineamento del nuovo oggetto sono determinati dal tipo della variabile. Questa allocazione avviene una volta per ogni thread del team e viene richiamato un costruttore predefinito per un oggetto della classe se necessario; in caso contrario, il valore iniziale è indeterminato.  L'oggetto originale fa riferimento la variabile ha un valore indeterminato al momento dell'accesso a un costrutto non deve essere modificata all'interno di extent dinamico del costrutto e ha un valore indeterminato all'uscita dal costrutto.

Dell'extent lessicale del costrutto direttivo, la variabile fa riferimento il nuovo oggetto privato allocato dal thread.

Le restrizioni per il `private` clausola sono i seguenti:

- Una variabile con un tipo di classe specificato in un `private` clausola deve avere un costruttore predefinito accessibile e non ambigua.

- Una variabile specificata una `private` clausola non deve contenere un **const**-tipo completo, a meno che non dispone di una classe di tipo con un `mutable` membro.

- Una variabile specificata un `private` clausola non deve avere un tipo incompleto o un tipo riferimento.

- Le variabili incluse nella `reduction` clausola di una **parallele** direttiva non è possibile specificare un `private` clausola in una direttiva condivisione del lavoro associata a un costrutto parallelo.