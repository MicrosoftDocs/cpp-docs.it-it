---
title: . File ilk come Input del Linker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- ILK files
- .ilk files
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1b91d229e1c607be1ed35685ab7bfdffe2271e16
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ilk-files-as-linker-input"></a>File ILK come input del linker
Quando il collegamento incrementale, collegamento Aggiorna il file di stato ilk creati durante il primo collegamento incrementale. Questo file contiene lo stesso nome base del file .exe o il file DLL, e ha l'estensione ilk. Durante i collegamenti incrementali successivi collegamento Aggiorna il file ilk. Se il file ilk è mancante, LINK esegue un collegamento completo e crea un nuovo file ilk. Se il file ilk è inutilizzabile, LINK esegue un collegamento non incrementale. Per informazioni dettagliate sul collegamento incrementale, vedere il [collegamento incrementale (/Incremental)](../../build/reference/incremental-link-incrementally.md) opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)