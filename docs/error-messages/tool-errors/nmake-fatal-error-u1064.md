---
title: Errore irreversibile U1064 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U1064
dev_langs: C++
helpviewer_keywords: U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 123b84922df702aad9dc391da1b83bfa81265fe0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE 
MAKEFILE non trovato e nessuna destinazione specificata  
  
 La riga di comando NMAKE non si specifica un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.  
  
 NMAKE richiede un makefile o una destinazione della riga di comando (o entrambe). Per rendere disponibile un makefile NMAKE, specificare l'opzione /F o posizionare un file denominato MAKEFILE nella directory corrente. NMAKE è possibile creare una destinazione della riga di comando tramite una regola di inferenza se non viene fornito un makefile.