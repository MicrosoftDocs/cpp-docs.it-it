---
title: /Yl (Inserisce il riferimento PCH per la libreria di debug)
ms.date: 01/29/2018
f1_keywords:
- /yl
helpviewer_keywords:
- -Yl compiler option [C++]
- Yl compiler option [C++]
- /Yl compiler option [C++]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
ms.openlocfilehash: 816ba66c94e616407a8891cd149a41e44e29358d
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825717"
---
# <a name="yl-inject-pch-reference-for-debug-library"></a>/Yl (Inserisce il riferimento PCH per la libreria di debug)

L'opzione **/YL** genera un simbolo univoco in un file di intestazione precompilato e un riferimento a questo simbolo viene inserito in tutti i file oggetto che usano l'intestazione precompilata.

## <a name="syntax"></a>Sintassi

>**/YL**\
>**/Yl**_Nome_ /YL\
>**YL (**

### <a name="arguments"></a>Argomenti

*name*<br/>
Nome facoltativo utilizzato come parte del simbolo univoco.

*\-*<br/>
Un trattino (-) Disabilita in modo esplicito l'opzione del compilatore **/YL** .

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/YL** crea una definizione di simbolo univoca in un file di intestazione precompilato creato con l'opzione [/YC](yc-create-precompiled-header-file.md) . I riferimenti a questo simbolo vengono inseriti automaticamente in tutti i file che includono l'intestazione precompilata usando l'opzione del compilatore [/Yu](yu-use-precompiled-header-file.md) . L'opzione **/YL** è abilitata per impostazione predefinita quando si utilizza **/YC** per creare un file di intestazione precompilato.

L'opzione_nome_ **/YL**viene utilizzata per creare un simbolo identificabile nel file di intestazione precompilata. Il compilatore usa l'argomento *Name* come parte del nome decorato del simbolo creato, simile a `__@@_PchSym_@00@...@name`, dove i puntini di sospensione (...) rappresentano una stringa di caratteri univoca generata dal compilatore. Se l'argomento *Name* viene omesso, il compilatore genera automaticamente un nome di simbolo. In genere, non è necessario conoscerne il nome. Tuttavia, quando il progetto usa più di un file di intestazione precompilata, l'opzione del_nome_ **/YL**può essere utile per determinare i file oggetto che usano l'intestazione precompilata. È possibile utilizzare il *nome* come stringa di ricerca per trovare il riferimento al simbolo in un file dump.

**/YL-** Disabilita il comportamento predefinito e non inserisce un simbolo di identificazione nel file di intestazione precompilata. I file compilati che includono questa intestazione precompilata non ottengono un riferimento a un simbolo comune.

Quando **/YC** viene omesso, qualsiasi opzione **/YL** non ha alcun effetto, ma se specificato deve corrispondere a qualsiasi opzione di **/YL** passata quando viene specificato **/YC** .

Se si utilizzano le opzioni **/YL-**, **/YC** e [/Z7](z7-zi-zi-debug-information-format.md) per compilare un file di intestazione precompilato, le informazioni di debug vengono archiviate nel file oggetto per il file di origine utilizzato per creare l'intestazione precompilata, anziché un file con estensione PDB separato. Se il file oggetto viene quindi reso parte di una libreria, è possibile che si verifichino errori [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) o avvisi [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) nelle compilazioni che utilizzano questa libreria e il file di intestazione precompilato, se il file di origine utilizzato per creare il file di intestazione precompilata non definisce alcun simbolo. Il linker può escludere il file oggetto dal collegamento, insieme alle informazioni di debug associate, quando nel client di libreria non viene fatto riferimento al file oggetto. Per risolvere il problema, specificare **/YL** (o rimuovere l'opzione **/YL-** ) quando si usa **/YC** per creare il file di intestazione precompilata. In questo modo si garantisce che il file oggetto della raccolta che contiene le informazioni di debug venga collegato alla compilazione.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [/Y (Intestazioni precompilate)](y-precompiled-headers.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** > proprietà della**riga di comando** di**c/C++** > .

1. Aggiungere l'opzione del compilatore **/YL**_Name_ nella casella **Opzioni aggiuntive** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
