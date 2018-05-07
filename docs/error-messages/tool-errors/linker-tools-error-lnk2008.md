---
title: Strumenti del linker LNK2008 errore | Documenti Microsoft
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
ms.openlocfilehash: c4ee6a8a4c4cc6d33f47d5335daa9fccd4e5fd99
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008
La destinazione della correzione non è allineata 'nome_simbolo'  
  
 COLLEGAMENTO disponibile una destinazione di correzione nel file di oggetto che non è allineato correttamente.  
  
 Questo errore può essere causato da un allineamento sezione personalizzato (ad esempio, #pragma [pack](../../preprocessor/pack.md)), [allineare](../../cpp/align-cpp.md) modificatore, o tramite codice del linguaggio assembly che modifica l'allineamento della sezione.  
  
 Se il codice non utilizza una di queste, ciò potrebbe dipendere dal compilatore.