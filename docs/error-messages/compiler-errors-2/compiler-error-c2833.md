---
title: Errore del compilatore C2833 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2833
dev_langs:
- C++
helpviewer_keywords:
- C2833
ms.assetid: b9418ce1-e2ee-4599-8959-6fde89c27569
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 019fa3cb0b36d9062bc972b01d434afe6e3848aa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2833"></a>Errore del compilatore C2833
'operatore' non è un tipo o un operatore riconosciuto  
  
 La parola `operator` deve essere seguita da un operatore che si desidera eseguire l'override o un tipo che si desidera convertire.  
  
 Per un elenco degli operatori che è possibile definire in un tipo gestito, vedere [operatori definiti dall'utente](../../dotnet/user-defined-operators-cpp-cli.md).  
  
 L'esempio seguente genera l'errore C2833:  
  
```  
// C2833.cpp  
// compile with: /c  
class A {};  
  
void operator ::* ();   // C2833  
void operator :: ();   // OK  
```