---
title: Compilatore avviso (livello 4) C4429 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4429
dev_langs: C++
helpviewer_keywords: C4429
ms.assetid: a3e4cf1f-a869-4e47-834a-850c21eb5297
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4a8d8a5454a02c3401f7e86645f2042715c0e11f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-4-c4429"></a>Avviso del compilatore (livello 4) C4429
possibili incompleto o formato non corretto a nomi di caratteri universali  
  
 Il compilatore ha rilevato una sequenza di caratteri che può essere un nome di carattere universale non corretto. È un nome di carattere universale `\u` seguito da quattro cifre esadecimali, o `\U` seguiti da otto cifre esadecimali.  
  
 L'esempio seguente genera l'errore C4429:  
  
```  
// C4429.cpp  
// compile with: /W4 /WX  
int \ug0e4 = 0;   // C4429  
// Try the following line instead:  
// int \u00e4 = 0;   // OK, a well-formed universal character name.  
```