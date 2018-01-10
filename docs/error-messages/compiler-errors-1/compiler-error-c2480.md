---
title: Errore del compilatore C2480 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2480
dev_langs: C++
helpviewer_keywords: C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4b8b350c8f9098c56c503041614a4e68c780af5b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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