---
title: "Classe mem_fun_t | Microsoft Docs"
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
  - "mem_fun_t"
  - "xfunctional/std::mem_fun_t"
  - "std::mem_fun_t"
  - "std.mem_fun_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mem_fun_t (classe)"
ms.assetid: 242566d4-750c-4c87-9d63-2e2c9d19ca2a
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe mem_fun_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di adattatori che consente a una funzione membro **non\_const** che non accetta argomenti di chiamare gli operatori come oggetto funzione unario una volta inizializzata con un argomento di un puntatore.  
  
## Sintassi  
  
```  
template<class Result, class Type>  
   class mem_fun_t : public unary_function<Type *, Result> {  
      explicit mem_fun_t(Result ( Type::*_Pm )( ) );  
      Result operator()( Type* _Pleft ) const;  
   };  
```  
  
#### Parametri  
 `_Pm`  
 Un puntatore a una funzione membro di classe **Tipo** da convertire in un oggetto funzione.  
  
 `_Pleft`  
 L'oggetto che la funzione membro di `_Pm` viene chiamata a.  
  
## Valore restituito  
 Una funzione unaria adattabile.  
  
## Note  
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro di una **Tipo**, in un oggetto membro privato.  Definisce la relativa funzione membro `operator()` come restituire \(`_Pleft`\-\>\* `_Pm`\) \(\).  
  
## Esempio  
 Il costruttore di `mem_fun_t` non viene in genere utilizzato direttamente; la funzione di supporto `mem_fun` viene utilizzata per adattare le funzioni membro.  Vedere [mem\_fun](../Topic/mem_fun%20Function.md) per un esempio di come utilizzare gli adattatori di funzione membro.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<functional\>](../standard-library/functional.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)