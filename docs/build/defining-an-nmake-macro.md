---
title: Definizione di una Macro di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- macros, NMAKE
- defining NMAKE macros
- NMAKE macros, defining
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b355431576a4662062a00ce2c4e44f3a0a52ffdc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="defining-an-nmake-macro"></a>Definizione di una macro di NMAKE
## <a name="syntax"></a>Sintassi  
  
```  
  
macroname=string  
```  
  
## <a name="remarks"></a>Note  
 Il *nomemacro* è una combinazione di lettere, cifre e caratteri di sottolineatura (_) fino a 1.024 caratteri, e maiuscole minuscole. Il *nomemacro* può contenere una macro richiamata. Se *nomemacro* include completamente tale macro, la macro richiamata non può essere null o non definito.  
  
 Il `string` può essere qualsiasi sequenza di zero o più caratteri. Una stringa null contiene zero caratteri o solo spazi o tabulazioni. Il `string` può contenere una chiamata di macro.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Caratteri speciali nelle macro](../build/special-characters-in-macros.md)  
  
 [Macro null e non definite](../build/null-and-undefined-macros.md)  
  
 [Definizione delle macro](../build/where-to-define-macros.md)  
  
 [Precedenza nelle definizioni di macro](../build/precedence-in-macro-definitions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e NMAKE](../build/macros-and-nmake.md)