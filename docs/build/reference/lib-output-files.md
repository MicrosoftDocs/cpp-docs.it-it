---
title: File di Output LIB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- Lib
dev_langs:
- C++
helpviewer_keywords:
- output files, LIB
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8caa26685d6132cbc1ffd8a2467f8615bffd42f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32370488"
---
# <a name="lib-output-files"></a>File di output di LIB
I file di output generati da LIB dipendono dalla modalità in cui è utilizzato, come illustrato nella tabella seguente.  
  
|Modalità|Output|  
|----------|------------|  
|Predefinito (creazione o modifica di una libreria)|Libreria COFF (lib)|  
|L'estrazione di un membro con l'opzione /EXTRACT|File oggetto (obj)|  
|File di compilazione di un'esportazione e importazione libreria con l'opzione /DEF|Libreria di importazione (lib) e file di esportazione (EXP)|  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica di LIB](../../build/reference/overview-of-lib.md)