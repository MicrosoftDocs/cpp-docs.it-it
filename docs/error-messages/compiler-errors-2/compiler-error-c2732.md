---
title: Errore del compilatore C2732
ms.date: 11/04/2016
f1_keywords:
- C2732
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
ms.openlocfilehash: 61bac8c1b5c9e029cc5833f458669b490fed8c91
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755798"
---
# <a name="compiler-error-c2732"></a>Errore del compilatore C2732

le specifiche di collegamento contraddicono le precedenti specifiche di 'function'

La funzione è già stata dichiarata con un identificatore di collegamento diverso.

Questo errore può essere causato da file di inclusione con identificatori di collegamento diversi.

Per correggere l'errore, modificare le istruzioni `extern` in modo che i collegamenti concordino. In particolare, non eseguire il wrapping di direttive `#include` in blocchi `extern "C"`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2732:

```cpp
// C2732.cpp
extern void func( void );   // implicit C++ linkage
extern "C" void func( void );   // C2732
```
