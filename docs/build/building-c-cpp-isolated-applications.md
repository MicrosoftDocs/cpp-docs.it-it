---
title: Compilazione di C/C++ di applicazioni isolate | Microsoft Docs
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
ms.openlocfilehash: 78d14f812700afa4ea0ad66b527a0e3888862f4d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716905"
---
# <a name="building-cc-isolated-applications"></a>Compilazione di applicazioni isolate C/C++

Un'applicazione isolata dipende solo gli assembly side-by-side e associa le relative dipendenze usando un manifesto. Non è necessaria per l'applicazione sia completamente isolati per eseguire correttamente in Windows; Tuttavia, impegnati a investire nel rendere l'applicazione completamente isolata, si può risparmiare tempo se è necessario in futuro l'applicazione di servizio. Per altre informazioni sui vantaggi di rendere l'applicazione completamente isolata, vedere [applicazioni isolate](/windows/desktop/SbsCs/isolated-applications).

Quando si compila l'applicazione C/C++ nativo con Visual C++, per impostazione predefinita di Visual Studio sistema del progetto genera un file manifesto che descrive le dipendenze dell'applicazione sulle librerie di Visual C++. Se queste dipendenze sono le uniche è l'applicazione, quindi diventa un'applicazione isolata, non appena la ricompilazione con Visual Studio. Se l'applicazione usa altre librerie in fase di esecuzione, quindi potrebbe essere necessario ricompilare le librerie come assembly side-by-side seguendo i passaggi descritti [Building C/C++-by-side Assemblies](../build/building-c-cpp-side-by-side-assemblies.md).

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)