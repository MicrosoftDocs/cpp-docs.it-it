---
title: Errore del compilatore C2480 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2480
dev_langs:
- C++
helpviewer_keywords:
- C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 06f6c536d5756a19e28df7060373512e3e883a41
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2480"></a>Errore del compilatore C2480
'identifier': 'thread' è valida solo per elementi di dati di estensione statica  
  
 Non è possibile utilizzare il `thread` attributo con un variabile automatica, un membro dati non statico, un parametro della funzione oppure in definizioni o dichiarazioni di funzione.  
  
 Utilizzare il `thread` attributo per le variabili globali, i membri dati statici e solo le variabili statiche locale.  
  
 L'esempio seguente genera l'errore C2480:  
  
```  
// C2480.cpp  
// compile with: /c  
__declspec( thread ) void func();   // C2480  
__declspec( thread ) static int i;   // OK  
```
