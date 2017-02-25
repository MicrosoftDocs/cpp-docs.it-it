---
title: "Classe mem_fun1_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mem_fun1_t"
  - "std.mem_fun1_t"
  - "std::mem_fun1_t"
  - "xfunctional/std::mem_fun1_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mem_fun1_t (classe)"
ms.assetid: 01a8c2c2-b2f7-4e3f-869c-5b5b9f06ea54
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe mem_fun1_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di adattatori che consente a una funzione membro **non\_const** che accetta un singolo argomento di chiamare gli operatori come oggetto funzione unario una volta inizializzata con un argomento di un puntatore.  
  
## Sintassi  
  
```  
template<class Result, class Type, class Arg>  
   class mem_fun1_t : public binary_function<Type *, Arg, Result> {  
      explicit mem_fun1_t(  
         Result (Type::* _Pm )( Arg )   
         );  
      Result operator()(  
         Type* _Pleft,   
         Arg _Right  
         ) const;  
   };  
```  
  
#### Parametri  
 `_Pm`  
 Un puntatore a una funzione membro di classe **Tipo** da convertire in un oggetto funzione.  
  
 `_Pleft`  
 L'oggetto che la funzione membro di `_Pm` viene chiamata a.  
  
 `_Right`  
 L'argomento che produce a `_Pm`.  
  
## Valore restituito  
 Una funzione binaria adattabile.  
  
## Note  
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro di una **Tipo**, in un oggetto membro privato.  Definisce la relativa funzione membro `operator()` come restituire \(**\_Pleft**\-\>\* `_Pm`\) \(**\_Right**\).  
  
## Esempio  
 Il costruttore di `mem_fun1_t` non viene in genere utilizzato direttamente; la funzione di supporto `mem_fun` viene utilizzata per adattare le funzioni membro.  Vedere [mem\_fun](../Topic/mem_fun%20Function.md) per un esempio di come utilizzare gli adattatori di funzione membro.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)