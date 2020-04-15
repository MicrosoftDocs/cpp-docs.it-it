---
title: Aggiunta del supporto ATL a un progetto MFC
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.adding.atl.mfc
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: b5fe15d6-7752-4818-b9f9-62482ad35c95
ms.openlocfilehash: 05c4e8ba54d9a573b422f136c9e8cf69e48d1c9a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371676"
---
# <a name="adding-atl-support-to-your-mfc-project"></a>Aggiunta del supporto ATL a un progetto MFC

Se è già stata creata un'applicazione basata su MFC, è possibile aggiungere facilmente il supporto per la libreria ATL (Active Template) utilizzando l'IDE.

> [!NOTE]
> Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un file eseguibile MFC. È possibile aggiungere altri oggetti COM (inclusi i controlli ActiveX) ai progetti MFC, ma gli oggetti potrebbero non funzionare come previsto.

::: moniker range=">=vs-2019"

1. In Esplora soluzioni fare clic con il pulsante destro del mouse sul nodo del progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Nuovo elemento**.

1. Scegliere **ATL** nel riquadro sinistro, quindi scegliere **Supporto ATL** nel riquadro centrale.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-add-atl-support-to-your-mfc-project"></a>Per aggiungere il supporto ATL al progetto MFCTo add ATL support to your MFC project

1. In Esplora soluzioni fare clic con il pulsante destro del mouse sul nodo del progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Selezionare **ATL** nel riquadro sinistro, quindi scegliere **Aggiungi supporto ATL al progetto MFC** nel riquadro centrale.

::: moniker-end

Per ulteriori informazioni su come l'aggiunta di modifiche al supporto ATL il codice del progetto MFC, vedere [dettagli del supporto ATL aggiunto dalla procedura guidata ATLFor](../../mfc/reference/details-of-atl-support-added-by-the-atl-wizard.md) more information about how adding ATL support changes your MFC project's code, see Details of ATL support Added by the ATL Wizard

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
