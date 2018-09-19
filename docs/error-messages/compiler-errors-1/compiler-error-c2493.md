---
title: Errore del compilatore C2493 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2493
dev_langs:
- C++
helpviewer_keywords:
- C2493
ms.assetid: 68316cd5-682b-49c3-b6ea-23c4e5d296cf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf65e17aa44746fea51d50cdb7c2a6e8be60cca2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047993"
---
# <a name="compiler-error-c2493"></a>Errore del compilatore C2493

forma non valida di based.

Oggetto `__based` espressione deve essere basata su un puntatore.

L'esempio seguente genera l'errore C2493:

```
// C2493.cpp
// compile with: /c
char mybase;
int __based(mybase) ptr;   // C2493

// OK
char * mybase;
int __based(mybase) * ptr;
```