---
title: Errore del compilatore C2480 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2480
dev_langs:
- C++
helpviewer_keywords:
- C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 987cefa42b3f3f8d9588e446ca181c0b7cd48f8c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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