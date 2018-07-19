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
ms.openlocfilehash: b50995ff1d5eb730bf6593679194d32d5300b9d7
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943137"
---
# <a name="badcast-exception"></a>Eccezione bad_cast
Viene generata l'eccezione `bad_cast` dall'operatore `dynamic_cast` come risultato di un cast non riuscito a un tipo di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
catch (bad_cast)  
   statement  
```  
  
## <a name="remarks"></a>Note  
 L'interfaccia per `bad_cast` è:  
  
```cpp 
class bad_cast : public exception {  
public:  
   bad_cast(const char * _Message = "bad cast");  
   bad_cast(const bad_cast &);  
   virtual ~bad_cast();  
};  
```  
  
 Il codice seguente contiene un esempio di un operatore `dynamic_cast` non riuscito che genera l'eccezione `bad_cast`.  
  
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
  
 L'eccezione viene generata perché l'oggetto di cui si sta eseguendo il cast (una forma) non è derivato dal tipo di cast specificato (cerchio). Per evitare l'eccezione, aggiungere tali dichiarazioni a **principale**:  
  
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