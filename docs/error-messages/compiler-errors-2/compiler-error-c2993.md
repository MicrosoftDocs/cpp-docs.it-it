---
description: 'Altre informazioni su: errore del compilatore C2993'
title: Errore del compilatore C2993
ms.date: 11/04/2016
f1_keywords:
- C2993
helpviewer_keywords:
- C2993
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
ms.openlocfilehash: 2c43d4f3e54378d419f1945b1f6b38e9ee4d9758
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136422"
---
# <a name="compiler-error-c2993"></a>Errore del compilatore C2993

' Identifier ': tipo non valido per il parametro di modello non di tipo ' parameter '

Non è possibile dichiarare un modello con un argomento di struttura o di Unione. Utilizzare i puntatori per passare strutture e unioni come parametri di modello.

L'esempio seguente genera l'C2993:

```cpp
// C2993.cpp
// compile with: /c
// C2993 expected
struct MyStruct {
   int a;char b;
};

template <class T, struct MyStruct S>   // C2993

// try the following line instead
// template <class T, struct MyStruct * S>
class CMyClass {};
```

Questo errore viene generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003: i parametri di modello non di tipo a virgola mobile non sono più consentiti. Lo standard C++ non consente parametri di modello non di tipo a virgola mobile.

Se si tratta di un modello di funzione, usare un argomento della funzione per passare il parametro di modello non di tipo a virgola mobile. questo codice sarà valido nelle versioni di Visual C++ di Visual Studio .NET 2003 e Visual Studio .NET. Se si tratta di un modello di classe, non esiste una soluzione semplice.

```cpp
// C2993b.cpp
// compile with: /c
template<class T, float f> void func(T) {}   // C2993

// OK
template<class T>   void func2(T, float) {}
```
