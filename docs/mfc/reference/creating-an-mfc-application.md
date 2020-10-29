---
title: Creazione di un'applicazione MFC
ms.date: 08/28/2019
helpviewer_keywords:
- applications [MFC]
- MFC, creating applications
- MFC applications
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
ms.openlocfilehash: dd4a0b8a7a06debdc3556d48e000fe09deccf857
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924427"
---
# <a name="creating-an-mfc-application"></a>Creazione di un'applicazione MFC

Un'applicazione MFC rappresenta un'applicazione eseguibile per Windows basata sulla libreria MFC (Microsoft Foundation Class). Gli eseguibili MFC in genere rientrano in cinque tipi: applicazioni Windows standard, finestre di dialogo, applicazioni basate su form, applicazioni di tipo Esplora risorse e applicazioni di tipo Web browser. Per altre informazioni, vedere:

- [Utilizzo delle classi per la creazione di applicazioni Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)

- [Creazione e visualizzazione di finestre di dialogo](../../mfc/creating-and-displaying-dialog-boxes.md)

- [Creazione di un Forms-Based applicazione MFC](../../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Creazione di un file Explorer-Style applicazione MFC](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)

- [Creazione di un'applicazione MFC Browser-Style Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

La Creazione guidata applicazione MFC genera le classi e i file appropriati per ognuno di questi tipi di applicazione, a seconda delle opzioni selezionate all'interno della procedura guidata.

Il modo più semplice per creare un'applicazione MFC consiste nell'usare la creazione guidata applicazione MFC ( **progetto di app MFC** in Visual Studio 2019). Per creare un'applicazione console MFC (un programma da riga di comando che utilizza librerie MFC ma viene eseguita nella finestra della console), utilizzare la creazione guidata desktop di Windows e scegliere le opzioni **applicazione console** e **intestazioni MFC** .

::: moniker range=">=msvc-160"

## <a name="to-create-an-mfc-forms-or-dialog-based-application"></a>Per creare un'applicazione basata su finestre di dialogo o moduli MFC

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Immettere "MFC" nella casella di ricerca e quindi scegliere **app MFC** dall'elenco dei risultati.
1. Modificare le impostazioni predefinite in base alle esigenze, quindi fare clic su **Crea** per aprire la **creazione guidata applicazione MFC** .
1. Modificare i valori di configurazione in base alle esigenze, quindi fare clic su **fine** .

Per ulteriori informazioni, vedere [creazione di un'applicazione Forms-Based MFC](creating-a-forms-based-mfc-application.md).

![Screenshot della creazione guidata applicazione MFC in Visual Studio 2019.](media/mfc-app-wizard.png)

## <a name="to-create-an-mfc-console-application"></a>Per creare un'applicazione console MFC

Un'applicazione console MFC è un programma da riga di comando che utilizza librerie MFC, ma viene eseguito nella finestra della console.

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Immettere "desktop" nella casella di ricerca e quindi scegliere **creazione guidata desktop di Windows** dall'elenco dei risultati.
1. Modificare il nome del progetto in base alle esigenze, quindi fare clic su **Avanti** per aprire la **creazione guidata desktop di Windows** .
1. Controllare la casella **intestazioni MFC** e impostare gli altri valori in base alle esigenze, quindi fare clic su **fine** .

![Screenshot della creazione guidata desktop di Windows in Visual Studio 2019.](media/windows-desktop-wizard.png)

::: moniker-end

::: moniker range="=msvc-150"

## <a name="to-create-an-mfc-forms-or-dialog-based-application"></a>Per creare un'applicazione basata su finestre di dialogo o moduli MFC

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Nei modelli **installati** scegliere **Visual C++**  >  **MFC/ATL** . Se queste informazioni non sono visibili, usare il Programma di installazione di Visual Studio per aggiungerle.
1. Scegliere **applicazione MFC** dal riquadro centrale.
1. Modificare i valori di configurazione in base alle esigenze, quindi fare clic su **fine** .

Per ulteriori informazioni, vedere [creazione di un'applicazione Forms-Based MFC](creating-a-forms-based-mfc-application.md).

![Screenshot della creazione guidata applicazione MFC in Visual Studio 2017.](media/mfc-app-wizard.png)

## <a name="to-create-an-mfc-console-application"></a>Per creare un'applicazione console MFC

Un'applicazione console MFC è un programma da riga di comando che utilizza librerie MFC, ma viene eseguito nella finestra della console.

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Nei modelli **installati** scegliere **Visual C++** > **desktop di Windows** .
1. Scegliere **creazione guidata desktop di Windows** dal riquadro centrale.
1. Modificare il nome del progetto in base alle esigenze, quindi fare clic su **OK** per aprire la **creazione guidata desktop di Windows** .
1. Controllare la casella **intestazioni MFC** e impostare gli altri valori in base alle esigenze, quindi fare clic su **fine** .

![Screenshot della creazione guidata desktop di Windows in Visual Studio 2017.](media/windows-desktop-wizard-2017.png)

::: moniker-end

::: moniker range="=msvc-140"

## <a name="to-create-an-mfc-forms-or-dialog-based-application"></a>Per creare un'applicazione basata su finestre di dialogo o moduli MFC

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Nei modelli **installati** scegliere **Visual C++** > **MFC** .
1. Scegliere **applicazione MFC** dal riquadro centrale.
1. Fare clic su **Avanti** per avviare la **creazione guidata applicazione MFC** .

Per ulteriori informazioni, vedere [creazione di un'applicazione Forms-Based MFC](creating-a-forms-based-mfc-application.md).

![Screenshot della creazione guidata applicazione MFC in Visual Studio 2015.](media/mfc-app-wizard-2015.png)

## <a name="to-create-an-mfc-console-application"></a>Per creare un'applicazione console MFC

Un'applicazione console MFC è un programma da riga di comando che utilizza librerie MFC, ma viene eseguito nella finestra della console.

1. Dal menu principale scegliere **file** > **nuovo** > **progetto** .
1. Nei modelli **installati** scegliere **Visual C++** > **Win32** .
1. Scegliere **applicazione console Win32** dal riquadro centrale.
1. Modificare il nome del progetto in base alle esigenze, quindi fare clic su **OK** .
1. Nella seconda pagina della procedura guidata, selezionare la casella **Aggiungi intestazioni comuni per MFC** e impostare gli altri valori in base alle esigenze, quindi fare clic su **fine** .

::: moniker-end

Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni** . Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)
