---
title: Eccezione bad_cast
ms.date: 10/04/2019
f1_keywords:
- bad_cast
- bad_cast_cpp
helpviewer_keywords:
- exceptions [C++], bad_cast
- bad_cast keyword [C++]
ms.assetid: 31eae1e7-d8d5-40a0-9fef-64a6a4fc9021
ms.openlocfilehash: 7384394fb53c6aa4bc009a903ba0ed22bf0ed0d6
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998780"
---
# <a name="bad_cast-exception"></a>Eccezione bad_cast

L'eccezione **bad_cast** viene generata dall'operatore **dynamic_cast** come risultato di un cast non riuscito a un tipo di riferimento.

## <a name="syntax"></a>Sintassi

```
catch (bad_cast)
   statement
```

## <a name="remarks"></a>Note

L'interfaccia per **bad_cast** è:

```cpp
class bad_cast : public exception
```

Il codice seguente contiene un esempio di un **dynamic_cast** non riuscito che genera l'eccezione **bad_cast** .

```cpp
// expre_bad_cast_Exception.cpp
// compile with: /EHsc /GR
#include <typeinfo>
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

L'eccezione viene generata perché l'oggetto di cui viene eseguito il cast (una forma) non deriva dal tipo di cast specificato (Circle). Per evitare l'eccezione, aggiungere tali dichiarazioni a `main`:

```cpp
Circle circle_instance;
Circle& ref_circle = circle_instance;
```

Quindi invertire il senso del cast nel blocco **try** come segue:

```cpp
Shape& ref_shape = dynamic_cast<Shape&>(ref_circle);
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[bad_cast](#bad_cast)|Costruttore per oggetti di tipo `bad_cast`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[what](#what)|TBD|

### <a name="operators"></a>Operatori

|Operator|DESCRIZIONE|
|-|-|
|[operator=](#op_eq)|Operatore di assegnazione che assegna un oggetto `bad_cast` a un altro.|

## <a name="bad_cast"></a>bad_cast

Costruttore per oggetti di tipo `bad_cast`.

```cpp
bad_cast(const char * _Message = "bad cast");
bad_cast(const bad_cast &);
```

## <a name="op_eq"></a> operator=

Operatore di assegnazione che assegna un oggetto `bad_cast` a un altro.

```cpp
bad_cast& operator=(const bad_cast&) noexcept;
```

## <a name="what"></a>cosa

```cpp
const char* what() const noexcept override;
```

## <a name="see-also"></a>Vedere anche

[operatore dynamic_cast](../cpp/dynamic-cast-operator.md)\
[Parole chiave](../cpp/keywords-cpp.md)\
[Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
