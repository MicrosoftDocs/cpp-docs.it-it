---
title: Errore di compilazione progetto PRJ0024
ms.date: 08/27/2018
f1_keywords:
- PRJ0024
helpviewer_keywords:
- PRJ0024
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
ms.openlocfilehash: 645b898bdffcc6d7b397c25eb3c41cea25cb361f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589644"
---
# <a name="project-build-error-prj0024"></a>Errore di compilazione progetto PRJ0024

> Percorso Unicode '*percorso*' non può essere tradotto in tabella codici ANSI dell'utente.

*percorso* è la versione originale di Unicode della stringa di percorso. Questo errore può verificarsi nei casi in cui è presente un percorso di Unicode che non possa essere convertito direttamente ad ANSI per la tabella codici del sistema corrente.

Questo errore può verificarsi se si lavora con un progetto che è stato sviluppato in un sistema con una tabella codici non presente nel computer in uso.

La risoluzione di questo errore consiste nell'aggiornare il percorso da usare testo ANSI o per installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema.