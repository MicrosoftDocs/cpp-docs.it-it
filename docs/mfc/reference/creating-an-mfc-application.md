---
title: Creazione di un'applicazione MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC]
- MFC, creating applications
- MFC applications
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ec61db21b27ef49f660751605b4788599f7f3485
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062496"
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

1. Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C++](../../ide/creating-desktop-projects-by-using-application-wizards.md).

1. Nel **nuovo progetto** finestra di dialogo **applicazione MFC** nel riquadro dei modelli per aprire la procedura guidata.

1. Definire le impostazioni dell'applicazione usando il [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Fare clic su **fine** per chiudere la procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.

Dopo aver creato il progetto, è possibile visualizzare i file creati nella **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [tipi di File creati per i progetti Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)

