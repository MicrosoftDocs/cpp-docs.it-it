---
title: Errore del compilatore C3628 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3628
dev_langs: C++
helpviewer_keywords: C3628
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 131b2829991d0d8c40b64c903afd45b485b9ba55
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3628"></a>Errore del compilatore C3628
'base class': gestite o WinRTclasses supportano solo l'ereditarietà pubblica  
  
Si è verificato un tentativo di utilizzare un tipo gestito o WinRT classe come un [privata](../../cpp/private-cpp.md) o [protetti](../../cpp/protected-cpp.md) classe di base. Oggetto gestito o WinRT classe può essere utilizzata solo come classe base con [pubblica](../../cpp/public-cpp.md) accesso.  
  
L'esempio seguente genera l'errore C3628 e mostra come risolverlo:  
  
```  
// C3628a.cpp  
// compile with: /clr  
ref class B {  
};  
  
ref class D : private B {   // C3628  
  
// The following line resolves the error.  
// ref class D : public B {  
};  
  
int main() {  
}  
```  
