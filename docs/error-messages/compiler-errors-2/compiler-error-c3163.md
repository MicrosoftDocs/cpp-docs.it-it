---
title: Errore del compilatore C3163 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3163
dev_langs:
- C++
helpviewer_keywords:
- C3163
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 95fb254036d2883b6efe6b81bda54864d533c2a8
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3163"></a>Errore del compilatore C3163
'construct': attributi non coerenti con la dichiarazione precedente  
  
 Gli attributi che vengono applicati a una definizione in conflitto con gli attributi applicati a una dichiarazione.  
  
 Un modo per risolvere l'errore C3163 è per eliminare gli attributi sulla dichiarazione con prototipo. Tutti gli attributi in una dichiarazione con prototipo devono essere minore di attributi nella definizione di o, al massimo uguale a essi.  
  
 Una possibile causa dell'errore C3163 implica il linguaggio di annotazione del codice sorgente Microsoft (SAL). Le macro SAL non si espanderanno a meno che non si compila il progetto utilizzando il **/ANALYZE** flag. Un programma che viene compilato senza errori senza /ANALYZE potrebbe generare C3163 se si tenta di compilare con il /ANALYZE opzione. Per ulteriori informazioni su SAL, vedere [annotazioni SAL](../../c-runtime-library/sal-annotations.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3163.  
  
```  
// C3163.cpp  
// compile with: /clr /c  
using namespace System;  
  
[CLSCompliant(true)] void f();  
[CLSCompliant(false)] void f() {}   // C3163  
// try the following line instead  
// [CLSCompliant(true)] void f() {}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Annotazioni SAL](../../c-runtime-library/sal-annotations.md)
