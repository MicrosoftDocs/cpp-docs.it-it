---
title: Compilatore avviso (livello 3) C4557 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4557
dev_langs: C++
helpviewer_keywords: C4557
ms.assetid: 7d9db716-03b2-4ee5-9b09-ba8aa5aa7e4c
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ef33fb13ad0463d00e375c80ddddb97ab9436f58
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-3-c4557"></a>Avviso del compilatore (livello 3) C4557
'__assume' contiene l'effetto 'effetto'  
  
 Il valore passato a un [assume](../../intrinsics/assume.md) statement2 è stata modificata.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
 L'esempio seguente genera l'errore C4557:  
  
```  
// C4557.cpp  
// compile with: /W3  
#pragma warning(default : 4557)  
int main()  
{  
   int i;  
   __assume(i++);   // C4557  
}  
```