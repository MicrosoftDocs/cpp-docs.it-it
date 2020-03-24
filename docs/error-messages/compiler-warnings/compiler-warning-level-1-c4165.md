---
title: Avviso del compilatore (livello 1) C4165
ms.date: 11/04/2016
f1_keywords:
- C4165
helpviewer_keywords:
- C4165
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
ms.openlocfilehash: bb036f7672a074e859d3e19083e256bd80c93578
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80176098"
---
# <a name="compiler-warning-level-1-c4165"></a>Avviso del compilatore (livello 1) C4165

' HRESULT ' verrà convertito in ' bool '; si è certi che questo sia il risultato desiderato?

Quando si usa un valore HRESULT in un'istruzione [if](../../cpp/if-else-statement-cpp.md) , HRESULT verrà convertito in un valore [bool](../../cpp/bool-cpp.md) a meno che non si verifichi in modo esplicito la variabile come HRESULT. Per impostazione predefinita, questo avviso non è attivo.

## <a name="example"></a>Esempio

L'esempio seguente genera C4165

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
