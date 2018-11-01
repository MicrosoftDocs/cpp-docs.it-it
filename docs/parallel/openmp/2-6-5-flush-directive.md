---
title: 2.6.5 Direttiva flush
ms.date: 11/04/2016
ms.assetid: a2ec5f74-9c37-424a-8376-47ab4a5829a2
ms.openlocfilehash: 7aca747a3d9645be4f9888b072127dc3040280fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660083"
---
# <a name="265-flush-directive"></a>2.6.5 Direttiva flush

Il **flush** direttiva, esplicita o implicita, specifica un punto di sequenza "cross-thread" in corrispondenza del quale l'implementazione è necessario per assicurare che tutti i thread in un team abbiano una visualizzazione coerente di determinati oggetti (specificati di seguito) in memoria. Ciò significa che precedenti versioni di valutazione delle espressioni che fanno riferimento a tali oggetti sono state completate e le valutazioni successive non sono stato avviato. Ad esempio, i compilatori devono ripristinare i valori degli oggetti da registri alla memoria e hardware potrebbe essere necessario scaricare i buffer di scrittura per la memoria e ricaricare i valori degli oggetti dalla memoria.

La sintassi del **flush** direttiva è come segue:

```
#pragma omp flush [(variable-list)]  new-line
```

Se tutti gli oggetti che richiedono la sincronizzazione possono essere designati da variabili, quindi tali variabili possono essere specificate in facoltativo *elenco di variabili*. Se è presente in un puntatore il *elenco di variabili*, il puntatore viene scaricato, non l'oggetto cui fa riferimento per il puntatore del mouse.

Oggetto **flush** direttiva senza una *elenco variabili* Sincronizza oggetti condivisi tutto tranne gli oggetti accessibili con durata di archiviazione automatica. (È probabile che presentano un overhead maggiore rispetto a un **flush** con un *elenco variabili*.) Oggetto **flush** direttiva senza una *elenco variabili* è implicita per le direttive seguenti:

- `barrier`

- In entrata e l'uscita da **critici**

- In entrata e l'uscita da `ordered`

- In entrata e l'uscita da **parallele**

- AT uscire da **per**

- AT uscire da **sezioni**

- AT uscire da **singolo**

- In entrata e l'uscita da **paralleli per**

- In entrata e l'uscita da **sezioni in parallelo**

La direttiva non è implicita se un `nowait` clausola è presente. Si noti che il **flush** direttiva non è implicita per gli elementi seguenti:

- Movimento per **per**

- In ingresso da o Esci dal **master**

- Movimento per **sezioni**

- Movimento per **singolo**

Un riferimento che accede al valore di un oggetto con un tipo qualificato volatile si comporta come se vi fosse un **flush** direttiva che specifica l'oggetto in corrispondenza del punto di sequenza precedente. Un riferimento che modifica il valore di un oggetto con un tipo qualificato volatile si comporta come se vi fosse un **flush** direttiva che specifica l'oggetto in corrispondenza del punto di sequenza successivo.

Si noti che poiché il **flush** direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni nella relativa posizione all'interno di un programma. Visualizzare [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale. L'esempio seguente illustra queste restrizioni.

```
/* ERROR - The flush directive cannot be the immediate
*          substatement of an if statement.
*/
if (x!=0)
   #pragma omp flush (x)
...

/* OK - The flush directive is enclosed in a
*      compound statement
*/
if (x!=0) {
   #pragma omp flush (x)
}
```

Restrizioni per il **flush** direttiva sono i seguenti:

- Una variabile specificata una **flush** direttiva non deve avere un tipo di riferimento.