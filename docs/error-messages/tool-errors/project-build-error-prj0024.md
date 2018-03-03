---
title: Progetto PRJ0024 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0024
dev_langs:
- C++
helpviewer_keywords:
- PRJ0024
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2cf9ad974856f132599932a32b954e50453adf56
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="project-build-error-prj0024"></a>Errore di compilazione progetto PRJ0024
Impossibile convertire il percorso Unicode 'path' tabella codici ANSI dell'utente.  
  
 ***percorso*** è la versione Unicode originale della stringa di percorso. Questo errore può verificarsi nei casi in cui è presente un percorso Unicode che non può essere convertito direttamente ad ANSI per la pagina di codice di sistema corrente.  
  
 Questo errore può verificarsi se si sta lavorando con un progetto che è stato sviluppato un sistema che utilizza una tabella codici che non è presente nel computer in uso.  
  
 La risoluzione di questo errore consiste nell'aggiornare il percorso per utilizzare il testo ANSI oppure installare la tabella codici nel computer in uso e impostarlo come predefinito del sistema.