---
title: /FA, /Fa (File di listato)
ms.date: 11/04/2016
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
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
ms.openlocfilehash: 6bb5e18c5a174c9e48b253031daad195e6132375
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507302"
---
# <a name="fa-fa-listing-file"></a>/FA, /Fa (File di listato)

Crea un file di listato contenente codice assembler.

## <a name="syntax"></a>Sintassi

> **/FA**[**c**\][**s**\][**u**] **/Fa**_pathname_

## <a name="remarks"></a>Note

Il **/FA** opzione del compilatore genera un file di listato dell'assembler per ogni unità di conversione nella compilazione, che corrisponde in genere a un file di origine C o C++. Per impostazione predefinita, solo assembler è incluso nel file di listato, che viene codificato come ANSI. L'opzione facoltativa **c**, **s**, e **u** argomenti **/FA** controllo del computer se codice o codice sorgente vengono restituiti con l'assembler inclusione in elenco, e indica se l'elenco viene codificato come UTF-8.

Per impostazione predefinita, ogni file di listato Ottiene lo stesso nome di base del file di origine e presenta un'estensione asm. Quando è incluso codice macchina tramite il **c** opzione, il file di listato ha un'estensione Cod. È possibile modificare il nome e l'estensione di file di listato e la directory in cui è stato creato utilizzando il **/Fa** opzione.

### <a name="fa-arguments"></a>/FA argomenti

none<br/>
Solo la lingua dell'assembler è incluso nell'elenco.

**c**<br/>
Facoltativo. Include il codice macchina nell'elenco.

**s**<br/>
Facoltativo. Include il codice sorgente nell'elenco.

**u**<br/>
Facoltativo. Consente di codificare il file di elenco in formato UTF-8 e include un indicatore dell'ordine dei byte. Per impostazione predefinita, il file è codificato in formato ANSI. Usare `u` per creare un file di elenco che consente di visualizzare correttamente in qualsiasi sistema, o se si usa Unicode file del codice sorgente come input al compilatore.

Se entrambe **s** e **u** vengono specificate e, se un'origine di file di codice Usa una codifica Unicode diverse da UTF-8, quindi le righe di codice nel file con estensione asm non vengano visualizzati correttamente.

### <a name="fa-argument"></a>/Fa argomento

none<br/>
Uno *origine*ASM file viene creato per ogni file di codice sorgente nella compilazione.

*filename*<br/>
Un file di listato denominato *filename*asm viene inserito nella directory corrente. Ciò è valido solo durante la compilazione di un file di codice di origine singolo.

*nome file. estensione*<br/>
Un file di listato denominato *nome file. estensione* viene inserito nella directory corrente. Ciò è valido solo durante la compilazione di un file di codice di origine singolo.

*Directory*__\\__<br/>
Uno *source_file*viene creato e inserito nell'oggetto specificato nel file ASM *directory* per ogni file di codice sorgente nella compilazione. Si noti la barra rovesciata finale obbligatoria. Sono consentiti solo i percorsi sul disco corrente.

*directory*__\\__*nomefile*<br/>
Un file di listato denominato *nomefile*asm viene inserito nell'oggetto specificato *directory*. Ciò è valido solo durante la compilazione di un file di codice di origine singolo.

*directory*__\\__*filename. Extension*<br/>
Un file di listato denominato *filename. Extension* viene inserito nell'oggetto specificato *directory*. Ciò è valido solo durante la compilazione di un file di codice di origine singolo.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **i file di Output** pagina delle proprietà.

1. Modificare il **Output Assembler** per impostare il **/FAc** e **/FAs** opzioni per l'assembler, macchina e codice sorgente. Modificare il **Usa Unicode per Assembler listato** proprietà da impostare il **l'opzione /FAu** opzione per l'output UTF-8 o ANSI. Modificare il **percorso elenco ASM** per impostare le **/Fa** opzione per elencare il nome di file e percorso.

Si noti che l'impostazione entrambi **Output Assembler** e **utilizzare Unicode per Assembler listato** le proprietà possono causare [avviso della riga di comando D9025](../../error-messages/tool-errors/command-line-warning-d9025.md). Per combinare queste opzioni nell'IDE, usare il **opzioni aggiuntive** campo le **della riga di comando** invece pagina delle proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>. Per specificare **l'opzione /FAu**, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="example"></a>Esempio

Riga di comando seguente produce un'origine combinata e listato di codice macchina denominato Hello. Cod:

```cmd
CL /FAcs HELLO.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)
