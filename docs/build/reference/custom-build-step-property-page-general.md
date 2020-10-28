---
title: 'Pagina Istruzione di compilazione personalizzata: Generale'
description: Questo articolo descrive le proprietà disponibili nella pagina istruzione di compilazione personalizzata nella finestra di dialogo Pagine delle proprietà.
ms.date: 10/27/2020
f1_keywords:
- VC.Project.VCCustomBuildStep.AdditionalInputs
- VC.Project.VCCustomBuildStep.CustomBuildAfterTargets
- VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets
- VC.Project.VCCustomBuildStep.Outputs
- VC.Project.VCCustomBuildStep.Message
- VC.Project.VCCustomBuildStep.Command
helpviewer_keywords:
- project properties, custom build step
- custom build step (general)
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
ms.openlocfilehash: 53f2deef931821981b3301f44ba37660975fb811
ms.sourcegitcommit: 9c801a43ee0d4d84956b03fd387716c818705e0d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/28/2020
ms.locfileid: "92907584"
---
# <a name="custom-build-step-property-page-general"></a>Pagina Istruzione di compilazione personalizzata: Generale

Per ogni combinazione di configurazione di progetto e piattaforma di destinazione nel progetto, è possibile specificare un passaggio personalizzato da eseguire quando il progetto viene compilato.

Per la versione Linux di questa pagina, vedere [Proprietà Istruzione di compilazione personalizzata (Linux C++)](../../linux/prop-pages/custom-build-step-linux.md).

## <a name="general-page"></a>Pagina Generale

- **Riga di comando**

   Comando da eseguire tramite l'istruzione di compilazione personalizzata.

- **Descrizione**

   Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.

- **Output**

   File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.

- **Dipendenze aggiuntive**

   Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.

- **Esegui dopo ed Esegui prima**

   Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni elencate più di frequente sono, `BuildGenerateSources` `BuildCompile` e `BuildLink` , perché rappresentano i passaggi principali del processo di compilazione. Altre destinazioni spesso elencate sono `Midl` , `CLCompile` e `Link` .

- **Considera output come contenuto**

   Questa opzione è significativa solo per le app piattaforma UWP (Universal Windows Platform) o Windows Phone, che includono tutti i file di contenuto nel *`.appx`* pacchetto.

### <a name="to-specify-a-custom-build-step"></a>Per specificare un'istruzione di compilazione personalizzata

1. Sulla barra dei menu scegliere proprietà **progetto**  >  **Properties** . Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nella finestra di dialogo **pagine delle proprietà** passare alla pagina **proprietà di configurazione**  >  **istruzione di compilazione personalizzata**  >  **General** .

1. Modificare le impostazioni.

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)
