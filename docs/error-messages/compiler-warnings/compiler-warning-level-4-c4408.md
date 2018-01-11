---
title: Compilatore avviso (livello 4) C4408 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4408
dev_langs: C++
helpviewer_keywords: C4408
ms.assetid: 8488a186-ed1d-425c-aaeb-c72472c1da68
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 70b953de357961ba721f27efa98ef2e0a0eea1df
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4408"></a>Avviso del compilatore (livello 4) C4408
anonymousstruct o un'unione non ha dichiarato alcun membro dati  
  
 Una struct o unione anonima deve avere almeno un membro dati.  
  
 L'esempio seguente genera l'errore C4408:  
  
```  
// C4408.cpp  
// compile with: /W4 /LD  
static union  
{  
   // int i;  
};  
// a named union can have no data members  
// } MyUnion;  
```