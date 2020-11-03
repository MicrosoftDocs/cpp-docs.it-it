---
title: /std (specifica la versione standard del linguaggio)
description: L'opzione del compilatore MSVC/STD specifica lo standard del linguaggio C o C++ supportato dal compilatore.
ms.date: 10/29/2020
f1_keywords:
- /std
- -std
- /std:c++14
- /std:c++17
- /std:c11
- /std:c17
- VC.Project.VCCLCompilerTool.CppLanguageStandard
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
ms.openlocfilehash: 208789071ff028107d3c7311c3b5c6cf3eea7c1d
ms.sourcegitcommit: 4abc6c4c9694f91685cfd77940987e29a51e3143
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/03/2020
ms.locfileid: "93238473"
---
# <a name="std-specify-language-standard-version"></a>`/std` (Specifica la versione standard del linguaggio)

Abilitare le funzionalità del linguaggio C e C++ supportate dalla versione specificata dello standard del linguaggio C o C++.

## <a name="syntax"></a>Sintassi

> **`/std:c++14`**\
> **`/std:c++17`**\
> **`/std:c++latest`**\
> **`/std:c11`**\
> **`/std:c17`**

## <a name="remarks"></a>Osservazioni

L' **`/std`** opzione è disponibile in Visual Studio 2017 e versioni successive. Viene usato per controllare le funzionalità standard del linguaggio di programmazione ISO C o C++ specifiche della versione abilitate durante la compilazione del codice. Questa opzione consente di disabilitare il supporto per alcune nuove funzionalità della lingua e della libreria: quelle che potrebbero commettere il codice esistente che è conforme a una versione specifica dello standard del linguaggio.

### <a name="c-standards-support"></a>Supporto degli standard C++

Per impostazione predefinita, **`/std:c++14`** è specificato, che disabilita le funzionalità della lingua e della libreria standard disponibili nelle versioni successive dello standard del linguaggio C++. Usare  **`/std:c++17`** per abilitare le funzionalità e il comportamento specifici dello standard c++ 17. Per abilitare in modo esplicito le funzionalità del compilatore e della libreria standard attualmente implementate proposte per lo standard Draft successivo, usare **`/std:c++latest`** . Tutte le funzionalità di C++ 20 richiedono **`/std:c++latest`** . al termine dell'implementazione, **`/std:c++20`** verrà abilitata una nuova opzione.

L' **`/std:c++14`** opzione predefinita abilita il set di funzionalità c++ 14 implementate dal compilatore MSVC. Questa opzione Disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni più recenti dello standard del linguaggio. Non Disabilita alcune funzionalità di C++ 17 già implementate nelle versioni precedenti del compilatore MSVC. Per evitare modifiche di rilievo per gli utenti che hanno già eseguito dipendenze dalle funzionalità disponibili in o prima di Visual Studio 2015 Update 2, queste funzionalità restano abilitate quando **`/std:c++14`** si specifica l'opzione:

