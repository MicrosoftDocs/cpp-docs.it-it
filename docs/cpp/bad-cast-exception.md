---
title: Eccezione bad_cast
ms.date: 11/04/2016
f1_keywords:
- bad_cast
- bad_cast_cpp
helpviewer_keywords:
- exceptions [C++], bad_cast
- bad_cast keyword [C++]
ms.assetid: 31eae1e7-d8d5-40a0-9fef-64a6a4fc9021
ms.openlocfilehash: b40f64671e7c259b7dc04b31a11d20d0fc76c5c4
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68242399"
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
class bad_cast : public exception
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

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[bad_cast](#bad_cast)|Costruttore per oggetti di tipo `bad_cast`.|

### <a name="functions"></a>Funzioni

|Funzione|DESCRIZIONE|
|-|-|
|[what](#what)|TBD|

### <a name="operators"></a>Operatori

|Operator|Descrizione|
|-|-|
|[operator=](#op_eq)|Operatore di assegnazione che viene assegnato uno `bad_cast` oggetto a altro.|

## <a name="bad_cast"></a> bad_cast

Costruttore per oggetti di tipo `bad_cast`.

```cpp
bad_cast(const char * _Message = "bad cast");
bad_cast(const bad_cast &);
```

## <a name="op_eq"></a> operator=

Operatore di assegnazione che viene assegnato uno `bad_cast` oggetto a altro.

```cpp
bad_cast& operator=(const bad_cast&) noexcept;
```

## <a name="what"></a> Novità

```cpp
const char* what() const noexcept override;
```

## <a name="see-also"></a>Vedere anche

[Operatore dynamic_cast](../cpp/dynamic-cast-operator.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)