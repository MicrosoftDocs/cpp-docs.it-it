---
title: Errore del compilatore C3163 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3163
dev_langs:
- C++
helpviewer_keywords:
- C3163
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e7be8fbba29cf82070d6fd96c76f810bda961489
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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