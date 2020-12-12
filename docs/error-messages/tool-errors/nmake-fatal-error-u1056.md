---
description: 'Altre informazioni su: errore irreversibile U1056 di NMAKE'
title: 'Errore irreversibile U1056 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1056
helpviewer_keywords:
- U1056
ms.assetid: da855728-b69e-413c-83ed-df912126215e
ms.openlocfilehash: beb7814d2e29665e1f92c7ef1e8dadbd66af5d63
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330374"
---
# <a name="nmake-fatal-error-u1056"></a>Errore irreversibile U1056 di NMAKE 

Impossibile trovare il processore del comando

Il processore dei comandi non è presente nel percorso specificato nelle variabili di ambiente **COMSPEC** o **path** .

Per l'esecuzione di comandi, NMAKE utilizza COMMAND.COM o CMD.EXE come processore di comandi. Cerca innanzitutto il processore dei comandi nel set di percorsi in **COMSPEC**. Se **COMSPEC** non esiste, NMAKE cerca nelle directory specificate in **path**.
