---
title: Compilatore avviso (livello 4) C4690 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4690
dev_langs:
- C++
helpviewer_keywords:
- C4690
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c8285fd3763b93c8a320a6cb984168b88d2e9ae
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293621"
---
# <a name="compiler-warning-level-4-c4690"></a>Avviso del compilatore (livello 4) C4690
[ emitidl( pop ) ] : più estrazioni che inserimenti  
  
 Il numero di estrazioni dell'attributo [emitidl](../../windows/emitidl.md) supera di una volta il numero di inserimenti.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4690.  
  
```  
// C4690.cpp  
// compile with: /c /W4  
[emitidl(pop)];   // C4690  
class x {};  
```