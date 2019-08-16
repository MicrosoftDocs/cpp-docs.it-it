---
title: /DELAY (Impostazioni dell'importazione a caricamento ritardato)
ms.date: 11/04/2016
f1_keywords:
- /delay
- VC.Project.VCLinkerTool.DelayNoBind
- VC.Project.VCLinkerTool.SupportUnloadOfDelayLoadedDLL
- VC.Project.VCLinkerTool.DelayUnload
helpviewer_keywords:
- delayed loading of DLLs, /DELAY option
- DELAY linker option
- /DELAY linker option
- -DELAY linker option
ms.assetid: 9334b332-cc58-4dae-b10f-a4c75972d50c
ms.openlocfilehash: ef6f5f768cf86f470d1322fa2a7bee6db794c2ef
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493001"
---
# <a name="delay-delay-load-import-settings"></a>/DELAY (Impostazioni dell'importazione a caricamento ritardato)

```
/DELAY:UNLOAD
/DELAY:NOBIND
```

## <a name="remarks"></a>Note

L'opzione/DELAY controlla il [caricamento ritardato](linker-support-for-delay-loaded-dlls.md) delle dll:

- Il qualificatore UNLOAD indica alla funzione dell'helper di caricamento ritardato di supportare lo scaricamento esplicito della DLL. Viene ripristinato il formato originale della tabella di indirizzi di importazione. Ciò rende non validi i puntatori alla tabella e ne provoca la riscrittura.

   Se non si seleziona UNLOAD, le chiamate a [FUnloadDelayLoadedDLL](explicitly-unloading-a-delay-loaded-dll.md) avranno esito negativo.

- Il qualificatore NOBIND indica al linker di non includere una tabella di indirizzi di importazione nell'immagine finale. L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato. L'immagine risultante non può essere associata in modo statico. È possibile che le immagini con tabelle di indirizzi di importazione associabili siano associate in modo statico prima dell'esecuzione. Vedere [/Bind](bind.md).

   Se la DLL è associata, la funzione di supporto tenterà di usare le informazioni riportate anziché chiamare [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) in ogni importazione a cui si fa riferimento. Se il timestamp o l'indirizzo preferito non corrisponde ai valori presenti nel file DLL caricato, la funzione dell'helper presupporrà che la tabella di indirizzi di importazione sia obsoleta e procederà come se la tabella di indirizzi di importazione non esistesse.

   NOBIND provoca la creazione di immagini di programma di dimensioni superiori, ma può velocizzare il tempo di caricamento del file DLL. Se non si prevede di associare il file DLL, NOBIND impedirà la generazione della tabella di indirizzi di importazione associata.

Per specificare le dll per ritardare il caricamento, usare l'opzione [/DELAYLOAD](delayload-delay-load-import.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni, vedere [impostare C++ le proprietà del compilatore e della compilazione in Visual Studio](../working-with-project-properties.md).

1. Espandere **proprietà di configurazione**, **linker**, quindi selezionare **Avanzate**.

1. Modificare la proprietà **dll a caricamento ritardato** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
