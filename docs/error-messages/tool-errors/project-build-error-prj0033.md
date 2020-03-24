---
title: Errore di compilazione progetto PRJ0033
ms.date: 11/04/2016
f1_keywords:
- PRJ0033
helpviewer_keywords:
- PRJ0033
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
ms.openlocfilehash: 141355ac49ec4722e85b5d4c25240e8048a72c9a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192193"
---
# <a name="project-build-error-prj0033"></a>Errore di compilazione progetto PRJ0033

La proprietà "dipendenze aggiuntive" per l'istruzione di compilazione personalizzata per il file "file" contiene "macro" che restituisce "macro_expansion".

Un'istruzione di compilazione personalizzata in un file contiene un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
