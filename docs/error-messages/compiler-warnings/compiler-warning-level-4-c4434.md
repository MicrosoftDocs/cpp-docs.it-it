---
title: Compilatore avviso (livello 4) C4434 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4434
dev_langs:
- C++
helpviewer_keywords:
- C4434
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c639fa1cc89266fd9cc2935d88132ceae225a85e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4434"></a>Avviso del compilatore (livello 4) C4434
un costruttore di classe deve avere accessibilità privata; conversione in accesso privato  
  
 C4434 indica che il compilatore ha modificato l'accessibilità di un costruttore statico. Costruttori statici devono avere accessibilità privata, come sono concepite solo a essere chiamato da common language runtime. Per ulteriori informazioni, vedere [costruttori statici](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Static_constructors).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4434.  
  
```  
// C4434.cpp  
// compile with: /W4 /c /clr  
public ref struct R {  
   static R(){}   // C4434  
};  
```