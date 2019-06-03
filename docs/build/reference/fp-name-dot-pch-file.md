---
title: /Fp (nome &period;alcun file pch)
description: Usare l'opzione del compilatore /Fp per specificare il nome di file di intestazione precompilata.
ms.date: 05/31/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.PrecompiledHeaderFile
- /fp
- VC.Project.VCCLWCECompilerTool.PrecompiledHeaderFile
helpviewer_keywords:
- Fp compiler option [C++]
- -Fp compiler option [C++]
- naming precompiler header files
- PCH files, naming
- names [C++], PCH
- .pch files, naming
- precompiled header files, naming
- /Fp compiler option [C++]
ms.assetid: 0fcd9cbd-e09f-44d3-9715-b41efb5d0be2
ms.openlocfilehash: 6e7faa934d14acb5d129173c5e0c7ee67d6caf2b
ms.sourcegitcommit: 540fa2f5015de1adfa7b6bf823f6eb4ed5a6a4bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/03/2019
ms.locfileid: "66460884"
---
# <a name="fp-name-periodpch-file"></a>/Fp (nome &period;alcun file pch)

Fornisce un nome di percorso per un'intestazione precompilata anziché usare il nome del percorso predefinito.

## <a name="syntax"></a>Sintassi

> **/Fp**<em>pathname</em>

## <a name="remarks"></a>Note

Usare la **/Fp** opzione con [/Yc (Crea precompilati o meno File di intestazione)](yc-create-precompiled-header-file.md) oppure [/Yu (Usa il File intestazione precompilata)](yu-use-precompiled-header-file.md) per specificare il percorso e il nome per l'intestazione precompilata (PCH) file. Per impostazione predefinita, il **/Yc** opzione Crea un nome di file PCH utilizzando il nome di base del file di origine e una *pch* estensione.

Se non si specifica un'estensione come parte del *pathname*, un'estensione della *pch* presuppone. Quando si specifica un nome di directory mediante l'utilizzo di una barra ( **/** ) alla fine del *pathname*, il nome file predefinito è vc*versione*0.pch, in cui  *versione* è la versione principale del set di strumenti di Visual Studio. Questa directory deve esistere, o viene generato l'errore C1083.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **C /C++**  > **intestazioni precompilate** pagina delle proprietà.

1. Modificare il **File di Output intestazione precompilata** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="examples"></a>Esempi

Per creare un separato denominato versione del file di intestazione precompilato per le build di debug del programma, è possibile specificare un comando, ad esempio:

```CMD
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP
```

Il comando seguente specifica l'utilizzo di un file di intestazione precompilata denominato MYPCH. Il compilatore precompila codice sorgente di Prog fino alla fine di MyApp. h e inserisce il codice precompilato in MYPCH. Quindi Usa il contenuto di MYPCH e consente di compilare il resto del Prog per creare un file con estensione obj. L'output di questo esempio è un file denominato PROG.exe.

```CMD
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
