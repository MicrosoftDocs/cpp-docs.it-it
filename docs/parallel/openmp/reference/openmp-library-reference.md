---
title: Riferimento alla libreria OpenMP
ms.date: 12/02/2019
ms.assetid: a25188c6-edde-43d0-84b5-780e797b08fc
ms.openlocfilehash: b61eb356b782b3cd17557827734a706e0761a2a8
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810747"
---
# <a name="openmp-library-reference"></a>Riferimento alla libreria OpenMP

Fornisce collegamenti a costrutti utilizzati nell'API OpenMP.

L'implementazione C++ visiva dello standard OpenMP include i costrutti seguenti.

|Costruzione|Descrizione|
|---------------|-----------------|
|[Direttive](openmp-directives.md)|Fornisce collegamenti alle direttive utilizzate nell'API OpenMP.|
|[Clausole](openmp-clauses.md)|Fornisce collegamenti a clausole utilizzate nell'API OpenMP.|
|[Funzioni](openmp-functions.md)|Fornisce collegamenti alle funzioni utilizzate nell'API OpenMP.|
|[Variabili di ambiente](openmp-environment-variables.md)|Fornisce collegamenti alle variabili di ambiente utilizzate nell'API OpenMP.|

Le funzioni C++ della libreria di runtime di Visual OpenMP sono contenute nelle librerie seguenti.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP140. DLL).|
|VCOMPD.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP140D. DLL) (debug)|

Se _DEBUG viene definito in una compilazione e se `#include <omp.h>` si trova nel codice sorgente, VCOMPD. LIB sarà la lib predefinita, in caso contrario, VCOMP. Verrà utilizzato LIB.

È possibile utilizzare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) per rimuovere la lib predefinita e collegarsi in modo esplicito al lib scelto.

Le dll OpenMP si trovano nella directory C++ Visual Redistributable e devono essere distribuite con applicazioni che utilizzano OpenMP.

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)
