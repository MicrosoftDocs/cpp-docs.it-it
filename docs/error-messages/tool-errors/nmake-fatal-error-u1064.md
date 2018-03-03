---
title: Errore irreversibile U1064 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- U1064
dev_langs:
- C++
helpviewer_keywords:
- U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 20b6c767145176c459d0b70d96842223218cd0b2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE 
MAKEFILE non trovato e nessuna destinazione specificata  
  
 La riga di comando NMAKE non si specifica un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.  
  
 NMAKE richiede un makefile o una destinazione della riga di comando (o entrambe). Per rendere disponibile un makefile NMAKE, specificare l'opzione /F o posizionare un file denominato MAKEFILE nella directory corrente. NMAKE è possibile creare una destinazione della riga di comando tramite una regola di inferenza se non viene fornito un makefile.