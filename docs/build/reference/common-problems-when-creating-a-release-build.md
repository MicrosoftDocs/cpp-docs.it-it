---
title: Problemi comuni durante la creazione di una Build di rilascio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8860783a2cf9fb88b28e24e0bc16eb16c0dd5d77
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373166"
---
# <a name="common-problems-when-creating-a-release-build"></a>Problemi comuni durante la creazione di una build di rilascio
Durante lo sviluppo, in genere compilerà e testerà con una build di debug del progetto. Se si compila quindi l'applicazione per una build di rilascio, è possibile che si verifichi una violazione di accesso.  
  
 L'elenco seguente mostra le differenze principali tra debug e di una build di rilascio (non di debug). Esistono altre differenze, ma di seguito sono le differenze principali che può provocare un errore dell'applicazione in una build di rilascio quando viene eseguita in una build di debug.  
  
-   [Layout di heap](#_core_heap_layout)  
  
-   [Compilazione](#_core_compilation)  
  
-   [Supporto per i puntatori](#_core_pointer_support)  
  
-   [Ottimizzazioni](#_core_optimizations)  
  
 Vedere il [/GZ (Catch di errori di Build di rilascio in)](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md) opzione del compilatore per informazioni sulla versione di intercettare errori nelle build di debug di compilazione.  
  
##  <a name="_core_heap_layout"></a> Layout di heap  
 Il layout dell'heap sarà la causa di circa il 90% dei problemi evidenti quando un'applicazione è debug, ma non per il rilascio.  
  
 Quando si compila il progetto per il debug, si utilizza l'allocatore di memoria di debug. Ciò significa che tutte le allocazioni di memoria byte guard inseriti attorno a esse. Questi byte guard rilevare una sovrascrittura di memoria. Poiché il layout dell'heap è diverso tra release e debug versioni, una sovrascrittura di memoria non potrebbe creare problemi in una build di debug, ma può produrre effetti irreversibili in una build di rilascio.  
  
 Per ulteriori informazioni, vedere [controllare sovrascritture di memoria](../../build/reference/checking-for-memory-overwrites.md) e [utilizzare la Build di Debug per il controllo della sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md).  
  
##  <a name="_core_compilation"></a> Compilazione  
 Molte delle macro MFC e gran parte delle modifiche all'implementazione MFC quando si compila per il rilascio. In particolare, la macro di ASSERZIONE restituisce alcun valore in una build di rilascio, pertanto nessuna parte del codice presente in verrà eseguita. Per ulteriori informazioni, vedere [analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md).  
  
 Alcune funzioni vengono impostati come inline per aumentare la velocità nelle build di rilascio. In genere le ottimizzazioni sono attivate in una build di rilascio. È inoltre utilizzato un allocatore di memoria diverse.  
  
##  <a name="_core_pointer_support"></a> Supporto per i puntatori  
 La mancanza di informazioni di debug rimuove il riempimento dall'applicazione. In una build di rilascio, errati (puntatori) hanno una maggiore probabilità di che punta alla memoria non inizializzata anziché fare riferimento a informazioni di debug.  
  
##  <a name="_core_optimizations"></a> Ottimizzazioni  
 A seconda della natura di determinati segmenti di codice, il compilatore di ottimizzazione potrebbe generare codice imprevisto. Questa è la causa meno probabile dei problemi di compilazione di rilascio, ma si verificano in alcuni casi. Per una soluzione, vedere [ottimizzazione del codice](../../build/reference/optimizing-your-code.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Build di rilascio](../../build/reference/release-builds.md)   
 [Correzione dei problemi della build di versione](../../build/reference/fixing-release-build-problems.md)