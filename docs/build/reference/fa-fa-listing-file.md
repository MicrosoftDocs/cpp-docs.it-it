---
title: /FA, /Fa (File listato)
description: Guida di riferimento all'opzione del compilatore Microsoft C++/FA e/fa (file di listato).
ms.date: 11/21/2020
f1_keywords:
- VC.Project.VCCLWCECompilerTool.AssemblerListingLocation
- VC.Project.VCCLCompilerTool.ConfigureASMListing
- VC.Project.VCCLWCECompilerTool.AssemblerOutput
- VC.Project.VCCLCompilerTool.AssemblerListingLocation
- /fa
- VC.Project.VCCLCompilerTool.AssemblerOutput
- VC.Project.VCCLCompilerTool.UseUnicodeForAssemblerListing
helpviewer_keywords:
- FA compiler option [C++]
- /FA compiler option [C++]
- -FA compiler option [C++]
- listing file type
- assembly-only listing
ms.openlocfilehash: 7e8e39fea55bb69eaa0ae914eeabcafef4ac7849
ms.sourcegitcommit: 432c24dde31c400437c4320e8432b1ddb232f844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/01/2020
ms.locfileid: "96440234"
---
# <a name="fa-fa-listing-file"></a>`/FA`, `/Fa` (File di listato)

Crea un file di listato contenente codice assembler.

## <a name="syntax"></a>Sintassi

> **`/FA`**[**`c`**\][**`s`**\][**`u`**]\
> **`/Fa`**_percorso_

## <a name="remarks"></a>Commenti

L' **`/FA`** opzione del compilatore genera un file di listato assembler per ogni unità di conversione nella compilazione, che in genere corrisponde a un file di origine C o C++. Per impostazione predefinita, solo l'assembler è incluso nel file di listato, che è codificato come ANSI. Gli **`c`** argomenti, **`s`** e facoltativi per controllare se il codice del **`u`** **`/FA`** computer o il codice sorgente vengono restituiti insieme all'elenco di assembler e se l'inserzione è codificata come UTF-8.

Per impostazione predefinita, ogni file di elenco ottiene lo stesso nome di base del file di origine e ha un' *`.asm`* estensione. Quando il codice macchina viene incluso usando l' **`c`** opzione, il file di elenco ha un' *`.cod`* estensione. È possibile modificare il nome e l'estensione del file di listato e la directory in cui viene creato usando l' **`/Fa`** opzione.

### <a name="fa-arguments"></a>`/FA` argomenti

nessuno
Nell'elenco è inclusa solo la lingua Assembler.

**`c`**\
facoltativo. Include il codice del computer nell'elenco.

**`s`**\
facoltativo. Include il codice sorgente nell'elenco.

**`u`**\
facoltativo. Codifica il file di elenco in formato UTF-8 e include un marcatore per l'ordine dei byte. Per impostazione predefinita, il file viene codificato come ANSI. Usare **`u`** per creare un file di listato visualizzato correttamente in qualsiasi sistema o se si usano file di codice sorgente Unicode come input per il compilatore.

Se **`s`** vengono specificati sia che e **`u`** se un file di codice sorgente usa una codifica Unicode diversa da UTF-8, le righe di codice nel *`.asm`* file potrebbero non essere visualizzate correttamente.

### <a name="fa-argument"></a>Argomento di `/Fa`

nessuno
Viene creato un file di origine con estensione *ASM* per ogni file di codice sorgente nella compilazione.

*filename*\
Il compilatore inserisce un file di listato denominato *filename*. asm nella directory corrente. Questo formato di argomento è valido solo quando si compila un solo file di codice sorgente.

*filename. Extension*\
Il compilatore inserisce un file di listato denominato *filename. Extension* nella directory corrente. Questo formato di argomento è valido solo quando si compila un solo file di codice sorgente.

*Directory*__\\__\
Il compilatore crea un file *source_file. asm* per ogni file di codice sorgente nella compilazione. Viene inserito nella *directory* specificata. La barra rovesciata finale è obbligatoria. Sono consentiti solo i percorsi sul disco corrente.

*directory* __\\__ di *nome file*\
Un file di elenco denominato *filename. asm* viene inserito nella *directory* specificata. Questo formato di argomento è valido solo quando si compila un solo file di codice sorgente.

*directory* __\\__ di *filename. Extension*\
Un file di elenco denominato *filename. Extension* viene inserito nella *directory* specificata. Questo formato di argomento è valido solo quando si compila un solo file di codice sorgente.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà  >  file di output **C/C++**  >  **Output Files** .

1. Modificare la proprietà **output assembler** per impostare le opzioni **/fac** e **/FAS** per assembler, computer e codice sorgente. Modificare la proprietà **use Unicode for assembler Listing** per impostare l' **`/FAu`** opzione per l'output ANSI o UTF-8. Modificare il **percorso dell'elenco ASM** per impostare l' **`/Fa`** opzione per elencare il nome e il percorso del file.

L'impostazione dell' **output dell'assembler** e l' **utilizzo di Unicode per l'elenco delle proprietà dell'assembler** possono causare l' [avviso della riga di comando D9025](../../error-messages/tool-errors/command-line-warning-d9025.md). Per combinare queste opzioni nell'IDE, usare invece il campo **Opzioni aggiuntive** nella pagina delle proprietà della **riga di comando** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>. Per specificare **/FAU**, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A> .

## <a name="example"></a>Esempio

La seguente riga di comando produce un elenco combinato di codice sorgente e computer denominato *`HELLO.cod`* :

```cmd
CL /FAcs HELLO.CPP
```

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)\
[Specifica del percorso](specifying-the-pathname.md)
