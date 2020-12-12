---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4377'
title: Avviso del compilatore (livello 1) C4377
ms.date: 11/04/2016
f1_keywords:
- C4377
helpviewer_keywords:
- C4377
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
ms.openlocfilehash: 674bfb69a20c901f20509a7359ed408b0e38f479
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185700"
---
# <a name="compiler-warning-level-1-c4377"></a>Avviso del compilatore (livello 1) C4377

i tipi nativi sono privati per impostazione predefinita. -d1PrivateNativeTypes è deprecato

Nelle versioni precedenti i tipi nativi negli assembly erano pubblici per impostazione predefinita e per renderli privati è stata usata un'opzione del compilatore interna non documentata (**/d1PrivateNativeTypes**).

Tutti i tipi, nativi e CLR, sono ora privati per impostazione predefinita in un assembly, quindi **/d1PrivateNativeTypes** non è più necessario.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4377.

```cpp
// C4377.cpp
// compile with: /clr /d1PrivateNativeTypes /W1
// C4377 warning expected
int main() {}
```
