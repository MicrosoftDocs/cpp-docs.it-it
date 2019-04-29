---
title: Avviso del compilatore (livello 2) C4302
ms.date: 11/04/2016
f1_keywords:
- C4302
helpviewer_keywords:
- C4302
ms.assetid: f5e1c939-e134-4cca-ba1e-9b15a81549ae
ms.openlocfilehash: b2fc3b5db3c052c7a7b0019eae39dcc4541f64f8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402567"
---
# <a name="compiler-warning-level-2-c4302"></a>Avviso del compilatore (livello 2) C4302

'conversion': troncamento da 'type 1' in 'type 2'

Il compilatore ha rilevato una conversione da un tipo più grande in un tipo più piccolo. Le informazioni vengano perse.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4302:

```
// C4302.cpp
// compile with: /W2
#pragma warning(default : 4302)
int main() {
   int i;
   char c = (char) &i;     // C4302
   short s = (short) &i;   // C4302
}
```