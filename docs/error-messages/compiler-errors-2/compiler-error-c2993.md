---
title: Errore del compilatore C2993
ms.date: 11/04/2016
f1_keywords:
- C2993
helpviewer_keywords:
- C2993
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
ms.openlocfilehash: 5aa0d27b2d469f53ec521f587172398b7d4c2d1b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761231"
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

Questo errore viene generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003: i parametri di modello non di tipo a virgola mobile non sono più consentiti. Lo C++ standard non consente parametri di modello non di tipo a virgola mobile.

Se si tratta di un modello di funzione, usare un argomento della funzione per passare il parametro di modello non di tipo a virgola mobile (questo codice sarà valido nelle versioni Visual Studio .NET 2003 e Visual Studio C++.NET di Visual Studio). Se si tratta di un modello di classe, non esiste una soluzione semplice.

```cpp
// C2993b.cpp
// compile with: /c
template<class T, float f> void func(T) {}   // C2993

// OK
template<class T>   void func2(T, float) {}
```
