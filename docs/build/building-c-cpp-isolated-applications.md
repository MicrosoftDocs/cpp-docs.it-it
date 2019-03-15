---
title: Compilazione di applicazioni isolate C/C++
ms.date: 11/04/2016
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
ms.openlocfilehash: e02fec4115d328dd8230d68ddb65b380ec743dc0
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57815203"
---
# <a name="building-cc-isolated-applications"></a>Compilazione di applicazioni isolate C/C++

Un'applicazione isolata dipende solo gli assembly side-by-side e associa le relative dipendenze usando un manifesto. Non è necessaria per l'applicazione sia completamente isolati per eseguire correttamente in Windows; Tuttavia, impegnati a investire nel rendere l'applicazione completamente isolata, si può risparmiare tempo se è necessario in futuro l'applicazione di servizio. Per altre informazioni sui vantaggi di rendere l'applicazione completamente isolata, vedere [applicazioni isolate](/windows/desktop/SbsCs/isolated-applications).

Quando si compila l'applicazione C/C++ nativo con Visual C++, per impostazione predefinita di Visual Studio sistema del progetto genera un file manifesto che descrive le dipendenze dell'applicazione sulle librerie di Visual C++. Se queste dipendenze sono le uniche è l'applicazione, quindi diventa un'applicazione isolata, non appena la ricompilazione con Visual Studio. Se l'applicazione usa altre librerie in fase di esecuzione, quindi potrebbe essere necessario ricompilare le librerie come assembly side-by-side seguendo i passaggi descritti [Building C/C++-by-side Assemblies](building-c-cpp-side-by-side-assemblies.md).

## <a name="see-also"></a>Vedere anche

[Concetti di applicazioni isolate e assembly side-by-side](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
