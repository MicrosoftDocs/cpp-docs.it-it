---
title: '/EP (Pre-elabora in stdout senza direttive #line)'
ms.date: 11/04/2016
f1_keywords:
- /ep
- VC.Project.VCCLCompilerTool.GeneratePreprocessedFileNoLines
helpviewer_keywords:
- copy preprocessor output to stdout
- preprocessor output, copy to stdout
- -EP compiler option [C++]
- EP compiler option [C++]
- /EP compiler option [C++]
ms.assetid: 6ec411ae-e33d-4ef5-956e-0054635eabea
ms.openlocfilehash: 49745b644234c0e5ce92661f14304531aaca5c69
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807336"
---
# <a name="ep-preprocess-to-stdout-without-line-directives"></a>/EP (Pre-elabora in stdout senza direttive #line)

Pre-elabora i file di origine C e C++ e copia i file pre-elaborati per il dispositivo di output standard.

## <a name="syntax"></a>Sintassi

```
/EP
```

## <a name="remarks"></a>Note

Nel processo, vengono eseguite tutte le direttive del preprocessore, espansioni della macro vengono eseguite e vengono rimossi i commenti. Per mantenere i commenti nell'output pre-elaborato, usare il [(mantenere i commenti durante la pre-elaborazione) /C](c-preserve-comments-during-preprocessing.md) opzione con **/EP**.

Il **/EP** opzione disattiva la compilazione. È necessario eseguire nuovamente il file pre-elaborato per la compilazione. **/EP** elimina anche i file di output dal **/FA**, **/Fa**, e **/Fm** opzioni. Per altre informazioni, vedere [/FA, /Fa (File di listato)](fa-fa-listing-file.md) e [/Fm (specifica file MAP)](fm-name-mapfile.md).

Gli errori generati durante le fasi successive dell'elaborazione di fare riferimento ai numeri di riga del file pre-elaborato anziché il file di origine. Se si desidera che i numeri di riga per fare riferimento al file di origine originale, usare [/E (pre-elabora in stdout)](e-preprocess-to-stdout.md) invece. Il **/E** opzione aggiunge `#line` direttive all'output per questo scopo.

Per inviare l'output pre-elaborato, con `#line` direttive, in un file, usano il [/P (pre-elabora in un File)](p-preprocess-to-a-file.md) opzione.

Per inviare l'output pre-elaborato in stdout, con `#line` direttive, utilizzare **/P** e **/EP** tra loro.

Non è possibile usare le intestazioni precompilate con il **/EP** opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **preprocessore** pagina delle proprietà.

1. Modificare il **genera File pre-elaborato** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## <a name="example"></a>Esempio

La seguente riga di comando di pre-elabora file `ADD.C`conserva i commenti e visualizza il risultato nel dispositivo di output standard:

```
CL /EP /C ADD.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
