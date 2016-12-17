---
title: "Classe pointer_to_unary_function | Microsoft Docs"
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
  - "xfunctional/std::pointer_to_unary_function"
  - "pointer_to_unary_function"
  - "std.pointer_to_unary_function"
  - "std::pointer_to_unary_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer_to_unary_function (classe)"
  - "pointer_to_unary_function (funzione)"
ms.assetid: 05600207-b916-4759-beca-6b6facd2d6f6
caps.latest.revision: 21
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe pointer_to_unary_function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Converte un puntatore a funzione unario in funzione unaria adattabile.  
  
## Sintassi  
  
```  
template<class Arg, class Result>  
class pointer_to_unary_function  
    : public unary_function<Arg, Result>   
    {  
    public:  
        explicit pointer_to_unary_function(  
            Result (*_pfunc)(Arg)  
        );  
        Result operator()(  
            Arg _Left  
        ) const;  
    };  
```  
  
#### Parametri  
 `_pfunc`  
 La funzione binaria da convertire.  
  
 `_Left`  
 L'oggetto che *il \*\_pfunc* viene chiamato su.  
  
## Valore restituito  
 La classe modello archivia una copia di **\_pfunc**.  Definisce la relativa funzione membro `operator()` come restituire \(\***\_pfunc**\)\(\_*Left*\).  
  
## Note  
 Un puntatore a funzione unario è un oggetto funzione e può essere passato a qualsiasi algoritmo di una libreria di modelli standard che previsto una funzione unaria come parametro, ma non è adattabile.  Per utilizzarlo con un adattatore, come associare un valore o con un invertitore, deve essere provvisto con i tipi annidati **argument\_type** e **result\_type** che consentono tale adattamento.  La conversione da `pointer_to_unary_function` modo gli adattatori di funzione per utilizzare i puntatori a funzione binari.  
  
## Esempio  
 Il costruttore di `pointer_to_unary_function` viene utilizzata raramente direttamente.  Vedere funzione di supporto [ptr\_fun](../Topic/ptr_fun%20Function.md) per un esempio di come dichiarare e utilizzare il predicato dell'adattatore di `pointer_to_unary_function`.  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Libreria di modelli standard](../misc/standard-template-library.md)