---
title: Progetto PRJ0024 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0024
dev_langs:
- C++
helpviewer_keywords:
- PRJ0024
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 59bf76aba80093bf9e8e653bdfb9fad49687a501
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0024"></a>Errore di compilazione progetto PRJ0024
Impossibile convertire il percorso Unicode 'path' tabella codici ANSI dell'utente.  
  
 ***percorso*** è la versione Unicode originale della stringa di percorso. Questo errore può verificarsi nei casi in cui è presente un percorso Unicode che non può essere convertito direttamente ad ANSI per la pagina di codice di sistema corrente.  
  
 Questo errore può verificarsi se si sta lavorando con un progetto che è stato sviluppato un sistema che utilizza una tabella codici che non è presente nel computer in uso.  
  
 La risoluzione di questo errore consiste nell'aggiornare il percorso per utilizzare il testo ANSI oppure installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema.