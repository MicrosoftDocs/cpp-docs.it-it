---
description: 'Altre informazioni su:/EP (pre-elabora in stdout senza direttive #line)'
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
ms.openlocfilehash: cbd36cd6bdafe315a7a6ef01b46857725033bd69
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201001"
---
# <a name="ep-preprocess-to-stdout-without-line-directives"></a>/EP (Pre-elabora in stdout senza direttive #line)

Pre-elabora i file di origine C e C++ e copia i file pre-elaborati nel dispositivo di output standard.

## <a name="syntax"></a>Sintassi

```
/EP
```

## <a name="remarks"></a>Osservazioni

Nel processo vengono eseguite tutte le direttive per il preprocessore, vengono eseguite le espansioni di macro e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, usare l'opzione [/c (Mantieni commenti durante la pre-elaborazione)](c-preserve-comments-during-preprocessing.md) con **/EP**.

L'opzione **/EP** evita la compilazione. È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/EP** disattiva inoltre i file di output dalle opzioni **/fa**, **/fa** e **/FM** . Per ulteriori informazioni, vedere [/fa,/fa (file di listato)](fa-fa-listing-file.md) e [/FM (nome file map)](fm-name-mapfile.md).

Gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file pre-elaborato invece che al file di origine originale. Se si desidera che i numeri di riga facciano riferimento al file di origine originale, utilizzare [/e (pre-elabora in stdout)](e-preprocess-to-stdout.md) . L'opzione **/e** aggiunge `#line` le direttive all'output a questo scopo.

Per inviare l'output pre-elaborato, con le `#line` direttive, a un file, usare invece l'opzione [/p (pre-elabora in un file)](p-preprocess-to-a-file.md) .

Per inviare l'output pre-elaborato a stdout, con le `#line` direttive, usare **/P** e **/EP** insieme.

Non è possibile usare intestazioni precompilate con l'opzione **/EP** .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà del **preprocessore** .

1. Modificare la proprietà **genera file pre-elaborato** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## <a name="example"></a>Esempio

La seguente riga di comando pre-elabora il file `ADD.C` , conserva i commenti e visualizza il risultato nel dispositivo di output standard:

```
CL /EP /C ADD.C
```

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
