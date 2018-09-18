---
title: Errore irreversibile U1056 di NMAKE | Microsoft Docs
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
ms.openlocfilehash: e0a83c62bedf995708d5e99fee19f05696d05c2d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065698"
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE 

Impossibile trovare il processore dei comandi

Il processore dei comandi non era presente nel percorso specificato nella **COMSPEC** oppure **percorso** le variabili di ambiente.

NMAKE Usa COMMAND.COM o CMD. File EXE come un processore dei comandi quando l'esecuzione di comandi. Cerca il processore dei comandi prima di tutto nel percorso impostato in **COMSPEC**. Se **COMSPEC** non esiste, nelle directory specificate nelle ricerche NMAKE **percorso**.