---
title: Errore del compilatore C3445
ms.date: 04/10/2017
f1_keywords:
- C3445
helpviewer_keywords:
- C3445
ms.assetid: 0d272bfc-136b-4025-a9ba-5e4eea5f8215
ms.openlocfilehash: 2eddeb5a56c953ca0864e29187fbe28c53bdee24
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328653"
---
# <a name="compiler-error-c3445"></a>Errore del compilatore C3445

> Copia-list-initialization di '*tipo*' non è possibile usare un costruttore esplicito

Secondo lo standard c++17 ISO, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload di inizializzazione elenco copie, ma deve generare un errore se viene scelto tale overload.

A partire da Visual Studio 2017, il compilatore rileva gli errori correlati alla creazione di oggetti utilizzando un elenco di inizializzatori che non sono stati trovati da Visual Studio 2015. Questi errori potrebbero causare arresti anomali del sistema o un comportamento non definito in fase di esecuzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3445.

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
