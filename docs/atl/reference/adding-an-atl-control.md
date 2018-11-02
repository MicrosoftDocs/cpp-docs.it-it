---
title: Aggiunta di un controllo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- ATL projects, adding controls
- controls [ATL], adding to projects
ms.assetid: 10223e7e-fdb7-4163-80c6-44aeafa8e6ce
ms.openlocfilehash: 26667c2ad3bb2cedb42767fe42ff0ad358fa6d66
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487685"
---
# <a name="adding-an-atl-control"></a>Aggiunta di un controllo ATL

Utilizzare questa procedura guidata per aggiungere un oggetto di interfaccia utente a un progetto che supporta le interfacce per tutti i contenitori potenziali. Per supportare queste interfacce, il progetto deve avere stato creato come un'applicazione ATL o come un'applicazione MFC che contiene il supporto per ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

## <a name="to-add-an-atl-control-to-your-project"></a>Per aggiungere un controllo ATL al progetto

1. In uno **Esplora soluzioni** oppure [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic il nome del progetto a cui si desidera aggiungere l'oggetto semplice ATL.

1. Fare clic su **Add** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) finestra di dialogo, nel riquadro dei modelli, fare clic su **del controllo ATL**e quindi fare clic su **Add** per visualizzare il [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).

Usando il **Creazione guidata controllo ATL**, è possibile creare uno dei tre tipi di controlli:

- Un controllo standard

- Un controllo composito

- Un controllo DHTML

Inoltre, è possibile ridurre le dimensioni del controllo e rimuovere le interfacce non utilizzate dalla maggior parte dei contenitori selezionando **controllo minimo** nel **opzioni** pagina della procedura guidata.

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità al controllo composito](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)
