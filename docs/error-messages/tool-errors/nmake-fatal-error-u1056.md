---
title: Errore irreversibile U1056 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1056
helpviewer_keywords:
- U1056
ms.assetid: da855728-b69e-413c-83ed-df912126215e
ms.openlocfilehash: 10131e518fa608292fff58672ede36390bcd665b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182903"
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE

Impossibile trovare il processore del comando

Il processore dei comandi non è presente nel percorso specificato nelle variabili di ambiente **COMSPEC** o **path** .

NMAKE USA COMMAND.COM o CMD. EXE come processore di comandi durante l'esecuzione di comandi. Cerca innanzitutto il processore dei comandi nel set di percorsi in **COMSPEC**. Se **COMSPEC** non esiste, NMAKE cerca nelle directory specificate in **path**.
