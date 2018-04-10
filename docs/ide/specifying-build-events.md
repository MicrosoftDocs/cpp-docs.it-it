---
title: Specifica gli eventi di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 12/28/2017
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-ide
ms.tgt_pltfrm: ''
ms.topic: article
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
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 825eec000a2b08bd7a5a4d7769405df2f5570523
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="specifying-build-events"></a>Specifica gli eventi di compilazione

È possibile utilizzare gli eventi di compilazione per specificare i comandi da eseguire prima dell'avvio della compilazione, prima del processo di collegamento o al termine della compilazione.

Gli eventi di compilazione vengono eseguiti solo se la compilazione raggiunge correttamente i punti corrispondenti nel processo di compilazione. Se si verifica un errore nella compilazione, il *post-compilazione* evento non viene eseguito; se l'errore si verifica prima della fase di collegamento, né il *pre-collegamento* né la *post-compilazione* evento si verifica. Inoltre, se è necessario essere collegati, alcun file di *pre-collegamento* non vengono generati eventi. Il *pre-collegamento* evento non è inoltre disponibile nei progetti che non contengono un passaggio di collegamento.

Se nessun file devono essere creata, verrà generato alcun evento di compilazione.

Per informazioni generali sugli eventi di compilazione, vedere [informazioni sulle istruzioni di compilazione personalizzate e di eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md).

### <a name="to-specify-a-build-event"></a>Per specificare un evento di compilazione

1. In **Esplora soluzioni** selezionare il progetto per il quale si vuole specificare l'evento di compilazione.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).

1. Nel **eventi di compilazione** cartella, selezionare la pagina delle proprietà di un evento di compilazione.

1. Specificare le proprietà associate all'evento di compilazione:

   - In **riga di comando**, specificare un comando come se si stesse specificando al prompt dei comandi. Specificare un comando valido o un file batch e qualsiasi input obbligatorio o file di output. Specificare il **chiamare** comando prima del nome di un file batch per garantire che tutti i comandi successivi vengono eseguiti batch.

      Possono specificare più file di input e outpui simbolicamente con le macro di MSBuild. Per informazioni su come specificare il percorso dei file o i nomi dei set di file, vedere [comuni macro per comandi di compilazione e proprietà](../ide/common-macros-for-build-commands-and-properties.md).

      Poiché il carattere '% s'è riservato da MSBuild, se si specifica una variabile di ambiente sostituire ogni  **%**  con carattere di escape di **% 25** sequenza di escape esadecimale. Ad esempio, sostituire **% WINDIR %** con **25WINDIR % 25**. MSBuild sostituisce ogni **% 25** sequenza con la  **%**  carattere prima di accedere alla variabile di ambiente.

   - In **descrizione**, digitare una descrizione per questo evento. La descrizione viene stampata il **Output** finestra quando si verifica questo evento.

   - In **escluso dalla compilazione**, specificare **Sì** se non si desidera l'esecuzione dell'evento.

## <a name="see-also"></a>Vedere anche

[Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)  
[Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)  
[Risoluzione dei problemi di personalizzazione della compilazione](../ide/troubleshooting-build-customizations.md)  
