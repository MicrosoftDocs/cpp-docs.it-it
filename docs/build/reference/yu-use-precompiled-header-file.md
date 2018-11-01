---
title: /Yu (Utilizza il file di intestazione precompilata)
ms.date: 11/04/2016
f1_keywords:
- /yu
helpviewer_keywords:
- Yu compiler option [C++]
- /Yu compiler option [C++]
- -Yu compiler option [C++]
- PCH files, use existing
- .pch files, use existing
- precompiled header files, use existing
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
ms.openlocfilehash: 8d2b02c378179ac2603ec095efe89ce78f9f1afa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50505342"
---
# <a name="yu-use-precompiled-header-file"></a>/Yu (Utilizza il file di intestazione precompilata)

Indica al compilatore di usare un file di intestazione precompilata (PCH) esistente nella compilazione corrente.

## <a name="syntax"></a>Sintassi

```
/Yu[filename]
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Il nome di un file di intestazione, che è incluso nel file di origine tramite un **#include** direttiva del preprocessore.

## <a name="remarks"></a>Note

Il nome del file di inclusione deve coincidere per entrambi i **/Yc** opzione che crea l'intestazione precompilata e i successivi **/Yu** opzione che indica l'utilizzo dell'intestazione precompilata.

Per **/Yc**, `filename` specifica il punto in cui precompilazione Arresta; il compilatore consente di precompilare tutto il codice tuttavia `filename` e nomi di intestazione precompilata risulta usando il nome base del file di inclusione e un'estensione PCH.

Il file PCH deve essere stato creato usando **/Yc**.

Il compilatore considera tutto il codice che si verificano prima il file con estensione h come precompilata. Salta appena prima per il **#include** direttiva associata al file con estensione h, viene usato il codice contenuto nel file con estensione pch, quindi compila tutto il codice dopo `filename`.

Nella riga di comando, è consentito alcuno spazio tra **/Yu** e `filename`.

Quando si specifica la **/Yu** opzione senza fornire un nome di file, il programma di origine deve contenere un [hdrstop #pragma](../../preprocessor/hdrstop.md) pragma che specifica il nome del file di intestazione precompilata, il file pch. In questo caso, il compilatore userà l'intestazione precompilata (specifica file PCH) denominato da [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md). Il compilatore passa alla posizione del pragma, Ripristina lo stato compilato dal file di intestazione precompilata specificato dal pragma e quindi compila solo il codice che segue il pragma. Se **hdrstop #pragma** non specifica un nome di file, il compilatore cerca un file con un nome derivato dal nome di base del file di origine con estensione pch. È anche possibile usare la **/Fp** opzione per specificare un file con estensione pch diversi.

Se si specifica la **/Yu** l'opzione senza un nome di file e non è possibile specificare una **hdrstop** pragma, viene generato un messaggio di errore e la compilazione ha esito negativo.

Se il **/Yc** `filename` e **/Yu** `filename` opzioni si trovano nella stessa riga di comando e lo stesso nome di file, sia quelli di riferimento **/Yc** `filename` accetta ha la precedenza, la precompilazione di tutto il codice fino a e includendo il file denominato. Questa funzionalità semplifica la scrittura di makefile.

Perché i file con estensione PCH contengono informazioni sull'ambiente del computer, nonché informazioni sull'indirizzo di memoria sul programma, è necessario utilizzare solo un file pch nel computer in cui è stato creato.

Per altre informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Specificare [/Yc (Crea precompilati o meno File di intestazione)](../../build/reference/yc-create-precompiled-header-file.md) su un file con estensione cpp nel progetto.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **intestazioni precompilate** pagina delle proprietà.

1. Modificare il **Crea/Usa PCH tramite File** proprietà o il **Crea/Usa intestazione precompilata** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

## <a name="examples"></a>Esempi

Se il codice seguente:

```
#include <afxwin.h>   // Include header for class library
#include "resource.h" // Include resource definitions
#include "myapp.h"    // Include information specific to this app
...
```

viene compilato con la riga di comando `CL /YuMYAPP.H PROG.CPP`, il compilatore non elabora i tre includono le istruzioni, ma utilizza codice precompilato da MyApp, in tal modo risparmio di tempo nella pre-elaborazione di tutte e tre i file (e tutti i file possono includere).

È possibile usare il [/Fp (nome. File PCH)](../../build/reference/fp-name-dot-pch-file.md) con il **/Yu** possibilità di specificare il nome del file con estensione pch se il nome è diverso da degli argomenti nome file per **/Yc** o il nome di base del file di origine, come nel seguenti:

```
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP
```

Questo comando specifica un file di intestazione precompilata denominato MYPCH. Il compilatore Usa il contenuto per ripristinare lo stato di tutti i file di intestazione fino a e MyApp precompilato. Il compilatore compila quindi il codice che di MyApp **includere** istruzione.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)