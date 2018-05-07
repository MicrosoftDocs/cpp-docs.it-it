---
title: Errore del compilatore C3737 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3737
dev_langs:
- C++
helpviewer_keywords:
- C3737
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29d31597e9581d03f97c2b07856ce81c5de50bd3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3737"></a>Errore del compilatore C3737
'delegato': un delegato non può avere una convenzione di chiamata esplicita  
  
 Non è possibile specificare il [la convenzione di chiamata](../../cpp/calling-conventions.md) per un `delegate`.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3737:  
  
```  
// C3737a.cpp  
// compile with: /clr  
delegate void __stdcall MyFunc();   // C3737  
// Try the following line instead.  
// delegate void MyFunc();  
  
int main() {  
}  
```  
