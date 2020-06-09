---
title: Inserimento di un form in un progetto
ms.date: 11/04/2016
helpviewer_keywords:
- inserting forms [MFC]
- Insert New dialog box [MFC]
- forms, adding to projects
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
ms.openlocfilehash: 8e3162ac3917781920130bcbed23864eb90afa59
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618422"
---
# <a name="inserting-a-form-into-a-project"></a>Inserimento di un form in un progetto

I moduli forniscono un contenitore pratico per i controlli. È possibile inserire facilmente un modulo basato su MFC nell'applicazione, purché l'applicazione supporti le librerie MFC.

### <a name="to-insert-a-form-into-your-project"></a>Per inserire un modulo nel progetto

1. In Visualizzazione classi selezionare il progetto a cui si desidera aggiungere il modulo e fare clic con il pulsante destro del mouse.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

   Se il comando **nuovo modulo** non è disponibile, il progetto può essere basato sul Active Template Library (ATL). Per aggiungere un modulo a un progetto ATL, è necessario [specificare determinate impostazioni](../atl/reference/application-settings-atl-project-wizard.md) al momento della creazione del progetto.

1. Dalla cartella **MFC** , fare clic su **classe MFC**.

1. Utilizzando la creazione guidata classe MFC, rendere la nuova classe derivata da [CFormView](reference/cformview-class.md).

Visual C++ aggiunge il form all'applicazione, aprendolo all'interno dell'editor finestre, in modo da poter iniziare ad aggiungere controlli e a lavorare sulla progettazione complessiva.

Potrebbe essere necessario eseguire i passaggi aggiuntivi seguenti (non applicabile per le applicazioni basate su finestra di dialogo):

1. Eseguire l'override della `OnUpdate` funzione membro.

1. Implementare una funzione membro per spostare i dati dalla visualizzazione al documento.

1. Creare una `OnPrint` funzione membro.

## <a name="see-also"></a>Vedere anche

[Visualizzazioni Maschera](form-views-mfc.md)
