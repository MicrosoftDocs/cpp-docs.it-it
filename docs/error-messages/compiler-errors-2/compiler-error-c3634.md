---
title: Errore del compilatore C3634 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3634
dev_langs: C++
helpviewer_keywords: C3634
ms.assetid: fd09f10c-f863-483b-9756-71c16b760b02
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e8bbd6e763bd11dea73acd539ed7a536989d1a5c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3634"></a>Errore del compilatore C3634
'function': non è possibile definire un metodo astratto di un oggetto gestito o WinRTclass  
  
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
