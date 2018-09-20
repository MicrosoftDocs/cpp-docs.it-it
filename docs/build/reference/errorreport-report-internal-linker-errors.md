---
title: -ERRORREPORT (segnala gli errori di interni del Linker) | Microsoft Docs
ms.custom: ''
ms.date: 12/28/2017
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3b4b19eed4b481ffa44688e15fb1567e73da1a8f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373463"
---
# <a name="errorreport-report-internal-linker-errors"></a>/ERRORREPORT (Segnala gli errori interni del linker)

> **/errorreport:**[ **none** | **prompt** | **coda** | **inviare** ]

## <a name="arguments"></a>Argomenti

**none**<br/>
Le segnalazioni sugli errori interni del compilatore non verranno raccolte o inviate a Microsoft.

**prompt**<br/>
Chiede di inviare una segnalazione quando si riceve un errore interno del compilatore. **prompt dei comandi** è l'impostazione predefinita quando viene compilata un'applicazione nell'ambiente di sviluppo.

**queue**<br/>
Accoda la segnalazione errori. Quando si accede con privilegi di amministratore, viene visualizzata una finestra in modo che è possibile segnalare gli eventuali errori dall'ultima volta si fosse connessi in (non verrà richiesto di inviare segnalazioni errori più di una volta ogni tre giorni). **coda** è l'impostazione predefinita quando si compila un'applicazione da un prompt dei comandi.

**send**<br/>
Se reporting è abilitato per le impostazioni del servizio Segnalazione errori Windows, invia automaticamente i report di errori interni del compilatore a Microsoft.

## <a name="remarks"></a>Note

Il **/ERRORREPORT** opzione consente di fornire informazioni sugli errori interni del compilatore direttamente a Microsoft.

L'opzione **/errorreport: Send** invia automaticamente le informazioni sugli errori a Microsoft, se abilitata per le impostazioni del servizio Segnalazione errori Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **Linker** > **avanzate** pagina delle proprietà.

1. Modificare il **segnalazione errori** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.

## <a name="see-also"></a>Vedere anche

[/errorReport (segnala gli errori interni del compilatore)](../../build/reference/errorreport-report-internal-compiler-errors.md)<br/>
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
