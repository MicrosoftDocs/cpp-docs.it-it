---
title: Strumenti del linker LNK1309 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1309
dev_langs:
- C++
helpviewer_keywords:
- LNK1309
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 425fb564ae2bd099746fc9b76b496595caa10a0b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-error-lnk1309"></a>Errore degli strumenti del linker LNK1309
rilevato modulo tipo1; non è valida con l'opzione /CLRIMAGETYPE: tipo2  
  
 È stato richiesto un tipo di immagine CLR con **/CLRIMAGETYPE** ma il linker non in grado di generare un'immagine di tale tipo perché incompatibili con il tipo di uno o più moduli.  
  
 Ad esempio, si noterà LNK1309 se si specifica **safe** e si passa un modulo compilato con **/clr: pure**.  
  
 È inoltre LNK1309 se si tenta di compilare un'applicazione parzialmente attendibile di pure CLR utilizzando lib ptrustu [d]. Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [procedura: creare un'applicazione parzialmente attendibile dalla rimozione dipendenza nella DLL di CRT](../../dotnet/create-a-partially-trusted-application.md).  
  
 Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/CLRIMAGETYPE (Specifica tipo di immagine CLR)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).