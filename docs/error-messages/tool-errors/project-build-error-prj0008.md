---
title: Errore di compilazione PRJ0008 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0008
dev_langs:
- C++
helpviewer_keywords:
- PRJ0008
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d7c24634a845423de590228af01cb9f4779e37ab
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062787"
---
# <a name="project-build-error-prj0008"></a>Errore di compilazione progetto PRJ0008

Impossibile eliminare il file 'file'.

**Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**

Durante la ricompilazione o di pulizia, Visual C++ vengono eliminati tutti i file intermedi e di output utilizzati per la compilazione, nonché qualsiasi file che soddisfano le specifiche dei caratteri jolly nel **estensioni da eliminare durante la pulitura** proprietà nel [generale Pagina delle proprietà di configurazione delle impostazioni](../../ide/general-property-page-project.md).

Verrà visualizzato questo errore se non è in grado di eliminare un file di Visual C++. Per risolvere l'errore, verificare il file e la relativa directory scrivibile per l'utente che effettua la compilazione.