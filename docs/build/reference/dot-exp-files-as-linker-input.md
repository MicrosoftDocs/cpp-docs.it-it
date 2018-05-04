---
title: . File exp come Input del Linker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f9b5c118e81372bd57810a9472526909ed21f765
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exp-files-as-linker-input"></a>File exp come input del linker
File di esportazione (EXP) contengono informazioni sugli articoli di funzioni e i dati esportati. La creazione di una libreria di importazione, crea anche un file EXP. Utilizzare il file EXP quando si collega un programma che Esporta e Importa da un altro programma, direttamente o indirettamente. Se si collega a un file EXP, collegamento non produce una libreria di importazione, in quanto si presuppone che LIB già stato creato uno. Per ulteriori informazioni sui file EXP e librerie di importazione, vedere [utilizzo di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)