---
title: -std (specifica versione Standard del linguaggio) | Microsoft Docs
ms.custom: ''
ms.date: 11/16/2017
ms.topic: reference
f1_keywords:
- /std
- -std
- VC.Project.VCCLCompilerTool.CppLanguageStandard
dev_langs:
- C++
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 80c501c74d0e36d7a1c564e107101782468708c3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709072"
---
# <a name="std-specify-language-standard-version"></a>/std (specifica versione Standard del linguaggio)

Abilita supportate funzionalità del linguaggio C++ della versione specificata del linguaggio C++ standard.

## <a name="syntax"></a>Sintassi

> / std:<c++14|c++17|c++Latest>: [c++14 | c++17 | versione più recente di c + +]

## <a name="remarks"></a>Note

Il **/std** opzione è disponibile in Visual Studio 2017 e versioni successive. Viene utilizzato per controllare la funzionalità standard del linguaggio abilitate durante la compilazione del codice di programmazione specifici della versione ISO C++. Questa opzione consente di disabilitare il supporto per alcune nuove funzionalità di linguaggio e libreria che può comportare l'interruzione del codice esistente che è conforme a una particolare versione del linguaggio standard. Per impostazione predefinita **/std: c + + 14** viene specificato, che disabilita la funzionalità del linguaggio e libreria standard disponibili nelle versioni successive del linguaggio C++ standard. Uso **/std: c + + 17** abilitare standard specifiche funzionalità di c++17 e comportamento. Per abilitare in modo esplicito il più recente del compilatore supportato e funzionalità della libreria standard, usare **/std: c + + più recente**.

Il valore predefinito **/std: c + + 14** opzione Abilita il set di funzionalità di c++14 implementate dal compilatore Visual C++. Questa opzione Disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni più recenti del linguaggio standard, fatta eccezione per alcune funzionalità di c++17 già implementati nelle versioni precedenti del compilatore Visual C++. Per evitare modifiche di rilievo per gli utenti che hanno già acquisito dipendenze sulle funzionalità disponibili a partire da Visual Studio 2015 Update 2, queste funzionalità rimangono abilitati quando la **/std: c + + 14** è specificata l'opzione:

- [Regole per l'automazione con braced-init-List](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)

- [TypeName in parametri di modello](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)

- [Rimozione di trigrammi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)

- [Attributi per spazi dei nomi ed enumeratori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

- [valori letterali carattere U8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)

Per altre informazioni su quali C + + 14 e C + + 17 funzionalità vengono abilitate quando **/std: c + + 14** è specificato, vedere le note nella [conformità al linguaggio Visual C++](../../visual-cpp-language-conformance.md).

Il **/std: c + + 17** opzione Abilita il set completo di c++17 funzionalità implementate dal compilatore Visual C++. Questa opzione disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni del documento di lavoro, nonché degli aggiornamenti per i difetti dello standard C++ dopo C++17.

Il **/std: c + + più recente** opzione Abilita il set di funzionalità di linguaggio e libreria di C++ implementata da Visual C++ per tenere traccia più C + + 20 Working Draft e difetti aggiornamenti recenti dello Standard C++ che non sono inclusi in c++17. Usare questa opzione per ottenere il post-funzionalità C + + 17 lingue supportate dal compilatore e della libreria standard. Per un elenco di funzionalità della libreria e dei linguaggi supportati, vedere [What ' s New for Visual C++](../../what-s-new-for-visual-cpp-in-visual-studio.md). Il **/std: c + + più recente** non abilita la funzionalità protetta dall'opzione di **/ sperimentale** passare.

Il **/std** opzione attiva durante una compilazione C++ può essere rilevato mediante l'utilizzo delle [ \_MSVC\_LANG](../../preprocessor/predefined-macros.md) macro del preprocessore. Per altre informazioni, vedere [macro del preprocessore](../../preprocessor/predefined-macros.md).

Il **/std: c + + 14** e **/std: c + + più recente** opzioni sono disponibili a partire da Visual C++ 2015 Update 3. Il **/std: c + + 17** opzione è disponibile a partire da Visual C++ 2017 versione 15.3. Come indicato in precedenza, alcuni standard c++17 comportamento è abilitato per il **/std: c + + 14** opzione, ma tutte le altre funzionalità di c++17 sono abilitate per **/std: c + + 17**.

> [!NOTE]
> A seconda di Visual C++ livello del compilatore oppure all'aggiornamento, determinate C + + 14 o C + + 17 funzionalità potrebbero non essere implementate completamente o completamente conforme allo standard quando si specifica la **/std: c + + 14** o **/std: c + + 17** opzioni. Ad esempio, il compilatore Visual C++ 2017 RTM non supporta completamente C + + 14 conformi `constexpr`, espressione SFINAE o ricerca del nome 2 fasi. Per una panoramica della conformità al linguaggio C++ in Visual C++ da versione finale, vedere [conformità al linguaggio Visual C++](../../visual-cpp-language-conformance.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare **le proprietà di configurazione**, **C/C++**, **Language**.

1. Nelle **Standard del linguaggio C++**, scegliere lo standard del linguaggio per supportare dal controllo elenco a discesa, quindi scegliere **OK** oppure **Apply** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
