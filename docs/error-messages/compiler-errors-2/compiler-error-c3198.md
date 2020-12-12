---
description: 'Altre informazioni su: errore del compilatore C3198'
title: Errore del compilatore C3198
ms.date: 11/04/2016
f1_keywords:
- C3198
helpviewer_keywords:
- C3198
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
ms.openlocfilehash: 8f72dd32af7f004696afd87b7141768f09ea5f12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321983"
---
# <a name="compiler-error-c3198"></a>Errore del compilatore C3198

uso non valido di pragma a virgola mobile: fenv_access pragma funziona solo in modalità precisa

[fenv_access](../../preprocessor/fenv-access.md) pragma è stato utilizzato in un'impostazione [/FP](../../build/reference/fp-specify-floating-point-behavior.md) diversa da **/FP: precise**.

L'esempio seguente genera l'C3198:

```cpp
// C3198.cpp
// compile with: /fp:fast
#pragma fenv_access(on)   // C3198
```
