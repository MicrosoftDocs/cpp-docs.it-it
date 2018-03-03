---
title: Compilatore avviso (livello 4) C4400 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4400
dev_langs:
- C++
helpviewer_keywords:
- C4400
ms.assetid: f135fe98-4f92-4e07-9d71-2621b36ee755
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 615a315ff2d9ff3f517c0b046317400792760b73
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4400"></a>Avviso del compilatore (livello 4) C4400
'type': qualificatori const/volatile per questo tipo non sono supportati.  
  
 Il [const](../../cpp/const-cpp.md)e [volatile](../../cpp/volatile-cpp.md)qualificatori non funzionerà con le variabili di tipi common language runtime.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4400.  
  
```  
// C4400.cpp  
// compile with: /clr /W4  
// C4401 expected  
using namespace System;  
#pragma warning (disable : 4101)  
int main() {  
   const String^ str;   // C4400  
   volatile String^ str2;   // C4400  
}  
```