---
title: Errore del compilatore C3887 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3887
dev_langs: C++
helpviewer_keywords: C3887
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6ffa92a9984f982c1a71f1417f0f17c8ee36d4c4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3887"></a>Errore del compilatore C3887
'var': l'inizializzatore per un membro dati literal deve essere un'espressione costante  
  
 Oggetto [letterale](../../windows/literal-cpp-component-extensions.md) membro dati può essere inizializzato solo con un'espressione costante.  
  
 L'esempio seguente genera l'errore C3887:  
  
```  
// C3887.cpp  
// compile with: /clr  
ref struct Y1 {  
   static int i = 9;  
   literal  
   int staticConst = i;   // C3887  
};  
```  
  
 Possibile soluzione:  
  
```  
// C3887b.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal  
   int staticConst = 9;  
};  
```