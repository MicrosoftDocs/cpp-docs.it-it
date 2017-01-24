---
title: "Classe pointer_to_binary_function | Microsoft Docs"
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
  - "std::pointer_to_binary_function"
  - "xfunctional/std::pointer_to_binary_function"
  - "pointer_to_binary_function"
  - "std.pointer_to_binary_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer_to_binary_function (classe)"
  - "pointer_to_binary_function (funzione)"
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe pointer_to_binary_function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Converte un puntatore a funzione binario in funzione binaria adattabile.  
  
## Sintassi  
  
```  
template<class Arg1, class Arg2, class Result>  
   class pointer_to_binary_function   
   : public binary_function <Arg1, Arg2, Result>   
   {  
   public:  
   explicit pointer_to_binary_function(  
      Result (*_pfunc )( Arg1, Arg2 )   
   );  
   Result operator()(  
      Arg1 _Left,   
      Arg2 _Right  
   ) const;  
   };  
```  
  
#### Parametri  
 `_pfunc`  
 La funzione binaria da convertire.  
  
 `_Left`  
 L'oggetto a sinistra con *il \*\_pfunc* viene chiamato su.  
  
 `_Right`  
 L'operando di oggetto che *il \*\_pfunc* viene chiamato su.  
  
## Valore restituito  
 La classe modello archivia una copia di **\_pfunc**.  Definisce la relativa funzione membro `operator()` come restituire \(\***\_pfunc**\)\(\_*Left*, \_*Right*\).  
  
## Note  
 Un puntatore a funzione binario è un oggetto funzione e può essere passato a qualsiasi algoritmo di una libreria di modelli standard che previsto una funzione binaria come parametro, ma non è adattabile.  Per utilizzarlo con un adattatore, come associare un valore o con un invertitore, deve essere provvisto con i tipi annidati **first\_argument\_type**, **second\_argument\_type** e **result\_type** che consentono tale adattamento.  La conversione da `pointer_to_binary_function` modo gli adattatori di funzione per utilizzare i puntatori a funzione binari.  
  
## Esempio  
 Il costruttore di `pointer_to_binary_function` viene utilizzata raramente direttamente.  Vedere funzione di supporto [ptr\_fun](../Topic/ptr_fun%20Function.md) per un esempio di come dichiarare e utilizzare il predicato dell'adattatore di `pointer_to_binary_function`.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)