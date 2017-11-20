---
title: File di Input di collegamento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: link
dev_langs: C++
helpviewer_keywords:
- files [C++], LINK
- module definition files
- resources [C++], linker files
- LINK tool [C++], input files
- module definition files, linker files
- input files [C++], LINK
- linker [C++], input files
- import libraries [C++], linker files
- command input to linker files [C++]
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e63407e0e3d71b13d3668b03d2d6b430ad50d36a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="link-input-files"></a>File di input LINK
Fornire il linker con i file che contengono oggetti, importazione e librerie standard, risorse, le definizioni del modulo e comandi di input. COLLEGAMENTO non utilizza estensioni di file per presupporre il contenuto di un file. In alternativa, collegamento esamina ogni file di input per determinare il tipo di file è.  
  
 File oggetto nella riga di comando vengono elaborati in ordine che appaiono nella riga di comando. Vengono eseguita la ricerca di librerie in ordine di riga di comando, tenendo però seguenti: simboli non risolti quando riportare in un file di oggetto da una libreria vengono cercati in tale raccolta prima di tutto, quindi le librerie seguenti dalla riga di comando e [/DEFAULTLIB (specifica di libreria predefinito)](../../build/reference/defaultlib-specify-default-library.md) direttive e quindi a tutte le librerie all'inizio della riga di comando.  
  
> [!NOTE]
>  COLLEGAMENTO non accetta più un punto e virgola (o qualsiasi altro carattere) come inizio di un commento nel file di risposta e file di ordinamento. Un punto e virgola viene riconosciuto solo come punto di partenza dei commenti nei file di definizione moduli (def).  
  
 COLLEGAMENTO utilizza i seguenti tipi di file di input:  
  
-   [obj (file)](../../build/reference/dot-obj-files-as-linker-input.md)  
  
-   [file con estensione netmodule](../../build/reference/netmodule-files-as-linker-input.md)  
  
-   [LIB (file)](../../build/reference/dot-lib-files-as-linker-input.md)  
  
-   [file EXP](../../build/reference/dot-exp-files-as-linker-input.md)  
  
-   [DEF (file)](../../build/reference/dot-def-files-as-linker-input.md)  
  
-   [PDB (file)](../../build/reference/dot-pdb-files-as-linker-input.md)  
  
-   [file res](../../build/reference/dot-res-files-as-linker-input.md)  
  
-   [file .exe](../../build/reference/dot-exe-files-as-linker-input.md)  
  
-   [file con estensione txt](../../build/reference/dot-txt-files-as-linker-input.md)  
  
-   [ILK (file)](../../build/reference/dot-ilk-files-as-linker-input.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)