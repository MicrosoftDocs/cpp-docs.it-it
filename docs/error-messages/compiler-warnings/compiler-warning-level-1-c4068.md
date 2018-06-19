---
title: Compilatore avviso (livello 1) C4068 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4068
dev_langs:
- C++
helpviewer_keywords:
- C4068
ms.assetid: 96a7397a-4eab-44ab-b3bb-36747503f7e5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 37860067c8ff5409fd4376638ef1754673bca93b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279409"
---
# <a name="compiler-warning-level-1-c4068"></a>Avviso del compilatore (livello 1) C4068
pragma sconosciuto  
  
 Il compilatore ha ignorato un [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md)non riconosciuto. Verificare che il **pragma** sia consentito dal compilatore in uso. L'esempio seguente genera l'errore C4068:  
  
```  
// C4068.cpp  
// compile with: /W1  
#pragma NotAValidPragmaName   // C4068, use valid name to resolve  
int main()  
{  
}  
```