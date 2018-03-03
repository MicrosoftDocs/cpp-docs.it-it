---
title: Errore irreversibile U1073 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- U1073
dev_langs:
- C++
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: faae317df44560991a88d47ec7f123e6a8126429
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE 
non sapere come effettuare 'targetname'  
  
 La destinazione specificata non esiste, e nessun comando da eseguire o una regola di inferenza da applicare.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Controllare l'ortografia del nome della destinazione.  
  
2.  Se *targetname* è una pseudo-destinazione, specificarla come destinazione in un altro blocco di descrizione.  
  
3.  Se *targetname* è una chiamata di macro, assicurarsi non si espande in una stringa null.