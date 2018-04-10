---
title: -DRIVER (Driver in modalità Kernel di Windows NT) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
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
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 29234e3c0e368c7710f9071c753422bc4e6ef2b5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="driver-windows-nt-kernel-mode-driver"></a>/DRIVER (Driver in modalità kernel di Windows NT)

>/ DRIVER [: UPONLY |: WDM]

## <a name="remarks"></a>Note

Utilizzare il **/DRIVER** l'opzione del linker per compilare un driver in modalità kernel di Windows NT.

**/Driver: UPONLY** indica al linker di aggiungere il **IMAGE_FILE_UP_SYSTEM_ONLY** alle caratteristiche nell'intestazione di output per specificare che si tratta di un computer monoprocessore (UP). Il sistema operativo non caricherà un driver MONOPROCESSORE su un sistema di multiprocessore (MP).

**/Driver: WDM** indica al linker di impostare il **IMAGE_DLLCHARACTERISTICS_WDM_DRIVER** bit nel campo DllCharacteristics dell'intestazione facoltativa.

Se **/DRIVER** non viene specificato, questi bit non sono impostati dal linker.

Se **/DRIVER** specificato:

- **/Fixed: No** è attiva. Per altre informazioni, vedere [/FIXED (Indirizzo di base fisso)](../../build/reference/fixed-fixed-base-address.md).

- L'estensione del file di output è impostato su Sys. Utilizzare **/out** per modificare il nome file predefinito e l'estensione. Per altre informazioni, vedere [/OUT (nome file di output)](../../build/reference/out-output-file-name.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Fare clic su di **Linker** cartella.

1. Fare clic su di **sistema** pagina delle proprietà.

1. Modificare il **Driver** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere [VCLinkerTool.driver proprietà](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.driver?view=visualstudiosdk-2017#Microsoft_VisualStudio_VCProjectEngine_VCLinkerTool_driver).

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
[Opzioni del linker](../../build/reference/linker-options.md)
