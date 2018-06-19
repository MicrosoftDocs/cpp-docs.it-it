---
title: Compilatore avviso (livello 3) C4161 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4161
dev_langs:
- C++
helpviewer_keywords:
- C4161
ms.assetid: 03d3be61-83f1-4009-8310-8758ab67055f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1c81072c5121bea4a323c3eb16cc58c6f28c06f7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33290829"
---
# <a name="compiler-warning-level-3-c4161"></a>Avviso del compilatore (livello 3) C4161
\#pragma pragma(pop...): più estrazioni che inserimenti  
  
 Il codice sorgente contiene più estrazioni che inserimenti per pragma ***pragma***, quindi lo stack potrebbe non comportarsi come previsto. Per evitare l'avviso, assicurarsi che il numero di estrazioni non superi il numero di inserimenti.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4161:  
  
```  
// C4161.cpp  
// compile with: /W3 /LD  
#pragma pack(push, id)  
#pragma pack(pop, id)  
#pragma pack(pop, id)   // C4161, an extra pop  
  
#pragma bss_seg(".my_data1")  
int j;  
  
#pragma bss_seg(push, stack1, ".my_data2")     
int l;  
  
#pragma bss_seg(pop, stack1)  
int m;  
  
#pragma bss_seg(pop, stack1)   // C4161  
```