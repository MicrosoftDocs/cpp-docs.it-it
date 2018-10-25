---
title: Librerie OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 10/24/2018
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
ms.openlocfilehash: 7620b0ea710a5474fbbbf614691ceeb1e5cc945e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062002"
---
# <a name="openmp-libraries"></a>Librerie OpenMP

Descrive i file con estensione LIB che formano le librerie di runtime OpenMP in Visual C++.

Le seguenti librerie contengono le funzioni della libreria run-time Visual C++ OpenMP.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP. LIB).|
|VCOMPD.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMPD. COPERCHIO) (debug)|

Se debug viene definito in una compilazione e `#include omp.h` nel codice sorgente, VCOMPD. LIB sarà lib predefinito. In caso contrario, VCOMP. Consentirà di LIB.

È possibile usare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) rimuovere lib predefinito e il collegamento esplicito con la libreria di propria scelta.

Le DLL di OpenMP sono nella directory del pacchetto ridistribuibile Visual C++ e devono essere distribuiti con le applicazioni che usano OpenMP.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria](openmp-library-reference.md)
