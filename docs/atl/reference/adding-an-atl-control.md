---
title: Aggiunta di un controllo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
ms.assetid: 10223e7e-fdb7-4163-80c6-44aeafa8e6ce
ms.openlocfilehash: fac1efeb3d373a8324828a8b10f0570f253f6103
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499287"
---
# <a name="adding-an-atl-control"></a>Aggiunta di un controllo ATL

Usare questa procedura guidata per aggiungere un oggetto interfaccia utente a un progetto che supporta le interfacce per tutti i potenziali contenitori. Per supportare queste interfacce, il progetto deve essere stato creato come applicazione ATL o come applicazione MFC che contiene il supporto per ATL. È possibile utilizzare la [creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

## <a name="to-add-an-atl-control-to-your-project"></a>Per aggiungere un controllo ATL al progetto

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sul nome del progetto a cui si desidera aggiungere l'oggetto semplice ATL.

1. Fare clic su **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nel riquadro modelli della finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) fare clic su **controllo ATL**, quindi su **Aggiungi** per visualizzare la [creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).

Utilizzando la **creazione guidata controllo ATL**, è possibile creare uno dei tre tipi di controllo seguenti:

- Un controllo standard

- Controllo composito

- Controllo DHTML

Inoltre, è possibile ridurre le dimensioni del controllo e rimuovere le interfacce non utilizzate dalla maggior parte dei contenitori selezionando il **controllo minimo** nella pagina **Opzioni** della procedura guidata.

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità al controllo composito](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)
