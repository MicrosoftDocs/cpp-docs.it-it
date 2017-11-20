---
title: Errore del compilatore C3207 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3207
dev_langs: C++
helpviewer_keywords: C3207
ms.assetid: 4a28b976-142a-4cff-aa2f-480b892c50ca
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7d0f50d73f32a388669ea49af737b69b57d6a64d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3207"></a>Errore del compilatore C3207
'function': argomento di modello non valido per 'arg'. Previsto modello di classe  
  
 La definizione di una funzione di modello prevede che accetti un argomento di modello template. Tuttavia è stato passato un argomento di tipo modello.  
  
 L'esempio seguente genera l'errore C3207:  
  
```  
// C3207.cpp  
template <template <class T> class TT>  
void f(){}  
  
template <class T>  
struct S  
{  
};  
  
void f1()  
{  
   f<S<int> >();   // C3207  
   // try the following line instead  
   // f<S>();  
}  
```