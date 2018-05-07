---
title: Errore del compilatore C3622 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3622
dev_langs:
- C++
helpviewer_keywords:
- C3622
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d8c7ab18bfba899c2df41becb457ed2e7725f81
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3622"></a>Errore del compilatore C3622
'class': una classe dichiarata come 'keyword' non è possibile creare un'istanza  
  
Si è verificato un tentativo di creare un'istanza di una classe contrassegnata come [astratta](../../windows/abstract-cpp-component-extensions.md). Una classe contrassegnata come `abstract` può essere una classe di base, ma non è possibile creare istanze.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3622.  
  
```  
// C3622.cpp  
// compile with: /clr  
ref class a abstract {};  
  
int main() {  
   a aa;   // C3622  
}  
```  
