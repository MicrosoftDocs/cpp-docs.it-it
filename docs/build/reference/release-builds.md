---
title: Build di rilascio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- debugging [C++], release builds
- release builds
- debug builds, converting to release build
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3ae18c5e2dcdb735880509fd158dac4ccaa1462
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376650"
---
# <a name="release-builds"></a>Build di rilascio
Una build di rilascio Usa le ottimizzazioni. Quando si usa le ottimizzazioni per creare una build di rilascio, il compilatore non genererà le informazioni sui simboli di debug. Chiama l'assenza di informazioni di debug sui simboli, nonché il fatto che il codice non viene generato per traccia e ASSERT, significa che le dimensioni del file eseguibile viene ridotto e pertanto è più veloce.  
  
 In questa sezione vengono fornite informazioni sul perché e quando si desidera modificare da una build di debug in una build di rilascio. Illustra anche alcuni dei problemi che possono verificarsi durante il passaggio da un debug a una build di rilascio:  
  
-   [Creazione di una Build di rilascio](../../build/reference/how-to-create-a-release-build.md)  
  
-   [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)  
  
-   [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)  
  
    -   [Analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md)  
  
    -   [Utilizzando la Build di Debug per un controllo per la sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md)  
  
    -   [Debug di una Build di rilascio](../../build/reference/how-to-debug-a-release-build.md)  
  
    -   [Controllo delle sovrascritture di memoria](../../build/reference/checking-for-memory-overwrites.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../../ide/building-cpp-projects-in-visual-studio.md)   
 [Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)