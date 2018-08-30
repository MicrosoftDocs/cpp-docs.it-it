---
title: Errore di compilazione PRJ0024 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
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
ms.openlocfilehash: eb539a5f1ee5f1aa5f9d828d93fa6d0dc8690c22
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215598"
---
# <a name="project-build-error-prj0024"></a>Errore di compilazione progetto PRJ0024

> Percorso Unicode '*percorso*' non può essere tradotto in tabella codici ANSI dell'utente.

*percorso* è la versione originale di Unicode della stringa di percorso. Questo errore può verificarsi nei casi in cui è presente un percorso di Unicode che non possa essere convertito direttamente ad ANSI per la tabella codici del sistema corrente.

Questo errore può verificarsi se si lavora con un progetto che è stato sviluppato in un sistema con una tabella codici non presente nel computer in uso.

La risoluzione di questo errore consiste nell'aggiornare il percorso da usare testo ANSI o per installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema.