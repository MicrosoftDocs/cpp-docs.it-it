---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0024'
title: Errore di compilazione progetto PRJ0024
ms.date: 08/27/2018
f1_keywords:
- PRJ0024
helpviewer_keywords:
- PRJ0024
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
ms.openlocfilehash: e42df62181d02cf8d4696cc4f48afcec52cd4d76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150462"
---
# <a name="project-build-error-prj0024"></a>Errore di compilazione progetto PRJ0024

> Impossibile convertire il percorso Unicode '*path*' nella tabella codici ANSI dell'utente.

*path* è la versione Unicode originale della stringa di percorso. Questo errore può verificarsi nei casi in cui è presente un percorso Unicode che non può essere convertito direttamente in ANSI per la tabella codici di sistema corrente.

Questo errore può verificarsi se si utilizza un progetto sviluppato in un sistema utilizzando una tabella codici non presente nel computer.

La risoluzione di questo errore consiste nell'aggiornare il percorso in modo da usare il testo ANSI o per installare la tabella codici nel computer e impostarla come impostazione predefinita del sistema.
