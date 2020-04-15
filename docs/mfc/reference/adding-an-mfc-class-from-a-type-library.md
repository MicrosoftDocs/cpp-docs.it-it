---
title: Aggiunta di una classe MFC da una libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- classes [MFC], adding MFC
- MFC, adding classes from type libraries
- type libraries, adding MFC classes from
ms.assetid: aba40476-3cfb-47af-990e-ae2e9e0d79cf
ms.openlocfilehash: bf9c763a215a4880d5b0ad206f6a347341fea9eb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371715"
---
# <a name="adding-an-mfc-class-from-a-type-library"></a>Aggiunta di una classe MFC da una libreria dei tipi

Utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in una libreria dei tipi disponibile. È possibile aggiungere una classe MFC in un'[applicazione MFC](../../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md).

> [!NOTE]
> Non è necessario creare il progetto MFC con l'automazione abilitata per aggiungere una classe da una libreria dei tipi.

Una libreria dei tipi contiene una descrizione binaria delle interfacce esposte da un componente, definendo i metodi insieme ai relativi parametri e tipi restituiti. La libreria dei tipi deve essere registrata affinché venga visualizzata nell'elenco **Librerie dei** tipi disponibili dell'Aggiunta guidata classe da libreria dei tipi. Per ulteriori informazioni, vedere "Inside Distributed COM: Type Libraries and Language Integration" in MSDN Library.

### <a name="to-add-an-mfc-class-from-a-type-library"></a>Per aggiungere una classe MFC da una libreria dei tipiTo add an MFC class from a type library

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sul nome del progetto a cui si desidera aggiungere la classe.

1. Scegliere **Aggiungi**dal menu di scelta rapida, quindi **Aggiungi classe**.

1. Nel riquadro Modelli della finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) fare clic su Classe MFC da libreria **dei tipi**, quindi scegliere **Apri** per visualizzare l'Aggiunta guidata classe da libreria [dei tipi](../../mfc/reference/add-class-from-typelib-wizard.md).

Nella procedura guidata è possibile aggiungere più di una classe in una libreria dei tipi. Analogamente, è possibile aggiungere classi da più di una libreria dei tipi in una singola sessione della procedura guidata.

La procedura guidata crea una classe MFC, derivata da [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dalla libreria dei tipi selezionata. `COleDispatchDriver`implementa il lato client dell'automazione OLE.

## <a name="see-also"></a>Vedere anche

[Client di automazione](../../mfc/automation-clients.md)<br/>
[Client di automazione: utilizzo delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)
