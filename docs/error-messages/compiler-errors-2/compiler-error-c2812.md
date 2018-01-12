---
title: Errore del compilatore C2812 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2812
dev_langs: C++
helpviewer_keywords: C2812
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 12ab4a753ad2098dfa4c3bccb2190c18bcc2fafb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2812"></a>Errore del compilatore C2812
\#importazione non è supportata con /clr: pure e /CLR: safe  
  
 Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 [direttiva #import](../../preprocessor/hash-import-directive-cpp.md) non è supportato con **/clr: pure** e **/CLR: safe** perché `#import` richiede l'uso di librerie di supporto del compilatore nativo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2812.  
  
```  
// C2812.cpp  
// compile with: /clr:pure /c  
#import "importlib.tlb"   // C2812  
```