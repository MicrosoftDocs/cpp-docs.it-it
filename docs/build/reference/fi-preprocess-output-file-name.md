---
title: /Fi (pre-elaborazione nome file di output)
ms.date: 08/12/2020
f1_keywords:
- /Fi
helpviewer_keywords:
- Fi compiler option (C++)
- -Fi compiler option (C++)
- /Fi compiler option (C++)
- preprocessing output files, file name
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
ms.openlocfilehash: 82bf09a8f01f656f90ad9971530b05f108fc95a4
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88561089"
---
# <a name="fi-preprocess-output-file-name"></a>`/Fi` (Pre-elaborazione nome file di output)

Specifica il nome del file di output in cui l'opzione del compilatore [ `/P` (pre-elabora in un file)](p-preprocess-to-a-file.md) scrive l'output pre-elaborato.

## <a name="syntax"></a>Sintassi

> **`/Fi`**_`pathname`_

### <a name="parameters"></a>Parametri

*`pathname`*\
Percorso relativo o assoluto e nome file del file di output prodotto dall' **`/P`** opzione del compilatore. In alternativa, il percorso della directory per i *`.i`* file di output quando viene specificato più di un file di input. Non inserire uno spazio tra l' **`/Fi`** opzione e *`pathname`* .

## <a name="remarks"></a>Osservazioni

Usare l' **`/Fi`** opzione del compilatore in combinazione con l' **`/P`** opzione del compilatore. Se **`/P`** non è specificato, **`/Fi`** causa l'avviso della riga di comando D9007.

Se si specifica solo un percorso di directory (un percorso che termina con una barra rovesciata **`\`** ) per il *`pathname`* parametro, il nome di base del file di origine viene usato come nome di base del file di output pre-elaborato. Il *`pathname`* parametro non richiede una particolare estensione di file. Tuttavia, se non si specifica un'estensione del nome di file, viene utilizzata un'estensione di ". i".

### <a name="example"></a>Esempio

La riga di comando seguente pre *`PROGRAM.cpp`* -elabora, conserva i commenti, aggiunge [`#line`](../../preprocessor/hash-line-directive-c-cpp.md) direttive e scrive il risultato nel *`MYPROCESS.i`* file:

```cmd
CL /P /FiMYPROCESS.I PROGRAM.CPP
```

Questa riga di comando pre *`main.cpp`* -elabora e *`helper.cpp`* in *`main.i`* e *`helper.i`* in una sottodirectory denominata *`preprocessed`* :

```cmd
CL /P /Fi".\\preprocessed\\" main.cpp helper.cpp
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire il file di origine o la finestra di dialogo **pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**  >  proprietà del preprocessore**C/C++**  >  **Preprocessor** .

1. Impostare la **pre-elaborazione** sulla proprietà file su **Sì**.

1. Selezionare la pagina delle proprietà di **configurazione**proprietà della riga di comando di  >  **c/C++**  >  **Command Line** .

1. Immettere l' **`/Fi`** opzione del compilatore e *`pathname`* nella casella **Opzioni aggiuntive** . Quando si imposta questa proprietà per un progetto, è sufficiente specificare solo un percorso di directory, non un nome di file.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[`/P` (Pre-elabora in un file)](p-preprocess-to-a-file.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
