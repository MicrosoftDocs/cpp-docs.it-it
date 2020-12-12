---
description: 'Altre informazioni su: errore del compilatore C2341'
title: Errore del compilatore C2341
ms.date: 11/04/2016
f1_keywords:
- C2341
helpviewer_keywords:
- C2341
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
ms.openlocfilehash: 47869b6534664358fa80a3ace89fc44fdceefb08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234787"
---
# <a name="compiler-error-c2341"></a>Errore del compilatore C2341

' section name ': il segmento deve essere definito utilizzando #pragma data_seg, code_seg o sezione prima dell'utilizzo

Un'istruzione [allocata](../../cpp/allocate.md) fa riferimento a un segmento non ancora definito da pragma [code_seg](../../preprocessor/code-seg.md), [data_seg](../../preprocessor/data-seg.md)o [Section](../../preprocessor/section.md) .

L'esempio seguente genera l'C2341:

```cpp
// C2341.cpp
// compile with: /c
__declspec(allocate(".test"))   // C2341
int j = 1;
```

Possibile soluzione:

```cpp
// C2341b.cpp
// compile with: /c
#pragma data_seg(".test")
__declspec(allocate(".test"))
int j = 1;
```
