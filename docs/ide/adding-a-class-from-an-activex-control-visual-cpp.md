---
title: Aggiunta di una classe da un controllo ActiveX (Visual C++)
ms.date: 09/07/2018
helpviewer_keywords:
- ActiveX controls [C++], adding classes
- classes [C++], creating
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
ms.openlocfilehash: c78919aeee2d2577cd7371952d95c57c17b1e5ba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466625"
---
# <a name="adding-a-class-from-an-activex-control-visual-c"></a>Aggiunta di una classe da un controllo ActiveX (Visual C++)

Usare questa procedura guidata per creare una classe MFC da un'interfaccia in un controllo ActiveX disponibile. È possibile aggiungere una classe MFC in un'[applicazione MFC](../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).

> [!WARNING]
> In Visual Studio 2017 versione 15.9 questa procedura guidata del codice è deprecata e verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Se vuoi condividere i tuoi commenti e suggerimenti su questa deprecazione, compila il [presente sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.

> [!NOTE]
>  Non è necessario creare il progetto MFC con l'automazione abilitata per aggiungere una classe da un controllo ActiveX.

Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object Model) che supporta un'ampia gamma di funzionalità OLE e può essere personalizzato per soddisfare numerosi requisiti software. I controlli ActiveX sono progettati per essere usati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet.

### <a name="to-add-an-mfc-class-from-an-activex-control"></a>Per aggiungere una classe MFC da un controllo ActiveX

1. In **Esplora soluzioni** o nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul nome del progetto a cui si vuole aggiungere la classe del controllo ActiveX.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) nel riquadro Modelli fare clic su **Classe MFC da controllo ActiveX** e quindi fare clic su **Apri** per visualizzare l'[Aggiunta guidata classe da controllo ActiveX](../ide/add-class-from-activex-control-wizard.md).

Nella procedura guidata è possibile aggiungere più di un'interfaccia in un controllo ActiveX. Analogamente, è possibile creare classi da più di un controllo ActiveX in un'unica sessione della procedura guidata.

È possibile aggiungere classi da controlli ActiveX registrati nel sistema oppure da controlli ActiveX presenti nei file di libreria dei tipi (file con estensione tlb, olb, ocx o exe) senza prima registrarli nel sistema. Per altre informazioni sulla registrazione di controlli ActiveX, vedere [Registrazione di controlli OLE](../mfc/reference/registering-ole-controls.md).

La procedura guidata crea una classe MFC, derivata da [CWnd](../mfc/reference/cwnd-class.md) o da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dal controllo ActiveX selezionato.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br>
[Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)