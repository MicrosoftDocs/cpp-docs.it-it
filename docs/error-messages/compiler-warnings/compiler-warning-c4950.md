---
title: Avviso del compilatore C4950 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4950
dev_langs: C++
helpviewer_keywords: C4950
ms.assetid: 50226a5c-c664-4d09-ac59-e9e874ca244f
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6a922a0ee324afcf5f263abe2189e4071c5575c7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-c4950"></a>Avviso del compilatore C4950
'type_or_member': contrassegnato come obsoleto  
  
Un tipo o membro è stato contrassegnato come obsoleto con il <xref:System.ObsoleteAttribute> attributo.  
  
C4950 viene sempre generato come errore. È possibile disattivare questo avviso utilizzando il [avviso](../../preprocessor/warning.md) direttiva pragma o [/wd](../../build/reference/compiler-option-warning-level.md) l'opzione del compilatore.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'avviso C4950:  
  
```cpp  
// C4950.cpp  
// compile with: /clr  
using namespace System;  
  
// Any reference to Func3 should generate an error with message  
[System::ObsoleteAttribute("Will be removed in next version", true)]  
Int32 Func3(Int32 a, Int32 b) {  
   return (a + b);  
}  
  
int main() {  
   Int32 MyInt3 = ::Func3(2, 2);   // C4950  
}  
```