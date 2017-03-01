---
title: Errore del compilatore C3634 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3634
dev_langs:
- C++
helpviewer_keywords:
- C3634
ms.assetid: fd09f10c-f863-483b-9756-71c16b760b02
caps.latest.revision: 9
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
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 1996f8871a12ad12e900090fd0a6837b825b24b3
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3634"></a>Errore del compilatore C3634
'funzione': Impossibile definire un metodo astratto di un oggetto gestito o WinRTclass  
  
 È possibile dichiarare un metodo astratto in una classe gestita o WinRT, ma non definirlo.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3634:  
  
```  
// C3634.cpp  
// compile with: /clr  
ref class C {  
   virtual void f() = 0;  
};  
  
void C::f() {   // C3634 - don't define managed class' pure virtual method  
}  
```  

