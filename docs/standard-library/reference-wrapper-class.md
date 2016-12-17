---
title: "Classe reference_wrapper | Microsoft Docs"
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
  - "std.tr1.reference_wrapper"
  - "tr1.reference_wrapper"
  - "reference_wrapper"
  - "tr1::reference_wrapper"
  - "xrefwrap/std::tr1::reference_wrapper"
  - "std::tr1::reference_wrapper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reference_wrapper (classe)"
  - "reference_wrapper (classe) [TR1]"
ms.assetid: 90b8ed62-e6f1-44ed-acc7-9619bd58865a
caps.latest.revision: 21
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe reference_wrapper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping di un riferimento  
  
## Sintassi  
  
```  
template<class Ty>  
    class reference_wrapper  
    : public unary_function<T1, Ret>        // see below  
    : public binary_function<T1, T2, Ret>   // see below  
    {  
public:  
    typedef Ty type;  
    typedef T0 result_type;                 // see below  
  
    reference_wrapper(Ty&);  
  
    Ty& get() const;  
    operator Ty&() const;  
    template<class T1, class T2, ..., class TN>  
        typename result_of<T(T1, T2, ..., TN)>::type  
        operator()(T1&, T2&, ..., TN&);  
  
private:  
    Ty *ptr; // exposition only  
    };  
```  
  
## Note  
 Un `reference_wrapper<Ty>` è costruibile e assegnabile per la copia e contiene un puntatore che punta a un oggetto di tipo `Ty`.  
  
 Una specializzazione `reference_wrapper<Ty>` è derivata da `std::unary_function<T1, Ret>` \(e definisce pertanto il tipo annidato `result_type` come sinonimo di `Ret` e il tipo annidato `argument_type` come sinonimo di `T1`\) solo se il tipo `Ty` è:  
  
 un tipo di funzione o un puntatore al tipo di funzione che accetta un argomento di tipo `T1` e restituisce `Ret`; o  
  
 un puntatore a una funzione membro `Ret T::f() cv` dove `cv` rappresenta i qualificatori di tipo const o volatile della funzione membro; il tipo `T1` è `cv` `T*`; o  
  
 un tipo di classe che è derivato da `unary_function<T1, Ret>`.  
  
 Una specializzazione `reference_wrapper<Ty>` deriva da `std::binary_function<T1, T2, Ret>` \(e definisce pertanto il tipo annidato `result_type` come sinonimo di `Ret`, il tipo annidato `first_argument_type` come sinonimo di `T1` e il tipo annidato `second_argument_type` come sinonimo di `T2`\) solo se il tipo `Ty` è:  
  
 un tipo di funzione o un puntatore al tipo di funzione che accetta due argomenti di tipi `T1` e `T2` e restituisce `Ret`; o  
  
 un puntatore a una funzione membro `Ret T::f(T2) cv` dove `cv` rappresenta i qualificatori di tipo const o volatile della funzione membro; il tipo `T1` è `cv` `T*`; o  
  
 un tipo di classe che è derivato da `binary_function<T1, T2, Ret>`.  
  
### Costruttori  
  
|||  
|-|-|  
|[reference\_wrapper::reference\_wrapper](../Topic/reference_wrapper::reference_wrapper.md)|Costruisce un oggetto `reference_wrapper`.|  
  
### Typedef  
  
|||  
|-|-|  
|[reference\_wrapper::result\_type](../Topic/reference_wrapper::result_type.md)|Tipo di risultato di un riferimento debole di cui è stato eseguito il wrapping.|  
|[reference\_wrapper::type](../Topic/reference_wrapper::type.md)|Tipo di riferimento di cui è stato eseguito il wrapping.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[reference\_wrapper::get](../Topic/reference_wrapper::get.md)|Ottiene il riferimento di cui è stato eseguito il wrapping.|  
  
### Operatori  
  
|||  
|-|-|  
|[reference\_wrapper::operator Ty&](../Topic/reference_wrapper::operator%20Ty&.md)|Ottiene un puntatore al riferimento di cui è stato eseguito il wrapping.|  
|[reference\_wrapper::operator\(\)](../Topic/reference_wrapper::operator\(\).md)|Chiama il riferimento di cui è stato eseguito il wrapping.|  
  
## Requisiti  
 **Intestazione:** \<functional\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Funzione cref](../Topic/cref%20Function.md)   
 [Funzione ref](../Topic/ref%20Function.md)