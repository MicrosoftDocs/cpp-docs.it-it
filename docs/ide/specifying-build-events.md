---
title: Specifica di eventi di compilazione | Microsoft Docs
ms.custom: ''
ms.date: 12/28/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.IVCEventTool.CommandLine
- VC.Project.IVCEventTool.ExcludedFromBuild
- VC.Project.IVCEventTool.Description
dev_langs:
- C++
helpviewer_keywords:
- Pre-Link event
- build events [C++], specifying
- custom build steps [C++], build events
- builds [C++], events
- events [C++], build
- builds [C++], customizing C++
- build events [C++]
- post-build events
ms.assetid: 788a6c18-2dbe-4a49-8cd6-86c1ad7a95cc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5940f0d6efaec402a4a85ed659f42d7eab1bf91d
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33334964"
---
# <a name="specifying-build-events"></a>Specifica di eventi di compilazione

È possibile usare gli eventi di compilazione per specificare i comandi da eseguire prima dell'inizio della compilazione, prima del processo di collegamento o dopo il completamento della compilazione.

Gli eventi di compilazione vengono eseguiti solo se la compilazione raggiunge correttamente i punti corrispondenti nel processo di compilazione. Se si verifica un errore nella compilazione, l'evento di *post-compilazione* non si verifica. Se l'errore si verifica prima della fase di collegamento, non si verificano né l'evento di *pre-collegamento* né quello di *post-compilazione*. Inoltre, se nessun file richiede il collegamento, l'evento di *pre-collegamento* non si verifica. L'evento di *pre-collegamento* non è disponibile nei progetti che non contengono un passaggio di collegamento.

Se non è necessaria la compilazione di nessun file, non si verifica nessun evento di compilazione.

Per informazioni generali sugli eventi di compilazione, vedere [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md).

### <a name="to-specify-a-build-event"></a>Per specificare un evento di compilazione

1. In **Esplora soluzioni** selezionare il progetto per il quale si vuole specificare l'evento di compilazione.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

1. Nella cartella **Eventi di compilazione** selezionare la pagina delle proprietà di un evento di compilazione.

1. Specificare le proprietà associate all'evento di compilazione:

   - In **Riga di comando** specificare un comando con il formato usato al prompt dei comandi. Specificare un comando o un file batch valido e i file di input o output necessari. Specificare il comando batch **call** prima del nome di un file batch per garantire che tutti i comandi successivi vengano eseguiti.

      Le macro di MSBuild consentono di specificare vari file di input e output in modo simbolico. Per informazioni su come specificare il percorso dei file o i nomi dei set di file, vedere [Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).

      Poiché il carattere "%" è riservato per MSBuild, se si specifica una variabile di ambiente sostituire ogni carattere di escape **%** con la sequenza di escape esadecimale **%25**. Ad esempio, sostituire **%WINDIR%** con **%25WINDIR%25**. MSBuild sostituisce ogni sequenza **%25** con il carattere **%** prima di accedere alla variabile di ambiente.

   - In **Descrizione** digitare una descrizione per l'evento. La descrizione viene visualizzata nella finestra **Output** quando si verifica l'evento.

   - In **Escluso dalla compilazione** specificare **Sì** se non si vuole che l'evento sia eseguito.

## <a name="see-also"></a>Vedere anche

[Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)  
[Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)  
[Risoluzione dei problemi di personalizzazione della compilazione](../ide/troubleshooting-build-customizations.md)  
