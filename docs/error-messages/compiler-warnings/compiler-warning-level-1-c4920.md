---
title: Compilatore avviso (livello 1) C4920 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4920
dev_langs:
- C++
helpviewer_keywords:
- C4920
ms.assetid: 1e501f2e-93c1-4d27-a4fa-54fc86271ae7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bbce271d960196b8ba9a10173030a049e2cc56e5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33290049"
---
# <a name="compiler-warning-level-1-c4920"></a>Avviso del compilatore (livello 1) C4920
enum 'enum' membro 'member'='value' già presente in enum 'enum' come 'member'='value'  
  
 Se un file TLB passato a #import contiene lo stesso simbolo definito in due o più enumerazioni, questo avviso indica che i simboli identici successivi verranno ignorati e impostati come commento nel file TLH.  
  
 Si supponga che un file TLB contenga quanto segue:  
  
```  
library MyLib  
{  
    typedef enum {  
        enumMember = 512  
    } AProblem;  
  
    typedef enum {  
        enumMember = 1024  
    } BProblem;  
};  
```  
  
 Gli esempi seguenti generano l'errore C4920:  
  
```  
// C4920.cpp  
// compile with: /W1  
#import "t4920.tlb"   // C4920  
  
int main() {  
}  
```