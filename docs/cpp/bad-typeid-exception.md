---
title: Eccezione bad_typeid | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- bad_typeid_cpp
dev_langs:
- C++
helpviewer_keywords:
- bad_typeid exception
- exceptions, bad_typeid
ms.assetid: 5963ed58-4ede-4597-957d-f7bbd06299c2
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: ea7dc85862622180038cf520ef92b752b65eba84
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
