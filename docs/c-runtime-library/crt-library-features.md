---
title: Runtime C (CRT) e file con estensione LIB della libreria standard C++
description: Elenco dei file di Microsoft C Runtime e della libreria standard C++ che è possibile collegare con le relative opzioni del compilatore e direttive per il preprocessore associate.
ms.date: 3/5/2021
ms.topic: reference
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
ms.openlocfilehash: 395158a3db37e431f0972bb35f1e5161c9f4bc81
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102465554"
---
# <a name="c-runtime-crt-and-c-standard-library-lib-files"></a>Runtime C (CRT) e file di libreria standard C++ `.lib`

Questo argomento elenca i `.lib` file di libreria di runtime di Microsoft C a cui è possibile eseguire il collegamento quando si sviluppa l'applicazione e le relative opzioni del compilatore e direttive per il preprocessore associate.

Per informazioni sulla distribuzione dei file di runtime C necessari per supportare l'applicazione, vedere [ridistribuzione dei file di Visual C++](../windows/redistributing-visual-cpp-files.md) .

Per informazioni di riferimento sulle API per la libreria di runtime C, vedere [riferimenti alla libreria di runtime c](../c-runtime-library/c-run-time-library-reference.md) .

## <a name="c-runtime-lib-files"></a>File di runtime C `.lib`

La libreria di runtime C (CRT) fa parte della libreria standard C++ che incorpora la libreria standard ISO C. Le librerie Visual C++ che implementano la libreria CRT supportano lo sviluppo del codice nativo e il codice nativo e gestito misto. Tutte le versioni della libreria CRT supportano lo sviluppo multithread. La maggior parte delle librerie supporta il collegamento statico, per collegare la libreria direttamente al codice, oppure il collegamento dinamico, in modo che il codice usi file DLL comuni.

A partire da Visual Studio 2015 la libreria CRT è stata sottoposta a refactoring in nuovi file binari. La libreria CRT universale (UCRT) contiene le funzioni e le variabili globali esportate dalla libreria CRT C99 standard. La libreria UCRT è ora un componente di Windows ed è inclusa in Windows 10. La libreria statica, la libreria di importazione DLL e i file di intestazione per la libreria UCRT si trovano ora in Windows 10 SDK. Quando si installa Visual C++, Visual Studio installato il subset di Windows 10 SDK richiesto per usare la libreria UCRT. È possibile usare la libreria UCRT in qualsiasi versione di Windows supportata da Visual Studio 2015 e versioni successive. È possibile ridistribuirla usando vcredist per le versioni supportate di Windows diverse da Windows 10. Per altre informazioni, vedere [Ridistribuzione di file Visual C++](../windows/redistributing-visual-cpp-files.md).

La tabella seguente elenca le librerie che implementano le librerie UCRT.

| Libreria | DLL associata | Caratteristiche | Opzione | Direttive per il preprocessore |
|--|--|--|--|--|
| *`libucrt.lib`* | nessuno | Collega in modo statico la libreria UCRT al codice. | **`/MT`** | `_MT` |
| *`libucrtd.lib`* | nessuno | Versione di debug della libreria UCRT per il collegamento statico. Non ridistribuibile. | **`/MTd`** | `_DEBUG`, `_MT` |
| *`ucrt.lib`* | *`ucrtbase.dll`* | Libreria di importazione DLL per la libreria UCRT. | **`/MD`** | `_MT`, `_DLL` |
| *`ucrtd.lib`* | *`ucrtbased.dll`* | Libreria di importazione DLL per la versione di debug della libreria UCRT. Non ridistribuibile. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

La libreria vcruntime contiene codice specifico dell'implementazione della libreria CRT di Visual C++, come il supporto di gestione e debug delle eccezioni, i controlli runtime e le informazioni sui tipi, i dettagli di implementazione e alcune funzioni estese della libreria. La versione della libreria vcruntime deve corrispondere alla versione del compilatore che si sta usando.

Questa tabella elenca le librerie che implementano la libreria vcruntime.

| Libreria | DLL associata | Caratteristiche | Opzione | Direttive per il preprocessore |
|--|--|--|--|--|
| *`libvcruntime.lib`* | nessuno | Collegata in modo statico al codice. | **`/MT`** | `_MT` |
| *`libvcruntimed.lib`* | nessuno | Versione di debug per il collegamento statico. Non ridistribuibile. | **`/MTd`** | `_MT`, `_DEBUG` |
| *`vcruntime.lib`* | *`vcruntime<version>.dll`* | Libreria di importazione DLL per la libreria vcruntime. | **`/MD`** | `_MT`, `_DLL` |
| *`vcruntimed.lib`* | *`vcruntime<version>d.dll`* | Libreria di importazione DLL per la libreria vcruntime di debug. Non ridistribuibile. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

> [!NOTE]
> Quando il UCRT è stato sottoposto a refactoring, le funzioni runtime di concorrenza sono state spostate in *`concrt140.dll`* , che è stato aggiunto al pacchetto ridistribuibile di C++. Questa DLL è necessaria per i contenitori paralleli di C++ e gli algoritmi, ad esempio `concurrency::parallel_for`. Inoltre, la libreria standard C++ richiede questa DLL in Windows XP per supportare le primitive di sincronizzazione, perché Windows XP non ha variabili di condizione.

