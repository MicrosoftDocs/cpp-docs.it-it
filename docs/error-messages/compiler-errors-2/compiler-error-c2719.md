---
title: Errore del compilatore C2719
ms.date: 11/04/2016
f1_keywords:
- C2719
helpviewer_keywords:
- C2719
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
ms.openlocfilehash: d635601fbf8b36218fb47c09444f3f5d023c823e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383087"
---
# <a name="compiler-error-c2719"></a>Errore del compilatore C2719

'parameter': il parametro formale con __declspec(align('#')) non verrà allineato

Il [allineare](../../cpp/align-cpp.md) `__declspec` modificatore non è consentito nei parametri di funzione. L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata. Per altre informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'errore C2719 e mostra come risolverlo:

```
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```