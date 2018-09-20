---
title: Librerie OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9a4ccfefeaeb9446731027db44b849233bfefd6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391215"
---
# <a name="openmp-libraries"></a>Librerie OpenMP

Descrive i file con estensione LIB che formano le librerie di runtime OpenMP in Visual C++.

Le seguenti librerie contengono le funzioni della libreria run-time Visual C++ OpenMP.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP. LIB).|
|VCOMPD.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMPD. COPERCHIO) (debug)|

Se debug viene definito in una compilazione e `#include omp.h` nel codice sorgente, VCOMPD. LIB sarà lib predefinito. In caso contrario, VCOMP. Consentirà di LIB.

È possibile usare [/NODEFAULTLIB (Ignore Libraries)](../../../build/reference/nodefaultlib-ignore-libraries.md) rimuovere lib predefinito e il collegamento esplicito con la libreria di propria scelta.

Le DLL di OpenMP sono nella directory del pacchetto ridistribuibile Visual C++ e devono essere distribuiti con le applicazioni che usano OpenMP.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)