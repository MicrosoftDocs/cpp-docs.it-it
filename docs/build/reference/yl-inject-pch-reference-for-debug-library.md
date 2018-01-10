---
title: -Yl (inserisce il riferimento PCH per la libreria di Debug) | Documenti Microsoft
ms.custom: 
ms.date: 12/04/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /yl
dev_langs: C++
helpviewer_keywords:
- -Yl compiler option [C++]
- Yl compiler option [C++]
- /Yl compiler option [C++]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6e777977f6d869d2bbc28d980f6445851e54396b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="yl-inject-pch-reference-for-debug-library"></a>/Yl (Inserisce il riferimento PCH per la libreria di debug)

Il **/Yl** opzione Crea un simbolo comune per un file di intestazione precompilata e inserisce i riferimenti al simbolo in tutti i file che utilizzano l'intestazione precompilata. Questo rende disponibili le informazioni di tipo completo per i simboli di intestazione precompilata per il debugger in tutti i file che utilizzano l'intestazione precompilata. Questa opzione è attivata per impostazione predefinita. Utilizzo di questa opzione può impedire gli errori del linker causato dalla mancanza di informazioni di debug nelle librerie collegate che utilizzano intestazioni precompilate.

## <a name="syntax"></a>Sintassi

>**/Yl**  
>**/Yl**_nome_  
>**/Yl-**  

### <a name="arguments"></a>Argomenti

*name*  
Nome facoltativo utilizzato per definire un simbolo per i file archiviati e di cui viene fatto riferimento nell'oggetto che definiscono o si utilizzano l'intestazione precompilata.

*\-*  
Disabilita in modo esplicito un trattino (-) le **/Yl** l'opzione del compilatore.

## <a name="remarks"></a>Note

Il **/Yl** opzione consente al debugger di ottenere informazioni complete sui tipi in un'intestazione precompilata in ogni file che include l'intestazione precompilata. Questa opzione Crea un nome di simbolo interno, inserisce la definizione del simbolo nel file oggetto utilizzato per creare l'intestazione precompilata per il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione e inserisce un riferimento al simbolo contenuto in tutti i file che includono precompilata intestazione usando il [/Yu](../../build/reference/yu-use-precompiled-header-file.md) l'opzione del compilatore. Poiché tutti i file di origine che utilizzano l'intestazione precompilata fare riferimento al simbolo denominato, il linker collega sempre il file di oggetto che definisce il simbolo e l'intestazione precompilata associata informazioni di debug. Questa opzione è attivata per impostazione predefinita.

Il **/Yl**_nome_ opzione viene utilizzata per creare in modo esplicito il simbolo di identificazione per il file di intestazione precompilata. Il compilatore utilizza il *nome* argomento per creare un simbolo simile a \_ \_ @@ \_PchSym\_@00@... @*nome* , dove la stringa di caratteri rappresenta generate dal linker puntini di sospensione (...). Se viene omesso, il compilatore genera automaticamente un nome di simbolo.

**/Yl-** disabilita il comportamento predefinito e non è stato impostato un riferimento a un simbolo identificazione nei file oggetto che includono l'intestazione precompilata. Questa opzione potrebbe essere richiesta per i file compilati senza presente il file di intestazione precompilata.

Se si utilizza **/Yl-**, **/Yc** e [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md) per creare una raccolta, il compilatore crea un file di intestazione precompilata che contiene le informazioni di debug vengono archiviate in un oggetto file anziché di un file con estensione pdb. [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) errori o [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) avvisi possono verificarsi nelle build che utilizzano la libreria e l'intestazione precompilata, se il file di origine utilizzato per creare l'intestazione precompilata non definisce i simboli. Il linker può escludere questo file di oggetto libreria dal collegamento, insieme alle informazioni di debug di intestazione precompilata associato, quando si esegue alcuna operazione nel file oggetto a cui fa riferimento nel client di libreria. Per risolvere il problema, specificare **/Yl** quando si utilizza **/Yc** per creare un file di intestazione precompilata e **/Yu** per utilizzarlo. Questo assicura che il file di oggetto che contiene le informazioni di debug è incluso nella compilazione.

Per ulteriori informazioni sulle intestazioni precompilate, vedere:

- [/Y (intestazioni precompilate)](../../build/reference/y-precompiled-headers.md)

- [Creazione di file di intestazione precompilata](../../build/reference/creating-precompiled-header-files.md)

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **riga di comando** pagina delle proprietà di **C/C++** cartella.

1. Aggiungere il **/Yl**_nome_ opzione del compilatore nella **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
