---
title: Compilatore avviso (livello 1) C4237 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4237
dev_langs: C++
helpviewer_keywords: C4237
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 89fa6a15c77ad0107dc3ef39a3563cae3ddecab4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4237"></a>Avviso del compilatore (livello 1) C4237
parola chiave' keyword ' non è ancora supportato è riservato per utilizzi futuri  
  
 Una parola chiave della specifica C++ non è implementata nel compilatore Visual C++, ma la parola chiave non è disponibile come un simbolo definito dall'utente.  
  
 L'esempio seguente genera l'errore C4237:  
  
```  
// C4237.cpp  
// compile with: /W1 /c  
int export;   // C4237  
```