---
title: Errore di compilazione progetto PRJ0008
ms.date: 11/04/2016
f1_keywords:
- PRJ0008
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
ms.openlocfilehash: 7d1c11ab7539f25d371c0bfbd2853b6155c9661c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192954"
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008

Non è stato possibile eliminare il file ' file '.

**Verificare che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**

Durante un'operazione di ricompilazione o C++ pulizia, l'oggetto visivo Elimina tutti i file intermedi e di output noti per la compilazione, nonché tutti i file che soddisfano le specifiche dei caratteri jolly nelle **estensioni da eliminare nella proprietà Pulisci** nella [pagina delle proprietà impostazioni di configurazione generale](../../build/reference/general-property-page-project.md).

Questo errore viene visualizzato se l'oggetto C++ visivo non è in grado di eliminare un file. Per risolvere l'errore, rendere scrivibile il file e la relativa directory per l'utente che esegue la compilazione.
