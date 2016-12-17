---
title: "Classe const_mem_fun_ref_t | Microsoft Docs"
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
  - "std::const_mem_fun_ref_t"
  - "const_mem_fun_ref_t"
  - "std.const_mem_fun_ref_t"
  - "xfunctional/std::const_mem_fun_ref_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_mem_fun_ref_t (classe)"
ms.assetid: 316ddbaa-9f46-4931-8eba-ea4ca66360ef
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe const_mem_fun_ref_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di adattatori che consente una funzione membro di **const** che non accetta argomenti da chiamare come oggetto funzione unario una volta inizializzata con un argomento di riferimento.  
  
## Sintassi  
  
```  
template<class Result, class Type>  
   class const_mem_fun_ref_t  
      : public unary_function<Type, Result>   
   {  
   explicit const_mem_fun_t(Result ( Type::* _Pm)( ) const );  
   Result operator()(  
      const Type& _Left  
   ) const;  
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
 La classe modello archivia una copia di `_Pm`, che deve essere un puntatore a una funzione membro di una **Tipo**, in un oggetto membro privato.  Definisce la relativa funzione membro `operator()` come restituire \(**\_Left**. \* `_Pm`\) \(\) **const**.  
  
## Esempio  
 Il costruttore di `const_mem_fun_ref_t` non viene in genere utilizzato direttamente; la funzione di supporto `mem_fun_ref` viene utilizzata per adattare le funzioni membro.  Vedere [mem\_fun\_ref](../Topic/mem_fun_ref%20Function.md) per un esempio di come utilizzare gli adattatori di funzione membro.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)