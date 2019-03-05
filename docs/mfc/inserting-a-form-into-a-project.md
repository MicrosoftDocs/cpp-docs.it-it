---
title: Inserimento di un form in un progetto
ms.date: 11/04/2016
helpviewer_keywords:
- inserting forms [MFC]
- Insert New dialog box [MFC]
- forms, adding to projects
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
ms.openlocfilehash: 2fa344f2d84b39be4ee36fd845edb82c14b6c519
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57286530"
---
# <a name="inserting-a-form-into-a-project"></a>Inserimento di un form in un progetto

Form fornisce un contenitore adatto per i controlli. È possibile inserire facilmente un modulo basato su MFC nell'applicazione, purché l'applicazione supporta le librerie MFC.

### <a name="to-insert-a-form-into-your-project"></a>Per inserire un modulo nel progetto

1. Dalla visualizzazione classi, selezionare il progetto a cui si desidera aggiungere il modulo e scegliere il pulsante destro del mouse.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi classe**.

   Se il **nuovo Form** comando non è disponibile, il progetto può essere basato sulla libreria ATL (Active Template). Per aggiungere un form a un progetto ATL, è necessario [specificare alcune impostazioni](../atl/reference/application-settings-atl-project-wizard.md) al momento della creazione del progetto.

1. Dal **MFC** cartella, fare clic su **classe MFC**.

1. La creazione guidata classe MFC, definire la nuova classe derivano da [CFormView](../mfc/reference/cformview-class.md).

Visual C++ aggiunge il modulo all'applicazione, aprirlo all'interno dell'editor finestre, in modo da poter iniziare aggiunta di controlli e lavorare sul progetto complessivo.

È possibile eseguire i passaggi aggiuntivi seguenti (non applicabili per le applicazioni basate su finestra di dialogo):

1. Eseguire l'override di `OnUpdate` funzione membro.

1. Implementare una funzione membro per spostare i dati dalla visualizzazione al documento.

1. Creare un `OnPrint` funzione membro.

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di form](../mfc/form-views-mfc.md)
