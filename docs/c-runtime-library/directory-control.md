---
title: Controllo directory | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], directory
- directory control routines
ms.assetid: a72dcf6f-f366-4d20-8850-0e19cc53ca18
caps.latest.revision: 11
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
ms.openlocfilehash: 00a892376691f0d73b6ce0483cccf8bb063c43b4
ms.lasthandoff: 03/29/2017

---
# <a name="directory-control"></a>Controllo directory
Queste routine accedono, modificano e ottengono le informazioni sulla struttura della directory.  
  
### <a name="directory-control-routines"></a>Routine di controllo directory  
  
|Routine|Uso|  
|-------------|---------|  
|[_chdir, _wchdir](../c-runtime-library/reference/chdir-wchdir.md)|Cambia la cartella di lavoro corrente|  
|[_chdrive](../c-runtime-library/reference/chdrive.md)|Cambia l'unità corrente|  
|[_getcwd, _wgetcwd](../c-runtime-library/reference/getcwd-wgetcwd.md)|Ottiene la cartella di lavoro corrente per l'unità predefinita|  
|[_getdcwd, _wgetdcwd](../c-runtime-library/reference/getdcwd-wgetdcwd.md)|Ottiene la cartella di lavoro corrente per l'unità specificata|  
|[_getdiskfree](../c-runtime-library/reference/getdiskfree.md)|Popola una struttura `_diskfree_t` con informazioni su un'unità disco.|  
|[_getdrive](../c-runtime-library/reference/getdrive.md)|Ottiene l'unità (predefinita) corrente|  
|[_getdrives](../c-runtime-library/reference/getdrives.md)|Restituisce una maschera di bit che rappresenta le unità disco attualmente disponibili.|  
|[_mkdir, _wmkdir](../c-runtime-library/reference/mkdir-wmkdir.md)|Crea la nuova directory|  
|[_rmdir, _wrmdir](../c-runtime-library/reference/rmdir-wrmdir.md)|Rimuove la directory|  
|[_searchenv, _wsearchenv](../c-runtime-library/reference/searchenv-wsearchenv.md), [_searchenv_s, _wsearchenv_s](../c-runtime-library/reference/searchenv-s-wsearchenv-s.md)|Cerca un file specificato nei percorsi indicati|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Gestione di file](../c-runtime-library/file-handling.md)   
 [Chiamate di sistema](../c-runtime-library/system-calls.md)
