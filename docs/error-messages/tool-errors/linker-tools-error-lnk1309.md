---
title: Strumenti del linker LNK1309 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1309
dev_langs:
- C++
helpviewer_keywords:
- LNK1309
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f179a74823be1293bc927afe122c4bf14c0030b9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-error-lnk1309"></a>Errore degli strumenti del linker LNK1309
rilevato modulo tipo1; non è valida con l'opzione /CLRIMAGETYPE: tipo2  
  
 È stato richiesto un tipo di immagine CLR con **/CLRIMAGETYPE** ma il linker non in grado di generare un'immagine di tale tipo perché incompatibili con il tipo di uno o più moduli.  
  
 Ad esempio, si noterà LNK1309 se si specifica **safe** e si passa un modulo compilato con **/clr: pure**.  
  
 È inoltre LNK1309 se si tenta di compilare un'applicazione parzialmente attendibile di pure CLR utilizzando lib ptrustu [d]. Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [procedura: creare un'applicazione parzialmente attendibile dalla rimozione dipendenza nella DLL di CRT](../../dotnet/create-a-partially-trusted-application.md).  
  
 Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/CLRIMAGETYPE (Specifica tipo di immagine CLR)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).