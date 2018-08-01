---
title: Eccezione bad_cast | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- bad_cast
- bad_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- exceptions [C++], bad_cast
- bad_cast keyword [C++]
ms.assetid: 31eae1e7-d8d5-40a0-9fef-64a6a4fc9021
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a37ae011ec2f06a505063678f481e6e41696c86
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401367"
---
# <a name="badcast-exception"></a>Eccezione bad_cast
Il **bad_cast** eccezione generata dalle **dynamic_cast** operatore come risultato di un cast non riuscito per un tipo di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
catch (bad_cast)  
   statement  
```  
  
## <a name="remarks"></a>Note  
 L'interfaccia **bad_cast** è:  
  
```cpp 
class bad_cast : public exception {  
public:  
   bad_cast(const char * _Message = "bad cast");  
   bad_cast(const bad_cast &);  
   virtual ~bad_cast();  
};  
```  
  
 Il codice seguente contiene un esempio di un tentativo fallito **dynamic_cast** che genera il **bad_cast** eccezione.  
  
```cpp 
// expre_bad_cast_Exception.cpp  
// compile with: /EHsc /GR  
#include <typeinfo.h>  
#include <iostream>  
  
class Shape {  
public:  
   virtual void virtualfunc() const {}  
};  
  
class Circle: public Shape {  
public:  
   virtual void virtualfunc() const {}  
};  
  
using namespace std;  
int main() {  
   Shape shape_instance;  
   Shape& ref_shape = shape_instance;  
   try {  
      Circle& ref_circle = dynamic_cast<Circle&>(ref_shape);   
   }  
   catch (bad_cast b) {  
      cout << "Caught: " << b.what();  
   }  
}  
```  
  
 L'eccezione viene generata perché l'oggetto di cui si sta eseguendo il cast (una forma) non è derivato dal tipo di cast specificato (cerchio). Per evitare l'eccezione, aggiungere tali dichiarazioni a `main`:  
  
```cpp 
Circle circle_instance;  
Circle& ref_circle = circle_instance;  
```  
  
 Quindi invertire il senso del cast nel **provare** bloccare come indicato di seguito:  
  
```cpp 
Shape& ref_shape = dynamic_cast<Shape&>(ref_circle);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore dynamic_cast](../cpp/dynamic-cast-operator.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)