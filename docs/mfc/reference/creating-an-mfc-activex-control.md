---
title: Creazione di un controllo ActiveX MFC
ms.date: 09/12/2018
f1_keywords:
- vc.appwiz.activex.project
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
ms.openlocfilehash: c67f925773854258111b3a2aa1967f51de4df127
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65708248"
---
# <a name="creating-an-mfc-activex-control"></a>Creazione di un controllo ActiveX MFC

Programmi di controllo ActiveX sono modulare progettata per offrire un tipo specifico di funzionalità a un'applicazione padre. Ad esempio, è possibile creare un controllo, ad esempio un pulsante per l'uso in una finestra di dialogo oppure sulla barra degli strumenti per l'uso in una pagina Web.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni, vedere [controlli ActiveX](../activex-controls.md).

Il modo più semplice per creare un controllo ActiveX di MFC è usare il [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md).

### <a name="to-create-an-mfc-activex-control-using-the-mfc-activex-control-wizard"></a>Per creare un controllo ActiveX di MFC mediante la creazione guidata controllo ActiveX MFC

1. Seguire le istruzioni nell'argomento della Guida [creare un progetto di app console C++](../../get-started/tutorial-console-cpp.md).

1. Nel **nuovo progetto** finestra di dialogo, seleziona la **controllo ActiveX MFC** icona nel riquadro dei modelli per aprire la creazione guidata controllo ActiveX MFC.

1. Definire le [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), [nomi controllo](../../mfc/reference/control-names-mfc-activex-control-wizard.md), e [controllare le impostazioni](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) utilizzando la creazione guidata controllo ActiveX MFC.

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.

Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per Visual Studio C++ progetti](../../build/reference/file-types-created-for-visual-cpp-projects.md).

Dopo aver creato il progetto, è possibile utilizzare le procedure guidate di codice per aggiungere [funzioni](../../ide/add-member-function-wizard.md), [variabili](../../ide/add-member-variable-wizard.md), [eventi](../../ide/add-event-wizard.md), [proprietà](../../ide/names-add-property-wizard.md), e [metodi](../../ide/add-method-wizard.md). Per altre informazioni sulla personalizzazione del controllo ActiveX, vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)

