---
description: 'Altre informazioni su: problemi comuni durante la creazione di una build di rilascio'
title: Problemi comuni durante la creazione di una build di rilascio
ms.date: 11/04/2016
helpviewer_keywords:
- unexpected code generation
- debugging [MFC], release builds
- release builds, troubleshooting
- stray pointers
- debug builds, difference from release builds
- MFC [C++], release builds
- heap layout problems
- pointers, stray
- release builds, building applications
- debug memory allocator
- optimization [C++], compiler
- projects [C++], debug configuration
- troubleshooting release builds
- memory [C++], overwrites
ms.assetid: 73cbc1f9-3e33-472d-9880-39a8e9977b95
ms.openlocfilehash: 7470b87a33b9dc0cb6f7e85b9cfa7b7c1216a936
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163093"
---
# <a name="common-problems-when-creating-a-release-build"></a>Problemi comuni durante la creazione di una build di rilascio

Durante lo sviluppo, in genere si compilerà e si eseguirà il test con una build di debug del progetto. Se quindi si compila l'applicazione per una build di rilascio, si potrebbe ottenere una violazione di accesso.

L'elenco seguente mostra le differenze principali tra una compilazione di debug e una versione (non di debug). Esistono altre differenze, ma di seguito sono riportate le principali differenze che potrebbero causare un errore dell'applicazione in una build di rilascio quando funziona in una compilazione di debug.

- [Layout heap](#_core_heap_layout)

- [Compilazione](#_core_compilation)

- [Supporto del puntatore](#_core_pointer_support)

- [Ottimizzazioni](#_core_optimizations)

Per informazioni su come intercettare gli errori di compilazione della versione nelle build di debug, vedere l'opzione del compilatore [/gz (Catch Release-Build Errors in debug build)](reference/gz-enable-stack-frame-run-time-error-checking.md) .

## <a name="heap-layout"></a><a name="_core_heap_layout"></a> Layout heap

Il layout dell'heap sarà causato da circa il 90% dei problemi evidenti quando un'applicazione funziona in fase di debug, ma non è rilasciata.

Quando si compila il progetto per il debug, si usa l'allocatore di memoria di debug. Ciò significa che a tutte le allocazioni di memoria sono posizionati i byte Guard. Questi byte di Guard rilevano una sovrascrittura della memoria. Poiché il layout dell'heap è diverso tra le versioni di rilascio e di debug, una sovrascrittura della memoria potrebbe non creare problemi in una build di debug, ma potrebbe avere effetti irreversibili in una build di rilascio.

Per altre informazioni, vedere [verificare la sovrascrittura della memoria](checking-for-memory-overwrites.md) e [usare la build di debug per verificare la sovrascrittura della memoria](using-the-debug-build-to-check-for-memory-overwrite.md).

## <a name="compilation"></a><a name="_core_compilation"></a> Compilazione

Molte delle macro MFC e gran parte dell'implementazione di MFC cambiano quando si compila per la versione. In particolare, la macro ASSERT restituisce Nothing in una build di rilascio, quindi non viene eseguito alcun codice trovato nelle ASSERZIONi. Per altre informazioni, vedere [esaminare istruzioni Assert](using-verify-instead-of-assert.md).

Alcune funzioni sono inline per aumentare la velocità nella build di rilascio. Le ottimizzazioni vengono in genere attivate in una build di rilascio. Viene usato anche un allocatore di memoria diverso.

## <a name="pointer-support"></a><a name="_core_pointer_support"></a> Supporto del puntatore

La mancanza di informazioni di debug rimuove la spaziatura interna dall'applicazione. In una build di rilascio, i puntatori randagi hanno maggiori possibilità di puntare a una memoria non inizializzata anziché puntare a informazioni di debug.

## <a name="optimizations"></a><a name="_core_optimizations"></a> Ottimizzazioni

A seconda della natura di determinati segmenti di codice, il compilatore di ottimizzazione potrebbe generare codice imprevisto. Questa è la causa meno probabile dei problemi di compilazione della versione, ma si verifica a volte. Per una soluzione, vedere [ottimizzazione del codice](optimizing-your-code.md).

## <a name="see-also"></a>Vedi anche

[Build di versione](release-builds.md)<br/>
[Correzione dei problemi di compilazione della versione](fixing-release-build-problems.md)
