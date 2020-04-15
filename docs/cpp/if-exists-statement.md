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
ms.openlocfilehash: 609d576c6ab3eddca569ed4f19a4024b47b6a1d2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374145"
---
# <a name="__if_exists-statement"></a>Istruzione __if_exists

L'istruzione **__if_exists** verifica se l'identificatore specificato esiste. Se l'identificatore è presente, il blocco di istruzioni specificato viene eseguito.

## <a name="syntax"></a>Sintassi

```
__if_exists ( identifier ) {
statements
};
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Identificatore*|Identificatore del quale si desidera verificare l'esistenza.|
|*Dichiarazioni*|Una o più istruzioni da eseguire se *l'identificatore* esiste.|

## <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Per ottenere i risultati più affidabili, utilizzare l'istruzione **__if_exists** in base ai vincoli seguenti.

- Applicare l'istruzione **__if_exists** solo ai tipi semplici, non ai modelli.

- Applicare l'istruzione **__if_exists** agli identificatori sia all'interno che all'esterno di una classe. Non applicare l'istruzione **__if_exists** alle variabili locali.

- Utilizzare l'istruzione **__if_exists** solo nel corpo di una funzione. All'esterno del corpo di una funzione, l'istruzione **__if_exists** può testare solo tipi completamente definiti.

- Quando si testano funzioni in overload, non è possibile testare una forma specifica di overload.

Il complemento all'istruzione **__if_exists** è l'istruzione [__if_not_exists.](../cpp/if-not-exists-statement.md)

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
[Dichiarazione __if_not_exists](../cpp/if-not-exists-statement.md)
