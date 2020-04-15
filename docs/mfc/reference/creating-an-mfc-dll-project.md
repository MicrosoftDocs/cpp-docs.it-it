---
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
ms.openlocfilehash: 6367b2a4b85b2c586c5a4420a8be1f80d334b2e4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363954"
---
# <a name="creating-an-mfc-dll-project"></a>Creazione di un progetto DLL MFC

Una DLL MFC è un file binario che funge da libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni. Il modo più semplice per creare un progetto DLL MFC consiste nell'utilizzare la Creazione guidata DLL MFC.

> [!NOTE]
> L'aspetto delle funzionalità nell'IDE può dipendere dalle impostazioni attive o dall'edizione e potrebbe essere diverso da quelli descritti nella Guida. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per ulteriori informazioni, vedere [Personalizzare l'IDE](/visualstudio/ide/personalizing-the-visual-studio-ide)di Visual Studio.

### <a name="to-create-an-mfc-dll-project-using-the-mfc-dll-wizard"></a>Per creare un progetto DLL MFC utilizzando la Creazione guidata DLL MFC

1. Seguire le istruzioni nell'argomento della Guida [Creazione di un'applicazione MFC,](creating-an-mfc-application.md) ma scegliere **MFC Dynamic Link Library** o DLL **MFC** dall'elenco dei modelli disponibili.

1. Definire le impostazioni dell'applicazione utilizzando la pagina delle [impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) della [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **Fine** per chiudere la procedura guidata e aprire il nuovo progetto in **Esplora soluzioni**.

Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Tipi di progetto C++ in Visual Studio](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)
