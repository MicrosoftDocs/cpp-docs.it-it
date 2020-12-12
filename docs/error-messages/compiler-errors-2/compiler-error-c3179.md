---
description: 'Altre informazioni su: errore del compilatore C3179'
title: Errore del compilatore C3179
ms.date: 11/04/2016
f1_keywords:
- C3179
helpviewer_keywords:
- C3179
ms.assetid: 60d7e41b-25fd-48ac-8b79-830c062f4dcd
ms.openlocfilehash: 5f4b573c822eff68d972517f9fac093071cf2a0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174156"
---
# <a name="compiler-error-c3179"></a>Errore del compilatore C3179

tipo gestito o WinRT senza nome non consentito

Tutte le classi e struct CLR e WinRT devono avere un nome.

L'esempio seguente genera l'errore C3179 e mostra come risolverlo:

```cpp
// C3179a.cpp
// compile with: /clr /c
typedef value struct { // C3179
// try the following line instead
// typedef value struct MyStruct {
   int i;
} V;
```
