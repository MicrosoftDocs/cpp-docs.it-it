---
title: "Effetti collaterali | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "valutazione di espressioni, effetti collaterali"
  - "effetti secondari nella valutazione di un'espressione"
ms.assetid: d9b3004a-830e-43a0-bea5-8989d501d670
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Effetti collaterali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'ordine di valutazione delle espressioni viene definito dall'implementazione specifica, ad eccezione di quando il linguaggio garantisce un particolare ordine di valutazione \(come descritto in [Precedenza e ordine di valutazione](../c-language/precedence-and-order-of-evaluation.md)\).  Ad esempio, gli effetti collaterali si verificano nelle chiamate di funzione seguenti:  
  
```  
add( i + 1, i = j + 2 );  
myproc( getc(), getc() );  
```  
  
 Gli argomenti di una chiamata di funzione possono essere valutati in qualsiasi ordine.  L'espressione `i + 1` può essere valutata prima di `i = j + 2` o `i = j + 2` può essere valutata prima di `i + 1`.  In ciascuno dei casi il risultato sarà differente.  Ugualmente, non è possibile garantire quali i caratteri vengano effettivamente passati a `myproc`.  Poiché operazioni di incrementi unario e di decremento includono assegnazioni, tali operazioni possono causare effetti collaterali, come illustrato nell'esempio seguente:  
  
```  
x[i] = i++;  
```  
  
 In questo esempio, il valore di `x` che viene modificato è imprevedibile.  Il valore di indice potrebbe essere il valore nuovo o precedente di `i`.  Il risultato può variare in base a compilatori o livelli di ottimizzazione diversi.  
  
 Poiché il linguaggio C non definisce l'ordine di valutazione degli effetti collaterali, entrambi i metodi di valutazione illustrati in precedenza sono corretti ed entrambi possono essere implementati.  Per assicurarsi che il codice sia portabile e chiaro, evitare le istruzioni che dipendono da un particolare ordine di valutazione per gli effetti collaterali.  
  
## Vedere anche  
 [Valutazione di espressioni](../c-language/expression-evaluation-c.md)