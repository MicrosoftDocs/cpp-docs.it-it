---
title: Compilatore avviso (livello 1) C4548 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4548
dev_langs:
- C++
helpviewer_keywords:
- C4548
ms.assetid: 2cee817e-e463-4d90-bbd2-de120d48c101
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 02982b4cbab1bc2152c90f8a95feec9dddbd41da
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4548"></a>Avviso del compilatore (livello 1) C4548
l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.  
  
 Il compilatore ha rilevato un'espressione di valori delimitati da virgole con formato non valido.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4548:  
  
```  
// C4548.cpp  
// compile with: /W1  
#pragma warning (default : 4548)  
int main()  
{  
   int i = 0, k = 0;  
  
   if ( i, k )   // C4548  
   // try the following line instead  
   // if ( i = 0, k )  
      i++;  
}  
```