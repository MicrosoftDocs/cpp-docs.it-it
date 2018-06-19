---
title: Compilatore avviso (livello 1) C4662 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4662
dev_langs:
- C++
helpviewer_keywords:
- C4662
ms.assetid: 7efda273-d04a-47b7-ad65-ff1ff94b5ffc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 60739959a6c26e0a1674b287ebf0a4605966e09b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283426"
---
# <a name="compiler-warning-level-1-c4662"></a>Avviso del compilatore (livello 1) C4662
creazione di un'istanza esplicita. La classe modello 'identifier1' non ha definizioni da cui specializzare 'identifier2'  
  
 La classe di modello specificata è stata dichiarata ma non definita.  
  
## <a name="example"></a>Esempio  
  
```  
// C4662.cpp  
// compile with: /W1 /LD  
template<class T, int i> class MyClass; // no definition  
template MyClass< int, 1>;              // C4662  
```