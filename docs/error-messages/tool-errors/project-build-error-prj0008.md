---
title: Errore di compilazione progetto PRJ0008
ms.date: 11/04/2016
f1_keywords:
- PRJ0008
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
ms.openlocfilehash: 696b77e9906b231a680027a3faaf23e53d8fb6e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50525905"
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008

Impossibile eliminare il file 'file'.

**Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**

Durante la ricompilazione o di pulizia, Visual C++ vengono eliminati tutti i file intermedi e di output utilizzati per la compilazione, nonché qualsiasi file che soddisfano le specifiche dei caratteri jolly nel **estensioni da eliminare durante la pulitura** proprietà nel [generale Pagina delle proprietà di configurazione delle impostazioni](../../ide/general-property-page-project.md).

Verrà visualizzato questo errore se non è in grado di eliminare un file di Visual C++. Per risolvere l'errore, verificare il file e la relativa directory scrivibile per l'utente che effettua la compilazione.