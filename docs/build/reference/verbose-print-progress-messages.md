---
title: /VERBOSE (stampa di messaggi sullo stato)
ms.date: 11/04/2016
f1_keywords:
- /verbose
- VC.Project.VCLinkerTool.ShowProgress
helpviewer_keywords:
- -VERBOSE linker option
- linking [C++], session progress information
- Print Progress Messages linker option
- linker [C++], output dependency information
- /VERBOSE linker option
- dependencies [C++], dependency information in linker output
- VERBOSE linker option
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
ms.openlocfilehash: 41a8ee835a65a7c9a17df9bb9c155267cae29baf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575617"
---
# <a name="verbose-print-progress-messages"></a>/VERBOSE (stampa di messaggi sullo stato)

```
/VERBOSE[:{ICF|INCR|LIB|REF|SAFESEH|UNUSEDLIBS}]
```

## <a name="remarks"></a>Note

Il linker invia le informazioni sullo stato di avanzamento della sessione di collegamento per il **Output** finestra. Nella riga di comando, le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.

|Opzione|Descrizione|
|------------|-----------------|
|/VERBOSE|Visualizza i dettagli sul processo di collegamento.|
|/VERBOSE: ICF|Visualizzare le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ICF](../../build/reference/opt-optimizations.md).|
|/VERBOSE: INCR|Visualizza informazioni sul processo di collegamento incrementale.|
|/VERBOSE: LIB|Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br /><br /> Le informazioni visualizzate includono il processo di ricerca libreria ed elenca ogni nome di oggetto e di libreria (con il percorso completo), il simbolo in fase di risoluzione della libreria di e un elenco di oggetti che fanno riferimento al simbolo.|
|/VERBOSE: REF|Visualizza le informazioni sull'attività del linker risultante dall'utilizzo di [/OPT: ref](../../build/reference/opt-optimizations.md).|
|/VERBOSE: SAFESEH|Consente di visualizzare informazioni sui moduli che non sono compatibili con quando gestione sicura delle eccezioni [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md) non è specificato.|
|/VERBOSE:UNUSEDLIBS|Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata.|

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Espandere la **Linker** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Aggiungere l'opzione per la **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)