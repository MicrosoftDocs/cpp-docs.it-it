---
title: -Yl (inserisce il riferimento PCH per la libreria di Debug) | Documenti Microsoft
ms.custom: ''
ms.date: 01/29/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /yl
dev_langs:
- C++
helpviewer_keywords:
- -Yl compiler option [C++]
- Yl compiler option [C++]
- /Yl compiler option [C++]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a73e79cd50343292ae63dfa831a7638d6444fc64
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378470"
---
# <a name="yl-inject-pch-reference-for-debug-library"></a>/Yl (Inserisce il riferimento PCH per la libreria di debug)

Il **/Yl** opzione genera un simbolo univoco in un file di intestazione precompilata e un riferimento a questo simbolo viene inserito in tutti i file di oggetti che utilizzano l'intestazione precompilata.

## <a name="syntax"></a>Sintassi

>**/Yl**  
>**/Yl**_nome_  
>**/Yl-**  

### <a name="arguments"></a>Argomenti

*name*  
Nome facoltativo utilizzato come parte del simbolo univoco.

*\-*  
Disabilita in modo esplicito un trattino (-) le **/Yl** l'opzione del compilatore.

## <a name="remarks"></a>Note

Il **/Yl** l'opzione del compilatore crea una definizione di simbolo univoco in un file di intestazione precompilato creato utilizzando il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione. Riferimenti al simbolo vengono inseriti automaticamente in tutti i file che includono l'intestazione precompilata usando il [/Yu](../../build/reference/yu-use-precompiled-header-file.md) l'opzione del compilatore. Il **/Yl** opzione è abilitata per impostazione predefinita quando **/Yc** viene utilizzato per creare un file di intestazione precompilata.

Il **/Yl**_nome_ opzione viene utilizzata per creare un simbolo identificabile nel file di intestazione precompilata. Il compilatore utilizza il *nome* argomento come parte del nome decorato simbolo viene creato, simile a \_ \_ @@ \_PchSym\_@00@... @ *nome*, in cui stringa di caratteri rappresenta i puntini di sospensione (…) generato dal compilatore univoco. Se il *nome* viene omesso, il compilatore genera un nome di simbolo automaticamente. In genere, non è necessario conoscere il nome del simbolo. Tuttavia, quando il progetto utilizza più di un file di intestazione precompilata, il **/Yl**_nome_ opzione può rivelarsi utile per determinare quale oggetto file di utilizzo di intestazione precompilata. È possibile utilizzare *nome* come una stringa di ricerca per trovare il riferimento al simbolo in un file di dump.

**/Yl-** disabilita il comportamento predefinito e non applicare un simbolo di identificazione nel file di intestazione precompilata. File compilati che includono questa intestazione precompilata non si ottengono un riferimento a simbolo comune.

Quando **/Yc** viene omesso, qualsiasi **/Yl** opzione non ha alcun effetto, ma se è specificato deve corrispondere a qualsiasi **/Yl** passare quando l'opzione **/Yc** è specificato.

Se si utilizza **/Yl-**, **/Yc** e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) opzioni per compilare un file di intestazione precompilata, le informazioni di debug viene archiviato nel file oggetto per il file di origine utilizzato per creare il intestazione precompilata, anziché un file con estensione pdb separato. Se il file di questo oggetto viene quindi effettuato parte di una libreria, [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) errori o [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) avvisi possono verificarsi nelle build che usano la libreria e file di intestazione precompilata, se il file di origine utilizzato per creare il file di intestazione precompilata non definisce i simboli. Il linker può escludere il file oggetto dal collegamento, con le informazioni di debug associate, quando si esegue alcuna operazione nel file oggetto a cui fa riferimento nel client di libreria. Per risolvere questo problema, specificare **/Yl** (o rimuovere il **/Yl-** opzione) quando si utilizza **/Yc** per creare il file di intestazione precompilata. In questo modo si garantisce che il file oggetto dalla raccolta che contiene le informazioni di debug Ottiene collegato nella compilazione.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Aggiungere il **/Yl**_nome_ opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
