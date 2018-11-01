---
title: Errore del compilatore C3386
ms.date: 11/04/2016
f1_keywords:
- C3386
helpviewer_keywords:
- C3386
ms.assetid: 93fa8c33-0f10-402b-8eec-b0a217a1f8dc
ms.openlocfilehash: a9183e1f62e7ebaf5db04a35a45806ec02169e69
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637476"
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