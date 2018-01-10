---
title: Errore irreversibile U1056 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U1056
dev_langs: C++
helpviewer_keywords: U1056
ms.assetid: da855728-b69e-413c-83ed-df912126215e
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 41db646e2559051c11de5265900dde8ad0a03214
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE 
Impossibile trovare il processore dei comandi  
  
 Il processore dei comandi non è presente nel percorso specificato nella **COMSPEC** o **percorso** le variabili di ambiente.  
  
 NMAKE utilizza COMMAND.COM o CMD. EXE come un processore dei comandi durante l'esecuzione di comandi. Cerca il processore dei comandi prima nel percorso impostato **COMSPEC**. Se **COMSPEC** non esiste, la directory specificate nelle ricerche NMAKE **percorso**.