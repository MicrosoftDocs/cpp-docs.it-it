---
description: 'Altre informazioni su: errore del compilatore C3295'
title: Errore del compilatore C3295
ms.date: 11/04/2016
f1_keywords:
- C3295
helpviewer_keywords:
- C3295
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
ms.openlocfilehash: 55fab24088690f5d5bb92da0cc55442bcebeed01
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144625"
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
