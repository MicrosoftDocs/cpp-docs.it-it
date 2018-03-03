---
title: Utilizzare una Macro NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- NMAKE macros, using
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fc5c6c8851654b1a767967ffc900886d75521130
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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