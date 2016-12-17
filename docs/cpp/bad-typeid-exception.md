---
title: "Eccezione bad_typeid | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "bad_typeid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_typeid (eccezione)"
  - "eccezioni, bad_typeid"
ms.assetid: 5963ed58-4ede-4597-957d-f7bbd06299c2
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezione bad_typeid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene generata l'eccezione `bad_typeid` dall'[operatore di typeid](../cpp/typeid-operator.md) se l'operando per `typeid` è un puntatore NULL.  
  
## Sintassi  
  
```  
  
      catch (bad_typeid)  
   statement  
```  
  
## Note  
 L'interfaccia per `bad_typeid` è:  
  
```  
class bad_typeid : public exception  
{  
public:  
   bad_typeid(const char * _Message = "bad typeid");  
   bad_typeid(const bad_typeid &);  
   virtual ~bad_typeid();  
};  
```  
  
 Nell'esempio seguente viene illustrato l'operatore `typeid` mentre genera un'eccezione `bad_typeid`.  
  
```  
// expre_bad_typeid.cpp  
// compile with: /EHsc /GR  
#include <typeinfo.h>  
#include <iostream>  
  
class A{  
public:  
   // object for class needs vtable  
   // for RTTI  
   virtual ~A();  
};  
  
using namespace std;  
int main() {  
A* a = NULL;  
  
try {  
   cout << typeid(*a).name() << endl;  // Error condition  
   }  
catch (bad_typeid){  
   cout << "Object is NULL" << endl;  
   }  
}  
```  
  
## Output  
  
```  
Object is NULL  
```  
  
## Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)