---
title: Errore del compilatore C2732
ms.date: 11/04/2016
f1_keywords:
- C2732
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
ms.openlocfilehash: 820a620b7e4414123c56433f84536393834f6fd6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208402"
---
# <a name="compiler-error-c2732"></a>Errore del compilatore C2732

le specifiche di collegamento contraddicono le precedenti specifiche di 'function'

La funzione è già stata dichiarata con un identificatore di collegamento diverso.

Questo errore può essere causato da file di inclusione con identificatori di collegamento diversi.

Per correggere l'errore, modificare le istruzioni `extern` in modo che i collegamenti concordino. In particolare, non eseguire il wrapping di direttive `#include` in blocchi `extern "C"`.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2732:

```
// C2732.cpp
extern void func( void );   // implicit C++ linkage
extern "C" void func( void );   // C2732
```