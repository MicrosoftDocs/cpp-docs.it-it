---
title: Riferimento alla libreria OpenMP
ms.date: 07/30/2019
ms.assetid: a25188c6-edde-43d0-84b5-780e797b08fc
ms.openlocfilehash: c63ae5ba7f04d8ee6bd02418792804373fa71e6b
ms.sourcegitcommit: 170f5de63b0fec8e38c252b6afdc08343f4243a6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2019
ms.locfileid: "72348216"
---
# <a name="openmp-library-reference"></a>Riferimento alla libreria OpenMP

Fornisce collegamenti a costrutti utilizzati nell'API OpenMP.

L'implementazione C++ visiva dello standard OpenMP include i costrutti seguenti.

|Costrutto|Descrizione|
|---------------|-----------------|
|[Direttive](openmp-directives.md)|Fornisce collegamenti alle direttive utilizzate nell'API OpenMP.|
|[Clausole](openmp-clauses.md)|Fornisce collegamenti a clausole utilizzate nell'API OpenMP.|
|[Funzioni](openmp-functions.md)|Fornisce collegamenti alle funzioni utilizzate nell'API OpenMP.|
|[Variabili di ambiente](openmp-environment-variables.md)|Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.|

Le funzioni C++ della libreria di runtime di Visual OpenMP sono contenute nelle librerie seguenti.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP. LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP. LIB).|
|VCOMPD. LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMPD. COPERCHIO) (debug)|

Se _ debug è definito in una compilazione e se `#include <omp.h>` si trova nel codice sorgente, VCOMPD. LIB sarà la lib predefinita, in caso contrario, VCOMP. Verrà utilizzato LIB.

È possibile utilizzare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) per rimuovere la lib predefinita e collegarsi in modo esplicito al lib scelto.

Le dll OpenMP si trovano nella directory C++ Visual Redistributable e devono essere distribuite con applicazioni che utilizzano OpenMP.

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)
