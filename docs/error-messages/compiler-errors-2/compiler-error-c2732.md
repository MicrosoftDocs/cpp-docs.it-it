---
description: 'Altre informazioni su: errore del compilatore C2732'
title: Errore del compilatore C2732
ms.date: 11/04/2016
f1_keywords:
- C2732
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
ms.openlocfilehash: 1ca97fbf46685af1df37b8caf82a03effc1ec6bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123214"
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
