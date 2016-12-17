---
title: "Classe mem_fun_ref_t | Microsoft Docs"
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
  - "xfunctional/std::mem_fun_ref_t"
  - "mem_fun_ref_t"
  - "std.mem_fun_ref_t"
  - "std::mem_fun_ref_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mem_fun_ref_t (classe)"
ms.assetid: 7dadcac3-8d33-4e4b-a792-81bd53d3df39
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe mem_fun_ref_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di adattatori che consente a una funzione membro **non\_const** che non accetta argomenti di chiamare gli operatori come oggetto funzione unario una volta inizializzata con un argomento di riferimento.  
  
## Sintassi  
  
```  
template<class Result, class Type>  
   class mem_fun_ref_t : public unary_function<Type, Result> {  
      explicit mem_fun_ref_t(  
         Result ( Type::*_Pm )( )   
      );  
      Result operator()( Type& _Left ) const;  
   };  
```  
  
#### Parametri  
 `_Pm`  
 Un puntatore a una funzione membro di classe **Tipo** da convertire in un oggetto funzione.  
  
 `_Left`  
 L'oggetto che la funzione membro di `_Pm` viene chiamata a.  
  
## Valore restituito  
 Una funzione unaria adattabile.  
  
## Note  
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro di una **Tipo**, in un oggetto membro privato.  Definisce la relativa funzione membro `operator()` come restituire \(**\_Left**. \* `_Pm`\) \(\).  
  
## Esempio  
 Il costruttore di `mem_fun_ref_t` non viene in genere utilizzato direttamente; la funzione di supporto `mem_fun_ref` viene utilizzata per adattare le funzioni membro.  Vedere [mem\_fun\_ref](../Topic/mem_fun_ref%20Function.md) per un esempio di come utilizzare gli adattatori di funzione membro.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)