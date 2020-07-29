---
title: Eccezione bad_typeid
ms.date: 10/04/2019
f1_keywords:
- bad_typeid
- bad_typeid_cpp
helpviewer_keywords:
- bad_typeid exception
- exceptions [C++], bad_typeid
ms.assetid: 5963ed58-4ede-4597-957d-f7bbd06299c2
ms.openlocfilehash: 3e01f97c67803408c9ce5bf056e3e9ed4746d259
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229168"
---
# <a name="bad_typeid-exception"></a>Eccezione bad_typeid

L'eccezione **bad_typeid** viene generata dall' [operatore typeid](../cpp/typeid-operator.md) quando l'operando per **`typeid`** è un puntatore null.

## <a name="syntax"></a>Sintassi

```
catch (bad_typeid)
   statement
```

## <a name="remarks"></a>Osservazioni

L'interfaccia per **bad_typeid** è:

```cpp
class bad_typeid : public exception
{
public:
   bad_typeid();
   bad_typeid(const char * _Message = "bad typeid");
   bad_typeid(const bad_typeid &);
   virtual ~bad_typeid();

   bad_typeid& operator=(const bad_typeid&);
   const char* what() const;
};
```

Nell'esempio seguente viene illustrato l' **`typeid`** operatore che genera un'eccezione **bad_typeid** .

```cpp
// expre_bad_typeid.cpp
// compile with: /EHsc /GR
#include <typeinfo>
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

[Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md)\
[Parole chiave](../cpp/keywords-cpp.md)
