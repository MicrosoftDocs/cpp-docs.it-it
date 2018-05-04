---
title: Eccezione bad_typeid | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- bad_typeid
- bad_typeid_cpp
dev_langs:
- C++
helpviewer_keywords:
- bad_typeid exception
- exceptions [C++], bad_typeid
ms.assetid: 5963ed58-4ede-4597-957d-f7bbd06299c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0771f5e93ba473c9ae1101996e8276bec4cd432a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="badtypeid-exception"></a>Eccezione bad_typeid
Il `bad_typeid` eccezione viene generata dal [operatore typeid](../cpp/typeid-operator.md) quando l'operando per `typeid` è un puntatore NULL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      catch (bad_typeid)  
   statement  
```  
  
## <a name="remarks"></a>Note  
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
  
## <a name="output"></a>Output  
  
```  
Object is NULL  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [Parole chiave](../cpp/keywords-cpp.md)