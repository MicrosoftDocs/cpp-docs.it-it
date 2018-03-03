---
title: Caratteri speciali in un Makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, special characters
- makefiles, special characters
- special characters, in NMAKE macros
- macros, special characters
ms.assetid: 92c34ab5-ca6b-4fc0-bcf4-3172eaeda9f0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6c574040d6004516682379a5e64b87c1b92388ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="special-characters-in-a-makefile"></a>Caratteri speciali in un makefile
Per utilizzare un carattere speciale NMAKE come carattere letterale, inserire un accento circonflesso (^) trovano davanti. NMAKE Ignora accenti circonflessi che precedono altri caratteri. I caratteri speciali sono:  
  
 `:  ;  #  (  )  $  ^  \  {  }  !  @  —`  
  
 Un accento circonflesso (^) all'interno di una stringa tra virgolette viene considerato come un carattere letterale punto di inserimento. Un punto di inserimento alla fine di una riga Inserisce un carattere letterale in una stringa o una macro.  
  
 Nelle macro, una barra rovesciata (\\) seguito da un carattere di nuova riga viene sostituito da uno spazio.  
  
 Nei comandi, il simbolo di percentuale (%) è un identificatore di file. Per rappresentare % letteralmente in un comando, specificare un simbolo di percentuale doppio (%) al posto di uno solo. In altre situazioni, viene interpretato letteralmente un singolo %, ma viene interpretato sempre un valore double % % come oggetto % singolo. Pertanto, per rappresentare un valore letterale % %, specificare entrambi tre segni di percentuale, % % %, o segni di percentuale quattro % % %.  
  
 Per utilizzare il segno di dollaro ($) come carattere letterale in un comando, specificare due dollaro ($$). Questo metodo può essere utilizzato anche in altre situazioni in cui ^ $ works.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)