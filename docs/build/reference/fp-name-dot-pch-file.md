---
title: -Fp (nome. File PCH) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.PrecompiledHeaderFile
- /fp
- VC.Project.VCCLWCECompilerTool.PrecompiledHeaderFile
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0a851f93ae845d56b9c986e822e94970ad5cccd5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427134"
---
# <a name="fp-name-pch-file"></a>/Fp (Specifica file pch)

Fornisce un nome di percorso per un'intestazione precompilata anziché usare il nome del percorso predefinito.

## <a name="syntax"></a>Sintassi

> **/Fp**<em>pathname</em>

## <a name="remarks"></a>Note

Usare questa opzione con [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) oppure [/Yu (Usa il File intestazione precompilata)](../../build/reference/yu-use-precompiled-header-file.md) per fornire un nome di percorso per un'intestazione precompilata anziché usare il nome del percorso predefinito. È anche possibile usare **/Fp** con **/Yc** per specificare l'uso di un file di intestazione precompilata che differisce dal **/Yc**<em>filename</em> argomento e dal nome di base del file di origine.

Se non si specifica un'estensione come parte del nome del percorso, viene utilizzata un'estensione di PCH. Se si specifica una directory senza un nome di file, il nome file predefinito è VC*x*0.pch, dove *x* è la versione principale di Visual C++ in uso.

È anche possibile usare la **/Fp** opzione con **/Yu**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **intestazioni precompilate** pagina delle proprietà.

1. Modificare il **File di intestazione precompilata** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderFile%2A>.

## <a name="example"></a>Esempio

Se si desidera creare un file di intestazione precompilata per una versione di debug del programma e si esegue la compilazione sia i file di intestazione e il codice sorgente, è possibile specificare un comando, ad esempio:

```
CL /DDEBUG /Zi /Yc /FpDPROG.PCH PROG.CPP
```

## <a name="example"></a>Esempio

Il comando seguente specifica l'utilizzo di un file di intestazione precompilata denominato MYPCH. Il compilatore presuppone che il codice sorgente di Prog. cpp è stato precompilato tramite MyApp. h e che il codice precompilato si trovi in MYPCH. Usa il contenuto di MYPCH e consente di compilare il resto del Prog per creare un file con estensione obj. L'output di questo esempio è un file denominato PROG.exe.

```
CL /YuMYAPP.H /FpMYPCH.PCH PROG.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)