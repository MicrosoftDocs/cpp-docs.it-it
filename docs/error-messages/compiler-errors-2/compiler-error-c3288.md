---
title: Errore del compilatore C3288 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3288
dev_langs:
- C++
helpviewer_keywords:
- C3288
ms.assetid: ed08a540-9751-46e1-9cbe-c51d6a49ffab
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 46c81c0f0ff1e1833198f28016891e294eced182
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33250052"
---
# <a name="compiler-error-c3288"></a>Errore del compilatore C3288
'type': risoluzione di riferimento non valida di un tipo di handle  
  
 Il compilatore ha rilevato un dereferenziazione di un tipo di handle non valido. È possibile dereferenziare un tipo di handle e assegnarlo a un riferimento. Per ulteriori informazioni, vedere [operatore di riferimento di rilevamento](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3288.  
  
```  
// C3288.cpp  
// compile with: /clr  
ref class R {};  
int main() {  
   *(System::Object^) nullptr;   // C3288  
  
// OK  
   (System::Object^) nullptr;   // OK  
   R^ r;  
   R% pr = *r;  
}  
```