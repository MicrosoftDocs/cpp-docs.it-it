---
title: Sostituzione di macro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, macro substitution
- macros, NMAKE
- substitution macros in NMAKE
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4028ee710cf38b6a4ef929de9a7e4ffad95f3e41
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="macro-substitution"></a>Sostituzione di macro
Quando *nomemacro* viene richiamata, ogni occorrenza di *string1* nella relativa definizione stringa viene sostituita dalla *string2*.  
  
## <a name="syntax"></a>Sintassi  
  
```  
$(macroname:string1=string2)  
```  
  
## <a name="remarks"></a>Note  
 Sostituzione di macro maiuscole e minuscole è un valore letterale; *string1* e *string2* non è possibile richiamare le macro. La sostituzione non modifica la definizione originale. È possibile sostituire il testo in tutte le macro predefinite eccezione [ $$@ ](../build/filename-macros.md).  
  
 Spazi o tabulazioni non precedono i due punti; qualsiasi dopo i due punti vengono interpretato come valore letterale. Se *string2* è null, tutte le occorrenze di *string1* vengono eliminati dalla stringa di definizione della macro.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di una macro di NMAKE](../build/using-an-nmake-macro.md)