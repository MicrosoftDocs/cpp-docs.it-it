---
title: Errore del compilatore C3912 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3912
dev_langs: C++
helpviewer_keywords: C3912
ms.assetid: 674e050c-11fb-4db1-8bdf-a3e95b41161d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6de7becfbb6aed8a1056732a975cd6e1f8f47f81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3912"></a>Errore del compilatore C3912
'event': tipo di evento deve essere un tipo delegato  
  
 Un evento è stato dichiarato ma non è del tipo appropriato.  
  
 Per ulteriori informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3912:  
  
```  
// C3912.cpp  
// compile with: /clr  
delegate void H();  
ref class X {  
   event int Ev;   // C3912  
   event H^ Ev2;   // OK  
};  
```