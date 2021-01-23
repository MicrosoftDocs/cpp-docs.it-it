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
ms.openlocfilehash: 36da00f9a6d5a55e60efd60a941ac3a9b3bfa4ec
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712791"
---
# <a name="i-additional-include-directories"></a>`/I` (Directory di inclusione aggiuntive)

Aggiunge una directory all'elenco di directory in cui vengono cercati i file di inclusione.

## <a name="syntax"></a>Sintassi

> **`/I`***directory* di

### <a name="arguments"></a>Argomenti

*Directory*\
Directory da aggiungere all'elenco di directory in cui vengono cercati i file di inclusione. Lo spazio tra `/I` e la *directory* è facoltativo. Le directory che includono spazi devono essere racchiuse tra virgolette doppie. Una directory può essere un percorso assoluto o relativo.

## <a name="remarks"></a>Osservazioni

Per aggiungere più di una directory, usare questa opzione più volte. Viene eseguita la ricerca delle directory solo finché non viene trovato il file di inclusione specificato.

È possibile usare questa opzione nella stessa riga di comando dell'opzione ([ `/X` (Ignora percorsi di inclusione standard)](x-ignore-standard-include-paths.md)).

È possibile specificare una [ `#include` direttiva](../../preprocessor/hash-include-directive-c-cpp.md) in un formato con virgolette doppie (o in primo luogo), ad esempio `#include "local.h"` . In alternativa, è possibile specificare il formato della parentesi uncinata (o di inclusione-percorso-primo), ad esempio `#include <iostream>` .

Il compilatore cerca le directory nell'ordine seguente:

1. Se la **`#include`** direttiva viene specificata utilizzando il formato con virgolette doppie, cerca innanzitutto le directory locali. La ricerca inizia nella stessa directory del file che contiene la **`#include`** direttiva. Se non riesce a trovare il file, Cerca avanti nelle directory dei file di inclusione attualmente aperti, nell'ordine inverso in cui sono stati aperti. La ricerca inizia nella directory del file di inclusione padre e continua nelle directory superiori dei file di inclusione padre del padre.

1. Se la **`#include`** direttiva viene specificata nel formato con parentesi angolari o se la ricerca nella directory locale non è riuscita, Cerca le directory specificate usando l' **`/I`** opzione nell'ordine in cui sono specificate nella riga di comando.

1. Directory specificate nella **`INCLUDE`** variabile di ambiente.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà generale relativa alle **proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **directory di inclusione aggiuntive** . In questa proprietà è possibile specificare più di una directory alla volta. Le directory devono essere separate da un punto e virgola ( **`;`** ).

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.

## <a name="example"></a>Esempio

Il comando seguente cerca i file di inclusione richiesti da *`main.c`* nell'ordine seguente: prima, se specificato con virgolette doppie, viene eseguita la ricerca dei file locali. Successivamente, la ricerca continua nella *`\include`* Directory, quindi nella *`\my\include`* Directory e infine nelle directory assegnate alla **`INCLUDE`** variabile di ambiente, nell'ordine da sinistra a destra.

```cmd
CL /I \include /I\my\include main.c
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
