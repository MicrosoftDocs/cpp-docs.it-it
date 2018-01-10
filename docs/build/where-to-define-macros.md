---
title: Definizione delle macro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- defining macros
- macros, NMAKE
- NMAKE program, defining macros
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c2e646de4cf67fc249d69fb07789f4c8a3e14bf0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="where-to-define-macros"></a>Definizione delle macro
Definire macro in una riga di comando, file di comando, makefile o il file Tools.  
  
 In un makefile o nel file Tools, ogni definizione di macro deve trovarsi in una riga separata e non può iniziare con uno spazio o una scheda. Vengono ignorate gli spazi o tabulazioni intorno il segno di uguale. Tutti [stringa di caratteri](../build/defining-an-nmake-macro.md) sono valori letterali, comprese le virgolette e spazi.  
  
 In una riga di comando o un file di comando, spazi e tabulazioni delimitano gli argomenti e non è possibile racchiudere il segno di uguale. Se `string` sono contenuti spazi o tabulazioni, racchiudere la stringa o l'intera macro tra virgolette doppie ("").  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)