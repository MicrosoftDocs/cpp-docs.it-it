---
title: Errore degli strumenti del linker LNK1188
ms.date: 11/04/2016
f1_keywords:
- LNK1188
helpviewer_keywords:
- LNK1188
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
ms.openlocfilehash: b18a93c7434ee3d66f42829f373bd916a65369bd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195175"
---
# <a name="linker-tools-error-lnk1188"></a>Errore degli strumenti del linker LNK1188

BADFIXUPSECTION:: destinazione della correzione ' symbol ' non valida; sezione di lunghezza zero possibile

Durante un collegamento VxD, la destinazione di una rilocazione non include una sezione. Con LINK386 (versione precedente), è possibile che sia stato utilizzato un record del gruppo OMF (generato da una direttiva di gruppo MASM) per combinare la sezione di lunghezza zero con un'altra sezione di lunghezza diversa da zero. Il formato COFF non supporta la direttiva GROUP e le sezioni di lunghezza zero. Quando il collegamento converte automaticamente questo tipo di oggetti OMF in COFF, è possibile che si verifichi questo errore.
