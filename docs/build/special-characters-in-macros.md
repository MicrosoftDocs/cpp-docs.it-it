---
title: Caratteri speciali nelle macro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- special characters, in NMAKE macros
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c271d2f39a4d81776c06a107616170192e82d40d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380173"
---
# <a name="special-characters-in-macros"></a>Caratteri speciali nelle macro
Un simbolo cancelletto (#) dopo la definizione specifica un commento. Per specificare un simbolo di cancelletto in una macro, utilizzare un accento circonflesso (^), come in ^ #.  
  
 Un segno di dollaro ($) specifica una chiamata di macro. Per specificare un valore letterale $, utilizzare $$.  
  
 Per estendere una definizione di una nuova riga, terminare la riga con una barra rovesciata (\\). Quando la macro viene richiamata, il carattere barra rovesciata e carattere di nuova riga viene sostituito con uno spazio. Per specificare una barra rovesciata alla fine della riga, anteporvi un accento circonflesso (^) o seguito da un identificatore di commento (#).  
  
 Per specificare un valore letterale di carattere, terminare la riga con un accento circonflesso (^), come in:  
  
```  
CMDS = cls^  
dir  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)