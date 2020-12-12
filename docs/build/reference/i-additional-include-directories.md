---
description: Altre informazioni su:/I (directory di inclusione aggiuntive)
title: /I (Directory di inclusione aggiuntive)
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
ms.openlocfilehash: ad44abec28bbb87f91f449765a9ea2f30f2bffa8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191342"
---
# <a name="i-additional-include-directories"></a>/I (Directory di inclusione aggiuntive)

Aggiunge una directory all'elenco di directory in cui vengono cercati i file di inclusione.

## <a name="syntax"></a>Sintassi

> **/I**[]*directory*

### <a name="arguments"></a>Argomenti

*Directory*<br/>
Directory da aggiungere all'elenco di directory in cui vengono cercati i file di inclusione.

## <a name="remarks"></a>Commenti

Per aggiungere più di una directory, usare questa opzione più volte. Viene eseguita la ricerca delle directory solo finché non viene trovato il file di inclusione specificato.

È possibile usare questa opzione con l'opzione ([/x (Ignora percorsi di inclusione standard)](x-ignore-standard-include-paths.md)).

Il compilatore cerca le directory nell'ordine seguente:

1. Se viene specificato usando una [direttiva #include](../../preprocessor/hash-include-directive-c-cpp.md) in formato virgolette doppie, cerca innanzitutto le directory locali. La ricerca inizia nella stessa directory del file che contiene l'istruzione **#include** . Se il file non riesce a trovare il file, Cerca nelle directory dei file di inclusione attualmente aperti nell'ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.

1. Se viene specificato usando una direttiva **#include** in formato parentesi angolare o se la ricerca nella directory locale non è riuscita, Cerca le directory specificate usando l'opzione **/i** nell'ordine in cui CL li rileva nella riga di comando.

1. Directory specificate nella variabile di ambiente **include** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà generale relativa alle **proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **directory di inclusione aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## <a name="example"></a>Esempio

Il comando seguente cerca i file di inclusione richiesti da MAIN. c nell'ordine seguente: prima, se specificato tramite virgolette doppie, viene eseguita la ricerca nei file locali. Successivamente, la ricerca continua nella directory \INCLUDE, quindi nella directory \MY\INCLUDE e infine nelle directory assegnate alla variabile di ambiente INCLUDE.

```
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C
```

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
