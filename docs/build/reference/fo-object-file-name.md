---
title: /Fo (Nome file oggetto)
description: Guida di riferimento all'opzione del compilatore di Microsoft C,/Fo (nome file oggetto) in Visual Studio.
ms.date: 04/20/2020
f1_keywords:
- /Fo
- VC.Project.VCCLCompilerTool.ObjectFile
- VC.Project.VCCLWCECompilerTool.ObjectFile
helpviewer_keywords:
- Fo compiler option [C++]
- object files, naming
- /Fo compiler option [C++]
- -Fo compiler option [C++]
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
ms.openlocfilehash: cd22ba745128fe1df67853d98c1495491b9ca840
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748968"
---
# <a name="fo-object-file-name"></a>/Fo (Nome file oggetto)

Specifica un nome*`.obj`* file o una directory di oggetto ( ) da utilizzare al posto del valore predefinito.

## <a name="syntax"></a>Sintassi

> **`/Fo`**_Percorso_

## <a name="remarks"></a>Osservazioni

È possibile **`/Fo`** utilizzare l'opzione del compilatore per impostare una directory di output per tutti i file oggetto generati dal comando del compilatore CL. In alternativa, è possibile utilizzarlo per rinominare un singolo file oggetto.

Per impostazione predefinita, i file oggetto generati dal compilatore vengono inseriti nella directory corrente. Gli viene assegnato il nome di base *`.obj`* del file di origine e un'estensione.

Per utilizzare **`/Fo`** l'opzione per rinominare un file oggetto, specificare il nome del file di output come argomento *nomepercorso.* Quando si rinomina un file oggetto, è possibile utilizzare qualsiasi nome ed *`.obj`* estensione desiderato, ma la convenzione consigliata consiste nell'utilizzare . Il compilatore genera l'errore della riga di **`/Fo`** comando D8036 se si specifica un nome file in cui è stato specificato più di un file di origine da compilare.

Per utilizzare **`/Fo`** l'opzione per impostare una directory di output per tutti i file oggetto creati dal comando CL, specificare la directory come argomento *pathname.* Una directory è indicata da una barra finale nell'argomento *pathname.* La directory specificata deve esistere; non viene creato automaticamente.

## <a name="example"></a>Esempio

La riga di comando seguente crea un file oggetto denominato * \\* *sample.obj* in una directory esistente, intermediate , nell'unità D.

```cmd
CL /Fo"D:\intermediate\" /EHsc /c sample.cpp
```

## <a name="set-the-option-in-visual-studio-or-programmatically"></a>Impostare l'opzione in Visual Studio o a livello di codiceSet the option in Visual Studio or programmatically

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **Proprietà** > di configurazione File di**output** **C/C.** > 

1. Modificare la proprietà **Nome file oggetto** per impostare la directory di output. Nell'IDE, il file oggetto deve *`.obj`* avere l'estensione .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
