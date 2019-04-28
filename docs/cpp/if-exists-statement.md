---
title: Istruzione __if_exists
ms.date: 11/04/2016
f1_keywords:
- __if_exists_cpp
helpviewer_keywords:
- identifiers, testing for existence
- symbols, testing for existence
- __if_exists keyword [C++]
ms.assetid: d3eb34b6-f3a9-4063-a286-b62a28c0c7fa
ms.openlocfilehash: 9d5a0b24bb08a9485b2d212058fa8f0bd82e5842
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62183674"
---
# <a name="ifexists-statement"></a>Istruzione __if_exists

Il **if_exists** istruzione verifica se l'identificatore specificato esiste. Se l'identificatore è presente, il blocco di istruzioni specificato viene eseguito.

## <a name="syntax"></a>Sintassi

```
__if_exists ( identifier ) {
statements
};
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*identifier*|Identificatore del quale si desidera verificare l'esistenza.|
|*statements*|Uno o più istruzioni da eseguire se *identificatore* esiste.|

## <a name="remarks"></a>Note

> [!CAUTION]
>  Per ottenere risultati più affidabili, usare il **if_exists** istruzione in base ai vincoli seguenti.

- Si applicano i **if_exists** unici tipi semplici, non i modelli dell'istruzione.

- Si applicano i **if_exists** istruzione agli identificatori sia interni che esterni alla classe. Non si applicano i **if_exists** istruzione alle variabili locali.

- Usare la **if_exists** istruzione solo nel corpo di una funzione. All'esterno del corpo di una funzione, il **if_exists** istruzione può testare solo tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento per il **if_exists** istruzione è la [if_not_exists](../cpp/if-not-exists-statement.md) istruzione.

## <a name="example"></a>Esempio

Si noti che in questo esempio vengono utilizzati i modelli, azione non consigliata.

```cpp
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

## <a name="output"></a>Output

```Output
In X<T>::Dump()
In A::Dump()
In X<T>::Dump()
T::Dump does not exist
g_bFlag = 1
C::f exists
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di selezione](../cpp/selection-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[__if_not_exists Statement](../cpp/if-not-exists-statement.md)