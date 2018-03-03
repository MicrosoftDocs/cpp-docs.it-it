---
title: -ERRORREPORT (segnala gli errori di interni del Linker) | Documenti Microsoft
ms.custom: 
ms.date: 12/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /ERRORREPORT
- VC.Project.VCLinkerTool.ErrorReporting
dev_langs:
- C++
helpviewer_keywords:
- /ERRORREPORT linker option
- ERRORREPORT linker option
- -ERRORREPORT linker option
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6ddf65ed2a17dae2d86b0dc4582f1d3158328898
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="errorreport-report-internal-linker-errors"></a>/ERRORREPORT (Segnala gli errori interni del linker)

> **/errorreport:**[ **Nessuno** | **prompt** | **coda** | **inviare** ]

## <a name="arguments"></a>Argomenti

**none**  
Le segnalazioni sugli errori interni del compilatore non verranno raccolte o inviate a Microsoft.

**prompt**  
Chiede di inviare una segnalazione quando si riceve un errore interno del compilatore. **prompt dei comandi** è l'impostazione predefinita, quando si compila un'applicazione nell'ambiente di sviluppo.

**queue**  
Accoda la segnalazione errori. Quando si accede con privilegi di amministratore, viene visualizzata una finestra in modo che è possibile segnalare gli eventuali errori dall'ultima volta in cui è stato effettuato (non verrà richiesto di inviare segnalazioni errori più di una volta ogni tre giorni). **coda** è l'impostazione predefinita, quando si compila un'applicazione a un prompt dei comandi.

**send**  
Se reporting è abilitato per le impostazioni del servizio Segnalazione errori Windows, invia automaticamente segnalazioni di errori interni del compilatore a Microsoft.

## <a name="remarks"></a>Note

Il **/ERRORREPORT** opzione consente di fornire informazioni sugli errori interni del compilatore direttamente a Microsoft.

L'opzione **/errorreport: Send** invia automaticamente le informazioni di errore a Microsoft, se abilitato per le impostazioni del servizio Segnalazione errori Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **Linker** > **avanzate** pagina delle proprietà.

1. Modificare il **segnalazione** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.

## <a name="see-also"></a>Vedere anche

[/errorReport (segnala gli errori interni del compilatore)](../../build/reference/errorreport-report-internal-compiler-errors.md)  
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
