---
description: 'Altre informazioni su: errore del compilatore C2372'
title: Errore del compilatore C2372
ms.date: 03/23/2020
f1_keywords:
- C2372
helpviewer_keywords:
- C2372
ms.assetid: 406bea63-c8d3-4231-9d26-c70af6980840
ms.openlocfilehash: 9cf94e63e673ca226f3f9c3f1b4c3aa0a6bf8016
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174910"
---
# <a name="compiler-error-c2372"></a>Errore del compilatore C2372

> '*Identifier*': ridefinizione. tipi diversi di riferimento indiretto

L'identificatore è già definito con un tipo derivato diverso.

L'esempio seguente genera l'C2372:

```cpp
// C2372.cpp
// compile with: /c
extern int *fp;
extern int fp[];   // C2372
extern int fp2[];   // OK
```
