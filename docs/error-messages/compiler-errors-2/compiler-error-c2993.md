---
title: Errore del compilatore C2993 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2993
dev_langs:
- C++
helpviewer_keywords:
- C2993
ms.assetid: 4ffd2b78-654b-46aa-95a6-b62101cf91c8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09b3c789cc15d2e146f1c5031003fc74d783e827
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081942"
---
# <a name="compiler-error-c2993"></a>Errore del compilatore C2993

'identifier': tipo non valido per il parametro di modello non di tipo 'parameter'

È possibile dichiarare un modello con una struttura o unione argomento. Usare i puntatori per passare le strutture e unioni come parametri di modello.

L'esempio seguente genera l'errore C2993:

```
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

Verrà generato questo errore anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: parametri di modello non di tipo non è più consentiti a virgola mobile. Lo standard C++ non consente parametri di modello non di tipo a virgola mobile.

Se è un modello di funzione, usare un argomento della funzione da passare in Mobile puntare il parametro di modello non di tipo (questo codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++). Se è un modello di classe, è disponibile alcuna soluzione semplice.

```
// C2993b.cpp
// compile with: /c
template<class T, float f> void func(T) {}   // C2993

// OK
template<class T>   void func2(T, float) {}
```