---
title: Compilatore avviso (livello 3) C4635 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4635
dev_langs:
- C++
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: d4c85ca32903e20ea18a731872c25ee999b67f89
ms.lasthandoff: 04/12/2017

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
