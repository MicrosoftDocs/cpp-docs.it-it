---
title: Compilatore avviso (livello 4) C4205 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4205
dev_langs: C++
helpviewer_keywords: C4205
ms.assetid: 39b5108c-7230-41b4-b2fe-2293eb6aae28
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 989fd0a9ce2598e2e5ce8f96e4459b49d26a49e3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4205"></a>Avviso del compilatore (livello 4) C4205
utilizzata estensione non standard: dichiarazione di funzione statica in ambito funzione  
  
 Con le estensioni Microsoft (/Ze), **statico** funzioni possono essere dichiarate all'interno di un'altra funzione. La funzione ha ambito globale.  
  
## <a name="example"></a>Esempio  
  
```  
// C4205.c  
// compile with: /W4  
void func1()  
{  
   static int func2();  // C4205  
};  
  
int main()  
{  
}  
```  
  
 Tali inizializzazione non sono validi in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).