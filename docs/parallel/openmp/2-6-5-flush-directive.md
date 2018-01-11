---
title: 2.6.5 direttiva flush | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: a2ec5f74-9c37-424a-8376-47ab4a5829a2
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7607070692941606b863be9248b2d69f093f3a13
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
-   In entrata e l'uscita da`ordered`  
  
-   In entrata e l'uscita da **parallela**  
  
-   AT uscire da **per**  
  
-   Per chiudere at **sezioni**  
  
-   Per chiudere at **singolo**  
  
-   In entrata e l'uscita da **paralleli per**  
  
-   In entrata e l'uscita da **parallela sezioni**  
  
 La direttiva non è implicita, se un `nowait` clausola è presente. Si noti che il **scaricamento** direttiva non è implicita per qualsiasi delle operazioni seguenti:  
  
-   Voce di **per**  
  
-   Alla voce o Esci dal **master**  
  
-   Voce di **sezioni**  
  
-   Voce di **singolo**  
  
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