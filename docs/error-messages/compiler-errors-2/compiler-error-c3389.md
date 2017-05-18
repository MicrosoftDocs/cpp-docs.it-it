---
title: Errore del compilatore C3389 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3389
dev_langs:
- C++
helpviewer_keywords:
- C3389
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: cc82b83860786ffc3f0aee73ede18ecadef16a7a
ms.openlocfilehash: 6cfe5a03ecbb370eaf290f94ee5e26a5d185a1ae
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3389"></a>Errore del compilatore C3389
__declspec(Keyword) non può essere utilizzato con /clr: pure o /CLR: safe  
  
 Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015.  
  
 Oggetto [declspec](../../cpp/declspec.md) modificatore utilizzato implica una per ogni stato del processo.  [/CLR: pure](../../build/reference/clr-common-language-runtime-compilation.md) implica una per ogni [appdomain](../../cpp/appdomain.md) dello stato.  Pertanto, la dichiarazione di una variabile con il `keyword` **declspec** modificatore e la compilazione con **/clr: pure** non è consentito.  
  
 Nell'esempio seguente viene generato l'errore C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```
