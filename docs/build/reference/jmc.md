---
title: /JMC (Debug Just My Code)
ms.date: 08/20/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.SupportJustMyCode
helpviewer_keywords:
- /JMC compiler option [C++]
- Just my code [C++]
- -JMC compiler option [C++]
- User code, debugging
- JMC compiler option [C++]
ms.openlocfilehash: 90fcad40b3322f8a8ae7ffc58875c2850f143138
ms.sourcegitcommit: 0867d648e0955ebad7260b5fbebfd6cd4d58f3c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/19/2019
ms.locfileid: "68341005"
---
# <a name="jmc-just-my-code-debugging"></a>/JMC (Debug Just My Code)

Specifica il supporto del compilatore per il debug di *Just My Code* nativi nel debugger di Visual Studio. Questa opzione supporta le impostazioni utente che consentono a Visual Studio di eseguire un'istruzione/routine di sistema, Framework, libreria e altre chiamate non utente e di comprimere tali chiamate nella finestra stack di chiamate. L'opzione del compilatore **/JMC** è disponibile a partire da Visual Studio 2017 versione 15,8.

## <a name="syntax"></a>Sintassi

> **/JMC**\[ **-** ]

## <a name="remarks"></a>Note

Le impostazioni [Just My Code](/visualstudio/debugger/just-my-code) di Visual Studio specificano se il debugger di Visual Studio esegue la procedura su sistema, Framework, libreria e altre chiamate non utente. L'opzione del compilatore **/JMC** Abilita il supporto per Just My Code il debug C++ nel codice nativo. Quando **/JMC** è abilitato, il compilatore inserisce le chiamate a una funzione helper, `__CheckForDebuggerJustMyCode`, nel prologo della funzione. La funzione helper fornisce hook che supportano le operazioni di Just My Code step del debugger di Visual Studio. Per abilitare Just My Code nel debugger di Visual Studio, nella barra dei menu scegliere **strumenti** > **Opzioni**e quindi impostare l'opzione in **debug** > **generale** > **Abilita Just My Code**.

L'opzione **/JMC** richiede che il codice sia collegato alla libreria di runtime C (CRT), che fornisce `__CheckForDebuggerJustMyCode` la funzione helper. Se il progetto non viene collegato a CRT, è possibile che venga visualizzato l'errore del linker **LNK2019: simbolo esterno non risolto __CheckForDebuggerJustMyCode**. Per correggere l'errore, collegarsi a CRT oppure disabilitare l'opzione **/JMC** .

Per impostazione predefinita, l'opzione del compilatore **/JMC** è disattivata. Tuttavia, a partire da Visual Studio 2017 versione 15,8 questa opzione è abilitata nella maggior parte dei modelli di progetto di Visual Studio. Per disabilitare in modo esplicito questa opzione, usare l'opzione **/JMC-** nella riga di comando. In Visual Studio aprire la finestra di dialogo Pagine delle proprietà del progetto e modificare la proprietà **supporto Just My Code debug** nella  > pagina proprietà di > configurazione**C/C++** **generale** in **No**.

Per ulteriori informazioni, vedere [ C++ Just My Code](/visualstudio/debugger/just-my-code#BKMK_C___Just_My_Code) in [specificare se eseguire il debug solo del codice utente utilizzando Just My Code in Visual Studio](/visualstudio/debugger/just-my-code)e il C++ post di Blog del team visuale che [annuncia C++ Just My Code esecuzione di istruzioni in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/06/29/announcing-jmc-stepping-in-visual-studio/).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** >  > **C/C++** **generale** .

1. Modificare la proprietà di **debug Just My Code di supporto** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
