---
title: Errore di compilazione progetto PRJ0034
ms.date: 11/04/2016
f1_keywords:
- PRJ0034
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
ms.openlocfilehash: bcb7e22d6a09e3435eb2236532101a1836c08a03
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80192190"
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034

La proprietà "dipendenze aggiuntive" per l'istruzione di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "macro_expansion".

Un'istruzione di compilazione personalizzata in un progetto conteneva un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
