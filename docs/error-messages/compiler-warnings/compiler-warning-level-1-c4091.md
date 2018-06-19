---
title: Compilatore (livello 1) Avviso C4091 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4091
dev_langs:
- C++
helpviewer_keywords:
- C4091
ms.assetid: 3a404967-ab42-49b0-b324-fd7ba1859d78
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79a0a74ad2cf6471679fd776f296d465ee8dd29c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33276516"
---
# <a name="compiler-warning-level-1-c4091"></a>Compilatore (livello 1) Avviso C4091
'keyword': ignorato a sinistra di 'type' quando si dichiara alcuna variabile  
  
 Il compilatore ha rilevato una situazione in cui l'utente deve probabilmente una variabile che deve essere dichiarata, ma il compilatore non è in grado di dichiarare la variabile.  
  
## <a name="example"></a>Esempio  
 Oggetto `__declspec` si applica l'attributo all'inizio di una dichiarazione di tipo definito dall'utente per la variabile di quel tipo. C4091 indica che si dichiara alcuna variabile. L'esempio seguente genera l'errore C4091.  
  
```  
// C4091.cpp  
// compile with: /W1 /c  
__declspec(dllimport) class X {}; // C4091  
  
// __declspec attribute applies to varX  
__declspec(dllimport) class X2 {} varX;  
  
// __declspec attribute after the class or struct keyword   
// applies to user defined type  
class __declspec(dllimport) X3 {};  
```  
  
## <a name="example"></a>Esempio  
 Se un identificatore è un typedef, non può essere anche un nome di variabile. L'esempio seguente genera l'errore C4091.  
  
```  
// C4091_b.cpp  
// compile with: /c /W1 /WX  
#define LIST 4  
typedef struct _LIST {} LIST;   // C4091  
```