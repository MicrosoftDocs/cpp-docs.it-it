---
title: /I (directory di inclusione aggiuntive)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories
- VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories
- /I
- VC.Project.VCNMakeTool.IncludeSearchPath
helpviewer_keywords:
- /I compiler option [C++]
- Additional Include Directories compiler option
- I compiler option [C++]
- -I compiler option [C++]
- set include directories
- include directories, compiler option [C++]
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
ms.openlocfilehash: 72f871b99602c63e3edaea719faf5de6d4451515
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412848"
---
# <a name="i-additional-include-directories"></a>/I (directory di inclusione aggiuntive)

Aggiunge una directory all'elenco delle directory cercati i file di inclusione.

## <a name="syntax"></a>Sintassi

> **/I**[ ]*directory*

### <a name="arguments"></a>Argomenti

*directory*<br/>
La directory da aggiungere all'elenco delle directory cercati i file di inclusione.

## <a name="remarks"></a>Note

Per aggiungere più di una directory, usare questa opzione più volte. Le directory vengono cercate solo fino a quando non viene trovato il file di inclusione specificato.

È possibile usare questa opzione con il ([/X (Ignora a percorsi di inclusione Standard)](../../build/reference/x-ignore-standard-include-paths.md)) opzione.

Il compilatore cerca le directory nell'ordine seguente:

1. Se specificato con un [#include (direttiva)](../../preprocessor/hash-include-directive-c-cpp.md) in forma di virgolette doppie, per prima cosa cerca le directory locali. La ricerca inizia nella stessa directory del file che contiene il **#include** istruzione. Se l'operazione non riesce a trovare il file, Cerca nella directory dei attualmente aperto file di inclusione, in ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.

1. Se specificato con un **#include** direttiva in angolo racchiudere tra parentesi quadre form o se la ricerca di directory locale non è riuscita, la ricerca nelle directory specificate usando la **/I** opzione nell'ordine in cui vengono rilevate li CL nella riga di comando.

1. Directory specificate nella **inclusione** variabile di ambiente.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

1. Modificare il **directory di inclusione aggiuntive** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## <a name="example"></a>Esempio

Il comando seguente è simile per i file di inclusione richiesti da Main. c nell'ordine seguente: In primo luogo, se specificato con le virgolette doppie, vengono cercati i file locali. Successivamente, ricerca continua nella directory \INCLUDE, quindi nella directory \MY\INCLUDE e infine nelle directory assegnato alla variabile di ambiente INCLUDE.

```
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
