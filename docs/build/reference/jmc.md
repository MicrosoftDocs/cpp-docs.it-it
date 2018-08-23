---
title: / JMC (debug di Just My Code) | Microsoft Docs
ms.custom: 08/20/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /JMC
dev_langs:
- C++
helpviewer_keywords:
- /JMC compiler option [C++]
- Just my code [C++]
- -JMC compiler option [C++]
- User code, debugging
- JMC compiler option [C++]
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1da60b43bd151a776278b51a5ee8a22de7ef3b4c
ms.sourcegitcommit: 7f3df9ff0310a4716b8136ca20deba699ca86c6c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2018
ms.locfileid: "40242873"
---
# <a name="jmc-just-my-code-debugging"></a>/ JMC (debug di Just My Code)

Specifica il supporto del compilatore per nativi *Just My Code* debug nel debugger di Visual Studio. Questa opzione supporta le impostazioni utente che consentono a Visual Studio per Esegui istruzione/routine di sistema, framework, libreria e altre chiamate non dell'utente e comprime tali chiamate nella finestra stack di chiamate. Il **/JMC** opzione del compilatore è disponibile a partire da Visual Studio 2017 versione 15.8.

## <a name="syntax"></a>Sintassi

> **/ JMC**\[**-**]

## <a name="remarks"></a>Note

Visual Studio [Just My Code](/visualstudio/debugger/just-my-code) impostazioni specificano se il debugger di Visual Studio le istruzioni/routine di sistema, framework, libreria e altre chiamate non dell'utente. Il **/JMC** opzione del compilatore consente il supporto per il debug Just My Code in codice C++ nativo. Quando **/JMC** è abilitata, il compilatore inserisce le chiamate a una funzione helper `__CheckForDebuggerJustMyCode`, nel prologo della funzione. La funzione di supporto fornisce hook che supportano le operazioni di passaggio di Visual Studio debugger Just My Code. Per abilitare Just My Code nel debugger di Visual Studio, sulla barra dei menu, scegliere **degli strumenti** > **opzioni**, quindi impostare l'opzione nella **debug**  >  **Generali** > **Abilita Just My Code**.

Il **/JMC** opzione richiede che il codice collegato per il Runtime di libreria C (CRT), che fornisce il `__CheckForDebuggerJustMyCode` funzione di supporto. Se il progetto non contiene collegamenti alla libreria CRT, è possibile riscontrare un errore del linker **LNK2019: simbolo esterno __CheckForDebuggerJustMyCode irrisolti**. Per risolvere questo errore, il collegamento a CRT oppure disabilitare la **/JMC** opzione.

Per impostazione predefinita, il **/JMC** opzione del compilatore è disattivata. Tuttavia, a partire da in Visual Studio 2017 versione 15.8 questa opzione è abilitata nella maggior parte dei modelli di progetto di Visual Studio. Per disabilitare in modo esplicito questa opzione, usare il **/JMC-** opzione della riga di comando. In Visual Studio, aprire la finestra di dialogo Pagine delle proprietà di progetto e modificare il **supporto solo risorse del debug del codice** proprietà nel **le proprietà di configurazione** > **C/C++**  >  **Generali** pagina delle proprietà **No**.

Per altre informazioni, vedere [C++ Just My Code](/visualstudio/debugger/just-my-code#BKMK_C___Just_My_Code) nelle [consente di specificare se il debug del solo codice utente tramite Just My Code in Visual Studio](/visualstudio/debugger/just-my-code)e il post di Blog del Team Visual C++ [Announcing C++ Just My Code Esecuzione di istruzioni in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/06/29/announcing-jmc-stepping-in-visual-studio/).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

1. Modificare il **supporto solo risorse del debug del codice** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
