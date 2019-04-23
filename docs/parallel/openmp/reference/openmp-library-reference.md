---
title: Riferimento alla libreria OpenMP
ms.date: 03/20/2019
ms.assetid: a25188c6-edde-43d0-84b5-780e797b08fc
ms.openlocfilehash: 6f4bbeca54bff1fc44a3576362edca9c30926d5a
ms.sourcegitcommit: 14b292596bc9b9b883a9c58cd3e366b282a1f7b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2019
ms.locfileid: "60124694"
---
# <a name="openmp-library-reference"></a>Riferimento alla libreria OpenMP

Fornisce collegamenti a costrutti usati nell'API OpenMP.

L'implementazione di Visual C++ dello standard OpenMP include i seguenti costrutti.

|Costrutto|Descrizione|
|---------------|-----------------|
|[Direttive](openmp-directives.md)|Vengono forniti collegamenti alle direttive usati nell'API OpenMP.|
|[Clausole](openmp-directives.md)|Fornisce collegamenti alle clausole utilizzate nell'API OpenMP.|
|[Funzioni](openmp-functions.md)|Fornisce collegamenti a funzioni usate nell'API OpenMP.|
|[Variabili di ambiente](openmp-environment-variables.md)|Fornisce collegamenti alle variabili di ambiente usate nell'API OpenMP.|

L'oggetto visivo C++ funzioni di libreria run-time OpenMP sono contenute nelle librerie seguenti.

|Libreria di runtime OpenMP|Caratteristiche|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP. LIB).|
|VCOMPD.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMPD. COPERCHIO) (debug)|

Se debug viene definito in una compilazione e `#include omp.h` nel codice sorgente, VCOMPD. LIB sarà lib l'impostazione predefinita, in caso contrario, VCOMP. Consentirà di LIB.

È possibile usare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) rimuovere lib predefinito e il collegamento esplicito con la libreria di propria scelta.

Le DLL di OpenMP sono nella directory del pacchetto ridistribuibile Visual C++ e devono essere distribuiti con le applicazioni che usano OpenMP.

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)