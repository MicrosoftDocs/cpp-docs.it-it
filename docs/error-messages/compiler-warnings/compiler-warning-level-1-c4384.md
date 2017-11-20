---
title: Compilatore avviso (livello 1) C4384 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4384
dev_langs: C++
helpviewer_keywords: C4384
ms.assetid: fafa8eb2-cbfc-4edb-8b0f-511ff5d37ac0
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7e7c38a6346a4b17a0a30bbe323866d9423474f6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4384"></a>Avviso del compilatore (livello 1) C4384
\#pragma 'make_public' deve essere utilizzato solo in ambito globale  
  
 Il [make_public](../../preprocessor/make-public.md) pragma è stato applicato in modo non corretto.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4384.  
  
```  
// C4384.cpp  
// compile with: /c /W1  
namespace n {  
   #pragma make_public(N::C)   // C4384  
   namespace N {  
      class C {};  
   }  
}  
```