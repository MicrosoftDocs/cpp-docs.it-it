---
title: "unchecked_adjacent_difference | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.unchecked_adjacent_difference"
  - "std::unchecked_adjacent_difference"
  - "unchecked_adjacent_difference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unchecked_adjacent_difference (funzione)"
ms.assetid: 3a6b0b49-a84b-40b1-bcd5-3bf76c6ef7d7
caps.latest.revision: 14
caps.handback.revision: 14
author: "ghogen"
ms.author: "ghogen"
manager: "douge"
---
# unchecked_adjacent_difference
Uguale a [adjacent\_difference](../Topic/adjacent_difference.md), ma consente l'utilizzo di un iteratore non verificato come iteratore di output quando SECURE\_SCL \= 1 è definito.`unchecked_adjacent_difference` è definito nel `stdext` dello spazio dei nomi.  
  
> [!NOTE]
>  Questo algoritmo è un'estensione Microsoft della libreria C\+\+ standard. Il codice implementato mediante questo algoritmo non sarà portabile.  
  
## Sintassi  
  
```  
template<class InputIterator, class OutIterator>  
   OutputIterator unchecked_adjacent_difference(  
      InputIterator_First,  
      InputIterator _Last,  
      OutputIterator_Result   
   );  
  
template<class InputIterator, class OutputIterator, class BinaryOperation>  
   OutputIterator unchecked_adjacent_difference(  
      InputIterator_First,  
      InputIterator _Last,  
      OutputIterator_Result,   
      BinaryOperation _Binary_op  
   );  
```  
  
#### Parametri  
 `_First`  
 Iteratore di input che punta al primo elemento dell'intervallo di input i cui elementi devono essere differenziati dai rispettivi predecessori o sulla cui coppia di valori deve operare un'altra operazione binaria specificata.  
  
 `_Last`  
 Iteratore di input che punta all'ultimo elemento dell'intervallo di input in cui gli elementi devono essere differenziati con i rispettivi predecessori o in cui sulla coppia di valori deve operare un'altra operazione binaria specificata.  
  
 `_Result`  
 Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di differenze o i risultati dell'operazione specificata.  
  
 `_Binary_op`  
 Operazione binaria da applicare nell'operazione generalizzata che sostituisce l'operazione di sottrazione della procedura di differenziazione.  
  
## Valore restituito  
 Un iteratore di output che punta alla fine dell'intervallo di destinazione: `_Result` \+ \(`_Last` \- `_First`\).  
  
## Note  
 Vedere [adjacent\_difference](../Topic/adjacent_difference.md) per un esempio di codice.  
  
 Per ulteriori informazioni sugli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
## Requisiti  
 **Intestazione:** \<numeric\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)