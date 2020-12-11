---
description: 'Altre informazioni su: compilazione di applicazioni isolate C/C++'
title: Compilazione di applicazioni isolate C/C++
ms.date: 05/06/2019
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
ms.openlocfilehash: a8cd99032c27d21efaec7f213c470017e52777c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163210"
---
# <a name="building-cc-isolated-applications"></a>Compilazione di applicazioni isolate C/C++

Un'applicazione isolata dipende solo dagli assembly affiancati e viene associata alle relative dipendenze tramite un manifesto. Non è necessario che l'applicazione sia completamente isolata per poter essere eseguita correttamente in Windows; Tuttavia, se si investe nel rendere completamente isolata l'applicazione, è possibile risparmiare tempo se è necessario servire l'applicazione in futuro. Per ulteriori informazioni sui vantaggi derivanti dall'isolamento completo dell'applicazione, vedere [applicazioni isolate](/windows/win32/SbsCs/isolated-applications).

Quando si compila un'applicazione C/C++ nativa con Visual Studio, per impostazione predefinita il sistema di progetto di Visual Studio genera un file manifesto che descrive le dipendenze dell'applicazione nelle librerie di Visual Studio. Se queste sono le uniche dipendenze dell'applicazione, diventa un'applicazione isolata non appena viene ricompilata con Visual Studio. Se l'applicazione usa altre librerie in fase di esecuzione, potrebbe essere necessario ricompilare tali librerie come assembly side-by-side seguendo i passaggi descritti in [compilazione di assembly affiancati C/C++](building-c-cpp-side-by-side-assemblies.md).

## <a name="see-also"></a>Vedi anche

[Concetti di applicazioni isolate e assembly affiancati](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
