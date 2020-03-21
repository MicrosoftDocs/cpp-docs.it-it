---
title: Creazione di un controllo ActiveX MFC
ms.date: 08/19/2019
f1_keywords:
- vc.appwiz.activex.project
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
ms.openlocfilehash: 5e0a81d6a01632bcfadccd241f3a485e6d332627
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077452"
---
# <a name="creating-an-mfc-activex-control"></a>Creazione di un controllo ActiveX MFC

I programmi di controllo ActiveX sono programmi modulari progettati per fornire un tipo specifico di funzionalità a un'applicazione padre. Ad esempio, è possibile creare un controllo come un pulsante da utilizzare in una finestra di dialogo o una barra degli strumenti da utilizzare in una pagina Web.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni, vedere [controlli ActiveX](../activex-controls.md).

Il modo più semplice per creare un controllo ActiveX MFC consiste nell'utilizzare la [creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md).

### <a name="to-create-an-mfc-activex-control-using-the-mfc-activex-control-wizard"></a>Per creare un controllo ActiveX MFC utilizzando la creazione guidata controllo ActiveX MFC

1. Seguire le istruzioni riportate nell'argomento della Guida [creazione di un'applicazione MFC](creating-an-mfc-application.md) , ma scegliere **controllo ActiveX MFC** dall'elenco dei modelli disponibili.

1. Definire le [impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), [i nomi dei controlli](../../mfc/reference/control-names-mfc-activex-control-wizard.md)e [le impostazioni di controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) utilizzando la creazione guidata controllo ActiveX MFC.

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.

Dopo aver creato il progetto, è possibile visualizzare i file creati in **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

Dopo aver creato il progetto, è possibile utilizzare le creazioni guidate codice per aggiungere [funzioni](../../ide/add-member-function-wizard.md), [variabili](../../ide/add-member-variable-wizard.md), [eventi](../../ide/add-event-wizard.md), [Proprietà](../../ide/names-add-property-wizard.md)e [Metodi](../../ide/add-method-wizard.md). Per ulteriori informazioni sulla personalizzazione del controllo ActiveX, vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)
