---
title: Errore del compilatore C3075 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3075
dev_langs:
- C++
helpviewer_keywords:
- C3075
ms.assetid: f431daa9-e0fa-48f0-a5c3-f99be96b55e3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c582c9907987fe9f015f3e639e2f3f2e362e0c82
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33255549"
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