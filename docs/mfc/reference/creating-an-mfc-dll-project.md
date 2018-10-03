---
title: Creazione di un progetto DLL MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfcdll.project
dev_langs:
- C++
helpviewer_keywords:
- MFC DLLs [MFC], creating projects
- DLLs [MFC], MFC
- projects [MFC], creating
- DLLs [MFC], creating
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c83ab1a42c62a4cb1afd0c7f49f55c40633d05b
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234567"
---
# <a name="creating-an-mfc-dll-project"></a>Creazione di un progetto DLL MFC

Una DLL MFC è un file binario che agisce come una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni. Il modo più semplice per creare un progetto DLL MFC è utilizzare la procedura guidata DLL MFC.

> [!NOTE]
>  L'aspetto delle funzionalità nell'IDE possa variano a seconda delle impostazioni attive o l'edizione e potrebbero essere diversi da quelli descritti nella Guida. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

### <a name="to-create-an-mfc-dll-project-using-the-mfc-dll-wizard"></a>Per creare un progetto di DLL MFC mediante la creazione guidata DLL MFC

1. Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C++](../../ide/creating-desktop-projects-by-using-application-wizards.md).

**Nota** nella **nuovo progetto** della finestra di dialogo Seleziona il `MFC DLL` icona nel riquadro dei modelli per aprire la creazione guidata DLL MFC.

1. Definire le impostazioni dell'applicazione usando il [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) pagina della [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **Finish** per chiudere la procedura guidata e aprire il nuovo progetto nella **Esplora soluzioni**.

Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per i progetti Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Tipi di progetto Visual C++](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)


