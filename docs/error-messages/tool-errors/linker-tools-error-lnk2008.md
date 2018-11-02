---
title: Errore degli strumenti del linker LNK2008
ms.date: 11/04/2016
f1_keywords:
- LNK2008
helpviewer_keywords:
- LNK2008
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
ms.openlocfilehash: 97bb2be18da5d166d1d5fba42e4ec8ce1f0439fe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544222"
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008

La destinazione della correzione non è allineata 'nome_simbolo'

Sono state rilevate una destinazione della correzione nel file di oggetto che non è allineato correttamente.

Questo errore può essere causato da un allineamento sezione personalizzato (, ad esempio, #pragma [pack](../../preprocessor/pack.md)), [allineare](../../cpp/align-cpp.md) modificatore, o mediante codice in linguaggio assembly che modifica l'allineamento della sezione.

Se il codice non usa una di queste, ciò potrebbe dipendere dal compilatore.