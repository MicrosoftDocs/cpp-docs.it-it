---
title: Funzionalità libreria CRT | Microsoft Docs
ms.custom: ''
ms.date: 08/20/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.runtime
dev_langs:
- C++
helpviewer_keywords:
- MSVCR71.dll
- libraries [C++], multithreaded
- library files, run-time
- LIBCMT.lib
- LIBCP.lib
- LIBCPMT.lib
- run-time libraries, C
- CRT, release versions
- MSVCP71.dll
- LIBC.lib
- libraries [C++]
- libraries [C++], run-time
- linking [C++], libraries
ms.assetid: a889fd39-807d-48f2-807f-81492612463f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7562f6e5a8915f33b3f2c8bd23ce310e641984c6
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057045"
---
# <a name="crt-library-features"></a>Funzionalità libreria CRT

Questo argomento descrive i vari file lib che formano le librerie di runtime C, nonché le opzioni del compilatore associate e le direttive del preprocessore.

## <a name="c-run-time-libraries-crt"></a>Librerie di runtime C (CRT)

La libreria di runtime C (CRT) fa parte della libreria standard C++ che incorpora la libreria standard ISO C99. Le librerie Visual C++ che implementano la libreria CRT supportano lo sviluppo del codice nativo e il codice nativo e gestito misto. Tutte le versioni della libreria CRT supportano lo sviluppo multithread. La maggior parte delle librerie supporta il collegamento statico, per collegare la libreria direttamente al codice, oppure il collegamento dinamico, in modo che il codice usi file DLL comuni.

A partire da Visual Studio 2015 la libreria CRT è stata sottoposta a refactoring in nuovi file binari. La libreria CRT universale (UCRT) contiene le funzioni e le variabili globali esportate dalla libreria CRT C99 standard. La libreria UCRT è ora un componente di Windows ed è inclusa in Windows 10. La libreria statica, la libreria di importazione DLL e i file di intestazione per la libreria UCRT si trovano ora in Windows 10 SDK. Quando si installa Visual C++, Visual Studio installato il subset di Windows 10 SDK richiesto per usare la libreria UCRT. È possibile usare la libreria UCRT in qualsiasi versione di Windows supportata da Visual Studio 2015 e versioni successive. È possibile ridistribuirla usando vcredist per le versioni supportate di Windows diverse da Windows 10. Per altre informazioni, vedere [Redistributing Visual C++ Files](../ide/redistributing-visual-cpp-files.md).

La tabella seguente elenca le librerie che implementano le librerie UCRT.

|Libreria|DLL associata|Caratteristiche|Opzione|Direttive per il preprocessore|
|-------------|--------------------|---------------------|------------|-----------------------------|
|libucrt.lib|nessuno|Collega in modo statico la libreria UCRT al codice.|**/MT**|_MT|
|libucrtd.lib|nessuno|Versione di debug della libreria UCRT per il collegamento statico. Non ridistribuibile.|**/MTd**|_DEBUG, _MT|
|ucrt.lib|ucrtbase.dll|Libreria di importazione DLL per la libreria UCRT.|**/MD**|_MT, _DLL|
|ucrtd.lib|ucrtbased.dll|Libreria di importazione DLL per la versione di debug della libreria UCRT. Non ridistribuibile.|**/MDd**|_DEBUG, _MT, _DLL|

La libreria vcruntime contiene codice specifico dell'implementazione della libreria CRT di Visual C++, come il supporto di gestione e debug delle eccezioni, i controlli runtime e le informazioni sui tipi, i dettagli di implementazione e alcune funzioni estese della libreria. Questa libreria è specifica per la versione usata dal compilatore.

Questa tabella elenca le librerie che implementano la libreria vcruntime.

|Libreria|DLL associata|Caratteristiche|Opzione|Direttive per il preprocessore|
|-------------|--------------------|---------------------|------------|-----------------------------|
|libvcruntime.lib|nessuno|Collegata in modo statico al codice.|**/MT**|_MT|
|libvcruntimed.lib|nessuno|Versione di debug per il collegamento statico. Non ridistribuibile.|**/MTd**|_MT, _DEBUG|
|vcruntime.lib|vcruntime\<version>.dll|Libreria di importazione DLL per la libreria vcruntime.|**/MD**|_MT, _DLL|
|vcruntimed.lib|vcruntime\<version>d.dll|Libreria di importazione DLL per la libreria vcruntime di debug. Non ridistribuibile.|**/MDd**|_DEBUG, _MT, _DLL|

> [!NOTE]
> Quando si è verificato il refactoring UCRT, le funzioni di runtime di concorrenza sono state spostate in concrt140.dll, aggiunta al pacchetto ridistribuibile di C++. Questa DLL è necessaria per i contenitori paralleli di C++ e gli algoritmi, ad esempio `concurrency::parallel_for`. In aggiunta la libreria standard di C++ richiede che questa DLL in Windows XP supporti le primitive di sincronizzazione, perché Windows XP non dispone di variabili di condizione.

