---
title: Macro null e non definite | Documenti Microsoft
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
- NMAKE program, undefined macros
- Null macros in NMAKE
- macros, null and undefined
- undefined macros and NMAKE
- NMAKE program, null macros
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9581b152057655c510f1cbcd4ab29ba8339070b8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="null-and-undefined-macros"></a>Macro null e non definite
Espande la macro null sia definita per le stringhe null, ma una macro definita come una stringa null viene considerata definito in espressioni di pre-elaborazione. Per definire una macro come una stringa null, specificare alcun carattere eccetto gli spazi o tabulazioni dopo il segno di uguale (=) in una riga di comando o un file di comando e racchiudono la stringa null o una definizione tra virgolette doppie (""). Per annullare la definizione di una macro, utilizzare **! UNDEF.** Per ulteriori informazioni, vedere [direttive di pre-elaborazione di Makefile](../build/makefile-preprocessing-directives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)