---
title: Errore del compilatore C3628 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3628
dev_langs:
- C++
helpviewer_keywords:
- C3628
ms.assetid: 0ff5a4a4-fcc9-47a0-a4d8-8af9cf2815f6
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: e8723f85289d1094a6969d2bf26c30a85ccf382b
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3628"></a>Errore del compilatore C3628
'classe base': gestite o WinRTclasses supportano solo l'ereditarietà pubblica  
  
È stato effettuato un tentativo di utilizzare un oggetto gestito o WinRT classe come un [privata](../../cpp/private-cpp.md) o [protetti](../../cpp/protected-cpp.md) classe di base. Oggetto gestito o classe WinRT può essere utilizzata solo come classe base con [pubblica](../../cpp/public-cpp.md) accesso.  
  
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

