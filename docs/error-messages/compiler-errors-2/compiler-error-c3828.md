---
title: Errore del compilatore C3828 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3828
dev_langs:
- C++
helpviewer_keywords:
- C3828
ms.assetid: 8d9cee75-9504-4bc8-88b6-2413618a3f45
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: adb016c164923e1ac6008e6318e39f8ac8632113
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33267420"
---
# <a name="compiler-error-c3828"></a>Errore del compilatore C3828
'object type': argomenti di posizione non consentiti durante la creazione di istanze di gestito o WinRTclasses  
  
 Quando si crea un oggetto di un tipo gestito o Windows Runtime, è possibile utilizzare il form di posizione dell'operatore [ref new, gcnew](../../windows/ref-new-gcnew-cpp-component-extensions.md) o [nuova](../../cpp/new-operator-cpp.md).  
  
 L'esempio seguente genera l'errore C3828 e mostra come risolverlo:  
  
```  
// C3828a.cpp  
// compile with: /clr  
ref struct M {  
};  
  
ref struct N {  
   static array<char>^ bytes = gcnew array<char>(256);  
};  
  
int main() {  
   M ^m1 = new (&N::bytes) M();   // C3828  
   // The following line fixes the error.  
   // M ^m1 = gcnew M();  
}  
```