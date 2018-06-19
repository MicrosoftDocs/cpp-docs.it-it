---
title: Utilizzare una Macro NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c6bf098a3723aa7b067b8192bf503975998e4e98
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380576"
---
# <a name="using-an-nmake-macro"></a>Utilizzo di una macro di NMAKE
Per utilizzare una macro, racchiudere il nome tra parentesi precedute da un segno di dollaro ($) come indicato di seguito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
$(macroname)  
```  
  
## <a name="remarks"></a>Note  
 Non sono consentiti spazi. Le parentesi sono facoltative se *nomemacro* è un singolo carattere. La stringa di definizione sostituisce $(*nomemacro*); una macro viene sostituita da una stringa null.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Sostituzione di macro](../build/macro-substitution.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e NMAKE](../build/macros-and-nmake.md)