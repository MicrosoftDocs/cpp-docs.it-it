---
title: Compilatore avviso (livello 3) C4635 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4635
dev_langs:
- C++
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2dcc4b7466ed53a187b7f34ec45084a94adb59b4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-3-c4635"></a>Avviso del compilatore (livello 3) C4635
commento al documento XML di destinazione: XML in formato non valido: motivo  
  
 Il compilatore ha rilevato alcuni problemi con i tag XML.  Correggere il problema e ricompilare  
  
 L'esempio seguente genera l'errore C4635:  
  
```  
// C4635.cpp  
// compile with: /doc /clr /W3 /c  
/// <summary>     
/// The contents of the folder have changed.  
/// <summary/>   // C4635  
  
// try the following line instead  
// /// </summary>  
public ref class Test {};  
```  
  
 L'output relativo a questo esempio è: **Il tag finale 'member' non corrisponde al tag iniziale 'summary'**.  
  
 Il problema con questo esempio è che il tag di fine per \<riepilogo > non è corretta, e il compilatore non lo riconosce come il \<riepilogo > tag di fine.  Il \<membro > tag viene incorporato nel file xdc dal compilatore nelle compilazioni /doc.  In tal caso, il problema dipende dal fatto che il tag di fine \</member >, non corrisponde al precedente tag di inizio elaborato dal compilatore (\<riepilogo >.