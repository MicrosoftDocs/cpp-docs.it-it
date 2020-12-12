---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4185'
title: Avviso del compilatore (livello 1) C4185
ms.date: 11/04/2016
f1_keywords:
- C4185
helpviewer_keywords:
- C4185
ms.assetid: 37e7063a-35b1-4e05-ae31-e811dced02b9
ms.openlocfilehash: 7fb2e11ef0a287190424d2d2f5287fc0b2ed1575
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266650"
---
# <a name="compiler-warning-level-1-c4185"></a>Avviso del compilatore (livello 1) C4185

l'attributo #import sconosciuto 'attribute' verrà ignorato

L'attributo non è un attributo valido di `#import`. Ignorato.

## <a name="example"></a>Esempio

```cpp
// C4185.cpp
// compile with: /W1 /c
#import "stdole2.tlb" no_such_attribute   // C4185
```
