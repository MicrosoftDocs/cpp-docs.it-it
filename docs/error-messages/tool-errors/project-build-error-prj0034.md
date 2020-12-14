---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0034'
title: Errore di compilazione progetto PRJ0034
ms.date: 11/04/2016
f1_keywords:
- PRJ0034
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
ms.openlocfilehash: a5eb76b5a11cfed0789f6f5e5aca52e8215f4c5a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241066"
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034

La proprietà "dipendenze aggiuntive" per l'istruzione di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "macro_expansion".

Un'istruzione di compilazione personalizzata in un progetto conteneva un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
