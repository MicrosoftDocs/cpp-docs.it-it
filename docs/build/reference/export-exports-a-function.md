---
title: /EXPORT (Esporta una funzione)
ms.date: 09/05/2018
f1_keywords:
- VC.Project.VCLinkerTool.ExportFunctions
- /export
helpviewer_keywords:
- /EXPORT linker option
- EXPORT linker option
- -EXPORT linker option
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
ms.openlocfilehash: 7c4f4621bbccd4285bcf4eca07d2544d53d14f6c
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57819854"
---
# <a name="export-exports-a-function"></a>/EXPORT (Esporta una funzione)

Esporta una funzione dal nome o un numero ordinale oppure i dati, dal programma.

## <a name="syntax"></a>Sintassi

> **/EXPORT:**<em>entryname</em>[**,\@**<em>ordinal</em>[**,NONAME**]][**,DATA**]

## <a name="remarks"></a>Note

Il **/Export** opzione consente di specificare un funzione o un elemento dati da esportare dal programma in modo che altre applicazioni possono chiamare la funzione o utilizzare i dati. Le esportazioni sono in genere definite in una DLL.

Il *entryname* è il nome dell'elemento dati o funzione deve essere utilizzato dal programma chiamante. *ordinale* specifica un indice nella tabella di esportazioni compresi nell'intervallo da 1 a 65.535; se non si specifica *ordinale*, collegamento assegna uno. Il **NONAME** parola chiave consente di esportare la funzione solo come un numero ordinale, senza un' *entryname*.

Il **dati** parola chiave specifica che l'elemento esportato è un elemento di dati. L'elemento di dati del programma client deve essere dichiarata usando **extern declspec**.

Sono disponibili quattro metodi per l'esportazione di una definizione, elencati in ordine di preferenza di utilizzo:

1. [dllexport](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un' [esportazioni](exports.md) istruzione in un file def

1. Una specifica dell'opzione /EXPORT in un comando LINK

1. Oggetto [commento](../../preprocessor/comment-c-cpp.md) direttiva nel codice sorgente, del form `#pragma comment(linker, "/export: definition ")`.

Tutti questi metodi possono essere usati nello stesso programma. Quando LINK compila un programma che contiene esportazioni, crea anche una libreria di importazione, a meno che non viene usato un file. exp nella compilazione.

COLLEGAMENTO Usa decorati form degli identificatori. Il compilatore decora un identificatore quando crea il file con estensione obj. Se *entryname* è specificato per il linker nel relativo non decorato formano (così come appare nel codice sorgente), un tentativo di corrispondere al nome. Se non trova una corrispondenza univoca, collegamento genera un messaggio di errore. Usare la [DUMPBIN](dumpbin-reference.md) dello strumento per ottenere il [nome decorato](decorated-names.md) sotto forma di identificatore quando è necessario specificarlo al linker.

> [!NOTE]
> Non si specifica il formato decorato di C identificatori dichiarati `__cdecl` o `__stdcall`.

Se è necessario esportare un nome di funzione non decorati e avere esportazioni diversi a seconda della configurazione di compilazione (ad esempio, in compilazioni a 32 o 64 bit), è possibile usare i file DEF diversi per ogni configurazione. (Per il preprocessore condizionale non sono consentito nel file DEF.) In alternativa, è possibile usare una `#pragma comment` direttiva prima di una dichiarazione di funzione, come illustrato di seguito, dove `PlainFuncName` è il nome non decorato, e `_PlainFuncName@4` è il nome decorato della funzione:

```cpp
#pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
BOOL CALLBACK PlainFuncName( Things * lpParams)
```

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Inserire l'opzione nella **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
