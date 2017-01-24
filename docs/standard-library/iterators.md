---
title: "Iteratori | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "convenzioni per iteratori"
  - "libreria C++ standard, convenzioni per iteratori"
ms.assetid: 2f746be7-b37d-4bfc-bf05-be4336ca982f
caps.latest.revision: 12
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Iteratori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un iteratore è un oggetto in grado di scorrere gli elementi in un contenitore STL e fornire accesso ai singoli elementi.  Tutti i contenitori STL forniscono iteratori in modo che gli algoritmi possano accedere ai relativi elementi in maniera standard, senza doversi preoccupare del tipo di contenitore in cui vengono archiviati gli elementi.  
  
 È possibile utilizzare gli iteratori in modo esplicito utilizzando un membro e funzioni globali, ad esempio begin \(\) ed end \(\) e operatori come \+\+ e \-\-per spostarsi avanti o indietro.  È inoltre possibile utilizzare gli iteratori in modo implicito con un ciclo range\-for o \(per alcuni tipi di iteratore\) l'operatore di indice \[\].  
  
 In STL, l'inizio di una sequenza o di un intervallo è il primo elemento.  La fine di una sequenza o di un intervallo è sempre definita come un elemento dopo l'ultimo elemento.  Le funzioni globali begin ed end restituiscono iteratori a un contenitore specificato.  Il ciclo iteratore esplicito standard su tutti gli elementi in un contenitore è simile al seguente:  
  
```  
  
vector<int> vec{ 0,1,2,3,4 };  
for (auto it = begin(vec); it != end(vec); it++)  
{  
    // Access element using dereference operator  
    cout << *it << " ";  
}  
```  
  
 La stessa operazione può essere eseguita in modo più semplice con un ciclo range\-for:  
  
```  
for (auto num : vec)  
    {  
        // no deference operator  
        cout << num << " ";  
    }  
```  
  
 Le categorie di iteratori disponibili sono cinque.  Per la potenza, le categorie sono riepilogate in ordine crescente come:  
  
-   **Output**.  Un iteratore di output `X` può scorrere in avanti su una sequenza utilizzando l’operatore \+\+ e scrivere un elemento una sola volta utilizzando l’operatore \*.  
  
-   **Input**.  Un iteratore di input `X` può scorrere in avanti in una sequenza utilizzando l’operatore \+\+ e leggere un elemento per un numero di volte qualsiasi utilizzando l’operatore \*.  È possibile confrontare gli iteratori di input utilizzando gli operatori \+\+ e \! \=.  Dopo aver incrementato qualsiasi copia di un iteratore di input, non sarà possibile confrontare, dereferenziare o incrementare nessuna delle altre copie in modo sicuro.  
  
-   **In avanti**.  Un iteratore in avanti `X` può scorrere in avanti su una sequenza utilizzando l’operatore \+\+ e leggere qualsiasi elemento o scrivere elementi non const un numero qualsiasi di volte utilizzando l’operatore \*.  È possibile accedere ai membri degli elementi utilizzando l'operatore \-\> e confrontare gli iteratori in avanti utilizzando gli operatori \=\= e \!\=.  È anche possibile eseguire più copie di un iteratore in avanti, ciascuna delle quali può essere dereferenziata e incrementata in modo indipendente.  Un iteratore in avanti che viene inizializzato senza riferimento ad alcun contenitore viene denominato iteratore in avanti null.  Gli iteratori in avanti null risultano sempre uguali.  
  
-   Bidirezionale.  Un iteratore bidirezionale `X` può sostituire un iteratore in avanti.  È tuttavia possibile decrementare anche un iteratore bidirezionale come in \-\-`X`, `X`\-\- o \(`V` \= \*`X`\-\-\).  È possibile accedere ai membri degli elementi e confrontare gli iteratori bidirezionali nello stesso modo degli iteratori in avanti.  
  
-   **Accesso casuale**.  Un iteratore ad accesso casuale `X` può sostituire un iteratore bidirezionale.  Con un iteratore ad accesso casuale, è possibile utilizzare l'operatore di indice \[\] per accedere agli elementi.  È possibile utilizzare gli operatori \+, \-, \+\= e \-\= per spostarsi in avanti o indietro di un numero specificato di elementi e per calcolare la distanza tra gli iteratori.  È possibile confrontare gli iteratori bidirezionali utilizzando \=\=,\!\=, \<, \>, \<\= e \>\=.  
  
 Tutti gli iteratori possono essere assegnati o copiati.  Si presuppone che si tratti di oggetti semplici, spesso passati e restituiti per valore, non per riferimento.  Si noti anche che nessuna delle operazioni descritte in precedenza può generare un'eccezione quando viene eseguita su un iteratore valido.  
  
 La gerarchia di categorie di iteratore può essere riepilogata mostrando tre sequenze.  Per accedere a una sequenza in sola scrittura, è possibile usare:  
  
```  
output iterator  
   -> forward iterator  
   -> bidirectional iterator  
   -> random-access iterator  
```  
  
 La freccia destra significa "può essere sostituito da". Qualsiasi algoritmo che chiami un iteratore di output dovrebbe funzionare correttamente con un iteratore in avanti, ad esempio, ma *non* viceversa.  
  
 Per eseguire l'accesso di sola lettura a una sequenza, è possibile usare:  
  
```  
input iterator  
   -> forward iterator  
   -> bidirectional iterator  
   -> random-access iterator  
```  
  
 In questo caso, un iteratore di input è il più debole di tutte le categorie.  
  
 Infine, per accedere a una sequenza in lettura\/scrittura, è possibile usare:  
  
```  
forward iterator  
   -> bidirectional iterator  
   -> random-access iterator  
```  
  
 Un puntatore a oggetto può sempre fungere da iteratore ad accesso casuale, quindi può essere usato come qualsiasi categoria di iteratore se supporta l'accesso corretto in lettura\/scrittura alla sequenza che definisce.  
  
 Un iteratore `Iterator` diverso da un puntatore all'oggetto deve anche definire i tipi di membri necessari per la specializzazione `iterator_traits<Iterator>`.  Si noti che possono essere soddisfatti questi requisiti derivando `Iterator` dalla classe base pubblica [iteratore](../standard-library/iterator-struct.md).  
  
 È importante comprendere le promesse e le limitazioni di ogni categoria di iteratore per vedere come vengono usati gli iteratori dai contenitori e dagli algoritmi di STL.  
  
> [!NOTE]
>  È possibile evitare l'utilizzo di iteratori in modo esplicito utilizzando cicli range\-for.  Per altre informazioni, vedere [cicli \(Modern C\+\+\)](http://msdn.microsoft.com/it-it/b1b2779c-750e-4576-a514-a84178eae9da).  
  
 [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] ora offre iteratori verificati e iteratori di debug per garantire che i limiti del contenitore non vengano sovrascritti.  Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md) e [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)