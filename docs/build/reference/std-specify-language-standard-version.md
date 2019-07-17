---
title: /std (specifica la versione standard del linguaggio)
ms.date: 05/16/2019
f1_keywords:
- /std
- -std
- VC.Project.VCCLCompilerTool.CppLanguageStandard
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
ms.openlocfilehash: 9bdeb92e03b3ae00258ac48a29cec42ef7e18e81
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68241218"
---
# <a name="std-specify-language-standard-version"></a>/std (specifica la versione standard del linguaggio)

Abilita le funzionalità supportate del linguaggio C++ dalla versione specificata dello standard del linguaggio C++.

## <a name="syntax"></a>Sintassi

> /std:\[c++14\|c++17\|c++latest]

## <a name="remarks"></a>Note

L'opzione **/std** è disponibile in Visual Studio 2017 e versioni successive. Viene usata per controllare le funzionalità standard del linguaggio di programmazione ISO C++ specifiche della versione abilitate durante la compilazione del codice. Questa opzione consente di disabilitare il supporto per determinate nuove funzionalità del linguaggio e delle librerie che potrebbero interrompere il codice esistente conforme a una specifica versione dello standard del linguaggio. Per impostazione predefinita, **/std:c++14** è specificata e disabilita le funzionalità della libreria standard e del linguaggio disponibili nelle versioni successive dello standard del linguaggio C++. Usare **/std:c++17** per abilitare le funzionalità e i comportamenti specifici dello standard C++17. Per abilitare esplicitamente le funzionalità del compilatore e della libreria standard attualmente implementate proposte per la bozza di standard successiva, usare **/std:c++latest**. Tutti C + + 20 funzionalità richiedono **/std: c + + più recente**; una volta completata, l'implementazione di un nuovo **/std: c + + 20** verrà abilitata l'opzione.

L'opzione **/std:c++14** predefinita abilita il set di funzionalità di C++14 implementate dal compilatore MSVC. Questa opzione disabilita il supporto del compilatore e della libreria standard per le funzionalità cambiate o aggiunte nelle versioni più recenti dello standard del linguaggio, ad eccezione di alcune funzionalità di C++17 già implementate nelle versioni precedenti del compilatore MSVC. Per evitare modifiche che causano interruzioni per gli utenti che hanno già acquisito dipendenze dalle funzionalità disponibili a partire da Visual Studio 2015 aggiornamento 2, queste funzionalità rimangono abilitate quando si specifica l'opzione **/std:c++14**:

- [Regole per la deduzione automatica con braced-init-list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)

- [typename nei parametri di modello template](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)

- [Rimozione di trigrammi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)

- [Attributi per spazi dei nomi ed enumeratori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

- [Valori letterali dei caratteri u8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)

Per altre informazioni sulle funzionalità di C++14 e C++17 abilitate quando si specifica **/std:c++14**, vedere le note in [Conformità al linguaggio Visual C++](../../overview/visual-cpp-language-conformance.md).

L'opzione **/std:c++17** abilita il set completo di funzionalità di C++17 implementate dal compilatore MSVC. Questa opzione disabilita il supporto del compilatore e della libreria standard per le funzionalità modificate o nuove nelle versioni del documento di lavoro, nonché degli aggiornamenti per i difetti dello standard C++ dopo C++17.

L'opzione **/std:c++latest** abilita le funzionalità del linguaggio successivo a C++17 e della libreria attualmente implementate nel compilatore e nelle librerie. Possono includere le funzionalità della bozza di lavoro di C++20 e gli aggiornamenti per gli errori dello standard C++ non inclusi in C++17, oltre a proposte sperimentali per la bozza di standard. Per un elenco delle funzionalità supportate del linguaggio e delle librerie, vedere [Novità di Visual C++](../../overview/what-s-new-for-visual-cpp-in-visual-studio.md). L'opzione **/std:c++latest** non abilita le funzionalità controllate dall'opzione **/experimental**, ma potrebbe essere necessaria per abilitarle.

> [!IMPORTANT]
> Le funzionalità del compilatore e delle librerie abilitate da **/std:c++latest** rappresentano funzionalità che potrebbero essere disponibili in un futuro standard C++, oltre alle funzionalità di C++20 approvate. Le funzionalità che non sono state approvate sono soggette a modifiche che causano interruzioni o alla rimozione senza preavviso e vengono fornite così come sono. 

L'opzione **/std** effettiva durante una compilazione in C++ può essere rilevata tramite la macro del preprocessore [\_MSVC\_LANG](../../preprocessor/predefined-macros.md). Per altre informazioni, vedere [Macro del preprocessore](../../preprocessor/predefined-macros.md).

Le opzioni **/std:c++14** e **/std:c++latest** sono disponibili a partire da Visual Studio 2015 aggiornamento 3. L'opzione **/std:c++17** è disponibile a partire da Visual Studio 2017 versione 15.3. Come accennato sopra, alcuni comportamenti standard di C++17 sono abilitati dall'opzione **/std:c++14**, ma tutte le altre funzionalità di C++17 sono abilitate da **/std:c++17**. Le funzionalità di C++20 sono abilitate da **/std:latest** fino al completamento dell'implementazione.

> [!NOTE]
> In base alle versione o a livello di aggiornamento del compilatore MSVC, le funzionalità di C++17 potrebbero non essere completamente implementate o pienamente conformi quando si specificano le opzioni **/std:c++17**. Per una panoramica della conformità del linguaggio C++ in Visual C++ in base alla versione, vedere [Conformità del linguaggio Visual C++](../../overview/visual-cpp-language-conformance.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare **Proprietà di configurazione**, **C/C++** , **Linguaggio**.

1. In **Standard del linguaggio C++** scegliere lo standard del linguaggio da supportare dal controllo a discesa, quindi scegliere **OK** o **Applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
