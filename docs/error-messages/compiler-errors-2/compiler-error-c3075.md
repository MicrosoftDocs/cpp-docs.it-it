---
title: Errore del compilatore C3075 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3075
dev_langs: C++
helpviewer_keywords: C3075
ms.assetid: f431daa9-e0fa-48f0-a5c3-f99be96b55e3
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8197297ffd2f75afede3876577f249d3e07c6abb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3075"></a>Errore del compilatore C3075
'instance': impossibile incorporare un'istanza di un tipo riferimento, 'type', in un tipo di valore  
  
 Un tipo valore non può contenere un'istanza di un tipo riferimento.  
  
 Per ulteriori informazioni, vedere [semantica dello Stack C++ per i tipi riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3075.  
  
```  
// C3075.cpp  
// compile with: /clr /c  
ref struct U {};  
value struct X {  
   U y;   // C3075  
};  
  
ref struct Y {  
   U y;   // OK  
};  
```