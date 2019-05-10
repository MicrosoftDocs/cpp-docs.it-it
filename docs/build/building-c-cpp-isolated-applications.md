---
title: Compilazione di applicazioni isolate C/C++
ms.date: 05/06/2019
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
ms.openlocfilehash: 42192ad9388a8e69b70947c20c6fa7ee428a2bb9
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220966"
---
# <a name="building-cc-isolated-applications"></a>Compilazione di applicazioni isolate C/C++

Un'applicazione isolata dipende solo gli assembly side-by-side e associa le relative dipendenze usando un manifesto. Non è necessaria per l'applicazione sia completamente isolati per eseguire correttamente in Windows; Tuttavia, impegnati a investire nel rendere l'applicazione completamente isolata, si può risparmiare tempo se è necessario in futuro l'applicazione di servizio. Per altre informazioni sui vantaggi di rendere l'applicazione completamente isolata, vedere [applicazioni isolate](/windows/desktop/SbsCs/isolated-applications).

Quando si crea il C nativa /C++ applicazione con Visual Studio, per impostazione predefinita il sistema di progetto di Visual Studio genera un file manifesto che descrive le dipendenze dell'applicazione sulle librerie di Visual Studio. Se queste dipendenze sono le uniche è l'applicazione, quindi diventa un'applicazione isolata, non appena la ricompilazione con Visual Studio. Se l'applicazione usa altre librerie in fase di esecuzione, quindi potrebbe essere necessario ricompilare le librerie come assembly side-by-side seguendo i passaggi descritti [Building C/C++-by-side Assemblies](building-c-cpp-side-by-side-assemblies.md).

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
