---
description: 'Altre informazioni su: inserimento di un modulo in un progetto'
title: Inserimento di un form in un progetto
ms.date: 11/04/2016
helpviewer_keywords:
- inserting forms [MFC]
- Insert New dialog box [MFC]
- forms, adding to projects
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
ms.openlocfilehash: d0c67532261e4c5a5740f4ff07543f141b34d7a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220487"
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

## <a name="see-also"></a>Vedi anche

[Visualizzazioni Maschera](form-views-mfc.md)
