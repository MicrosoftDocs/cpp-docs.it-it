---
title: 'Controlli ActiveX MFC: creazione di un server di automazione'
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers [MFC], MFC ActiveX controls
- ActiveX controls [MFC], Automation server
- MFC ActiveX controls [MFC], Automation server
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
ms.openlocfilehash: f2c941e43e810845560b4c35c558ec70248c21ed
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622375"
---
# <a name="mfc-activex-controls-creating-an-automation-server"></a>Controlli ActiveX MFC: creazione di un server di automazione

È possibile sviluppare un controllo ActiveX MFC come server di automazione allo scopo di incorporare il controllo a livello di codice in un'altra applicazione e chiamare metodi nel controllo dall'applicazione. Tale controllo sarebbe comunque disponibile per essere ospitato in un contenitore di controlli ActiveX.

### <a name="to-create-a-control-as-an-automation-server"></a>Per creare un controllo come server di automazione

1. [Creare](reference/mfc-activex-control-wizard.md) il controllo.

1. [Aggiungere i metodi](mfc-activex-controls-methods.md).

1. Eseguire l'override di [IsInvokeAllowed](reference/colecontrol-class.md#isinvokeallowed).

1. Compilare il controllo.

### <a name="to-programmatically-access-the-methods-in-an-automation-server"></a>Per accedere a livello di codice ai metodi in un server di automazione

1. Creare un'applicazione, ad esempio un file [exe MFC](reference/mfc-application-wizard.md).

1. All'inizio della `InitInstance` funzione aggiungere la riga seguente:

   [!code-cpp[NVC_MFC_AxCont#17](codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_1.cpp)]

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sul nodo del progetto e selezionare **Aggiungi classe da TypeLib** per importare la libreria dei tipi.

   In questo modo, i file con estensione h e cpp vengono aggiunti al progetto.

1. Nel file di intestazione della classe in cui vengono chiamati uno o più metodi nel controllo ActiveX, aggiungere la riga seguente: `#include filename.h` , dove nome file è il nome del file di intestazione creato quando è stata importata la libreria dei tipi.

1. Nella funzione in cui verrà effettuata una chiamata a un metodo nel controllo ActiveX, aggiungere il codice che crea un oggetto della classe wrapper del controllo e creare l'oggetto ActiveX. Ad esempio, il codice MFC seguente crea un'istanza di un `CCirc` controllo, ottiene la proprietà Caption e visualizza il risultato quando si fa clic sul pulsante OK in una finestra di dialogo:

   [!code-cpp[NVC_MFC_AxCont#18](codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_2.cpp)]

Se si aggiungono metodi al controllo ActiveX dopo averlo usato in un'applicazione, è possibile iniziare a usare la versione più recente del controllo nell'applicazione eliminando i file creati durante l'importazione della libreria dei tipi. Quindi importare nuovamente la libreria dei tipi.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
