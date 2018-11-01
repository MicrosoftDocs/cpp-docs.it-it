---
title: 'Controlli ActiveX MFC: creazione di un server di automazione'
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers [MFC], MFC ActiveX controls
- ActiveX controls [MFC], Automation server
- MFC ActiveX controls [MFC], Automation server
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
ms.openlocfilehash: 6861d8b0798ece957c84f52a15032052aa83b9c7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50448126"
---
# <a name="mfc-activex-controls-creating-an-automation-server"></a>Controlli ActiveX MFC: creazione di un server di automazione

È possibile sviluppare un controllo ActiveX di MFC come un server di automazione allo scopo a livello di programmazione che controllano l'incorporamento in un'altra applicazione e chiamando i metodi del controllo dall'applicazione. Ad esempio un controllo deve essere ancora disponibile per essere ospitati in un contenitore di controlli ActiveX.

### <a name="to-create-a-control-as-an-automation-server"></a>Per creare un controllo come un server di automazione

1. [Creare](../mfc/reference/mfc-activex-control-wizard.md) il controllo.

1. [Aggiungere metodi](../mfc/mfc-activex-controls-methods.md).

1. Eseguire l'override [IsInvokeAllowed](../mfc/reference/colecontrol-class.md#isinvokeallowed).

1. Compilare il controllo.

### <a name="to-programmatically-access-the-methods-in-an-automation-server"></a>Per accedere a livello di codice ai metodi in un server di automazione

1. Creare un'applicazione, ad esempio, un' [exe MFC](../mfc/reference/mfc-application-wizard.md).

1. All'inizio del `InitInstance` di funzione, aggiungere la riga seguente:

   [!code-cpp[NVC_MFC_AxCont#17](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_1.cpp)]

1. In visualizzazione classi, fare doppio clic sul nodo del progetto e selezionare **aggiunta classe da libreria dei tipi** per importare la libreria dei tipi.

   I file con le estensioni h e cpp verrà aggiunto al progetto.

1. Nel file di intestazione della classe in cui si chiamerà uno o più metodi del controllo ActiveX, aggiungere la riga seguente: `#include filename.h`, in cui nomefile è il nome del file di intestazione che è stato creato durante l'importazione della libreria dei tipi.

1. Nella funzione in cui verrà eseguita una chiamata a un metodo nel controllo ActiveX, aggiungere il codice che crea un oggetto della classe wrapper del controllo e creare l'oggetto ActiveX. Ad esempio, il seguente codice MFC crea un `CCirc` (controllo), ottiene la proprietà Caption e visualizza il risultato quando si fa clic sul pulsante OK nella finestra di dialogo:

   [!code-cpp[NVC_MFC_AxCont#18](../mfc/codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_2.cpp)]

Se si aggiungono metodi per il controllo ActiveX dopo averlo usato in un'applicazione, è possibile iniziare a usare la versione più recente del controllo nell'applicazione eliminando i file creati durante l'importazione della libreria dei tipi. Quindi importare di nuovo la libreria dei tipi.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

