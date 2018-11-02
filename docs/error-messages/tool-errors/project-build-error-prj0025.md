---
title: Errore di compilazione progetto PRJ0025
ms.date: 08/27/2018
f1_keywords:
- PRJ0025
helpviewer_keywords:
- PRJ0025
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
ms.openlocfilehash: 5cc6a042c04bc205dd3cf2242d48f2572a51885c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599683"
---
# <a name="project-build-error-prj0025"></a>Errore di compilazione progetto PRJ0025

> File batch '*file*' il contenuto Unicode che non può essere tradotto in tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

Il sistema di progetto trovata contenuto Unicode in una classe personalizzata regola di compilazione o compilazione eventi che non possono essere convertiti correttamente alla tabella codici ANSI corrente dell'utente.

La risoluzione di questo errore è di aggiornare il contenuto della regola di generazione evento in modo da utilizzare ANSI o installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema di compilazione.

Per altre informazioni su custom istruzioni di compilazione e gli eventi di compilazione, vedere [informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md).