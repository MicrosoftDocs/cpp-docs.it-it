---
description: 'Altre informazioni su: errore del compilatore C3246'
title: Errore del compilatore C3246
ms.date: 11/04/2016
f1_keywords:
- C3246
helpviewer_keywords:
- C3246
ms.assetid: ad85224a-e540-479b-a5eb-a3bc3964c30b
ms.openlocfilehash: 5a74b642abe2e184e8e505ec1000433357de2522
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307193"
---
# <a name="compiler-error-c3246"></a>Errore del compilatore C3246

'class': impossibile ereditare da 'type' perché dichiarata come 'sealed'

Una classe contrassegnata come [sealed](../../extensions/sealed-cpp-component-extensions.md) non può essere la classe base per un'altra classe.

L'esempio seguente genera l'errore C3246:

```cpp
// C3246_2.cpp
// compile with: /clr /LD
ref class X sealed {};

ref class Y : public X {}; // C3246
```
