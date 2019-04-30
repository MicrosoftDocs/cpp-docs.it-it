---
title: Errore di compilazione progetto PRJ0035
ms.date: 08/27/2018
f1_keywords:
- PRJ0035
helpviewer_keywords:
- PRJ0035
ms.assetid: 0667116d-338c-40a4-972c-da875f778cb5
ms.openlocfilehash: e221fd85f1260ed04d49b43dea3d13407f504847
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345300"
---
# <a name="project-build-error-prj0035"></a>Errore di compilazione progetto PRJ0035

> File XML '*file*' il contenuto Unicode che non può essere tradotto in tabella codici ANSI dell'utente.
>
> *Contenuto UNICODE del file*

*file* è il file XML creato come riga di comando per lo strumento di distribuzione Web.

Il sistema di progetto trovati caratteri Unicode in alcune proprietà nella pagina delle proprietà di distribuzione Web che non può essere convertita correttamente in ANSI.

La risoluzione di questo errore consiste nell'aggiornare il contenuto della proprietà da utilizzare ANSI o per installare la tabella codici nel computer e impostarlo come impostazione predefinita del sistema.