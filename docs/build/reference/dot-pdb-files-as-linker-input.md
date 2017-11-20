---
title: . Il file PDB come Input del Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- .pdb files, as linker input
- PDB files, as linker input
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a2f99bef901a09298404eabfe36f39bd1dd2b6bc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="pdb-files-as-linker-input"></a>File PDB come input del linker
Oggetto file (con estensione obj) compilati usando l'opzione /Zi contengono il nome di un database di programma (PDB). Non si specifica nome del file PDB dell'oggetto al linker. COLLEGAMENTO utilizza il nome incorporato per trovare il file PDB, se necessario. Questo vale anche per gli oggetti debuggable contenuti in una libreria. il file PDB per una libreria di debug deve essere disponibile per il linker insieme alla libreria.  
  
 COLLEGAMENTO viene inoltre utilizzato un file PDB per contenere le informazioni di debug per il file .exe o il file DLL. PDB del programma è un file di output sia un file di input, perché viene automaticamente aggiornato quando ricompila il programma.  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)