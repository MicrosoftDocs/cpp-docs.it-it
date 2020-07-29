---
title: Errore del compilatore C2732
ms.date: 11/04/2016
f1_keywords:
- C2732
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
ms.openlocfilehash: 78be424040c7315271d0880c6678584f698b5be8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218182"
---
# <a name="compiler-error-c2732"></a>Errore del compilatore C2732

le specifiche di collegamento contraddicono le precedenti specifiche di 'function'

La funzione è già stata dichiarata con un identificatore di collegamento diverso.

Questo errore può essere causato da file di inclusione con identificatori di collegamento diversi.

Per correggere l'errore, modificare le **`extern`** istruzioni in modo che i collegamenti accettino. In particolare, non eseguire il wrapping di direttive `#include` in blocchi `extern "C"`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2732:

```cpp
// C2732.cpp
extern void func( void );   // implicit C++ linkage
extern "C" void func( void );   // C2732
```
