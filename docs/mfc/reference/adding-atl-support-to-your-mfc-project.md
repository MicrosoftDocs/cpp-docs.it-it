---
description: 'Ulteriori informazioni su: aggiunta del supporto ATL al progetto MFC'
title: Aggiunta del supporto ATL a un progetto MFC
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.adding.atl.mfc
helpviewer_keywords:
- MFC, ATL support
- ATL, MFC projects
ms.assetid: b5fe15d6-7752-4818-b9f9-62482ad35c95
ms.openlocfilehash: 1d02bd6e63a01334fcb9a907dc9ea4fe78ff4a48
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248242"
---
# <a name="adding-atl-support-to-your-mfc-project"></a>Aggiunta del supporto ATL a un progetto MFC

Se è già stata creata un'applicazione basata su MFC, è possibile aggiungere facilmente il supporto per il Active Template Library (ATL) usando l'IDE.

> [!NOTE]
> Questo supporto si applica solo a oggetti COM semplici aggiunti a un progetto DLL o un file eseguibile MFC. È possibile aggiungere altri oggetti COM (inclusi i controlli ActiveX) ai progetti MFC, ma gli oggetti potrebbero non funzionare come previsto.

::: moniker range=">=msvc-160"

1. In Esplora soluzioni fare clic con il pulsante destro del mouse sul nodo del progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Nuovo elemento**.

1. Scegliere **ATL** nel riquadro sinistro, quindi scegliere **supporto ATL** nel riquadro centrale.

::: moniker-end

::: moniker range="<=msvc-150"

### <a name="to-add-atl-support-to-your-mfc-project"></a>Per aggiungere il supporto ATL al progetto MFC

1. In Esplora soluzioni fare clic con il pulsante destro del mouse sul nodo del progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Selezionare **ATL** nel riquadro sinistro, quindi scegliere **Aggiungi supporto ATL al progetto MFC** nel riquadro centrale.

::: moniker-end

Per ulteriori informazioni sull'aggiunta del supporto ATL alla modifica del codice del progetto MFC, vedere la pagina relativa ai [Dettagli del supporto ATL aggiunto dalla procedura guidata ATL](../../mfc/reference/details-of-atl-support-added-by-the-atl-wizard.md)

## <a name="see-also"></a>Vedi anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
