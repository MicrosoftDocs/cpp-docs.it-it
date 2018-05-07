---
title: Errore irreversibile U1064 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1064
dev_langs:
- C++
helpviewer_keywords:
- U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5573943fc2c274d48768933a634b2c052361a8f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE 
MAKEFILE non trovato e nessuna destinazione specificata  
  
 La riga di comando NMAKE non si specifica un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.  
  
 NMAKE richiede un makefile o una destinazione della riga di comando (o entrambe). Per rendere disponibile un makefile NMAKE, specificare l'opzione /F o posizionare un file denominato MAKEFILE nella directory corrente. NMAKE è possibile creare una destinazione della riga di comando tramite una regola di inferenza se non viene fornito un makefile.