---
title: Errore di compilazione progetto PRJ0033
ms.date: 11/04/2016
f1_keywords:
- PRJ0033
helpviewer_keywords:
- PRJ0033
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
ms.openlocfilehash: e074ee18508271b56686aa16f9012085ed3bd77d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62346921"
---
# <a name="project-build-error-prj0033"></a>Errore di compilazione progetto PRJ0033

La proprietà "Dipendenze aggiuntive" per la compilazione personalizzata istruzione del file 'file' contiene 'macro' che restituisce a 'espansione'.

Un'istruzione di compilazione personalizzato in un file di contenuto di un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione della macro. Questo errore può anche significare che il percorso non è corretto, che contiene caratteri o delle combinazioni di caratteri che non sono validi in un percorso di file.

Per risolvere questo errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.