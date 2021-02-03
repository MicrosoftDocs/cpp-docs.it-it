---
description: Altre informazioni su:/DELAY (impostazioni di importazione a caricamento ritardato)
title: /DELAY (Impostazioni dell'importazione a caricamento ritardato)
ms.date: 01/28/2021
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
ms.openlocfilehash: 0dd6aaaffd378afe4ca7d75180da869b2748d639
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522196"
---
# <a name="delay-delay-load-import-settings"></a>`/DELAY` (Impostazioni di importazione a caricamento ritardato)

Opzioni del linker per controllare il caricamento ritardato delle dll in fase di esecuzione.

## <a name="syntax"></a>Sintassi

> **`/DELAY:UNLOAD`**\
> **`/DELAY:NOBIND`**

## <a name="remarks"></a>Osservazioni

L' **`/DELAY`** opzione controlla il [caricamento ritardato](linker-support-for-delay-loaded-dlls.md) delle dll:

- Il **`/DELAY:UNLOAD`** qualificatore indica alla funzione di supporto per il caricamento ritardato di supportare lo scaricamento esplicito della dll. Viene ripristinato il formato originale della tabella di indirizzi di importazione. Ciò rende non validi i puntatori alla tabella e ne provoca la riscrittura.

   Se non si seleziona **`/DELAY:UNLOAD`** , qualsiasi chiamata a [`__FUnloadDelayLoadedDLL`](linker-support-for-delay-loaded-dlls.md#explicitly-unload-a-delay-loaded-dll) avrà esito negativo.

- Il **`/DELAY:NOBIND`** qualificatore indica al linker di non includere una IAT associabile nell'immagine finale. L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato. L'immagine risultante non può essere associata in modo statico. (Le immagini con IATs associabili possono essere associate in modo statico prima dell'esecuzione). Per ulteriori informazioni, vedere [`/BIND`](bind.md) .

   Se la DLL è associata, la funzione helper tenta di utilizzare le informazioni relative al limite anziché chiamare [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) su ognuna delle importazioni a cui si fa riferimento. Se il timestamp o l'indirizzo preferito non corrispondono a quelli nella DLL caricata, la funzione di supporto presuppone che la tabella IAT associata non sia aggiornata. Continua come se la tabella IAT associata non esiste.

   **`/DELAY:NOBIND`** fa in modo che l'immagine del programma sia più grande, ma possa velocizzare il tempo di caricamento della DLL. Se non si intende mai associare la DLL, **`/DELAY:NOBIND`** impedisce la generazione della tabella IAT associata.

Per specificare le dll per ritardare il caricamento, usare l' [`/DELAYLOAD`](delayload-delay-load-import.md) opzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni, vedere [impostare le proprietà di compilazione e compilatore C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà avanzate del **linker** proprietà di configurazione  >   .

1. Modificare la proprietà **dll a caricamento ritardato** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## <a name="see-also"></a>Vedi anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)
