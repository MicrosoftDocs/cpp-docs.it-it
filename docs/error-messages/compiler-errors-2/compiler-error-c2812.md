---
title: Errore del compilatore C2812 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2812
dev_langs:
- C++
helpviewer_keywords:
- C2812
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
caps.latest.revision: 6
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
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 358d0d3a5c7f0129d74be70c3309337542807d1d
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2812"></a>Errore del compilatore C2812
\#importazione non è supportata con /clr: pure e /CLR: safe  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 [direttiva #import](../../preprocessor/hash-import-directive-cpp.md) non è supportato con **/clr: pure** e **/CLR: safe** poiché `#import` richiede l'utilizzo di librerie di supporto nativo del compilatore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene generato l'errore C2812.  
  
```  
// C2812.cpp  
// compile with: /clr:pure /c  
#import "importlib.tlb"   // C2812  
```
