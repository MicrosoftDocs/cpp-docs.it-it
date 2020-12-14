---
description: 'Altre informazioni su: riferimenti alla libreria OpenMP'
title: Riferimento alla libreria OpenMP
ms.date: 12/02/2019
ms.assetid: a25188c6-edde-43d0-84b5-780e797b08fc
ms.openlocfilehash: fa1f654835afef94b0e00f52bebb0b7300d205be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342361"
---
# <a name="openmp-library-reference"></a>Riferimento alla libreria OpenMP

Fornisce collegamenti a costrutti utilizzati nell'API OpenMP.

L'implementazione Visual C++ dello standard OpenMP include i costrutti seguenti.

|Costrutto|Description|
|---------------|-----------------|
|[Direttive](openmp-directives.md)|Fornisce collegamenti alle direttive utilizzate nell'API OpenMP.|
|[Clausole](openmp-clauses.md)|Fornisce collegamenti a clausole utilizzate nell'API OpenMP.|
|[Funzioni](openmp-functions.md)|Fornisce collegamenti alle funzioni utilizzate nell'API OpenMP.|
|[Variabili di ambiente](openmp-environment-variables.md)|Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.|

Le funzioni della libreria di runtime OpenMP Visual C++ sono contenute nelle librerie seguenti.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP. LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP140.DLL).|
|VCOMPD. LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP140D.DLL) (debug)|

Se _DEBUG è definito in una compilazione e se `#include <omp.h>` è nel codice sorgente, VCOMPD. LIB sarà la lib predefinita, in caso contrario, VCOMP. Verrà utilizzato LIB.

È possibile utilizzare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) per rimuovere la lib predefinita e collegarsi in modo esplicito al lib scelto.

Le dll OpenMP si trovano nella directory Visual C++ ridistribuibile e devono essere distribuite con applicazioni che utilizzano OpenMP.

## <a name="see-also"></a>Vedi anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)
