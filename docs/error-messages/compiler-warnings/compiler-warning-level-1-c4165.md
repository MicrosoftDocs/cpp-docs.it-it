---
title: Compilatore Warning (level 1) C4165
ms.date: 11/04/2016
f1_keywords:
- C4165
helpviewer_keywords:
- C4165
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
ms.openlocfilehash: 4d6377730e262efafb38f5e714989e9075a77a04
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391738"
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