Il codice che inizializza la libreria CRT è in una di svariate librerie, a seconda che la libreria CRT sia collegata in modo statico o dinamico, o in codice nativo, gestito o misto. Questo codice gestisce l'avvio della libreria CRT, l'inizializzazione e la chiusura dei dati per thread. È specifica per la versione usata dal compilatore. Questa libreria è sempre collegata in modo statico, anche quando si usa una libreria UCRT collegata in modo dinamico.

Questa tabella elenca le librerie che implementano l'inizializzazione e la chiusura della libreria CRT.

|Libreria|Caratteristiche|Opzione|Direttive per il preprocessore|
|-------------|---------------------|------------|-----------------------------|
|LIBCMT.lib|Collega in modo statico l'avvio della libreria UCRT nativa nel codice.|**/MT**|_MT|
|libcmtd.lib|Collega in modo statico la versione di Debug dell'avvio della libreria CRT nativa. Non ridistribuibile.|**/MTd**|_DEBUG, _MT|
|msvcrt.lib|Libreria statica per l'avvio della libreria CRT nativa per l'uso con DLL UCRT e vcruntime.|**/MD**|_MT, _DLL|
|msvcrtd.lib|Libreria statica per la versione di debug per l'avvio della libreria CRT nativa da usare con DLL UCRT e vcruntime. Non ridistribuibile.|**/MDd**|_DEBUG, _MT, _DLL|
|msvcmrt.lib|Libreria statica per l'avvio della libreria CRT nativa e gestita mista per l'uso con DLL UCRT e vcruntime.|**/clr**||
|msvcmrtd.lib|Libreria statica per la versione di debug dell'avvio della libreria CRT nativa e gestita mista per l'uso con DLL UCRT e vcruntime. Non ridistribuibile.|**/clr**||
|msvcurt.lib|**Deprecata** Libreria statica per la libreria CRT gestita pure.|**/clr:pure**||
|msvcurtd.lib|**Deprecata** Libreria statica per la versione di debug della libreria CRT gestita pure. Non ridistribuibile.|**/clr:pure**||

Se si collega il programma dalla riga di comando senza un'opzione del compilatore che specifichi una libreria di runtime C, il linker userà le librerie CRT collegate in modo statico: libcmt.lib, libvcruntime.lib e libucrt.lib.

L'uso di una libreria CRT collegata in modo statico implica che tutte le informazioni di stato salvate dalla libreria di runtime C saranno locali in questa istanza della libreria CRT. Ad esempio, se si usano [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) con una libreria CRT collegata staticamente, la posizione del parser `strtok` non è correlata allo stato `strtok` usato nel codice dello stesso processo (ma in un file DLL o EXE diverso) collegato a un'altra istanza della libreria CRT statica. Al contrario, la libreria CRT collegata in modo dinamico condivide lo stato per tutto il codice all'interno di un processo collegato in modo dinamico alla libreria CRT. Questa osservazione non si applica se si usano le nuove versioni più sicure di queste funzioni, ad esempio `strtok_s` non è interessato da questo problema.

Poiché una DLL compilata con un collegamento a una libreria CRT statica avrà un proprio stato CRT, non si consiglia di effettuare un collegamento statico alla libreria CRT in una DLL a meno che gli effetti di questa azione non siano quelli desiderati e non siano compresi appieno. Ad esempio, se si chiama [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) in un file eseguibile che carica la DLL collegata alla relativa libreria CRT statica, le eccezioni hardware generate dal codice nella DLL non saranno rilevate dal convertitore, mentre saranno rilevate le eccezioni hardware generate dal codice nel file eseguibile principale.

Se si usa l'opzione del compilatore **/clr** , il codice sarà collegato a una libreria statica, msvcmrt.lib. La libreria statica fornisce un proxy tra il codice gestito e la libreria CRT nativa. Non è possibile usare la libreria collegata staticamente CRT (opzioni **/MT** o **/MTd** ) con **/clr**. Usare invece le librerie collegate in modo dinamico (**/MD** o **/MDd**). Le librerie CRT gestite in modalità pure sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per altre informazioni sull'uso di CRT con **/clr**, vedere [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md).

Per compilare una versione di debug dell'applicazione, è necessario definire il flag [_DEBUG](../c-runtime-library/debug.md) e collegare l'applicazione a una versione di debug di una di queste librerie. Per altre informazioni sull'uso delle versioni di debug dei file della libreria, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

