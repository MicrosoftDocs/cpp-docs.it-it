---
title: Errore del compilatore C3139
ms.date: 11/04/2016
f1_keywords:
- C3139
helpviewer_keywords:
- C3139
ms.assetid: 95c92263-10ac-4ff3-b385-6312dd92adbc
ms.openlocfilehash: f224be74a94e0e769e7c26bc99b4790d69f6b65b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62375522"
---
# <a name="compiler-error-c3139"></a>Errore del compilatore C3139

'struct': non è possibile esportare un tipo definito dall'utente senza membri

Si è provato ad applicare la [esportare](../../windows/export.md) attributo a un tipo definito dall'utente (tipo definito dall'utente) vuoto. Ad esempio:

```
// C3139.cpp
#include "unknwn.h"
[emitidl];
[module(name=xx)];

[export] struct MyStruct {   // C3139 empty type
};
int main(){}
```