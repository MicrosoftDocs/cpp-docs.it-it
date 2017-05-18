---
title: Errore del compilatore C3352 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3352
dev_langs:
- C++
helpviewer_keywords:
- C3352
ms.assetid: f233bed7-474e-425f-aad2-7801578169d4
caps.latest.revision: 11
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
ms.openlocfilehash: fb65402b78f777d4a2dcfce2a4366444a259e5d9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3352"></a>Errore del compilatore C3352
'funzione': la funzione specificata non corrisponde al tipo di delegato 'type'  
  
 Gli elenchi di parametri per `function` e il delegato non corrispondono.  
  
 Per ulteriori informazioni, vedere [delegato (estensioni del componente C++)](../../windows/delegate-cpp-component-extensions.md).  
  
 Nell'esempio seguente viene generato l'errore C3352:  
  
```  
// C3352.cpp  
// compile with: /clr  
delegate int D( int, int );  
ref class C {  
public:  
   int mf( int ) {  
      return 1;  
   }  
  
   // Uncomment the following line to resolve.  
   // int mf(int, int) { return 1; }  
};  
  
int main() {  
   C^ pC = gcnew C;  
   System::Delegate^ pD = gcnew D( pC, &C::mf );   // C3352  
}  
```  

