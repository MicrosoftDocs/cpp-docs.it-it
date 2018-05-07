---
title: Errore irreversibile U1073 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1073
dev_langs:
- C++
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dde9ca2f4a15edf6599dcc31b39d9411645f2a6f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE 
non sapere come effettuare 'targetname'  
  
 La destinazione specificata non esiste, e nessun comando da eseguire o una regola di inferenza da applicare.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Controllare l'ortografia del nome della destinazione.  
  
2.  Se *targetname* è una pseudo-destinazione, specificarla come destinazione in un altro blocco di descrizione.  
  
3.  Se *targetname* è una chiamata di macro, assicurarsi non si espande in una stringa null.