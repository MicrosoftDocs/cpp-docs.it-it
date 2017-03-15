---
title: Compilatore (livello 1) avviso C4165 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-csharp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4165
dev_langs:
- C++
helpviewer_keywords:
- C4165
ms.assetid: f5bed515-2290-4f88-8dab-b45d95fe26ef
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 4ac033535632e94a365aa8dafd849f2ab28a3af7
ms.openlocfilehash: 9f2007a2f43cd7641979b663c58efb3a8e276246
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4165"></a>Compilatore (livello 1) avviso C4165
'HRESULT' verrà convertito in 'bool'. Continuare?  
  
Quando si utilizza un valore HRESULT in un [se](../../cpp/if-else-statement-cpp.md) istruzione, il valore HRESULT verrà convertito in un [bool](../../cpp/bool-cpp.md) a meno che non verifica in modo esplicito per la variabile come HRESULT. Per impostazione predefinita, questo avviso non è attivo.  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C4165:  
  
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
