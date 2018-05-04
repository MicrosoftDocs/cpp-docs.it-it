---
title: Macro null e non definite | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, undefined macros
- Null macros in NMAKE
- macros, null and undefined
- undefined macros and NMAKE
- NMAKE program, null macros
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 494a084ee5ba1da29c132aa632b647b37f305855
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="null-and-undefined-macros"></a>Macro null e non definite
Espande la macro null sia definita per le stringhe null, ma una macro definita come una stringa null viene considerata definito in espressioni di pre-elaborazione. Per definire una macro come una stringa null, specificare alcun carattere eccetto gli spazi o tabulazioni dopo il segno di uguale (=) in una riga di comando o un file di comando e racchiudono la stringa null o una definizione tra virgolette doppie (""). Per annullare la definizione di una macro, utilizzare **! UNDEF.** Per ulteriori informazioni, vedere [direttive di pre-elaborazione di Makefile](../build/makefile-preprocessing-directives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)