---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4266'
title: Avviso del compilatore (livello 4) C4266
ms.date: 11/04/2016
f1_keywords:
- C4266
helpviewer_keywords:
- C4266
ms.assetid: 90ec5f5b-3451-4c16-bb1b-c30a626bdaa0
ms.openlocfilehash: 173e7da734a1bd94ccee9684bc2400c020dfc76c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285175"
---
# <a name="compiler-warning-level-4-c4266"></a>Avviso del compilatore (livello 4) C4266

' Function ': Nessun override disponibile per la funzione membro virtuale dalla base ' type '; funzione nascosta

Una classe derivata non ha eseguito l'override di tutti gli overload di una funzione virtuale.

Per impostazione predefinita, questo avviso non è attivo.  Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4266:

```cpp
// C4266.cpp
// compile with: /W4 /c
#pragma warning (default : 4266)
class Engine {
public:
   virtual void OnException(int&,int);
   virtual void OnException(int&,int&,int);
};

class LocalBinding : private Engine {
   virtual void OnException(int&,int);
};   // C4266
```

Possibile soluzione:

```cpp
// C4266b.cpp
// compile with: /W4 /c
#pragma warning (default : 4266)
class Engine {
public:
   virtual void OnException(int&,int);
   virtual void OnException(int&,int&,int);
};

class LocalBinding : private Engine {
   virtual void OnException(int&,int);
   virtual void OnException(int&, int&, int);
};
```
