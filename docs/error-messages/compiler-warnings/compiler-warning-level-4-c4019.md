---
title: Compilatore avviso (livello 4) C4019 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4019
dev_langs:
- C++
helpviewer_keywords:
- C4019
ms.assetid: 4ecfe85d-673f-4334-8154-36fe7f0b3444
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d015b5674ad8f64a68b86979ce93313fa098c867
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296507"
---
# <a name="compiler-warning-level-4-c4019"></a>Avviso del compilatore (livello 4) C4019
istruzione vuota in ambito globale  
  
 Un punto e virgola nell'ambito globale non è preceduto da un'istruzione.  
  
 Questo avviso può essere risolto se si rimuove il punto e virgola aggiuntivo.  
  
## <a name="example"></a>Esempio  
  
```  
// C4019.c  
// compile with: /Za /W4  
#define declint( varname ) int varname;  
declint( a );   // C4019, int a;;  
declint( b )   // OK, int b;  
  
int main()  
{  
}  
```