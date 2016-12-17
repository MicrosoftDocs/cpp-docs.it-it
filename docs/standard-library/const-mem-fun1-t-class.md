---
title: "Classe const_mem_fun1_t | Microsoft Docs"
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
  - "std.const_mem_fun1_t"
  - "xfunctional/std::const_mem_fun1_t"
  - "std::const_mem_fun1_t"
  - "const_mem_fun1_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_mem_fun1_t (classe)"
ms.assetid: 250fac30-9663-4133-9051-6303f76ea259
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe const_mem_fun1_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di adattatori che consente una funzione membro di **const** che accetta un solo argomento da chiamare come oggetto funzione binario una volta inizializzata con un argomento del puntatore.  
  
## Sintassi  
  
```  
template<class Result, class Type, class Arg>  
   class const_mem_fun1_t  
      : public binary_function<const Type *, Arg, Result>   
   {  
   explicit const_mem_fun1_t( Result ( Type::* _Pm )( Arg ) const );  
   Result operator()(  
      const Type* _Pleft,   
      Arg _Right  
   ) const;  
   };  
```  
  
#### Parametri  
 `_Pm`  
 Un puntatore a una funzione membro di classe **Tipo** da convertire in un oggetto funzione.  
  
 `_Pleft`  
 L'oggetto di **const** alla funzione membro di `_Pm` viene chiamata a.  
  
 `_Right`  
 L'argomento che produce a `_Pm`.  
  
## Valore restituito  
 Una funzione binaria adattabile.  
  
## Note  
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro di una **Tipo**, in un oggetto membro privato.  Definisce la relativa funzione membro `operator()` come restituire \(**\_Pleft**\-\>\* *Pm\) \(***A destra**\) **const**.  
  
## Esempio  
 Il costruttore di `const_mem_fun1_t` non viene in genere utilizzato direttamente; la funzione di supporto `mem_fun` viene utilizzata per adattare le funzioni membro.  Vedere [mem\_fun](../Topic/mem_fun%20Function.md) per un esempio di come utilizzare gli adattatori di funzione membro.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)