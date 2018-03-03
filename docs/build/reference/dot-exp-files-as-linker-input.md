---
title: . File exp come Input del Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- exporting functions
- import libraries, linker files
- linking [C++], exports
- exporting functions, information about exported functions
- exporting data, export (.exp) files
- functions [C++], exporting
- .exp files [C++]
- EXP files
ms.assetid: 399f5636-0a4d-462e-b500-5f5b9ae5ad22
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5cd6351623b230e3be1e432bd6ee0fb760da5abd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exp-files-as-linker-input"></a>File exp come input del linker
File di esportazione (EXP) contengono informazioni sugli articoli di funzioni e i dati esportati. La creazione di una libreria di importazione, crea anche un file EXP. Utilizzare il file EXP quando si collega un programma che Esporta e Importa da un altro programma, direttamente o indirettamente. Se si collega a un file EXP, collegamento non produce una libreria di importazione, in quanto si presuppone che LIB già stato creato uno. Per ulteriori informazioni sui file EXP e librerie di importazione, vedere [utilizzo di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)