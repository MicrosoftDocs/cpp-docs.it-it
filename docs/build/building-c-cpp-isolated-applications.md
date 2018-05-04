---
title: Compilazione di C/C++ di applicazioni isolate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 69de94159ef792aedff35efe81e8bb663d571105
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="building-cc-isolated-applications"></a>Compilazione di applicazioni isolate C/C++
Un'applicazione isolata dipende solo gli assembly side-by-side e associa le dipendenze tramite un manifesto. Non è necessaria per l'applicazione deve essere completamente isolata per eseguire correttamente in Windows. Tuttavia, dotando rendere l'applicazione completamente isolata, sarà possibile risparmiare tempo se è necessario in futuro l'applicazione di servizio. Per ulteriori informazioni sui vantaggi di rendere l'applicazione completamente isolata, vedere [applicazioni isolate](http://msdn.microsoft.com/library/aa375190).  
  
 Quando si compila l'applicazione C/C++ nativa con Visual C++, per impostazione predefinita di Visual Studio sistema del progetto genera un file manifesto che descrive le dipendenze dell'applicazione nelle librerie Visual C++. Se queste dipendenze sono le uniche dispone l'applicazione, diventerà un'applicazione isolata non appena verrà ricompilata con Visual Studio. Se l'applicazione utilizza altre librerie in fase di esecuzione, quindi potrebbe essere necessario ricompilare tali librerie come assembly side-by-side seguendo i passaggi descritti [C/C++-by-side di creazione di assembly](../build/building-c-cpp-side-by-side-assemblies.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti di applicazioni isolate e assembly Side-by-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)