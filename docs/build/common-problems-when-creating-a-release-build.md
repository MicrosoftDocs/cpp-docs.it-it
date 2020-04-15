---
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
ms.openlocfilehash: 9bd1cafe40417872d42f2e9e1427e5f2eccad7a7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328859"
---
# <a name="common-problems-when-creating-a-release-build"></a>Problemi comuni durante la creazione di una build di rilascio

Durante lo sviluppo, in genere si compila e si esegue il test con una build di debug del progetto. Se si compila quindi l'applicazione per una build di rilascio, è possibile che si verifichi una violazione di accesso.

L'elenco seguente mostra le differenze principali tra una build di debug e una build di rilascio (non debug). Esistono altre differenze, ma di seguito sono riportate le differenze principali che causerebbero l'esito negativo di un'applicazione in una build di rilascio quando funziona in una build di debug.

- [Heap Layout](#_core_heap_layout)

- [Compilazione](#_core_compilation)

- [Supporto del puntatore](#_core_pointer_support)

- [Ottimizzazioni](#_core_optimizations)

Vedere l'opzione del compilatore [/G (Catch Release-Build Errors in Debug Build)](reference/gz-enable-stack-frame-run-time-error-checking.md) per informazioni su come intercettare gli errori di compilazione di rilascio nelle build di debug.

## <a name="heap-layout"></a><a name="_core_heap_layout"></a>Heap Layout

Il layout heap sarà la causa di circa il novanta percento dei problemi apparenti quando un'applicazione funziona nel debug, ma non il rilascio.

Quando si compila il progetto per il debug, si utilizza l'allocatore di memoria di debug. Ciò significa che tutte le allocazioni di memoria hanno byte di protezione posizionati intorno a loro. Questi byte di protezione rilevano una sovrascrittura di memoria. Poiché il layout dell'heap è diverso tra le versioni di rilascio e di debug, una sovrascrittura di memoria potrebbe non creare problemi in una build di debug, ma potrebbe avere effetti catastrofici in una build di rilascio.

Per ulteriori informazioni, vedere [Verificare la sovrascrittura di memoria](checking-for-memory-overwrites.md) e [Utilizzare la build di debug per verificare](using-the-debug-build-to-check-for-memory-overwrite.md)la sovrascrittura di memoria .

## <a name="compilation"></a><a name="_core_compilation"></a>Compilazione

Molte delle macro MFC e gran parte delle modifiche dell'implementazione MFC quando si compila per il rilascio. In particolare, la macro ASSERT restituisce nulla in una build di rilascio, pertanto non verrà eseguito alcun codice trovato in ASSERT. Per ulteriori informazioni, vedere [Esaminare le istruzioni ASSERT](using-verify-instead-of-assert.md).

Alcune funzioni sono inline per una maggiore velocità nella build di rilascio. Le ottimizzazioni vengono in genere attivate in una build di rilascio. Viene utilizzato anche un allocatore di memoria diverso.

## <a name="pointer-support"></a><a name="_core_pointer_support"></a>Supporto del puntatore

La mancanza di informazioni di debug rimuove la spaziatura interna dall'applicazione. In una build di rilascio, i puntatori vaganti hanno maggiori probabilità di puntare alla memoria non inizializzata anziché puntare alle informazioni di debug.

## <a name="optimizations"></a><a name="_core_optimizations"></a>Ottimizzazioni

A seconda della natura di alcuni segmenti di codice, il compilatore di ottimizzazione potrebbe generare codice imprevisto. Questa è la causa meno probabile di problemi di compilazione di rilascio, ma si verifica a volte. Per una soluzione, vedere [Ottimizzazione del codice](optimizing-your-code.md).

## <a name="see-also"></a>Vedere anche

[Build di versione](release-builds.md)<br/>
[Correzione dei problemi della build di versione](fixing-release-build-problems.md)
