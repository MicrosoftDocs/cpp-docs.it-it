---
title: Generazione di manifesti dalla riga di comando | Documenti Microsoft
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
- manifests [C++]
- manifest tool (mt.exe)
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9ba88017e0003c7a552c985516dba9a6254317a0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="manifest-generation-at-the-command-line"></a>Generazione di manifesti dalla riga di comando
Quando si compilano applicazioni C/C++ dalla riga di comando utilizzando nmake o strumenti simili, il manifesto viene generato dopo il linker ha elaborato tutti i file oggetto e la compilazione del file binario finale. Il linker raccoglie informazioni sull'assembly archiviati nei file oggetto e combina queste informazioni in un file manifesto finale. Per impostazione predefinita il linker genererà un file denominato < binary_name >. \<estensione >. manifest per descrivere il file binario finale. Il linker incorpora un file manifesto nel file binario e può solo generare un manifesto come file esterno. Esistono diversi modi per incorporare un manifesto all'interno del file binario finale, ad esempio usando il [strumento manifesto (mt.exe)](http://msdn.microsoft.com/library/aa375649) o la compilazione del manifesto in un file di risorse. È importante tenere presente che debbano di regole specifiche da seguire quando si incorpora un manifesto all'interno del file binario finale per abilitare funzionalità quali il collegamento incrementale, firma, e modifica e continuazione. Queste e altre opzioni sono illustrate [procedura: incorporare un manifesto all'interno di un'applicazione C/C++](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md) durante la compilazione sulla riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Manifesti](http://msdn.microsoft.com/library/aa375365)   
 [/INCREMENTAL (collegamento incrementale)](../build/reference/incremental-link-incrementally.md)   
 [Assembly con nome sicuro (firma degli Assembly) (C + c++ /CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)   
 [Modifica e continuazione](/visualstudio/debugger/edit-and-continue)   
 [Informazioni sulla generazione di manifesti per programmi C/C++](../build/understanding-manifest-generation-for-c-cpp-programs.md)