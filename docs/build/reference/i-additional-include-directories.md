---
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
ms.openlocfilehash: b922a4472246bb13bfed4022f2f85061c5d1217b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563865"
---
# <a name="i-additional-include-directories"></a>/I (Directory di inclusione aggiuntive)

Aggiunge una directory all'elenco delle directory cercati i file di inclusione.

## <a name="syntax"></a>Sintassi

```
/I[ ]directory
```

## <a name="arguments"></a>Argomenti

*Directory*<br/>
La directory da aggiungere all'elenco delle directory cercati i file di inclusione.

## <a name="remarks"></a>Note

Per aggiungere più di una directory, usare questa opzione più volte. Le directory vengono cercate solo fino a quando non viene trovato il file di inclusione specificato.

È possibile usare questa opzione con l'Ignora percorso di inclusione Standard ([/X (Ignora a percorsi di inclusione Standard)](../../build/reference/x-ignore-standard-include-paths.md)) opzione.

Il compilatore cerca le directory nell'ordine seguente:

1. Directory contenenti file di origine.

1. Directory specificate con il **/I** opzione nell'ordine che vengono rilevate da CL.

1. Directory specificate nella **inclusione** variabile di ambiente.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **generale** pagina delle proprietà.

1. Modificare il **directory di inclusione aggiuntive** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## <a name="example"></a>Esempio

Il comando seguente cerca i file di inclusione richiesti da Main. c nell'ordine seguente: prima nella directory che contiene Main. c, quindi nella directory \INCLUDE, quindi nella directory \MY\INCLUDE e infine nelle directory assegnato a di inclusione variabile di ambiente.

```
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)