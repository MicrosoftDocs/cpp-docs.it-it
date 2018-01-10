---
title: Sostituzione di macro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, macro substitution
- macros, NMAKE
- substitution macros in NMAKE
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7c2ea7a2509e58cfd4da163cc76c018d06c244fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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