Il codice che inizializza la libreria CRT è in una di svariate librerie, a seconda che la libreria CRT sia collegata in modo statico o dinamico, o in codice nativo, gestito o misto. Questo codice gestisce l'avvio della libreria CRT, l'inizializzazione e la chiusura dei dati per thread. È specifico della versione del compilatore usata. Questa libreria è sempre collegata in modo statico, anche quando si usa una libreria UCRT collegata in modo dinamico.

Questa tabella elenca le librerie che implementano l'inizializzazione e la chiusura della libreria CRT.

| Libreria | Caratteristiche | Opzione | Direttive per il preprocessore |
|--|--|--|--|
| *`libcmt.lib`* | Collega in modo statico l'avvio della libreria UCRT nativa nel codice. | **`/MT`** | `_MT` |
| *`libcmtd.lib`* | Collega in modo statico la versione di Debug dell'avvio della libreria CRT nativa. Non ridistribuibile. | **`/MTd`** | `_DEBUG`, `_MT` |
| *`msvcrt.lib`* | Libreria statica per l'avvio della libreria CRT nativa per l'uso con DLL UCRT e vcruntime. | **`/MD`** | `_MT`, `_DLL` |
| *`msvcrtd.lib`* | Libreria statica per la versione di debug per l'avvio della libreria CRT nativa da usare con DLL UCRT e vcruntime. Non ridistribuibile. | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |
| *`msvcmrt.lib`* | Libreria statica per l'avvio della libreria CRT nativa e gestita mista per l'uso con DLL UCRT e vcruntime. | **`/clr`** |  |
| *`msvcmrtd.lib`* | Libreria statica per la versione di debug dell'avvio della libreria CRT nativa e gestita mista per l'uso con DLL UCRT e vcruntime. Non ridistribuibile. | **`/clr`** |  |
| *`msvcurt.lib`* | **Deprecata** Libreria statica per la libreria CRT gestita pure. | **`/clr:pure`** |  |
| *`msvcurtd.lib`* | **Deprecata** Libreria statica per la versione di debug della libreria CRT gestita pure. Non ridistribuibile. | **`/clr:pure`** |  |

Se si collega il programma dalla riga di comando senza un'opzione del compilatore che specifichi una libreria di runtime C, il linker userà le librerie CRT collegate in modo statico: *`libcmt.lib`* , *`libvcruntime.lib`* e *`libucrt.lib`* .

L'uso di una libreria CRT collegata in modo statico implica che tutte le informazioni di stato salvate dalla libreria di runtime C saranno locali in questa istanza della libreria CRT. Se ad esempio si usa [`strtok`](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) una libreria CRT collegata staticamente, la posizione del `strtok` parser non è correlata allo `strtok` stato usato nel codice nello stesso processo (ma in un file dll o exe diverso) collegato a un'altra istanza della libreria CRT statica. Al contrario, la libreria CRT collegata in modo dinamico condivide lo stato per tutto il codice all'interno di un processo collegato in modo dinamico alla libreria CRT. Questo problema non si applica se si usano le nuove versioni più sicure di queste funzioni; ad esempio, `strtok_s` non presenta questo problema.

Poiché una DLL compilata mediante il collegamento a una libreria CRT statica dispone di un proprio stato CRT, non è consigliabile collegarsi in modo statico a CRT in una DLL, a meno che le conseguenze di questa operazione non siano effettivamente desiderate e comprese. Ad esempio, se si chiama [`_set_se_translator`](../c-runtime-library/reference/set-se-translator.md) in un file eseguibile che carica la DLL collegata alla propria libreria CRT statica, eventuali eccezioni hardware generate dal codice nella dll non verranno rilevate dal convertitore, ma verranno intercettate le eccezioni hardware generate dal codice nel file eseguibile principale.

Se si usa l' **`/clr`** opzione del compilatore, il codice sarà collegato a una libreria statica, msvcmrt. lib. La libreria statica fornisce un proxy tra il codice gestito e la libreria CRT nativa. Non è possibile usare la libreria CRT ( **`/MT`** o **`/MTd`** Opzioni) collegata in modo statico con **`/clr`** . Usare invece le librerie collegate in modo dinamico ( **`/MD`** o **`/MDd`** ). Le librerie CRT gestite in modalità pure sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per altre informazioni sull'uso di CRT con **`/clr`** , vedere [assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md).

Per compilare una versione di debug dell'applicazione, il [`_DEBUG`](../c-runtime-library/debug.md) flag deve essere definito e l'applicazione deve essere collegata a una versione di debug di una di queste librerie. Per altre informazioni sull'uso delle versioni di debug dei file della libreria, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

Questa versione di CRT non è completamente conforme allo standard C99. Nelle versioni precedenti a Visual Studio 2019 versione 16,8, l' \<tgmath.h> intestazione non è supportata. In tutte le versioni, `CX_LIMITED_RANGE` le `FP_CONTRACT` macro pragma e non sono supportate. Alcuni elementi, ad esempio il significato degli identificatori di parametro nelle funzioni I/O standard usano interpretazioni legacy per impostazione predefinita. È possibile usare **`/Zc`** le opzioni di conformità del compilatore e specificare le opzioni del linker per controllare alcuni aspetti della conformità della libreria.

