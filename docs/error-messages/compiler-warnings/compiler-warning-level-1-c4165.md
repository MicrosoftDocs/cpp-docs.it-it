---
title: Compilatore (livello 1) avviso C4165 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4165
dev_langs:
- C++
helpviewer_keywords:
- C4165
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e31f0e0440b0c31197ded21464edc9d686c4864e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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