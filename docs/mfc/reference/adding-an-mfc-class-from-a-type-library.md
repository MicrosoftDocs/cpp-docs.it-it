---
title: Aggiunta di una classe MFC da una libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- classes [MFC], adding MFC
- MFC, adding classes from type libraries
- type libraries, adding MFC classes from
ms.assetid: aba40476-3cfb-47af-990e-ae2e9e0d79cf
ms.openlocfilehash: 4e8d0f74a73048f172a8030d4bfb081c803e7170
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86405117"
---
# <a name="adding-an-mfc-class-from-a-type-library"></a>Aggiunta di una classe MFC da una libreria dei tipi

Utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in una libreria dei tipi disponibile. È possibile aggiungere una classe MFC in un'[applicazione MFC](../../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md).

> [!NOTE]
> Non è necessario creare il progetto MFC con Automation abilitato per aggiungere una classe da una libreria dei tipi.

Una libreria dei tipi contiene una descrizione binaria delle interfacce esposte da un componente, definendo i metodi insieme ai relativi parametri e ai tipi restituiti. La libreria dei tipi deve essere registrata perché venga visualizzata nell'elenco **librerie dei tipi disponibili** nella procedura guidata Aggiungi classe da libreria dei tipi.

### <a name="to-add-an-mfc-class-from-a-type-library"></a>Per aggiungere una classe MFC da una libreria dei tipi

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sul nome del progetto a cui si desidera aggiungere la classe.

1. Scegliere **Aggiungi**dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nel riquadro modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su **classe MFC da libreria dei tipi**, quindi fare clic su **Apri** per visualizzare la [procedura guidata Aggiungi classe da libreria dei tipi](../../mfc/reference/add-class-from-typelib-wizard.md).

Nella procedura guidata è possibile aggiungere più di una classe in una libreria dei tipi. Analogamente, è possibile aggiungere classi da più di una libreria dei tipi in una singola sessione della procedura guidata.

Tramite la procedura guidata viene creata una classe MFC, derivata da [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dalla libreria dei tipi selezionata. `COleDispatchDriver`implementa il lato client dell'automazione OLE.

## <a name="see-also"></a>Vedere anche

[Client di automazione](../../mfc/automation-clients.md)<br/>
[Client di automazione: utilizzo delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)
