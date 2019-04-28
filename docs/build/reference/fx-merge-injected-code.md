---
title: /Fx (Esegue il merge del codice)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.ExpandAttributedSource
- /Fx
- VC.Project.VCCLCompilerTool.ExpandAttributedSource
helpviewer_keywords:
- Fx compiler option [C++]
- -Fx compiler option [C++]
- injected code
- merging injected code
- /Fx compiler option [C++]
ms.assetid: 14f0e301-3bab-45a3-bbdf-e7ce66f20560
ms.openlocfilehash: f1a266eee4edc524fbbe49bdef31a8235f62bd3c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292302"
---
# <a name="fx-merge-injected-code"></a>/Fx (Esegue il merge del codice)

Produce una copia di ogni file di origine con il codice inserito nell'origine.

## <a name="syntax"></a>Sintassi

```
/Fx
```

## <a name="remarks"></a>Note

Per distinguere un file di origine unito da un file di origine originale, **/Fx** aggiunge un'estensione mrg tra il nome e l'estensione del file. Ad esempio, un file denominato MyCode.cpp contenente codice con attributi e compilato con **/Fx** crea un file denominato MyCode.mrg.cpp contenente il codice seguente:

```
//+++ Start Injected Code
[no_injected_text(true)];      // Suppress injected text, it has
                               // already been injected
#pragma warning(disable: 4543) // Suppress warnings about skipping
                               // injected text
#pragma warning(disable: 4199) // Suppress warnings from attribute
                               // providers
//--- End Injected Code
```

In un file MRG, il codice inserito a causa di un attributo verrà delimitato nel modo seguente:

```
//+++ Start Injected Code
...
//--- End Injected Code
```

L'attributo [no_injected_text](../../windows/no-injected-text.md) viene incorporato in un file MRG che consente la compilazione del file MRG senza dover reinserire il testo.

Ricordare che il file di origine MRG è una rappresentazione del codice sorgente inserito dal compilatore. Il file MRG potrebbe non essere compilato o eseguito esattamente come il file originale.

Le macro non vengono espanse nel file MRG.

Se il programma include un file di intestazione che usa il codice inserito, **/Fx** genera un file MRG.H per tale intestazione. **/Fx** non unisce i file di inclusione che non usano il codice inserito.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **File di output** .

1. Modificare la proprietà **Espandi origine con attributi** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExpandAttributedSource%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
