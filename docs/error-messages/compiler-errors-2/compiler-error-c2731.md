---
title: Errore del compilatore C2731
ms.date: 11/04/2016
f1_keywords:
- C2731
helpviewer_keywords:
- C2731
ms.assetid: 9b563999-febd-4582-9147-f355083c091e
ms.openlocfilehash: 4b73ee4ad205bfc2203423b5f413011ce090852f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755811"
---
# <a name="compiler-error-c2731"></a>Errore del compilatore C2731

' Identifier ': Impossibile eseguire l'overload della funzione

Non è possibile eseguire l'overload delle funzioni `main`, `WinMain`, `DllMain`e `LibMain`.

L'esempio seguente genera l'C2731:

```cpp
// C2731.cpp
extern "C" void WinMain(int, char *, char *);
void WinMain(int, short, char *, char*);   // C2731
```
