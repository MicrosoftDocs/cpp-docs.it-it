---
title: Compilatore avviso (livello 1) C4508 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4508
dev_langs: C++
helpviewer_keywords: C4508
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 52139327831be17d6800f30b00f667da7d3b0376
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4508"></a>Avviso del compilatore (livello 1) C4508
'function': funzione deve restituire un valore. 'void' verrà restituito il tipo  
  
 La funzione non dispone di alcun tipo restituito specificato. In questo caso, C4430 deve generare anche e il compilatore implementa per risolvere il problema segnalato da C4430 (valore predefinito è di tipo int).  
  
 Per risolvere il problema, è necessario dichiarare in modo esplicito il tipo restituito delle funzioni.  
  
 L'esempio seguente genera l'errore C4508:  
  
```  
// C4508.cpp  
// compile with: /W1 /c  
#pragma warning (disable : 4430)  
func() {}   // C4508  
void func2() {}   // OK  
```