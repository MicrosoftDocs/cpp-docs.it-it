---
title: 'Errore irreversibile U1056 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1056
helpviewer_keywords:
- U1056
ms.assetid: da855728-b69e-413c-83ed-df912126215e
ms.openlocfilehash: b15b14c04dd91ae648ea4311612c122f04f90477
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367265"
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE 

Impossibile trovare il processore dei comandi

Il processore dei comandi non era presente nel percorso specificato nella **COMSPEC** oppure **percorso** le variabili di ambiente.

NMAKE Usa COMMAND.COM o CMD. File EXE come un processore dei comandi quando l'esecuzione di comandi. Cerca il processore dei comandi prima di tutto nel percorso impostato in **COMSPEC**. Se **COMSPEC** non esiste, nelle directory specificate nelle ricerche NMAKE **percorso**.