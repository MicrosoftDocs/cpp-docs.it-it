---
title: -DRIVER (Driver in modalità Kernel Windows NT) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.driver
- /driver
dev_langs:
- C++
helpviewer_keywords:
- kernel mode driver
- -DRIVER linker option
- DRIVER linker option
- /DRIVER linker option
ms.assetid: aeee8e28-5d97-40f5-ba16-9f370fe8a1b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ae096c502cdc94d47a516caf4c29ac4f3eceb4b
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705549"
---
# <a name="driver-windows-nt-kernel-mode-driver"></a>/DRIVER (Driver in modalità kernel di Windows NT)

>/ DRIVER [: UPONLY |: WDM]

## <a name="remarks"></a>Note

Usare la **/DRIVER** l'opzione del linker per compilare un driver in modalità kernel Windows NT.

**UPONLY** fa sì che il linker aggiunga il **IMAGE_FILE_UP_SYSTEM_ONLY** bit caratteristiche nell'intestazione di output per specificare che si tratta di un driver per monoprocessore (UP). Il sistema operativo rifiuterà di caricare un driver MONOPROCESSORE su un sistema multiprocessore (MP).

**/Driver: WDM** fa sì che il linker imposti il **IMAGE_DLLCHARACTERISTICS_WDM_DRIVER** bit nel campo DllCharacteristics dell'intestazione facoltativa.

Se **/DRIVER** non viene specificato, questi bit non sono impostati dal linker.

Se **/DRIVER** specificato:

- **/Fixed: No** è attiva. Per altre informazioni, vedere [/FIXED (Indirizzo di base fisso)](../../build/reference/fixed-fixed-base-address.md).

- L'estensione del file di output è impostato su Sys. Uso **/out** per modificare il nome file predefinito e l'estensione. Per altre informazioni, vedere [/OUT (nome file di output)](../../build/reference/out-output-file-name.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **Driver** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Visualizzare [VCLinkerTool.driver proprietà](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.driver?view=visualstudiosdk-2017#Microsoft_VisualStudio_VCProjectEngine_VCLinkerTool_driver).

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
