---
title: std-(specifica la versione Standard di linguaggio) | Documenti Microsoft
ms.custom: 
ms.date: 11/16/2017
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /std
- -std
- VC.Project.VCCLCompilerTool.CppLanguageStandard
dev_langs: C++
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cb248f4c7ce1d9520bc328ed59b75ff081659996
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="std-specify-language-standard-version"></a>/std (specifica lingua della versione Standard)

Abilita supportate funzionalità del linguaggio C++ della versione specificata del linguaggio C++ standard.

## <a name="syntax"></a>Sintassi

> /std: [c++ 14 | c++ 17 | c++ più recenti]

## <a name="remarks"></a>Note

Il **/std** opzione viene utilizzata per controllare le funzionalità standard di linguaggio abilitate durante la compilazione del codice di programmazione specifici della versione ISO C++. Questa opzione consente di disabilitare il supporto per alcune nuove funzionalità di linguaggio e di libreria che possono interrompere il codice esistente che è conforme a una versione specifica del linguaggio standard. Per impostazione predefinita, **/std:c + + 14** viene specificato, che disabilita la funzionalità del linguaggio e libreria standard trovata nelle versioni successive del linguaggio C++ standard. Utilizzare **/std:c + + 17** per abilitare la funzionalità C++ 17 standard specifici e comportamento. Per abilitare in modo esplicito la versione più recente del compilatore supportato e funzionalità della libreria standard, usare **/std:c + + più recente**.

Il valore predefinito **/std:c + + 14** opzione Abilita il set di C + + 14 funzionalità implementate dal compilatore Visual C++. Questa opzione Disabilita il supporto del compilatore e librerie standard nuove funzionalità che sono stati modificati o nelle versioni più recenti del linguaggio standard, ad eccezione di alcune funzionalità C++ 17 già implementato in versioni precedenti del compilatore Visual C++. Per evitare di interrompere le modifiche per gli utenti che hanno già acquisito dipendenze sulle funzionalità disponibili a partire da Visual Studio 2015 Update 2, queste funzionalità rimangano abilitata quando il **/std:c + + 14** è specificata l'opzione:

- [Regole per l'automazione con braced-init-List](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)

- [TypeName in parametri di modello](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)

- [Rimozione di trigrammi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)

- [Attributi per spazi dei nomi ed enumeratori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

- [valori letterali carattere U8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)

Per ulteriori informazioni su quali C + + 14 e C++ 17 funzionalità sono abilitate quando **/std:c + + 14** è specificato, vedere le note di [conformità al linguaggio Visual C++](../../visual-cpp-language-conformance.md).
  
Il **/std:c + + 17** opzione Abilita il set completo di C++ 17 funzionalità implementate dal compilatore Visual C++. Questa opzione Disabilita il supporto del compilatore e librerie standard per le funzionalità che sono state modificate o nuove versioni degli aggiornamenti Working Draft e defect dello Standard C++ dopo C++ 17.  
  
Il **/std:c + + più recente** opzione Abilita il set di funzionalità di linguaggio e libreria di C++ implementato da Visual C++ per tenere traccia più recenti C + + 20 Working Draft e defect aggiornamenti dello Standard C++ che non sono inclusi in C++ 17. Utilizzare questa opzione per ottenere il post-funzionalità di linguaggio C++ 17 supportate dal compilatore e della libreria standard. Per un elenco di lingue e funzionalità della libreria, vedere [novità per Visual C++](../../what-s-new-for-visual-cpp-in-visual-studio.md). Il **/std:c + + più recente** funzionalità controllata dal non abilita l'opzione di **/ sperimentale** passare.  
  
Il **/std** opzione attiva durante una compilazione C++ può essere rilevati utilizzando il [ \_opzioni: MSVC\_LANG](../../preprocessor/predefined-macros.md) macro del preprocessore. Per ulteriori informazioni, vedere [macro del preprocessore](../../preprocessor/predefined-macros.md).

Il **/std:c + + 14** e **/std:c + + più recente** opzioni sono disponibili a partire da Visual C++ 2015 Update 3. Il **/std:c + + 17** opzione è disponibile a partire da Visual C++ 2017 versione 15.3. Come indicato in precedenza, alcuni standard C++ 17 funzionalità è attivata per il **/std:c + + 14** opzione, ma tutte le altre funzionalità C++ 17 sono abilitati per **/std:c + + 17**.
  
> [!NOTE]
> A seconda del Visual C++ del compilatore versione o un aggiornamento livello, determinate C++ 14 o C++ 17 funzionalità potrebbe non essere implementate completamente o completamente conformi quando si specifica il **/std:c + + 14** o **/std:c + + 17** opzioni. Ad esempio, il compilatore Visual C++ 2017 RTM non supporta completamente C++ 14 conformi a `constexpr`, l'espressione SFINAE o ricerca del nome in fase di 2. Per una panoramica della conformità al linguaggio C++ in Visual C++ dalla versione di rilascio, vedere [conformità al linguaggio Visual C++](../../visual-cpp-language-conformance.md). 
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare **le proprietà di configurazione**, **C/C++**, **Language**.  
  
3.  In **Standard di C++ Language**, scegliere il linguaggio standard supportano dal controllo elenco a discesa, quindi scegliere **OK** o **applica** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
  
[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
