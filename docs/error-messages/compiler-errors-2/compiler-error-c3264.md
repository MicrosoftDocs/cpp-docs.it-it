---
title: Errore del compilatore C3264 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3264
dev_langs:
- C++
helpviewer_keywords:
- C3264
ms.assetid: 94ece687-2364-4f7a-8ebb-7afd3ae9d63d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c5dc129754774f5dc8193d7a43bb982a8768c582
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3264"></a>Errore del compilatore C3264
'class': il costruttore di classe non può avere un tipo restituito  
  
I costruttori di classe non possono avere tipi restituiti.  
  
L'esempio seguente genera l'errore C3264:  
  
```  
// C3264_2.cpp  
// compile with: /clr  
  
ref class X {  
   public:  
      static int X()   { // C3264  
      }  
  
      /* use the code below to resolve the error  
      static X() {  
      }  
      */  
};  
int main() {  
}  
```  

