---
description: 'Altre informazioni su: errore di compilazione progetto progetto PRJ0033'
title: Errore di compilazione progetto PRJ0033
ms.date: 11/04/2016
f1_keywords:
- PRJ0033
helpviewer_keywords:
- PRJ0033
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
ms.openlocfilehash: 7faf69cd9aaed6f90d9c546c4fc2383fd6808419
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241131"
---
# <a name="project-build-error-prj0033"></a>Errore di compilazione progetto PRJ0033

La proprietà "dipendenze aggiuntive" per l'istruzione di compilazione personalizzata per il file "file" contiene "macro" che restituisce "macro_expansion".

Un'istruzione di compilazione personalizzata in un file contiene un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione macro. Questo errore può anche indicare che il formato del percorso non è corretto, che contiene caratteri o combinazioni di caratteri non validi in un percorso di file.

Per correggere l'errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.
