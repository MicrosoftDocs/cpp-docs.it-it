---
title: Compilatore (livello 1) avviso C4165 | Documenti Microsoft
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
ms.openlocfilehash: 39487999f2aa74a5600d84d71917712e03b2d626
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4165"></a>Compilatore (livello 1) avviso C4165
'HRESULT' viene convertito in 'bool'; continuare che questo è ciò che si desidera?  
  
Quando si utilizza un valore HRESULT in un [se](../../cpp/if-else-statement-cpp.md) istruzione, verrà convertito in valore HRESULT un [bool](../../cpp/bool-cpp.md) a meno che non verifica in modo esplicito per la variabile come un valore HRESULT. Per impostazione predefinita, questo avviso non è attivo.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C4165:  
  
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