---
title: Strumenti del linker LNK2008 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2008
dev_langs:
- C++
helpviewer_keywords:
- LNK2008
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18eda06e7f133ada4de1b7ec28ac21be205a71f7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086811"
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008

La destinazione della correzione non è allineata 'nome_simbolo'

Sono state rilevate una destinazione della correzione nel file di oggetto che non è allineato correttamente.

Questo errore può essere causato da un allineamento sezione personalizzato (, ad esempio, #pragma [pack](../../preprocessor/pack.md)), [allineare](../../cpp/align-cpp.md) modificatore, o mediante codice in linguaggio assembly che modifica l'allineamento della sezione.

Se il codice non usa una di queste, ciò potrebbe dipendere dal compilatore.