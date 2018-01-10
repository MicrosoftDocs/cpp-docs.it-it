---
title: Percorsi di ricerca dei dipendenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, dependents
- dependents, NMAKE
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f6093db4ac8e0c88dfe6e4b5a5463e5ee8d24349
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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