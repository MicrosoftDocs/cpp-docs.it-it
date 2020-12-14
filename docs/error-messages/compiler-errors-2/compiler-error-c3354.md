---
description: 'Altre informazioni su: errore del compilatore C3354'
title: Errore del compilatore C3354
ms.date: 11/04/2016
f1_keywords:
- C3354
helpviewer_keywords:
- C3354
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
ms.openlocfilehash: cb2c110471b95010e56677608725e5d6abeaa5e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245317"
---
# <a name="compiler-error-c3354"></a>Errore del compilatore C3354

'function': la funzione usata per creare un delegato non può avere un tipo restituito 'type'

I tipi seguenti non sono validi come tipi restituiti per un **`delegate`** :

- Puntatore a funzione

- Puntatore a membro

- Puntatore a funzione membro

- Riferimento a funzione

- Riferimento a funzione membro

L'esempio seguente genera l'errore C3354:

```cpp
// C3354_2.cpp
// compile with: /clr /c
using namespace System;
typedef void ( *VoidPfn )();

delegate VoidPfn func(); // C3354
// try the following line instead
// delegate  void func();
```
