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
ms.openlocfilehash: ab7253d7e386bf385bcb3a586c5e0e1c1e860694
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62293108"
---
# <a name="driver-windows-nt-kernel-mode-driver"></a>/DRIVER (Driver in modalità kernel di Windows NT)

>/DRIVER[:UPONLY |:WDM]

## <a name="remarks"></a>Note

Usare la **/DRIVER** l'opzione del linker per compilare un driver in modalità kernel Windows NT.

**UPONLY** fa sì che il linker aggiunga il **IMAGE_FILE_UP_SYSTEM_ONLY** bit caratteristiche nell'intestazione di output per specificare che si tratta di un driver per monoprocessore (UP). Il sistema operativo rifiuterà di caricare un driver MONOPROCESSORE su un sistema multiprocessore (MP).

**/Driver: WDM** fa sì che il linker imposti il **IMAGE_DLLCHARACTERISTICS_WDM_DRIVER** bit nel campo DllCharacteristics dell'intestazione facoltativa.

Se **/DRIVER** non viene specificato, questi bit non sono impostati dal linker.

Se **/DRIVER** specificato:

- **/Fixed: No** è attiva. Per altre informazioni, vedere [/FIXED (Indirizzo di base fisso)](fixed-fixed-base-address.md).

- L'estensione del file di output è impostato su Sys. Uso **/out** per modificare il nome file predefinito e l'estensione. Per altre informazioni, vedere [/OUT (nome file di output)](out-output-file-name.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **Driver** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Visualizzare [VCLinkerTool.driver proprietà](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.driver?view=visualstudiosdk-2017#Microsoft_VisualStudio_VCProjectEngine_VCLinkerTool_driver).

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
