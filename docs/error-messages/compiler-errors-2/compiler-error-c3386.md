---
title: Errore del compilatore C3386 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3386
dev_langs:
- C++
helpviewer_keywords:
- C3386
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a68f047309d0a83bc1e0eb86f0651c3f20f310c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093774"
---
# <a name="compiler-error-c3386"></a>Errore del compilatore C3386

'type': dllexport /\__declspec(dllimport) non può essere applicato a un oggetto gestito o WinRTtype

Il `dllimport` e [dllexport](../../cpp/dllexport-dllimport.md) `__declspec` modificatori non vengono in un oggetto gestito o Windows Runtime tipo.

L'esempio seguente genera l'errore C3386 e mostra come risolverlo:

```
// C3386.cpp
// compile with: /clr /c
ref class __declspec(dllimport) X1 {   // C3386
// try the following line instead
// ref class X1 {
};
```