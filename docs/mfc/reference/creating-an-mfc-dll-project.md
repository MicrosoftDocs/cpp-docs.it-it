---
description: 'Altre informazioni su: creazione di un progetto DLL MFC'
title: Creazione di un progetto DLL MFC
ms.date: 08/19/2019
f1_keywords:
- vc.appwiz.mfcdll.project
helpviewer_keywords:
- MFC DLLs [MFC], creating projects
- DLLs [MFC], MFC
- projects [MFC], creating
- DLLs [MFC], creating
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
ms.openlocfilehash: 5a91fadf38a2891ad93c35457a2013bbb81f449b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301191"
---
# <a name="creating-an-mfc-dll-project"></a>Creazione di un progetto DLL MFC

Una DLL MFC è un file binario che funge da libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni. Il modo più semplice per creare un progetto DLL MFC consiste nell'utilizzare la creazione guidata DLL MFC.

> [!NOTE]
> L'aspetto delle funzionalità nell'IDE può dipendere dall'edizione o dalle impostazioni attive e potrebbe essere diverso da quelli descritti nella Guida di. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

### <a name="to-create-an-mfc-dll-project-using-the-mfc-dll-wizard"></a>Per creare un progetto DLL MFC utilizzando la creazione guidata DLL MFC

1. Seguire le istruzioni riportate nell'argomento della Guida [creazione di un'applicazione MFC](creating-an-mfc-application.md) , ma scegliere **libreria a collegamento dinamico MFC** o **dll MFC** dall'elenco dei modelli disponibili.

1. Definire le impostazioni dell'applicazione tramite la pagina [Impostazioni applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) della [creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto in **Esplora soluzioni**.

Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedi anche

[Tipi di progetto C++ in Visual Studio](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)
