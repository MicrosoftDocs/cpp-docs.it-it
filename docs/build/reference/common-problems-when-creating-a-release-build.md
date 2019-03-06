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
- troubleshooting Visual C++
- troubleshooting release builds
- memory [C++], overwrites
ms.assetid: 73cbc1f9-3e33-472d-9880-39a8e9977b95
ms.openlocfilehash: bb5098ab4c92a408ae5895b5c59c7ecd36585bdb
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57415656"
---
# <a name="common-problems-when-creating-a-release-build"></a>Problemi comuni durante la creazione di una build di rilascio

Durante lo sviluppo, sarà in genere compilare e testare con una build di debug del progetto. Se quindi si compila l'applicazione per una build di rilascio, è possibile ottenere una violazione di accesso.

L'elenco seguente mostra le differenze principali tra una build di debug e una versione (non di debug). Esistono altre differenze, ma di seguito sono le differenze principali che potrebbero causare un errore dell'applicazione in una build di rilascio quando viene eseguita in una build di debug.

- [Layout dell'heap](#_core_heap_layout)

- [Compilazione](#_core_compilation)

- [Supporto per i puntatori](#_core_pointer_support)

- [ottimizzazioni](#_core_optimizations)

Vedere le [/GZ (intercettare errori Build di rilascio nel Debug della compilazione)](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md) l'opzione del compilatore per informazioni su come intercettare versione errori nelle build di debug di compilazione.

##  <a name="_core_heap_layout"></a> Layout dell'heap

Il layout dell'heap è la causa di circa il 90% dei problemi evidenti quando un'applicazione può funzionare in debug, ma non per il rilascio.

Quando si compila il progetto per il debug, si utilizza l'allocatore di memoria di debug. Ciò significa che tutte le allocazioni di memoria byte guard posizionati attorno a esse. Questi byte guard rilevare una sovrascrittura di memoria. Poiché il layout dell'heap è diverso tra release e debug versioni una sovrascrittura di memoria non crei problemi nella build di debug, ma può produrre effetti catastrofici in una build di rilascio.

Per altre informazioni, vedere [verificare la presenza di sovrascrittura di memoria](../../build/reference/checking-for-memory-overwrites.md) e [usare la Build di Debug per il controllo della sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md).

##  <a name="_core_compilation"></a> Compilazione

Molte delle macro MFC e gran parte delle modifiche all'implementazione MFC quando si compila per il rilascio. In particolare, la macro di ASSERZIONE non restituisce alcun valore in una build di rilascio in modo che nessun codice trovato in istruzioni Assert verrà eseguito. Per altre informazioni, vedere [analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md).

Alcune funzioni vengono impostati come inline per aumentare la velocità nelle build di rilascio. Le ottimizzazioni sono attivate a livello generale in una build di rilascio. È inoltre utilizzato un allocatore di memoria diverse.

##  <a name="_core_pointer_support"></a> Supporto per i puntatori

La mancanza di informazioni di debug consente di rimuovere la spaziatura interna dall'applicazione. In una build di rilascio errati (puntatori) hanno una maggiore probabilità di che punta alla memoria non inizializzata invece di puntare alle informazioni di debug.

##  <a name="_core_optimizations"></a> ottimizzazioni

A seconda della natura di determinati segmenti di codice, il compilatore di ottimizzazione potrebbe generare un codice imprevisto. Si tratta della causa meno probabile dei problemi della build di rilascio, ma si verificano in alcuni casi. Per una soluzione, vedere [ottimizzazione del codice](../../build/reference/optimizing-your-code.md).

## <a name="see-also"></a>Vedere anche

[Build di versione](../../build/reference/release-builds.md)<br/>
[Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)
