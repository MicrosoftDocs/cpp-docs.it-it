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
ms.openlocfilehash: 92e47836e0fdae077defa0fe35b515ab4ca20a66
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810289"
---
# <a name="yl-inject-pch-reference-for-debug-library"></a>/Yl (Inserisce il riferimento PCH per la libreria di debug)

Il **/Yl** opzione genera un simbolo univoco in un file di intestazione precompilata e viene inserito un riferimento a questo simbolo in tutti i file di oggetto che usano l'intestazione precompilata.

## <a name="syntax"></a>Sintassi

>**/Yl**
> **/Yl**_name_
> **/Yl-**

### <a name="arguments"></a>Argomenti

*name*<br/>
Nome facoltativo usato come parte del simbolo univoco.

*\-*<br/>
Disabilita in modo esplicito un trattino (-) di **/Yl** opzione del compilatore.

## <a name="remarks"></a>Note

Il **/Yl** l'opzione del compilatore crea una definizione del simbolo univoco in un file di intestazione precompilato creato con il [/Yc](yc-create-precompiled-header-file.md) opzione. Riferimenti a questo simbolo vengono inseriti automaticamente in tutti i file che includono l'intestazione precompilata usando il [/Yu](yu-use-precompiled-header-file.md) opzione del compilatore. Il **/Yl** opzione è abilitata per impostazione predefinita quando **/Yc** viene usato per creare un file di intestazione precompilato.

Il **/Yl**_nome_ opzione viene usata per creare un simbolo identificabile nel file di intestazione precompilata. Il compilatore Usa la *name* argomento come parte del nome decorato simbolo viene creato, simile a `__@@_PchSym_@00@...@name`, in cui stringa di caratteri rappresenta i puntini di sospensione (...) generato dal compilatore un valore univoco. Se il *nome* viene omesso, il compilatore genera automaticamente un nome di simbolo. In genere, non occorre conoscere il nome del simbolo. Tuttavia, quando il progetto usa più di un file di intestazione precompilata, il **/Yl**_nome_ opzione può essere utile per determinare quale oggetto file di intestazione precompilata da usare. È possibile usare *nome* come una stringa di ricerca per trovare il riferimento al simbolo in un file di dump.

**/Yl-** disabilita il comportamento predefinito e non inserire un simbolo di identificazione nel file di intestazione precompilata. I file compilati che includono questa intestazione precompilata non si ottengono un riferimento di simbolo comune.

Quando **/Yc** non viene specificato, qualsiasi **/Yl** opzione non ha alcun effetto, ma se specificato deve corrispondere a qualsiasi **/Yl** quando passare l'opzione **/Yc** è specificato.

Se si usa **/Yl-**, **/Yc** e [/Z7](z7-zi-zi-debug-information-format.md) opzioni per creare un file di intestazione precompilata, le informazioni di debug viene archiviato nel file oggetto per il file di origine utilizzato per creare il intestazione precompilata, anziché un file separato con estensione pdb. Se questo file di oggetto viene quindi reso parte di una libreria [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) errori o [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) avvisi possono verificarsi nelle build che usano la libreria e il file di intestazione precompilata, se il file di origine utilizzato per creare il file di intestazione precompilata non definisce alcun simbolo. Il linker può escludere il file dell'oggetto dal collegamento, insieme alle informazioni di debug associati, quando si esegue alcuna operazione nel file oggetto fa riferimento il client di libreria. Per risolvere questo problema, specificare **/Yl** (o rimuovere le **/Yl-** opzione) quando si utilizza **/Yc** per creare il file di intestazione precompilata. Ciò garantisce che il file oggetto dalla raccolta che contiene le informazioni di debug Ottiene collegato nella compilazione.

Per altre informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](y-precompiled-headers.md)

- [File di intestazione precompilata](../creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Aggiungere il **/Yl**_name_ opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
