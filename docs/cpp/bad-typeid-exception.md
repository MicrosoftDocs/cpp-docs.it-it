---
title: Eccezione bad_typeid | Microsoft Docs
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
ms.openlocfilehash: 55718522bdbf618fb656eedc5c6afd59bfcaca08
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39409006"
---
# <a name="badtypeid-exception"></a>Eccezione bad_typeid
Il **bad_typeid** eccezione generata dalle [operatore typeid](../cpp/typeid-operator.md) quando l'operando di **typeid** è un puntatore NULL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
catch (bad_typeid)  
   statement  
```  
  
## <a name="remarks"></a>Note  
 L'interfaccia **bad_typeid** è:  
  
```cpp 
class bad_typeid : public exception  
{  
public:  
   bad_typeid(const char * _Message = "bad typeid");  
   bad_typeid(const bad_typeid &);  
   virtual ~bad_typeid();  
};  
```  
  
 L'esempio seguente mostra le **typeid** operatore la generazione di un **bad_typeid** eccezione.  
  
```cpp 
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
  
```Output 
Object is NULL  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)   
 [Parole chiave](../cpp/keywords-cpp.md)