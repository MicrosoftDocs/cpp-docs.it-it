---
title: Percorsi di ricerca dei dipendenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, dependents
- dependents, NMAKE
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 577fc7e44bfff35cf7efdcff20dc4cdca1c7001e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="search-paths-for-dependents"></a>Percorsi di ricerca dei dipendenti
Ogni dipendente presenta un percorso di ricerca facoltativo, specificato come indicato di seguito:  
  
## <a name="syntax"></a>Sintassi  
  
```  
{directory[;directory...]}dependent  
```  
  
## <a name="remarks"></a>Note  
 NMAKE cerca per un dipendente prima nella directory corrente, quindi nelle directory nell'ordine specificato. Una macro è possibile specificare o parte di un percorso di ricerca. Racchiudere i nomi delle directory tra parentesi graffe ({}); separare più directory con un punto e virgola (;). Spazi o tabulazioni non sono consentiti.  
  
## <a name="see-also"></a>Vedere anche  
 [Dipendenti](../build/dependents.md)