---
title: /FP (nome &period;file PCH)
description: Utilizzare l'opzione del compilatore/FP per specificare il nome del file di intestazione precompilata.
ms.date: 05/31/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.PrecompiledHeaderFile
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
ms.openlocfilehash: d62c5bd9fc7920c0a2a5530879680fad2a01d39a
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439791"
---
# <a name="fp-name-periodpch-file"></a>/FP (nome &period;file PCH)

Fornisce un nome di percorso per un'intestazione precompilata anziché utilizzare il nome di percorso predefinito.

## <a name="syntax"></a>Sintassi

> **/Fp**<em>Nome percorso</em> /FP

## <a name="remarks"></a>Osservazioni

Usare l'opzione **/FP** con [/YC (Crea file di intestazione precompilata)](yc-create-precompiled-header-file.md) o [/Yu (usare il file di intestazione precompilato)](yu-use-precompiled-header-file.md) per specificare il percorso e il nome file per il file di intestazione precompilata (PCH). Per impostazione predefinita, l'opzione **/YC** crea un nome di file PCH usando il nome di base del file di origine e un'estensione *PCH* .

Se non si specifica un'estensione come parte del *percorso*, viene presupposta un'estensione *PCH* . Quando si specifica un nome di directory usando una barra ( **/** ) alla fine di *pathname*, il nome file predefinito è VC*Version*0. pch, dove *Version* è la versione principale del set di strumenti di Visual Studio. Questa directory deve esistere oppure viene generato l'errore C1083.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Aprire le **proprietà di configurazione** > pagina delle proprietà **intestazioni precompilate** **C/C++**  > .

1. Modificare la proprietà del **file di output dell'intestazione precompilata** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="examples"></a>Esempi

Per creare una versione denominata separata del file di intestazione precompilata per la build di debug del programma, è possibile specificare un comando come:

```CMD
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP
```

Il comando seguente specifica l'uso di un file di intestazione precompilato denominato MYPCH. pch. Il compilatore precompila il codice sorgente in PROG. cpp fino alla fine di MYAPP. h e inserisce il codice precompilato in MYPCH. pch. USA quindi il contenuto di MYPCH. pch e compila il resto di PROG. cpp per creare un file con estensione obj. L'output di questo esempio è un file denominato PROG. exe.

```CMD
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
