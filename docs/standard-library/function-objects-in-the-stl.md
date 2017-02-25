---
title: "Oggetti funzione nella libreria STL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funtori"
  - "Libreria standard di C++, funtori"
  - "Libreria standard di C++, funzione (oggetti)"
  - "funzione (oggetti)"
ms.assetid: 85f8a735-2c7b-4f10-9c4d-95c666ec4192
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Oggetti funzione nella libreria STL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un *oggetto funzione*, o *funtore*, è qualsiasi tipo che implementa operator\(\). Questo operatore è definito *operatore di chiamata* o talvolta *operatore di applicazione*. La libreria di modelli standard usa oggetti funzione principalmente come criteri di ordinamento per i contenitori e negli algoritmi.  
  
 Gli oggetti funzione offrono due vantaggi principali rispetto a una chiamata di funzione diretta. Il primo consiste nel fatto che un oggetto funzione può contenere lo stato. Il secondo è che un oggetto funzione è un tipo e quindi può essere usato come parametro di modello.  
  
## Creazione di un oggetto Function  
 Per creare un oggetto funzione, creare un tipo e implementare operator\(\), ad esempio:  
  
```  
class Functor { public: int operator()(int a, int b) { return a < b; } }; int main() { Functor f; int a = 5; int b = 7; int ans = f(a, b); }  
```  
  
 L'ultima riga della funzione `main` mostra come chiamare l'oggetto function. Questa chiamata è simile a una chiamata a una funzione, ma in realtà chiama operator\(\) del tipo Functor. Questa somiglianza tra la chiamata a un oggetto funzione e una funzione rappresenta il modo in cui è stato coniato il termine oggetto funzione.  
  
## Oggetti funzione e contenitori  
 La libreria di modelli standard contiene diversi oggetti funzione nel file di intestazione [\<functional\>](../standard-library/functional.md). Uno degli usi di questi oggetti funzione è come criterio di ordinamento per i contenitori. Ad esempio, il contenitore `set` è dichiarato come segue:  
  
```  
template < class Key, class Traits=less<Key>, class Allocator=allocator<Key> > class set  
```  
  
 Il secondo argomento di modello è l'oggetto funzione `less`. Questo oggetto funzione restituisce `true` se il primo parametro passato è minore del secondo parametro passato. Siccome alcuni contenitori ordinano i relativi elementi, il contenitore necessita di un modo per confrontare due elementi, che in questo caso è l'uso dell'oggetto funzione. È possibile definirne i propri criteri di ordinamento per i contenitori creando un oggetto funzione e specificandolo nell'elenco di modelli del contenitore.  
  
## Oggetti funzione e algoritmi  
 Un altro uso degli oggetti funzione è negli algoritmi. Ad esempio, l'algoritmo `remove_if` è dichiarato come segue:  
  
```  
template<class ForwardIterator, class Predicate> ForwardIterator remove_if( ForwardIterator _First, ForwardIterator _Last, Predicate _Pred );  
```  
  
 L'ultimo argomento a `remove_if` è un oggetto funzione che restituisce un valore booleano \(un *predicato*\). Se il risultato dell'oggetto funzione è `true`, l'elemento viene rimosso dal contenitore a cui accedono gli iteratori `_First``_Last`. È possibile usare uno degli oggetti funzione dichiarati nell'intestazione [\<functional\>](../standard-library/functional.md) per l'argomento `_Pred` o è possibile crearne uno.  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)