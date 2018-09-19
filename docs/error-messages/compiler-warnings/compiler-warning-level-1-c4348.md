---
title: Compilatore avviso (livello 1) C4348 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4348
dev_langs:
- C++
helpviewer_keywords:
- C4348
ms.assetid: 816010eb-6079-48d5-a41b-0fc4d67cfe4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95d868f9e3a3cebf5b6374b1aa899d812a273b6b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46049709"
---
# <a name="compiler-warning-level-1-c4348"></a>Avviso del compilatore (livello 1) C4348

'type': ridefinizione del parametro predefinito: numero di parametro

Un parametro di modello è stato ridefinito.

L'esempio seguente genera l'errore C4348:

```
// C4348.cpp
// compile with: /LD /W1
template <class T=int> struct A;   // forward declaration

template <class T=int> struct A { };
// C4348, redefinition of default parameter
// try the following line instead
// template <class T> struct A { };
```