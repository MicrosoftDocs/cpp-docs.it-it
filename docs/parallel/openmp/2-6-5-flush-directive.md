---
title: "2.6.5 flush Directive | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a2ec5f74-9c37-424a-8376-47ab4a5829a2
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.5 flush Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**arrossir** la direttiva, se esplicito o implicito, specifica un punto sequenza “cross\-thread„ a cui implementazione è obbligatoria garantire che tutti i thread del team abbiano una visualizzazione uniforme di determinati oggetti \(specificati in\) in memoria.  Ciò significa che le valutazioni precedenti di espressioni che fanno riferimento a tali oggetti sono i punteggi complete e successive non sono ancora state avviate.  Ad esempio, i compilatori devono ripristinare i valori degli oggetti dai registri alla memoria e l'hardware potrebbe avere la necessità di eseguire lo svuotamento con memorizzazione su disco scrive i buffer alla memoria e ricarica i valori degli oggetti dalla memoria.  
  
 La sintassi di **arrossir** la direttiva è la seguente:  
  
```  
#pragma omp flush [(variable-list)]  new-line  
```  
  
 Se gli oggetti che richiedono la sincronizzazione possono essere definiti dalle variabili, quindi tali variabili possono essere specificati in facoltativo *variabile\-elenco*.  se un puntatore è presente in *variabile\-elenco*, il puntatore viene scaricata, non l'oggetto che il puntatore fa riferimento a.  
  
 In **arrossir** direttiva senza variabile\-elenco sincronizza tutti gli oggetti condivisi ad eccezione degli oggetti inaccessibili con durata automatica di archiviazione.  \(Questo potrebbe avere più sovraccarico di un oggetto **arrossir** con variabile\-elenco\). In **arrossir** direttiva senza variabile\-elenco è implicito per le direttive seguenti:  
  
-   `barrier`  
  
-   La voce a e all'uscita da **critico**  
  
-   La voce a e all'uscita da `ordered`  
  
-   La voce a e all'uscita da **parallelo**  
  
-   l'uscita da **per**  
  
-   l'uscita da **sezioni**  
  
-   l'uscita da **singolo**  
  
-   La voce a e all'uscita da **parallelo per**  
  
-   La voce a e all'uscita da **sezioni parallele**  
  
 La direttiva non è implicita se a `nowait` la clausola è presente.  Notare che **arrossir** la direttiva non è implicita per uno dei seguenti valori:  
  
-   La voce con **per**  
  
-   All'interno o all'uscita da **master**  
  
-   La voce con **sezioni**  
  
-   La voce con **singolo**  
  
 Un riferimento che accede al valore di un oggetto con un tipo volatile\-qualificato si comporta come se vi sia stato su **arrossir** la direttiva specificando tale oggetto al punto di sequenza precedente.  Un riferimento che modifica il valore di un oggetto con un tipo volatile\-qualificato si comporta come se vi sia stato su **arrossir** la direttiva specificando tale oggetto al punto di sequenza successivo.  
  
 Si noti che in quanto **arrossir** la direttiva non dispone dell'istruzione in linguaggio c come parte della sintassi, esistono alcune restrizioni relative alla posizione all'interno di un programma.  vedere [Appendice C\#](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) per la grammatica formale.  Nell'esempio riportato di seguito vengono illustrate le seguenti restrizioni.  
  
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
  
 Restrizioni a **arrossir** la direttiva è la seguente:  
  
-   Una variabile specificata in un oggetto **arrossir** la direttiva non deve avere un tipo di riferimento.