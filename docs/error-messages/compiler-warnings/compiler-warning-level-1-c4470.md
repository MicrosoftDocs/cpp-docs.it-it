---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4470'
title: Avviso del compilatore (livello 1) C4470
ms.date: 11/04/2016
f1_keywords:
- C4470
helpviewer_keywords:
- C4470
ms.assetid: f52a3eaa-a235-4747-a47d-9ec4ad4cb0ea
ms.openlocfilehash: 6fe01782fbd2151175bc1da59afa8bd73fa5648d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310980"
---
# <a name="compiler-warning-level-1-c4470"></a>Avviso del compilatore (livello 1) C4470

pragma di controllo a virgola mobile ignorati in/CLR

Pragma di controllo float:

- [fenv_access](../../preprocessor/fenv-access.md)

- [float_control](../../preprocessor/float-control.md)

- [fp_contract](../../preprocessor/fp-contract.md)

non hanno alcun effetto in [/CLR](../../build/reference/clr-common-language-runtime-compilation.md).

L'esempio seguente genera l'C4470:

```cpp
// C4470.cpp
// compile with: /clr /W1 /LD
#pragma float_control(except, on)   // C4470
```
