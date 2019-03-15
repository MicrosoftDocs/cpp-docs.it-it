---
title: 'Pagina delle proprietà Istruzione di compilazione personalizzata: Generale'
ms.date: 11/04/2016
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
ms.openlocfilehash: 329923140cf5a8f05e5c032ddb9e25c0ea45ec2a
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827759"
---
# <a name="custom-build-step-property-page-general"></a>Pagina delle proprietà Istruzione di compilazione personalizzata: Generale

Per ogni combinazione di configurazione del progetto e piattaforma di destinazione, è possibile specificare un'istruzione personalizzata da eseguire quando il progetto viene compilato.

Per la versione Linux di questa pagina, vedere [Proprietà Istruzione di compilazione personalizzata (Linux C++)](../../linux/prop-pages/custom-build-step-linux.md).

## <a name="uielement-list"></a>Elenco UIElement

- **Riga di comando**

   Comando da eseguire tramite l'istruzione di compilazione personalizzata.

- **Descrizione**

   Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.

- **Output**

   File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.

- **Dipendenze aggiuntive**

   Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.

- **Esegui dopo ed Esegui prima**

   Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link.

- **Considera output come contenuto**

   Questa opzione è significativa solo per le app della piattaforma UWP (Universal Windows Platform) o le app Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx.

### <a name="to-specify-a-custom-build-step"></a>Per specificare un'istruzione di compilazione personalizzata

1. Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nella finestra di dialogo **Pagine delle proprietà** spostarsi nella pagina **Proprietà di configurazione**, **Istruzione di compilazione personalizzata**, **Generale**.

1. Modificare le impostazioni.

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina di proprietà progetto C++](property-pages-visual-cpp.md)
