---
title: "Classe value_compare (&lt;map&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::value_compare"
  - "std.value_compare"
  - "map/std::value_compare"
  - "value_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_compare (classe)"
ms.assetid: ea97c1d0-04b2-4d42-8d96-23522c04cc41
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe value_compare (&lt;map&gt;)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce un oggetto funzione che può confrontare gli elementi di una mappa confrontando i valori delle chiavi per determinare il relativo ordine relativo nella mappa.  
  
## Sintassi  
  
```  
class value_compare : public binary_function<value_type, value_type, bool>  
{  
public:  
   bool operator()(const value_type& _Left, const value_type& _Right) const;  
   value_compare(key_compare _Pred) : comp(_Pred);  
   protected:  
      key_compare comp;  
};  
```  
  
## Note  
 I criteri di confronto fornito da `value_compare` tra **value\_types** di interi elementi contenuti in una mappa è causato da un confronto tra le chiavi dei rispettivi elementi dalla costruzione ausiliaria della classe.  L'operatore di funzione membro viene utilizzato l'oggetto **comp** di tipo `key_compare` archiviato nell'oggetto funzione dato da `value_compare` per confrontare i componenti di chiavi di ordinamento di due elementi.  
  
 Per set e i multi\-insieme, che sono contenitori semplici in cui i valori della chiave sono identici a quelli dell'elemento, `value_compare` equivale a `key_compare`; per le mappe e i multimaps contrario, poiché il valore degli elementi di `pair` del tipo non è identico al valore della chiave dell'elemento.  
  
## Esempio  
 Vedere l'esempio relativo [value\_comp](../Topic/map::value_comp.md) per un esempio di come dichiarare e utilizzare `value_compare`.  
  
## Requisiti  
 **Intestazione:** \<map\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Struct binary\_function](../standard-library/binary-function-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)