---
title: C3445 errore del compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 04/10/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3445
dev_langs:
- C++
helpviewer_keywords:
- C3445
ms.assetid: 0d272bfc-136b-4025-a9ba-5e4eea5f8215
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c37f04b907183b883772fd144ae0179683f088f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3445"></a>C3445 errore del compilatore

> inizializzazione di elenco copia di '*tipo*' non è possibile utilizzare un costruttore esplicito

Secondo lo standard C++ 17 ISO, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload in elenco-inizializzazione di copia, ma deve generare un errore se tale overload scelto.

A partire da Visual Studio 2017, il compilatore rileva errori relativi alla creazione di un oggetto utilizzando un elenco di inizializzatori non trovate da Visual Studio 2015. Questi errori potrebbero causare un comportamento non definito in fase di esecuzione o di arresti anomali del sistema.

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

Per correggere l'errore, utilizzare invece l'inizializzazione diretta:

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
