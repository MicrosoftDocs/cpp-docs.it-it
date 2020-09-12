---
title: /DRIVER (Driver in modalità kernel di Windows NT)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.driver
- /driver
helpviewer_keywords:
- kernel mode driver
- -DRIVER linker option
- DRIVER linker option
- /DRIVER linker option
ms.assetid: aeee8e28-5d97-40f5-ba16-9f370fe8a1b8
ms.openlocfilehash: c935c20d6c1c009cff64d48e0c0122c8b91bbba3
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041159"
---
# <a name="driver-windows-nt-kernel-mode-driver"></a>/DRIVER (Driver in modalità kernel di Windows NT)

>/DRIVER [: SOLO |: WDM]

## <a name="remarks"></a>Commenti

Usare l'opzione del linker **/driver** per compilare un driver in modalità kernel di Windows NT.

**/Driver: consente solo** al linker di aggiungere il bit **IMAGE_FILE_UP_SYSTEM_ONLY** alle caratteristiche nell'intestazione di output per specificare che si tratta di un driver uniprocessore (up). Il sistema operativo rifiuterà di caricare un driver in un sistema multiprocessore (MP).

**/Driver: WDM** fa in modo che il linker imposti il bit **IMAGE_DLLCHARACTERISTICS_WDM_DRIVER** nel campo DLLCHARACTERISTICS dell'intestazione facoltativa.

Se **/driver** non è specificato, questi bit non vengono impostati dal linker.

Se è specificato **/driver** :

- **/Fixed: non** è attivo. Per altre informazioni, vedere [/FIXED (Indirizzo di base fisso)](fixed-fixed-base-address.md).

- L'estensione del file di output è impostata su. sys. Utilizzare **/out** per modificare il nome file e l'estensione predefiniti. Per altre informazioni, vedere [/OUT (nome file di output)](out-output-file-name.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **sistema** .

1. Modificare la proprietà del **driver** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere [VCLinkerTool. driver Property](/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.driver).

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
