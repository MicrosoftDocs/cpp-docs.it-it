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
ms.openlocfilehash: 6410f27342ed40300ff236ee1c47ada740255f84
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998797"
---
# <a name="bad_typeid-exception"></a>Eccezione bad_typeid

L'eccezione **bad_typeid** viene generata dall' [operatore typeid](../cpp/typeid-operator.md) quando l'operando per **typeid** è un puntatore null.

## <a name="syntax"></a>Sintassi

```
catch (bad_typeid)
   statement
```

## <a name="remarks"></a>Note

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

Nell'esempio seguente viene illustrato l'operatore **typeid** che genera un'eccezione **bad_typeid** .

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

[Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)\
[Parole chiave](../cpp/keywords-cpp.md)
