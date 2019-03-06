---
title: /INCREMENTAL (collegamento incrementale)
ms.date: 11/04/2016
f1_keywords:
- /incremental
- VC.Project.VCLinkerTool.LinkIncremental
helpviewer_keywords:
- /INCREMENTAL linker option
- -INCREMENTAL linker option
- INCREMENTAL linker option
- link incrementally option
- LINK tool [C++], options for full linking
- incremental linking
ms.assetid: 135656ff-94fa-4ad4-a613-22e1a2a5d16b
ms.openlocfilehash: 60cec41173afc9955bddf9df0bd6796b5df6285c
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414083"
---
# <a name="incremental-link-incrementally"></a>/INCREMENTAL (collegamento incrementale)

```
/INCREMENTAL[:NO]
```

## <a name="remarks"></a>Note

Controlla il modo in cui il linker gestisce il collegamento incrementale.

Per impostazione predefinita il linker viene eseguito in modalità incrementale. Per eseguire l'override di un collegamento incrementale predefinito, specificare /INCREMENTAL:NO.

Un programma collegato in modo incrementale è funzionalmente equivalente a un programma che viene collegato in modo non incrementale. Tuttavia, poiché è stato preparato per collegamenti incrementali successivi, una libreria statica dall'eseguibile in modo incrementale collegata o file di libreria a collegamento dinamico:

- È maggiore di un programma collegato in modo non incrementale a causa di spaziatura interna del codice e i dati. Spaziatura interna consente al linker di aumentare le dimensioni dei dati e funzioni senza ricreare il file.

- È possibile che contengano thunk dei salti per gestire la rilocazione di funzioni in nuovi indirizzi.

   > [!NOTE]
   > Per assicurarsi che la build di rilascio finale non contenga spaziatura interna o thunk, collegare il programma in modo non incrementale.

Per eseguire un collegamento incrementale indipendentemente dall'impostazione predefinita, specificare /INCREMENTAL. Quando questa opzione è selezionata, il linker genera un avviso se il collegamento incrementale non e quindi il programma viene collegato in modo non incrementale. Alcune opzioni e situazioni determinano l'override di /INCREMENTAL.

È possibile collegare in modo incrementale la maggior parte dei programmi. Alcune modifiche sono tuttavia eccessive e alcune opzioni sono incompatibili con il collegamento incrementale. LINK esegue un collegamento completo se viene specificata una delle opzioni seguenti:

- Collegamento incrementale non selezionato (/INCREMENTAL:NO)

- /OPT:REF selezionato

- /OPT:ICF selezionato

- /OPT:LBR selezionato

- /ORDER selezionato

/INCREMENTAL è implicito quando [/debug](../../build/reference/debug-generate-debug-info.md) è specificato.

LINK esegue un collegamento completo qualora si verifichi una delle situazioni seguenti:

- Il file di stato incrementale con estensione ilk è mancante. (LINK crea un nuovo file ilk in preparazione del collegamento incrementale successivo).

- Non si dispone dell'autorizzazione di scrittura per il file ilk. (LINK ignora il file ilk ed i collegamenti in modo non incrementale.)

- Il file di output exe o dll è mancante.

- Il timestamp del file ilk, exe o dll è cambiato.

- Un'opzione LINK è cambiata. In caso di modifica nelle build, la maggior parte delle opzioni LINK causa un collegamento completo.

- Un file oggetto (OBJ) viene aggiunto o omesso.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare la pagina delle proprietà **Generale** .

1. Modificare il **Abilita collegamento incrementale** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkIncremental%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
