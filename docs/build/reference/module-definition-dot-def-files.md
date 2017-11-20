---
title: Definizione di modulo (. File def) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- def files
- module definition files
- .def files
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 15dbdfcd1074b32e2a707616571484db3ced9d2a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="module-definition-def-files"></a>File di definizione moduli (DEF)
File di definizione moduli (def) forniscono il linker con le informazioni sull'esportazione, attributi e altre informazioni sul programma da collegare. Un file. def è molto utile quando si compila una DLL. Poiché esistono [opzioni del linker](../../build/reference/linker-options.md) che può essere usato invece di istruzioni di definizione moduli, def (file) in genere non sono necessari. È inoltre possibile utilizzare [dllexport](../../build/exporting-from-a-dll-using-declspec-dllexport.md) come un modo per specificare le funzioni esportate.  
  
 È possibile richiamare un file. def durante la fase di collegamento con la [/DEF (specifica del File di definizione moduli)](../../build/reference/def-specify-module-definition-file.md) l'opzione del linker.  
  
 Se si sta creando un file .exe che non contiene esportazioni, utilizzando un file. def renderà l'output del file più grande e più lento il caricamento.  
  
 Per un esempio, vedere [esportazione da una DLL tramite i file DEF](../../build/exporting-from-a-dll-using-def-files.md).  
  
 Vedere le sezioni seguenti per ulteriori informazioni:  
  
-   [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)  
  
-   [EXPORTS](../../build/reference/exports.md)  
  
-   [HEAPSIZE](../../build/reference/heapsize.md)  
  
-   [LIBRARY](../../build/reference/library.md)  
  
-   [NOME](../../build/reference/name-c-cpp.md)  
  
-   [NELLE SEZIONI](../../build/reference/sections-c-cpp.md)  
  
-   [STACKSIZE](../../build/reference/stacksize.md)  
  
-   [STUB](../../build/reference/stub.md)  
  
-   [VERSIONE](../../build/reference/version-c-cpp.md)  
  
-   [Parole riservate](../../build/reference/reserved-words.md)  
  
## <a name="see-also"></a>Vedere anche  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  (Informazioni di riferimento per la compilazione in C/C++)  
 [Opzioni del linker](../../build/reference/linker-options.md)  