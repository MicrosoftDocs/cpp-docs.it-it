---
title: Compilatore avviso (livello 1) C4399 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4399
dev_langs: C++
helpviewer_keywords: C4399
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 786f80c7c99e911f96b602b2b408c8eb943701e0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4399"></a>Avviso del compilatore (livello 1) C4399
'symbol': simbolo per processo non dovrebbe essere contrassegnato con declspec quando compilato con /clr: pure  
  
 Il **/clr: pure** l'opzione del compilatore è deprecato in Visual Studio 2015.  
  
 Dati da un'immagine nativa o un'immagine con costrutti nativi e CLR non possono essere importati in un'immagine pure. Per risolvere il problema, eseguire la compilazione con **/clr** (non **/clr: pure**) o eliminare `__declspec(dllimport)`.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4399.  
  
```  
// C4399.cpp  
// compile with: /clr:pure /doc /W1 /c  
__declspec(dllimport) __declspec(process) extern const int i;   // C4399  
```