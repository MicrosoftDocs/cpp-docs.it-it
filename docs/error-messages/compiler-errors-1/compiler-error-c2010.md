---
title: Errore del compilatore C2010 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2010
dev_langs:
- C++
helpviewer_keywords:
- C2010
ms.assetid: 5795ed1d-e206-410b-b7b4-528d125c67b4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0c1f1a042881420c85670020e05ded3684a91268
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33163933"
---
# <a name="compiler-error-c2010"></a>Errore del compilatore C2010
'character': imprevisto nell'elenco di parametri formali di macro  
  
 Il carattere viene usato in modo non corretto nell'elenco di parametri formali della definizione di una macro. Rimuovere il carattere per risolvere l'errore.  
  
 L'esempio seguente genera l'errore C2010:  
  
```  
// C2010.cpp  
// compile with: /c  
#define mymacro(a|) (2*a)   // C2010  
#define mymacro(a) (2*a)   // OK  
```