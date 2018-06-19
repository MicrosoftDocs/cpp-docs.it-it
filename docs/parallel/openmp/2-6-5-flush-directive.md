---
title: 2.6.5 direttiva flush | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a2ec5f74-9c37-424a-8376-47ab4a5829a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ad3b34195015f57955c5be685807ec43f0a8f8c6
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692337"
---
# <a name="265-flush-directive"></a>2.6.5 Direttiva flush
Il **scaricamento** direttiva, esplicita o implicita, specifica un punto di sequenza "cross-thread" in corrispondenza del quale l'implementazione è necessario per assicurare che tutti i thread in un team dispongano di una visualizzazione coerenza di determinati oggetti (specificati di seguito) in memoria. Ciò significa che precedenti valutazioni delle espressioni che fanno riferimento a tali oggetti siano complete e le successive valutazioni non hanno ancora iniziato. Ad esempio, compilatori necessario ripristinare i valori degli oggetti da registri in memoria e hardware potrebbe essere necessario scaricare i buffer di scrittura per la memoria e ricaricare i valori degli oggetti dalla memoria.  
  
 La sintassi del **scaricamento** direttiva è come segue:  
  
```  
#pragma omp flush [(variable-list)]  new-line  
```  
  
 Se tutti gli oggetti che richiedono la sincronizzazione è possibile designare per le variabili, quindi tali variabili possono essere specificate nel parametro *elenco variabili*. Se è presente in un puntatore di *elenco variabili*, l'indicatore di misura viene cancellata, non l'oggetto cui fa riferimento al puntatore del mouse.  
  
 Oggetto **scaricamento** senza un *elenco variabili* consente di sincronizzare oggetti condivisi, ad eccezione degli oggetti inaccessibili con durata di archiviazione automatica. (È probabile che presentano un overhead maggiore rispetto a un **scaricamento** con un *elenco variabili*.) A **scaricamento** senza un *elenco variabili* è implicita per le direttive seguenti:  
  
-   `barrier`  
  
-   In entrata e l'uscita da **critico**  
  
-   In entrata e l'uscita da `ordered`  
  
-   In entrata e l'uscita da **paralleli**  
  
-   AT uscire da **per**  
  
-   AT uscire da **sezioni**  
  
-   AT uscire da **singolo**  
  
-   In entrata e l'uscita da **paralleli per**  
  
-   In entrata e l'uscita da **paralleli sezioni**  
  
 La direttiva non è implicita, se un `nowait` clausola è presente. Si noti che il **scaricamento** direttiva non è implicita per qualsiasi delle operazioni seguenti:  
  
-   Voce per **per**  
  
-   Voce da o Esci dal **master**  
  
-   Voce per **sezioni**  
  
-   Voce a **singolo**  
  
 Un riferimento che accede al valore di un oggetto con un tipo qualificato volatile si comporta come se ci fosse un **scaricamento** direttiva specifica di tale oggetto al precedente punto di sequenza. Un riferimento che modifica il valore di un oggetto con un tipo qualificato volatile si comporta come se ci fosse un **scaricamento** direttiva specifica di tale oggetto al punto di sequenza successivo.  
  
 Si noti che poiché il **scaricamento** direttiva non dispone di un'istruzione del linguaggio C come parte della relativa sintassi, esistono alcune restrizioni relative alla relativa posizione all'interno di un programma. Vedere [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale. Nell'esempio seguente vengono illustrate queste restrizioni.  
  
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
  
 Restrizioni per il **scaricamento** direttiva sono i seguenti:  
  
-   Una variabile specificata un **scaricamento** direttiva non deve avere un tipo di riferimento.