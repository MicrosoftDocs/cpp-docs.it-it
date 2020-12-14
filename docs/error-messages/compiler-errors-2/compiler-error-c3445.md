---
description: 'Altre informazioni su: errore del compilatore C3445'
title: Errore del compilatore C3445
ms.date: 04/10/2017
f1_keywords:
- C3445
helpviewer_keywords:
- C3445
ms.assetid: 0d272bfc-136b-4025-a9ba-5e4eea5f8215
ms.openlocfilehash: 992c0e4f6e8b068bf6c038a6a5f58b45dd80a3c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316035"
---
# <a name="compiler-error-c3445"></a>Errore del compilatore C3445

> l'inizializzazione dell'elenco di copie di '*Type*' non può usare un costruttore esplicito

Secondo lo standard ISO C++ 17, è necessario che il compilatore consideri un costruttore esplicito per la risoluzione dell'overload nell'inizializzazione dell'elenco di copia, ma deve generare un errore se tale overload viene effettivamente scelto.

A partire da Visual Studio 2017, il compilatore trova gli errori correlati alla creazione di oggetti tramite un elenco di inizializzatori che non sono stati trovati da Visual Studio 2015. Questi errori potrebbero causare arresti anomali o un comportamento non definito in fase di esecuzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3445.

```cpp
// C3445.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1 = { 1 };     // error C3445: copy-list-initialization of
                      //     'A' cannot use an explicit constructor
}
```

Per correggere l'errore, usare invece l'inizializzazione diretta:

```cpp
// C3445b.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1{ 1 };
}
```
