---
title: /Yu (Usa il file di intestazione precompilata)
ms.date: 07/31/2020
f1_keywords:
- /Yu
helpviewer_keywords:
- Yu compiler option [C++]
- /Yu compiler option [C++]
- -Yu compiler option [C++]
- PCH files, use existing
- .pch files, use existing
- precompiled header files, use existing
ms.assetid: 24f1bd0e-b624-4296-a17e-d4b53e374e1f
ms.openlocfilehash: 8cccce39949f23e4ceb72807ecaef3597ab733c4
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520462"
---
# <a name="yu-use-precompiled-header-file"></a>`/Yu`(USA il file di intestazione precompilata)

Indica al compilatore di utilizzare un file di intestazione precompilata ( *`.pch`* ) esistente nella compilazione corrente.

## <a name="syntax"></a>Sintassi

> **`/Yu`**\[*nome file*]

## <a name="arguments"></a>Argomenti

*filename*<br/>
Nome di un file di intestazione, incluso nel file di origine mediante una direttiva per il `#include` preprocessore.

## <a name="remarks"></a>Commenti

Il nome del file di inclusione deve essere lo stesso sia per l' **`/Yc`** opzione che consente di creare l'intestazione precompilata sia per eventuali **`/Yu`** opzioni successive che indicano l'utilizzo dell'intestazione precompilata.

Per **`/Yc`** , *filename* specifica il punto in cui viene arrestata la precompilazione. il compilatore precompila tutto il codice anche se *filename* e denomina l'intestazione precompilata risultante usando il nome di base del file di inclusione e un'estensione di *`.pch`* .

Il *`.pch`* file deve essere stato creato utilizzando **`/Yc`** .

Il compilatore considera tutto il codice che si verifica prima del file con estensione h come precompilato. Passa immediatamente oltre la `#include` direttiva associata al *`.h`* file, usa il codice contenuto nel *`.pch`* file e quindi compila tutto il codice dopo *filename*.

Nella riga di comando non è consentito alcuno spazio tra **`/Yu`** e *filename*.

Quando si specifica l' **`/Yu`** opzione senza un nome di file, il programma di origine deve contenere un [`#pragma hdrstop`](../../preprocessor/hdrstop.md) pragma che specifica il nome file dell'intestazione precompilata, *`.pch`* file. In questo caso, il compilatore utilizzerà l'intestazione precompilata ( *`.pch`* file) denominata da [`/Fp (Name .pch file)`](fp-name-dot-pch-file.md) . Il compilatore passa alla posizione del pragma e ripristina lo stato compilato dal file di intestazione precompilato specificato. Compila quindi solo il codice che segue il pragma. Se `#pragma hdrstop` non specifica un nome di file, il compilatore cerca un file con un nome derivato dal nome di base del file di origine con un' *`.pch`* estensione. È anche possibile usare l' **`/Fp`** opzione per specificare un *`.pch`* file diverso.

Se si specifica l' **`/Yu`** opzione senza un nome di file e non si specifica un `hdrstop` pragma, viene generato un messaggio di errore e la compilazione ha esito negativo.

Se le **`/Yc`** Opzioni _filename_ e **`/Yu`** _filename_ si verificano nella stessa riga di comando e fanno riferimento allo stesso nome file, **`/Yc`** _filename_ avrà la precedenza, precompilando tutto il codice fino a includere il file specificato. Questa funzionalità semplifica la scrittura di makefile.

Poiché *`.pch`* i file contengono informazioni sull'ambiente del computer e le informazioni sull'indirizzo di memoria relative al programma, è consigliabile usare solo un *`.pch`* file nel computer in cui è stato creato.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [`/Y`(Intestazioni precompilate)](y-precompiled-headers.md)

- [File di intestazione precompilati](../creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Specificare [ `/Yc` (creare il file di intestazione precompilata)](yc-create-precompiled-header-file.md) in un file con estensione cpp nel progetto.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione**  >  pagina delle proprietà intestazioni precompilate**C/C++**  >  **Precompiled Headers** .

1. Modificare la proprietà dell' **intestazione precompilata** , la proprietà **Crea/Usa PCH tramite file** o la proprietà **Crea/Usa intestazione precompilata** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

## <a name="example"></a>Esempio

Se il codice seguente:

```cpp
#include <afxwin.h>   // Include header for class library
#include "resource.h" // Include resource definitions
#include "myapp.h"    // Include information specific to this app
...
```

viene compilato tramite la riga di comando `CL /YuMYAPP.H PROG.CPP` , il compilatore non elabora le tre istruzioni di inclusione. USA invece il codice precompilato da *`MYAPP.pch`* , che consente di risparmiare il tempo necessario per la pre-elaborazione di tutti e tre i file che possono includere.

È possibile utilizzare l' [`/Fp (Name .pch file)`](fp-name-dot-pch-file.md) opzione con l' **`/Yu`** opzione per specificare il nome del *`.pch`* file se il nome è diverso dall'argomento *filename* a **`/Yc`** o dal nome di base del file di origine, come nell'esempio seguente:

```cmd
CL /YuMYAPP.H /FpMYPCH.pch PROG.CPP
```

Questo comando specifica un file di intestazione precompilato denominato *`MYPCH.pch`* . Il compilatore usa il relativo contenuto per ripristinare lo stato precompilato di tutti i file di intestazione fino a includere *`MYAPP.h`* . Il compilatore compila quindi il codice che si verifica dopo la `#include "MYAPP.h"` direttiva *.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
