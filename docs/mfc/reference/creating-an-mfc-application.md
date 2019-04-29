---
title: Creazione di un'applicazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- applications [MFC]
- MFC, creating applications
- MFC applications
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
ms.openlocfilehash: 251275fd866ce7c9d697787c35c6207ef77862db
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62372309"
---
# <a name="creating-an-mfc-application"></a>Creazione di un'applicazione MFC

Un'applicazione MFC rappresenta un'applicazione eseguibile per Windows basata sulla libreria MFC (Microsoft Foundation Class). Il modo più semplice per creare un'applicazione MFC consiste nell'utilizzo della Creazione guidata applicazione MFC.

> [!IMPORTANT]
>  I progetti MFC non sono supportati nelle versioni di Visual Studio Express Edition.

File eseguibili MFC in genere rientrano in cinque tipi: applicazioni di Windows standard, finestre di dialogo, applicazioni basate su form, le applicazioni di tipo Esplora risorse e applicazioni di tipo browser Web. Per altre informazioni, vedere:

- [Utilizzo delle classi per la scrittura di applicazioni di Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)

- [Creazione e visualizzazione delle finestre di dialogo](../../mfc/creating-and-displaying-dialog-boxes.md)

- [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)

- [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

La Creazione guidata applicazione MFC genera le classi e i file appropriati per ognuno di questi tipi di applicazione, a seconda delle opzioni selezionate all'interno della procedura guidata.

### <a name="to-create-an-mfc-application-using-the-mfc-application-wizard"></a>Per creare un'applicazione MFC mediante la Creazione guidata applicazione MFC

1. Seguire le istruzioni nell'argomento della Guida [creare un progetto di app console C++](../../get-started/tutorial-console-cpp.md).

1. Nel **nuovo progetto** finestra di dialogo **applicazione MFC** nel riquadro dei modelli per aprire la procedura guidata.

1. Definire le impostazioni dell'applicazione usando il [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.

Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per i progetti Visual C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)

