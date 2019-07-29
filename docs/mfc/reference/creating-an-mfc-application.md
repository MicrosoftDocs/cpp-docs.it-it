---
title: Creazione di un'applicazione MFC
ms.date: 07/28/2019
helpviewer_keywords:
- applications [MFC]
- MFC, creating applications
- MFC applications
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
ms.openlocfilehash: 454a994da6db2841317d41ea1cdacfd36b0705e4
ms.sourcegitcommit: 720b74dddb1cdf4e570d55103158304ee1df81f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/29/2019
ms.locfileid: "68606477"
---
# <a name="creating-an-mfc-application"></a>Creazione di un'applicazione MFC

Un'applicazione MFC rappresenta un'applicazione eseguibile per Windows basata sulla libreria MFC (Microsoft Foundation Class). Il modo più semplice per creare un'applicazione MFC consiste nell'usare la creazione guidata applicazione MFC (**progetto di app MFC** in Visual Studio 2019). Per creare un'applicazione console MFC, utilizzare la creazione guidata desktop di Windows e scegliere le opzioni **applicazione console** e **intestazioni MFC** .

> [!IMPORTANT]
>  I progetti MFC non sono supportati nelle versioni di Visual Studio Express Edition.

Gli eseguibili MFC in genere rientrano in cinque tipi: applicazioni Windows standard, finestre di dialogo, applicazioni basate su form, applicazioni di tipo Esplora risorse e applicazioni di tipo Web browser. Per altre informazioni, vedere:

- [Uso delle classi per la scrittura di applicazioni Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)

- [Creazione e visualizzazione delle finestre di dialogo](../../mfc/creating-and-displaying-dialog-boxes.md)

- [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)

- [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

La Creazione guidata applicazione MFC genera le classi e i file appropriati per ognuno di questi tipi di applicazione, a seconda delle opzioni selezionate all'interno della procedura guidata.

### <a name="to-create-an-mfc-application-using-the-mfc-application-wizard"></a>Per creare un'applicazione MFC mediante la Creazione guidata applicazione MFC

1. Seguire le istruzioni riportate nell'argomento della Guida [creare un progetto di C++ app console](../../get-started/tutorial-console-cpp.md).

1. Nella finestra di dialogo **nuovo progetto** selezionare **applicazione MFC** nel riquadro modelli per aprire la procedura guidata.

1. Definire le impostazioni dell'applicazione utilizzando la [creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).

    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.

1. Scegliere **Fine** per uscire dalla procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.

Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)

