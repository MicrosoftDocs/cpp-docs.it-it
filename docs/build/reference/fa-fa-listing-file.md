---
title: /FA, /Fa (File di listato) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.AssemblerListingLocation
- VC.Project.VCCLCompilerTool.ConfigureASMListing
- VC.Project.VCCLWCECompilerTool.AssemblerOutput
- VC.Project.VCCLCompilerTool.AssemblerListingLocation
- /fa
- VC.Project.VCCLCompilerTool.AssemblerOutput
- VC.Project.VCCLCompilerTool.UseUnicodeForAssemblerListing
dev_langs: C++
helpviewer_keywords:
- FA compiler option [C++]
- /FA compiler option [C++]
- -FA compiler option [C++]
- listing file type
- assembly-only listing
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e0cd569cf16e7b2a14faaa119eacaef0994d09dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fa-fa-listing-file"></a>/FA, /Fa (File di listato)
Crea un file di listato contenente codice assembler.  
  
## <a name="syntax"></a>Sintassi  
  
> **/FA**[**c**\][**s**\][**u**]  
> **/Fa**_pathname_  
  
## <a name="remarks"></a>Note  
Il `/FA` l'opzione del compilatore genera un file di listato dell'assembler per ogni unità di conversione nella compilazione, che corrisponde in genere a un file di origine C o C++. Per impostazione predefinita, solo assembler è incluso nel file di elenco, viene codificato come ANSI. Facoltativo `c`, `s`, e `u` argomenti `/FA` controllo computer se codice o codice sorgente vengono restituiti con l'elenco di assembler e indica se l'elenco è codificato come UTF-8.  
  
Per impostazione predefinita, ogni file di listato Ottiene lo stesso nome di base del file di origine e presenta un'estensione di asm. Quando il codice macchina è incluso con il `c` opzione, il file di listato con estensione Cod. È possibile modificare il nome e l'estensione del file di listato e la directory in cui viene creato utilizzando il `/Fa` opzione.  

### <a name="fa-arguments"></a>/FA argomenti  
none  
Solo la lingua dell'assembler è incluso nell'elenco.  
  
`c`  
Facoltativo. Include codice macchina nell'elenco.  
  
`s`  
Facoltativo. Contiene il codice sorgente nell'elenco.  
  
`u`Parametro facoltativo. Consente di codificare il file di elenco in formato UTF-8 e include un indicatore dell'ordine di byte. Per impostazione predefinita, il file è codificato in formato ANSI. Utilizzare `u` per creare un file di listato che venga visualizzato correttamente in qualsiasi sistema, o se si utilizza Unicode file di codice sorgente come input per il compilatore.  
  
Se entrambi `s` e `u` vengono specificati e, se un'origine dei file di codice Usa una codifica Unicode diversa da UTF-8, quindi le righe di codice nel file di ASM non vengano visualizzati correttamente.  
  
### <a name="fa-argument"></a>/Fa argomento  
none  
Un *origine*ASM file viene creato per ogni file di codice sorgente nella compilazione.  
  
*nome del file* un file di listato denominato *filename*asm viene inserito nella directory corrente. Ciò è valido solo durante la compilazione di un file di codice sorgente singolo.  
  
*nome file. estensione*  
Un file di listato denominato *nome file. estensione* viene inserito nella directory corrente. Ciò è valido solo durante la compilazione di un file di codice sorgente singolo.  
  
*Directory*\  
Un *file_di*file ASM viene creato e inserito nell'oggetto specificato *directory* per ogni file di codice sorgente nella compilazione. Si noti la barra rovesciata finale obbligatoria. Sono consentiti solo percorsi sul disco corrente.  
  
*directory*\\*filename* un file di listato denominato *filename*asm viene inserito nell'oggetto specificato *directory*. Ciò è valido solo durante la compilazione di un file di codice sorgente singolo.  
  
*directory*\\*nome file. estensione*  
Un file di listato denominato *nome file. estensione* viene inserito nell'oggetto specificato *directory*. Ciò è valido solo durante la compilazione di un file di codice sorgente singolo.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Aprire il **C/C++** cartella e selezionare il **i file di Output** pagina delle proprietà.  
  
3.  Modificare il **Output Assembler** proprietà per impostare il `/FAc` e `/FAs` le opzioni per l'assembler macchina e codice sorgente. Modificare il **utilizzare Unicode per Assembler elenco** proprietà per impostare il `/FAu` opzione per l'output di ANSI o UTF-8. Modificare il **posizione elenco ASM** per impostare il `/Fa` opzione per elencare il nome di file e il percorso.  
  
Si noti che l'impostazione entrambi **Output Assembler** e **utilizzare Unicode per Assembler elenco** possono causare proprietà [avviso della riga di comando D9025](../../error-messages/tool-errors/command-line-warning-d9025.md). Per combinare queste opzioni nell'IDE, utilizzare il **opzioni aggiuntive** campo il **riga di comando** invece pagina delle proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> o <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>. Per specificare `/FAu`, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="example"></a>Esempio  
La seguente riga di comando produce un'origine combinata e il listato di codice macchina denominato Hello. Cod:  
  
```  
CL /FAcs HELLO.CPP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)