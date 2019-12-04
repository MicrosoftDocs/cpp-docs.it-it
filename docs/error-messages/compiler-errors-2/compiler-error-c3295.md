---
title: Errore del compilatore C3295
ms.date: 11/04/2016
f1_keywords:
- C3295
helpviewer_keywords:
- C3295
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
ms.openlocfilehash: 4ee79e87085b0b939a762fec4c576c393846c2ae
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756864"
---
# <a name="compiler-error-c3295"></a>Errore del compilatore C3295

'#pragma pragma' può essere usato solo nell'ambito globale o dello spazio dei nomi

Alcuni pragma non possono essere usati in una funzione.  Per ulteriori informazioni, vedere [direttive pragma e parola chiave __Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3295.

```cpp
// C3295.cpp
int main() {
   #pragma managed   // C3295
}
```
