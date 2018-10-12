---
title: 'Pagina delle proprietà Istruzione di compilazione personalizzata: Generale | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCCustomBuildStep.AdditionalInputs
- VC.Project.VCCustomBuildStep.CustomBuildAfterTargets
- VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets
- VC.Project.VCCustomBuildStep.Outputs
- VC.Project.VCCustomBuildStep.Message
- VC.Project.VCCustomBuildStep.Command
dev_langs:
- C++
helpviewer_keywords:
- project properties, custom build step
- custom build step (general)
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f34628ddd11c8cefdd00553f779a22448c2ec99d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404800"
---
# <a name="custom-build-step-property-page-general"></a>Pagina Istruzione di compilazione personalizzata: Generale

Per ogni combinazione di configurazione del progetto e piattaforma di destinazione, è possibile specificare un'istruzione personalizzata da eseguire quando il progetto viene compilato.

Per la versione Linux di questa pagina, vedere [Proprietà Istruzione di compilazione personalizzata (Linux C++)](../linux/prop-pages/custom-build-step-linux.md).

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

1. Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Per altre informazioni, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

1. Nella finestra di dialogo **Pagine delle proprietà** spostarsi nella pagina **Proprietà di configurazione**, **Istruzione di compilazione personalizzata**, **Generale**.

1. Modificare le impostazioni.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)