- [Regole per `auto` with braced-init-lists](https://wg21.link/n3922)

- [`typename` in Template Template-Parameters](https://wg21.link/n4051)

- [Rimozione di trigrammi](https://wg21.link/n4086)

- [Attributi per spazi dei nomi ed enumeratori](https://wg21.link/n4266)

- [Valori letterali dei caratteri u8](https://wg21.link/n4267)

Un elenco delle funzionalità C++ 14 e C++ 17 è abilitato quando si specifica **`/std:c++14`** è disponibile. Per ulteriori informazioni, vedere le note in [tabella di conformità del linguaggio Microsoft C++](../../overview/visual-cpp-language-conformance.md).

L' **`/std:c++17`** opzione Abilita il set completo di funzionalità c++ 17 implementate dal compilatore MSVC. Questa opzione Disabilita il supporto del compilatore e della libreria standard per le funzionalità nuove o modificate dopo C++ 17. Sono incluse le modifiche post-C + + 17 nelle versioni della bozza di lavoro e gli aggiornamenti dei difetti dello standard C++.

L' **`/std:c++latest`** opzione Abilita le funzionalità del linguaggio e della libreria Post-C + + 17 attualmente implementate nel compilatore e nelle librerie. Queste funzionalità possono includere modifiche della bozza di lavoro C++ 20, aggiornamenti dei difetti non inclusi in C++ 17 e proposte sperimentali per lo standard Draft. Per un elenco delle funzionalità supportate del linguaggio e delle librerie, vedere [Novità di Visual C++](../../overview/what-s-new-for-visual-cpp-in-visual-studio.md). L' **`/std:c++latest`** opzione non Abilita le funzionalità sorvegliate dal **`/experimental`** commutere, ma potrebbe essere necessario per abilitarle.

> [!IMPORTANT]
> Le funzionalità del compilatore e della libreria abilitate da **`/std:c++latest`** rappresentano le funzionalità che possono essere visualizzate in un futuro standard c++, nonché le funzionalità di c++ 20 approvate. Le funzionalità che non sono state approvate sono soggette a modifiche che causano interruzioni o alla rimozione senza preavviso e vengono fornite così come sono.

L' **`/std`** opzione attiva durante una compilazione C++ può essere rilevata mediante l'uso della macro del preprocessore [ \_ \_ lang MSVC](../../preprocessor/predefined-macros.md) . Per altre informazioni, vedere [Macro del preprocessore](../../preprocessor/predefined-macros.md).

Le **`/std:c++14`** **`/std:c++latest`** Opzioni e sono disponibili a partire da Visual Studio 2015 Update 3. L' **`/std:c++17`** opzione è disponibile a partire da Visual Studio 2017 versione 15,3. Come indicato in precedenza, alcuni comportamenti standard C++ 17 sono abilitati dall' **`/std:c++14`** opzione, ma tutte le altre funzionalità di c++ 17 sono abilitate da **`/std:c++17`** . Le funzionalità di c++ 20 sono abilitate da **`/std:c++latest`** fino al completamento dell'implementazione.

> [!NOTE]
> A seconda della versione del compilatore MSVC o del livello di aggiornamento, le funzionalità di C++ 17 potrebbero non essere completamente implementate o completamente conformi quando si specificano le **`/std:c++17`** Opzioni. Per una panoramica della conformità del linguaggio C++ in Visual C++ per versione di rilascio, vedere [tabella di conformità del linguaggio Microsoft c++](../../overview/visual-cpp-language-conformance.md).

### <a name="c-standards-support"></a>Supporto degli standard C

Per impostazione predefinita, quando il codice viene compilato come C, il compilatore MSVC non è conforme a uno standard C specifico. Implementa ANSI C89 con diverse estensioni Microsoft, alcune delle quali fanno parte di ISO C99. Alcune estensioni Microsoft possono essere disabilitate usando l' [`/Za`](za-ze-disable-language-extensions.md) opzione del compilatore, mentre altre rimangono attive. Non è possibile specificare una rigorosa conformità C89.

A partire da Visual Studio 2019 versione 16,8, è possibile specificare **`/std:c11`** o **`/std:c17`** per il codice compilato come C. Queste opzioni specificano le modalità di conformità che corrispondono a ISO C11 e ISO C17. Poiché il nuovo preprocessore è necessario per supportare questi standard, le **`/std:c11`** **`/std:c17`** Opzioni del compilatore e impostano [`/Zc:preprocessor`](zc-preprocessor.md) automaticamente l'opzione. Se si vuole usare il preprocessore tradizionale (legacy) per C11 o C17, è necessario impostare l' **`/Zc:preprocessor-`** opzione del compilatore in modo esplicito. L'impostazione dell' **`/Zc:preprocessor-`** opzione può causare un comportamento imprevisto e non è consigliata.

> [!NOTE]
> Al momento del rilascio, le librerie Windows SDK e UCRT più recenti non supportano ancora il codice C11 e C17. È necessaria una versione non definitiva del Windows SDK e di UCRT. Per ulteriori informazioni e istruzioni di installazione, vedere [Install C11 and C17 support in Visual Studio](../../overview/install-c17-support.md).

Quando si specifica **`/std:c11`** o **`/std:c17`** , MSVC supporta tutte le funzionalità richieste di C11 e C17. Le opzioni del compilatore abilitano il supporto per queste funzionalità:

- [`_Pragma`](../../preprocessor/pragma-directives-and-the-pragma-keyword.md#the-_pragma-preprocessing-operator-c99-c11)

- **`restrict`**

- **`_Noreturn`** e \<stdnoreturn.h>

- **`_Alignas`** , **`_Alignof`** e \<stdalign.h>

- **`_Generic`** e \<tgmath.h>

- **`_Static_assert`**

L'IDE usa le impostazioni C per IntelliSense e l'evidenziazione del codice quando i file di origine hanno un' *`.c`* estensione di file o quando si specifica l' [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) opzione del compilatore. Attualmente, l'evidenziazione di IntelliSense è disponibile solo per le parole chiave e non per le macro introdotte dalle intestazioni standard.

Poiché C17 è in gran parte una versione di correzione di bug ISO C11, il supporto di MSVC per C11 include già tutti i report sui difetti rilevanti. Al momento non esistono differenze tra le versioni C11 e C17, ad eccezione della `__STDC_VERSION__` macro. Si espande in `201112L` per C11 e `201710L` per C17.

Il compilatore non supporta le funzionalità facoltative di ISO C11. Diverse funzionalità facoltative di C11 sono le funzionalità necessarie di C99 che MSVC non ha implementato per motivi di architettura. È possibile usare le macro di test delle funzionalità, ad esempio, `__STDC_NO_VLA__` per rilevare i livelli di supporto del compilatore per le singole funzionalità. Per altre informazioni sulle macro predefinite specifiche di C, vedere [macro predefinite](../../preprocessor/predefined-macros.md).

- Il supporto per il multithreading, il numero atomico o il numero complesso non è conforme nella versione 16,8 di Visual Studio 2019.

- `aligned_alloc` supporto mancante a causa dell'implementazione dell'heap di Windows. L'alternativa consiste nell'usare [`_aligned_malloc`](../../c-runtime-library/reference/aligned-malloc.md) .

- Il supporto per il 400 ripristino di emergenza non è attualmente implementato per `realloc` , perché questa modifica interrompe l'ABI.

- Il supporto per array a lunghezza variabile (VLA) non è pianificato. Le matrici a lunghezza variabile sono spesso meno efficienti rispetto alle matrici a dimensione fissa confrontabili. Sono anche inefficienti rispetto alle allocazioni di memoria heap equivalenti, quando vengono implementate in modo sicuro e sicuro. VLAs fornisce vettori di attacco paragonabili a `gets()` , che è deprecato e pianificato per la rimozione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **Proprietà di configurazione** , **C/C++** , **Linguaggio**.

1. Nello standard del linguaggio **C++** (o per c, **standard del linguaggio c** ) scegliere lo standard del linguaggio da supportare dal controllo a discesa, quindi scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
