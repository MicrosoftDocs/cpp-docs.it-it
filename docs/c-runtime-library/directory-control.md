---
title: Controllo directory | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e4674029fe5bdfc4323f580fcc0567b2ceeb1929
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="directory-control"></a>Controllo directory
Queste routine accedono, modificano e ottengono le informazioni sulla struttura della directory.  
  
### <a name="directory-control-routines"></a>Routine di controllo directory  
  
|Routine|Usa|  
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