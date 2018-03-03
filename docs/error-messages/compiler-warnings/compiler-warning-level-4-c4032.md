---
title: Compilatore (livello 4) Avviso C4032 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4032
dev_langs:
- C++
helpviewer_keywords:
- C4032
ms.assetid: 70dd0c85-0239-43f9-bb06-507f6a57d206
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9da389e4bc52cb84d331b9005b4b62d2c24ef868
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4032"></a>Compilatore (livello 4) Avviso C4032
il parametro formale 'number' ha un tipo diverso quando promosso  
  
 Il tipo di parametro non è compatibile, le promozioni predefinite, con il tipo in una dichiarazione precedente.  
  
 Si tratta di un errore in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) e un avviso nelle estensioni Microsoft (/Ze).  
  
## <a name="example"></a>Esempio  
  
```  
// C4032.c  
// compile with: /W4  
void func();  
void func(char);   // C4032, char promotes to int  
  
int main()  
{  
}  
```