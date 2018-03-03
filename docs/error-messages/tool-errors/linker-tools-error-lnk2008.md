---
title: Strumenti del linker LNK2008 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2008
dev_langs:
- C++
helpviewer_keywords:
- LNK2008
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a7c2fecff55677653c25c7d87fb22fa984526159
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008
La destinazione della correzione non è allineata 'nome_simbolo'  
  
 COLLEGAMENTO disponibile una destinazione di correzione nel file di oggetto che non è allineato correttamente.  
  
 Questo errore può essere causato da un allineamento sezione personalizzato (ad esempio, #pragma [pack](../../preprocessor/pack.md)), [allineare](../../cpp/align-cpp.md) modificatore, o tramite codice del linguaggio assembly che modifica l'allineamento della sezione.  
  
 Se il codice non utilizza una di queste, ciò potrebbe dipendere dal compilatore.