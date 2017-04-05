---
title: Accesso agli argomenti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.arguments
dev_langs:
- C++
helpviewer_keywords:
- argument access macros [C++]
- variable-length argument lists
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 66f9ff6dff86bbdff2ec86970a4176f3581316fa
ms.lasthandoff: 03/29/2017

---
# <a name="argument-access"></a>Accesso agli argomenti
Le macro `va_arg`, `va_end` e `va_start` forniscono accesso agli argomenti della funzione quando il numero di argomenti è variabile. Queste macro sono definite in STDARG.H per la compatibilità ANSI C e in VARARGS.H per la compatibilità con UNIX System V.  
  
### <a name="argument-access-macros"></a>Macro di accesso agli argomenti  
  
|Macro|Uso|  
|-----------|-------------------------------|  
|[va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Recuperare l'argomento dall'elenco|  
|[va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Reimpostare il puntatore|  
|[va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Impostare il puntatore all'inizio dell'elenco degli argomenti|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
