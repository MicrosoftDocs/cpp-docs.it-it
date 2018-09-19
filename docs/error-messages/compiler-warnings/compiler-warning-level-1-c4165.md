---
title: Compilatore Warning (level 1) C4165 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4165
dev_langs:
- C++
helpviewer_keywords:
- C4165
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c532ddee7a2066190c2f926ba7b1240c0418f6c4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084926"
---
# <a name="compiler-warning-level-1-c4165"></a>Compilatore Warning (level 1) C4165

'HRESULT' viene convertito in 'bool'; continuare che questo è ciò che si desidera?

Quando si usa un valore HRESULT in un [se](../../cpp/if-else-statement-cpp.md) istruzione, verrà convertito il valore HRESULT in un [bool](../../cpp/bool-cpp.md) a meno che non testare in modo esplicito per la variabile come HRESULT. Per impostazione predefinita, questo avviso non è attivo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4165

```cpp
// C4165.cpp
// compile with: /W1
#include <windows.h>
#pragma warning(1:4165)

extern HRESULT hr;
int main() {
   if (hr) {
   // try either of the following ...
   // if (FAILED(hr)) { // C4165 expected
   // if (hr != S_OK) {
   }
}
```