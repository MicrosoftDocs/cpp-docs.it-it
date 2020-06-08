---
title: /std (specifica la versione standard del linguaggio)
ms.date: 06/04/2020
f1_keywords:
- /std
- -std
- VC.Project.VCCLCompilerTool.CppLanguageStandard
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
ms.openlocfilehash: ddb0fc9ad4880ed317a28d7aec5eba1669eabbc5
ms.sourcegitcommit: fe146adb3a02872538637196bb3c45aeeeaaf5c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/08/2020
ms.locfileid: "84507066"
---
# <a name="std-specify-language-standard-version"></a>/std (specifica la versione standard del linguaggio)

Abilita le funzionalità supportate del linguaggio C++ dalla versione specificata dello standard del linguaggio C++.

## <a name="syntax"></a>Sintassi

> **`/std:c++14`**\
> **`/std:c++17`**\
> **`/std:c++latest`**]

## <a name="remarks"></a>Osservazioni

L' **`/std`** opzione è disponibile in Visual Studio 2017 e versioni successive. Viene usato per controllare le funzionalità standard del linguaggio di programmazione ISO C++ specifiche della versione abilitate durante la compilazione del codice. Questa opzione consente di disabilitare il supporto per alcune nuove funzionalità della lingua e della libreria: quelle che potrebbero commettere il codice esistente che è conforme a una versione specifica dello standard del linguaggio. Per impostazione predefinita, **`/std:c++14`** è specificato, che disabilita le funzionalità della lingua e della libreria standard disponibili nelle versioni successive dello standard del linguaggio C++. Usare **`/std:c++17`** per abilitare le funzionalità e il comportamento specifici dello standard c++ 17. Per abilitare in modo esplicito le funzionalità del compilatore e della libreria standard attualmente implementate proposte per lo standard Draft successivo, usare **`/std:c++latest`** . Tutte le funzionalità di C++ 20 richiedono **`/std:c++latest`** . al termine dell'implementazione, **`/std:c++20`** verrà abilitata una nuova opzione.

L' **`/std:c++14`** opzione predefinita abilita il set di funzionalità c++ 14 implementate dal compilatore MSVC. Questa opzione Disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni più recenti dello standard del linguaggio. Non Disabilita alcune funzionalità di C++ 17 già implementate nelle versioni precedenti del compilatore MSVC. Per evitare modifiche di rilievo per gli utenti che hanno già eseguito dipendenze dalle funzionalità disponibili in o prima di Visual Studio 2015 Update 2, queste funzionalità restano abilitate quando **`/std:c++14`** si specifica l'opzione:

- [Regole per la deduzione automatica con braced-init-list](https://wg21.link/n3922)

- [typename nei parametri di modello template](https://wg21.link/n4051)

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

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **Proprietà di configurazione**, **C/C++**, **Linguaggio**.

1. In **Standard del linguaggio C++** scegliere lo standard del linguaggio da supportare dal controllo a discesa, quindi scegliere **OK** o **Applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
