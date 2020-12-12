---
description: 'Altre informazioni su: bad_cast eccezione'
title: Eccezione bad_cast
ms.date: 10/04/2019
f1_keywords:
- bad_cast
- bad_cast_cpp
helpviewer_keywords:
- exceptions [C++], bad_cast
- bad_cast keyword [C++]
ms.assetid: 31eae1e7-d8d5-40a0-9fef-64a6a4fc9021
ms.openlocfilehash: 40408128bd1c90feff34e8ea1ce8bf7a3c0d56cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255691"
---
# <a name="bad_cast-exception"></a>Eccezione bad_cast

L'eccezione **bad_cast** viene generata dall' **`dynamic_cast`** operatore come risultato di un cast non riuscito a un tipo di riferimento.

## <a name="syntax"></a>Sintassi

```
catch (bad_cast)
   statement
```

## <a name="remarks"></a>Osservazioni

L'interfaccia per **bad_cast** è:

```cpp
class bad_cast : public exception
```

Il codice seguente contiene un esempio di un oggetto non riuscito **`dynamic_cast`** che genera l'eccezione **bad_cast** .

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

Quindi invertire il senso del cast nel blocco nel modo **`try`** seguente:

```cpp
Shape& ref_shape = dynamic_cast<Shape&>(ref_circle);
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[bad_cast](#bad_cast)|Costruttore per oggetti di tipo `bad_cast`.|

### <a name="functions"></a>Funzioni

|Funzione|Descrizione|
|-|-|
|[cosa](#what)|TBD|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Operatore di assegnazione che assegna un `bad_cast` oggetto a un altro.|

## <a name="bad_cast"></a><a name="bad_cast"></a> bad_cast

Costruttore per oggetti di tipo `bad_cast`.

```cpp
bad_cast(const char * _Message = "bad cast");
bad_cast(const bad_cast &);
```

## <a name="operator"></a><a name="op_eq"></a> operatore =

Operatore di assegnazione che assegna un `bad_cast` oggetto a un altro.

```cpp
bad_cast& operator=(const bad_cast&) noexcept;
```

## <a name="what"></a><a name="what"></a> cosa

```cpp
const char* what() const noexcept override;
```

## <a name="see-also"></a>Vedi anche

[Operatore dynamic_cast](../cpp/dynamic-cast-operator.md)\
[Parole](../cpp/keywords-cpp.md)\
[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)
