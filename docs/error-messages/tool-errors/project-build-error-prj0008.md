---
title: Errore di compilazione progetto PRJ0008
ms.date: 11/04/2016
f1_keywords:
- PRJ0008
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
ms.openlocfilehash: 5741b7ef8cb9a7ae53d64874d3531e9271c09e0f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359488"
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008

Impossibile eliminare il file 'file'.

**Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**

Durante la ricompilazione o di pulizia, Visual C++ vengono eliminati tutti i file intermedi e di output utilizzati per la compilazione, nonché qualsiasi file che soddisfano le specifiche dei caratteri jolly nel **estensioni da eliminare durante la pulitura** proprietà nel [generale Pagina delle proprietà di configurazione delle impostazioni](../../build/reference/general-property-page-project.md).

Verrà visualizzato questo errore se non è in grado di eliminare un file di Visual C++. Per risolvere l'errore, verificare il file e la relativa directory scrivibile per l'utente che effettua la compilazione.