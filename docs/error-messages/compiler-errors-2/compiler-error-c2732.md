---
title: Errore del compilatore C2732 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2732
dev_langs:
- C++
helpviewer_keywords:
- C2732
ms.assetid: 01b7ad2c-93cf-456f-a4c0-c5f2fdc7c07c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 040fd73bcb69ef032d5c6150bb157337f34a2088
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079661"
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