## <a name="c-standard-library-lib-files"></a>File di libreria standard C++ `.lib`

| Libreria standard C++ | Caratteristiche | Opzione | Direttive per il preprocessore |
|--|--|--|--|
| *`libcpmt.lib`* | Multithreading, collegamento statico | **`/MT`** | `_MT` |
| *`msvcprt.lib`* | Multithreading, collegamento dinamico (libreria di importazione per *`msvcp<version>.dll`* ) | **`/MD`** | `_MT`, `_DLL` |
| *`libcpmtd.lib`* | Multithreading, collegamento statico | **`/MTd`** | `_DEBUG`, `_MT` |
| *`msvcprtd.lib`* | Multithreading, collegamento dinamico (libreria di importazione per *`msvcp<version>d.dll`* ) | **`/MDd`** | `_DEBUG`, `_MT`, `_DLL` |

Quando si compila una versione di rilascio del progetto, una delle librerie di runtime C di base ( *`libcmt.lib`* , *`msvcmrt.lib`* , *`msvcrt.lib`* ) viene collegata per impostazione predefinita, a seconda dell'opzione del compilatore scelta (multithreading, dll, **`/clr`** ). Se si include uno dei [file di intestazione della libreria standard c++](../standard-library/cpp-standard-library-header-files.md) nel codice, una libreria standard c++ verrà collegata automaticamente da Visual C++ in fase di compilazione. Ad esempio:

```cpp
#include <ios>
```

Per la compatibilità binaria, più file DLL possono essere specificati da una singola libreria di importazione. Gli aggiornamenti della versione possono introdurre file *dot.dll*, DLL separate che presentano nuove funzionalità della libreria. Ad esempio, Visual Studio 2017 versione 15,6 è stato introdotto *`msvcp140_1.dll`* per supportare funzionalità aggiuntive della libreria standard senza compromettere l'ABI (Application Binary Interface) supportata da *`msvcp140.dll`* . La *`msvcprt.lib`* libreria di importazione inclusa nel set di strumenti per Visual Studio 2017 versione 15,6 supporta entrambe le dll e vcredist per questa versione installa entrambe le dll. Dopo essere stata specificata, una libreria dot.dll ha un ABI fisso e non avrà mai una dipendenza su una libreria dot.dll successiva.

## <a name="what-problems-exist-if-an-application-uses-more-than-one-crt-version"></a>Quali problemi si verificano se un'applicazione usa più di una versione CRT?

Ogni immagine di eseguibile (EXE o DLL) può avere un CRT proprio collegato staticamente o è possibile impostare un collegamento dinamico a un CRT. La versione del CRT inclusa in modo statico o caricata in modo dinamico da una particolare immagine dipende dalla versione degli strumenti e delle librerie con cui è stato creato. Un singolo processo può caricare più immagini di EXE e DLL, ognuna con un CRT proprio. Ognuno di tali CRT potrebbe usare un allocatore diverso, avere layout di struttura interna diversi oppure usare disposizioni di archiviazione differenti. Ciò significa che la memoria allocata, le risorse CRT o le classi passate attraverso un limite DLL possono causare problemi di gestione della memoria, utilizzo statico interno o interpretazione del layout. Ad esempio, se una classe è allocata in una DLL ma viene passata ed eliminata da un'altra, quale deallocatore CRT viene usato? Gli errori causati possono essere di minore entità fino a immediatamente irreversibili e il trasferimento diretto di tali risorse è quindi fortemente sconsigliato.

È possibile evitare molti di questi problemi usando tecnologie ABI (Application Binary Interface) in alternativa, perché sono progettate per essere stabili e supportare le versioni. Progettare le interfacce di esportazione di DLL per passare le informazioni per valore o per operare su memoria passata dal chiamante anziché allocata in locale e restituita al chiamante. Usare le tecniche di marshalling per copiare i dati strutturati tra le immagini eseguibili. Incapsulare le risorse in locale e consentire la modifica solo tramite handle o funzioni esposti ai client.

È anche possibile evitare alcuni di questi problemi se tutte le immagini nel processo usano la stessa versione caricata in modo dinamico del CRT. Per assicurarsi che tutti i componenti usino la stessa versione DLL di CRT, compilarli usando l' **`/MD`** opzione e usare lo stesso set di strumenti e le stesse impostazioni delle proprietà del compilatore.

Prestare attenzione se il programma passa determinate risorse CRT attraverso i limiti DLL. Risorse quali handle di file, impostazioni locali e variabili di ambiente possono causare problemi anche quando si usa la stessa versione di CRT. Per altre informazioni su questi problemi e su come risolverli, vedere [Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

## <a name="see-also"></a>Vedi anche

- [Informazioni di riferimento sulla libreria di runtime di C](../c-runtime-library/c-run-time-library-reference.md)
- [Ridistribuzione di file Visual C++](../windows/redistributing-visual-cpp-files.md)