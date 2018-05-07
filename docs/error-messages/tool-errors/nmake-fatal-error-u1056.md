---
title: Errore irreversibile U1056 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1056
dev_langs:
- C++
helpviewer_keywords:
- U1056
ms.assetid: da855728-b69e-413c-83ed-df912126215e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 19890e290c98fd9602d755ad35f9d47204bd6c24
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE 
Impossibile trovare il processore dei comandi  
  
 Il processore dei comandi non è presente nel percorso specificato nella **COMSPEC** o **percorso** le variabili di ambiente.  
  
 NMAKE utilizza COMMAND.COM o CMD. EXE come un processore dei comandi durante l'esecuzione di comandi. Cerca il processore dei comandi prima nel percorso impostato **COMSPEC**. Se **COMSPEC** non esiste, la directory specificate nelle ricerche NMAKE **percorso**.