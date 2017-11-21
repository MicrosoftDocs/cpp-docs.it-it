---
title: Nomi file lunghi in un Makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, long filenames
- long filenames
ms.assetid: 626d56fc-8879-46ba-9c2d-dd386c78cccc
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 43e34f3c4aba212f373a5c44535533f38f1bf216
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="long-filenames-in-a-makefile"></a>Nomi file lunghi in un makefile
Racchiudere i nomi file lunghi tra virgolette doppie, come indicato di seguito:  
  
```  
all : "VeryLongFileName.exe"  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)