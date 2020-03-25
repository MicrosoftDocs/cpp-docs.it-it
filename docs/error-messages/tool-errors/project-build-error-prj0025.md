---
title: Errore di compilazione progetto PRJ0025
ms.date: 08/27/2018
f1_keywords:
- PRJ0025
helpviewer_keywords:
- PRJ0025
ms.assetid: 57725c78-bc63-44f3-9667-2969b2d7c41d
ms.openlocfilehash: 30445a3abc2a6ad05c983448f57ed5b93df6e61f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192354"
---
# <a name="project-build-error-prj0025"></a>Errore di compilazione progetto PRJ0025

> Il file batch '*file*' contiene contenuto Unicode che non è stato possibile convertire nella tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

Il sistema del progetto ha rilevato contenuti Unicode in una regola di compilazione personalizzata o un evento di compilazione che non può essere convertito correttamente nella tabella codici ANSI corrente dell'utente.

La risoluzione di questo errore consiste nell'aggiornare il contenuto della regola di compilazione o dell'evento di compilazione per utilizzare ANSI o per installare la tabella codici nel computer e impostarla come impostazione predefinita del sistema.

Per ulteriori informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione, vedere [informazioni sulle procedure di compilazione personalizzate e sugli eventi di compilazione](../../build/understanding-custom-build-steps-and-build-events.md).
