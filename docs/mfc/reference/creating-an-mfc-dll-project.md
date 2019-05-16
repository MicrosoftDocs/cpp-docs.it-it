---
title: Creazione di un progetto DLL MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfcdll.project
helpviewer_keywords:
- MFC DLLs [MFC], creating projects
- DLLs [MFC], MFC
- projects [MFC], creating
- DLLs [MFC], creating
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
ms.openlocfilehash: cd1d7910d95fa7e412f9843da2cec7ae10a38ef6
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65708230"
---
# <a name="creating-an-mfc-dll-project"></a>Creazione di un progetto DLL MFC

Una DLL MFC è un file binario che agisce come una libreria condivisa di funzioni che possono essere utilizzate contemporaneamente da più applicazioni. Il modo più semplice per creare un progetto DLL MFC è utilizzare la procedura guidata DLL MFC.

> [!NOTE]
>  L'aspetto delle funzionalità nell'IDE possa variano a seconda delle impostazioni attive o l'edizione e potrebbero essere diversi da quelli descritti nella Guida. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

### <a name="to-create-an-mfc-dll-project-using-the-mfc-dll-wizard"></a>Per creare un progetto di DLL MFC mediante la creazione guidata DLL MFC

1. Seguire le istruzioni nell'argomento della Guida [creare un progetto di app console C++](../../get-started/tutorial-console-cpp.md).

**Nota** nella **nuovo progetto** della finestra di dialogo Seleziona il `MFC DLL` icona nel riquadro dei modelli per aprire la creazione guidata DLL MFC.

1. Definire le impostazioni dell'applicazione usando il [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) pagina della [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **Finish** per chiudere la procedura guidata e aprire il nuovo progetto nella **Esplora soluzioni**.

Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per Visual Studio C++ progetti](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[C++tipi di progetto in Visual Studio](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)

