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
ms.openlocfilehash: a55b2a4ce72de644fe426894ab389f62bd29b204
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232690"
---
# <a name="export-exports-a-function"></a>/EXPORT (Esporta una funzione)

Esporta una funzione in base al nome, al numero ordinale o ai dati dal programma.

## <a name="syntax"></a>Sintassi

> **/Export:**<em>entryname</em>[**, \@ **<em>ordinale</em>[**, NoName**]] [**, dati**]

## <a name="remarks"></a>Osservazioni

L'opzione **/Export** specifica una funzione o un elemento dati da esportare dal programma in modo che altri programmi possano chiamare la funzione o usare i dati. Le esportazioni vengono in genere definite in una DLL.

*Entryname* è il nome della funzione o dell'elemento di dati che deve essere utilizzato dal programma chiamante. *ordinale* specifica un indice nella tabella exports compreso nell'intervallo da 1 a 65.535; Se non si specifica un *numero ordinale*, il collegamento ne assegna uno. La parola chiave **NoName** Esporta la funzione solo come ordinale, senza *entryname*.

La parola chiave **Data** specifica che l'elemento esportato è un elemento di dati. L'elemento di dati nel programma client deve essere dichiarato utilizzando **extern __declspec (dllimport)**.

Sono disponibili quattro metodi per l'esportazione di una definizione, elencati nell'ordine di utilizzo consigliato:

1. [__declspec (dllexport)](../../cpp/dllexport-dllimport.md) nel codice sorgente

1. Un'istruzione [exports](exports.md) in un file con estensione def

1. Una specifica /EXPORT in un comando LINK

1. Una direttiva [Comment](../../preprocessor/comment-c-cpp.md) nel codice sorgente, nel formato `#pragma comment(linker, "/export: definition ")` .

Tutti questi metodi possono essere usati nello stesso programma. Quando il collegamento compila un programma che contiene esportazioni, viene creata anche una libreria di importazione, a meno che nella compilazione non venga usato un file con estensione EXP.

Il collegamento utilizza forme decorate di identificatori. Il compilatore decora un identificatore quando crea il file obj. Se *entryname* viene specificato nel linker nel formato non decorato (come appare nel codice sorgente), il collegamento tenta di trovare la corrispondenza con il nome. Se non è possibile trovare una corrispondenza univoca, il collegamento genera un messaggio di errore. Utilizzare lo strumento [dumpbin](dumpbin-reference.md) per ottenere il formato di [nome decorato](decorated-names.md) di un identificatore quando è necessario specificarlo nel linker.

> [!NOTE]
> Non specificare il formato decorato di identificatori C dichiarati **`__cdecl`** o **`__stdcall`** .

Se è necessario esportare un nome di funzione non decorato e si hanno esportazioni diverse a seconda della configurazione della build, ad esempio in compilazioni a 32 bit o a 64 bit, è possibile usare file DEF diversi per ogni configurazione. (Le direttive condizionali per il preprocessore non sono consentite nei file DEF). In alternativa, è possibile usare una `#pragma comment` direttiva prima di una dichiarazione di funzione come illustrato di seguito, dove `PlainFuncName` è il nome non decorato e `_PlainFuncName@4` è il nome decorato della funzione:

```cpp
#pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
BOOL CALLBACK PlainFuncName( Things * lpParams)
```

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà della riga di comando del**linker**proprietà di configurazione  >  **Command Line** .

1. Immettere l'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
