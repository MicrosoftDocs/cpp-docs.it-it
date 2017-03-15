---
title: "Istruzione __if_exists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__if_exists_cpp"
  - "__if_exists"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__if_exists (parola chiave) [C++]"
  - "identificatori, verifica dell'esistenza"
  - "simboli, verifica dell'esistenza"
ms.assetid: d3eb34b6-f3a9-4063-a286-b62a28c0c7fa
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Istruzione __if_exists
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `__if_exists` verifica l'esistenza dell'identificatore specificato.  Se l'identificatore è presente, il blocco di istruzioni specificato viene eseguito.  
  
## Sintassi  
  
```  
__if_exists ( identifier ) {   
statements  
};  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`identifier`|Identificatore del quale si desidera verificare l'esistenza.|  
|`statements`|Una o più istruzioni da eseguire se esiste un `identifier` .|  
  
## Note  
  
> [!CAUTION]
>  Per ottenere risultati più affidabili, utilizzare l'istruzione `__if_exists` con i seguenti vincoli.  
  
-   Applicare l'istruzione `__if_exists` solo a tipi semplici, non a modelli.  
  
-   Applicare l'istruzione `__if_exists` agli identificatori sia interni che esterni alla classe.  Non applicare l'istruzione `__if_exists` a variabili locali.  
  
-   Utilizzare l'istruzione `__if_exists` solo nel corpo di una funzione.  All'esterno del corpo di una funzione, l'istruzione `__if_exists` può testare solo tipi completamente definiti.  
  
-   Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.  
  
 Il complemento all'istruzione `__if_exists` è l'istruzione [\_\_if\_not\_exists](../cpp/if-not-exists-statement.md).  
  
## Esempio  
 Si noti che in questo esempio vengono utilizzati i modelli, azione non consigliata.  
  
```  
// the__if_exists_statement.cpp  
// compile with: /EHsc  
#include <iostream>  
  
template<typename T>  
class X : public T {  
public:  
   void Dump() {  
      std::cout << "In X<T>::Dump()" << std::endl;  
  
      __if_exists(T::Dump) {  
         T::Dump();  
      }  
  
      __if_not_exists(T::Dump) {  
         std::cout << "T::Dump does not exist" << std::endl;  
      }  
   }     
};  
  
class A {  
public:  
   void Dump() {  
      std::cout << "In A::Dump()" << std::endl;  
   }  
};  
  
class B {};  
  
bool g_bFlag = true;  
  
class C {  
public:  
   void f(int);  
   void f(double);  
};  
  
int main() {   
   X<A> x1;  
   X<B> x2;  
  
   x1.Dump();  
   x2.Dump();  
  
   __if_exists(::g_bFlag) {  
      std::cout << "g_bFlag = " << g_bFlag << std::endl;  
   }  
  
   __if_exists(C::f) {  
      std::cout << "C::f exists" << std::endl;  
   }  
  
   return 0;  
}  
```  
  
## Output  
  
```  
In X<T>::Dump()  
In A::Dump()  
In X<T>::Dump()  
T::Dump does not exist  
g_bFlag = 1  
C::f exists  
```  
  
## Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione \_\_if\_not\_exists](../cpp/if-not-exists-statement.md)