Questa versione della libreria CRT non è completamente conforme allo standard C99. In particolare, l'intestazione \<tgmath.h> e le macro pragma CX_LIMITED_RANGE/FP_CONTRACT non sono supportate. Alcuni elementi, ad esempio il significato degli identificatori di parametro nelle funzioni I/O standard usano interpretazioni legacy per impostazione predefinita. È possibile usare le opzioni di conformità del compilatore /Zc e specificare le opzioni del linker per controllare alcuni aspetti di conformità della libreria.

## <a name="c-standard-library"></a>Libreria standard C++

|Libreria standard C++|Caratteristiche|Opzione|Direttive per il preprocessore|
|----------------------------|---------------------|------------|-----------------------------|
|libcpmt.lib|Multithreading, collegamento statico|**/MT**|_MT|
|msvcprt.lib|Multithreading, collegamento dinamico (libreria di importazione per MSVCP*version*.dll)|**/MD**|_MT, _DLL|
|libcpmtd.lib|Multithreading, collegamento statico|**/MTd**|_DEBUG, _MT|
|msvcprtd.lib|Multithreading, collegamento dinamico (libreria di importazione per MSVCP*version*D.DLL)|**/MDd**|_DEBUG, _MT, _DLL|

Quando si compila una versione di rilascio del progetto, una delle librerie di runtime C di base (libcmt.lib, msvcmrt.lib, msvcrt.lib) viene collegata per impostazione predefinita, a seconda dell'opzione del compilatore scelta (multithreading, DLL, /clr). Se si include uno dei [file di intestazione della libreria standard di C++](../standard-library/cpp-standard-library-header-files.md) nel codice, Visual C++ collegherà automaticamente una libreria C++ standard in fase di compilazione. Ad esempio:

```cpp
#include <ios>
```

Per la compatibilità binaria, più file DLL possono essere specificati da una singola libreria di importazione. Gli aggiornamenti della versione possono introdurre file *dot.dll*, DLL separate che presentano nuove funzionalità della libreria. Ad esempio, con la versione 15.6 di Visual Studio 2017 è stata introdotta la libreria msvcp140_1.dll per supportare funzionalità aggiuntive della libreria standard senza interrompere l'ABI supportato da msvcp140.dll. La libreria di importazione msvcprt.lib inclusa nel set di strumenti per Visual Studio 2017 versione 15.6 supporta entrambe le DLL e il vcredist per questa versione installa entrambe le DLL. Dopo essere stata specificata, una libreria dot.dll ha un ABI fisso e non avrà mai una dipendenza su una libreria dot.dll successiva.

## <a name="what-problems-exist-if-an-application-uses-more-than-one-crt-version"></a>Quali problemi si verificano se un'applicazione usa più di una versione CRT?

Ogni immagine di eseguibile (EXE o DLL) può avere un CRT proprio collegato staticamente o è possibile impostare un collegamento dinamico a un CRT. La versione del CRT inclusa in modo statico o caricata in modo dinamico da una particolare immagine dipende dalla versione degli strumenti e delle librerie con cui è stato creato. Un singolo processo può caricare più immagini di EXE e DLL, ognuna con un CRT proprio. Ognuno di tali CRT potrebbe usare un allocatore diverso, avere layout di struttura interna diversi oppure usare disposizioni di archiviazione differenti. Ciò significa che la memoria allocata, le risorse CRT o le classi passate oltre i limiti di una DLL possono causare problemi a livello di gestione della memoria, utilizzo statico interno o interpretazione deli layout. Ad esempio, se una classe è allocata in una DLL ma viene passata ed eliminata da un'altra, quale deallocatore CRT viene usato? Gli errori causati possono essere di minore entità fino a immediatamente irreversibili e il trasferimento diretto di tali risorse è quindi fortemente sconsigliato.

È possibile evitare molti di questi problemi usando tecnologie ABI (Application Binary Interface) in alternativa, perché sono progettate per essere stabili e supportare le versioni. Progettare le interfacce di esportazione di DLL per passare le informazioni per valore o per operare su memoria passata dal chiamante anziché allocata in locale e restituita al chiamante. Usare le tecniche di marshalling per copiare dati strutturati tra le immagini eseguibili. Incapsulare le risorse in locale e consentire la modifica solo tramite handle o funzioni esposti ai client.

È anche possibile evitare alcuni di questi problemi se tutte le immagini nel processo usano la stessa versione caricata in modo dinamico del CRT. Per assicurarsi che tutti i componenti usino la stessa versione DLL del CRT, crearli con l'opzione **/MD** e usare lo stesso set di strumenti del compilatore e le stesse impostazioni delle proprietà.

È necessario prestare attenzione se il programma passa determinate risorse CRT (ad esempio, handle di file, impostazioni locali e variabili di ambiente) tra i limiti DLL, anche quando si usa la stessa versione del CRT. Per altre informazioni su questi problemi e su come risolverli, vedere [Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

## <a name="see-also"></a>Vedere anche

- [Riferimenti della libreria di runtime di C](../c-runtime-library/c-run-time-library-reference.md)
