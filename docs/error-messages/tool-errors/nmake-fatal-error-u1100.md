---
title: Errore irreversibile U1100 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1100
dev_langs:
- C++
helpviewer_keywords:
- U1100
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d4ed57c980813c8539fbffed0e41a35048c0571
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1100"></a>Errore irreversibile U1100 di NMAKE 
la macro 'nomemacro' non è valida nel contesto della regola batch 'rule'  
  
 Questo errore viene generato quando il blocco di comandi di una regola in modalità batch fa riferimento, direttamente o indirettamente, a una macro di file speciale diversa da $<.  
  
 $< è l'unica macro valida per le regole in modalità batch.