---
title: Compilatore (livello 2) Avviso C4094 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4094
dev_langs: C++
helpviewer_keywords: C4094
ms.assetid: e68929fb-3a1c-4be7-920b-d5f79f534f99
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 01b52b13876e30528632dec13dbaee60acf886fc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-2-c4094"></a>Compilatore (livello 2) Avviso C4094
tag 'token' non dichiara alcun simbolo  
  
 Il compilatore ha rilevato una dichiarazione vuota con un tag di struttura, unione o classe. La dichiarazione viene ignorata.  
  
## <a name="example"></a>Esempio  
  
```  
// C4094.cpp  
// compile with: /W2  
struct  
{  
};   // C4094  
  
int main()  
{  
}  
```  
  
 Questa condizione genera un errore in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).