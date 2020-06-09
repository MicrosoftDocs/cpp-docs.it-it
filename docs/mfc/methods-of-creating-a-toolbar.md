---
title: Metodi di creazione di una barra degli strumenti
ms.date: 11/04/2016
helpviewer_keywords:
- CToolBarCtrl class [MFC], and CToolBar class [MFC]
- CToolBar class [MFC], creating toolbars
- MFC toolbars
- toolbar controls [MFC]
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: f19d8d65-d49f-445c-abe8-d47d3e4101c8
ms.openlocfilehash: b70e6f4dc15023b878bb58d6b7d0739eeb173d53
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624260"
---
# <a name="methods-of-creating-a-toolbar"></a>Metodi di creazione di una barra degli strumenti

MFC fornisce due classi per la creazione di barre degli strumenti: [CToolBar](reference/ctoolbar-class.md) e [CToolBarCtrl](reference/ctoolbarctrl-class.md) (che esegue il wrapping dell'API del controllo comune di Windows). `CToolBar`fornisce tutte le funzionalità del controllo comune della barra degli strumenti e gestisce automaticamente molte delle impostazioni e delle strutture di controllo comuni necessarie; Tuttavia, l'eseguibile risultante sarà in genere maggiore di quello creato tramite `CToolBarCtrl` .

`CToolBarCtrl`in genere viene restituito un eseguibile più piccolo e si preferisce utilizzare `CToolBarCtrl` se non si intende integrare la barra degli strumenti nell'architettura MFC. Se si prevede di utilizzare `CToolBarCtrl` e integrare la barra degli strumenti nell'architettura MFC, è necessario prestare maggiore attenzione alla comunicazione delle modifiche dei controlli della barra degli strumenti a MFC. Questa comunicazione non è difficile. Tuttavia, si tratta di un lavoro aggiuntivo non necessario quando si utilizza `CToolBar` .

Visual C++ offre due modi per sfruttare il controllo comune della barra degli strumenti.

- Creare la barra degli strumenti usando `CToolBar` , quindi chiamare [CToolBar:: GetToolBarCtrl](reference/ctoolbar-class.md#gettoolbarctrl) per ottenere l'accesso alle `CToolBarCtrl` funzioni membro.

- Creare la barra degli strumenti usando il costruttore di [CToolBarCtrl](reference/ctoolbarctrl-class.md).

Uno dei due metodi fornirà l'accesso alle funzioni membro del controllo Toolbar. Quando si chiama `CToolBar::GetToolBarCtrl` , viene restituito un riferimento a un `CToolBarCtrl` oggetto in modo che sia possibile utilizzare un set di funzioni membro. Vedere [CToolBar](reference/ctoolbar-class.md) per informazioni sulla costruzione e la creazione di una barra degli strumenti usando `CToolBar` .

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](using-ctoolbarctrl.md)<br/>
[Controlli](controls-mfc.md)
