---
title: Definizione di una Macro di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- defining NMAKE macros
- NMAKE macros, defining
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5997eee052ebba198e1fb52da35322c65a32627b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32367134"
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