---
description: 'Altre informazioni su: metodi di creazione di una barra di stato'
title: Metodi di creazione di una barra di stato
ms.date: 11/04/2016
helpviewer_keywords:
- CStatusBar class [MFC], vs. CStatusBarCtrl
- methods [MFC], creating status bars
- CStatusBarCtrl class [MFC], vs. CStatusBar
- CStatusBarCtrl class [MFC], creating
- methods [MFC]
- status bars [MFC], creating
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
ms.openlocfilehash: 06ae4002fdffb8ba90964b5ef488d0c115b3a0e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203055"
---
# <a name="methods-of-creating-a-status-bar"></a>Metodi di creazione di una barra di stato

MFC fornisce due classi per la creazione di barre di stato: [CStatusBar](reference/cstatusbar-class.md) e [CStatusBarCtrl](reference/cstatusbarctrl-class.md) , che esegue il wrapping dell'API del controllo comune di Windows. `CStatusBar` fornisce tutte le funzionalità del controllo comune della barra di stato, che interagisce automaticamente con i menu e le barre degli strumenti e gestisce automaticamente molte delle impostazioni e delle strutture di controllo comuni necessarie; Tuttavia, l'eseguibile risultante sarà in genere maggiore di quello creato tramite `CStatusBarCtrl` .

`CStatusBarCtrl` in genere viene restituito un eseguibile più piccolo e si preferisce utilizzare `CStatusBarCtrl` se non si intende integrare la barra di stato nell'architettura MFC. Se si prevede di utilizzare `CStatusBarCtrl` e integrare la barra di stato nell'architettura MFC, è necessario prestare maggiore attenzione per comunicare le modifiche del controllo barra di stato a MFC. Questa comunicazione non è difficile. Tuttavia, si tratta di un lavoro aggiuntivo non necessario quando si utilizza `CStatusBar` .

Visual C++ offre due modi per sfruttare il controllo comune della barra di stato.

- Creare la barra di stato usando `CStatusBar` , quindi chiamare [CStatusBar:: GetStatusBarCtrl](reference/cstatusbar-class.md#getstatusbarctrl) per ottenere l'accesso alle `CStatusBarCtrl` funzioni membro.

- Creare la barra di stato usando il costruttore di [CStatusBarCtrl](reference/cstatusbarctrl-class.md).

Uno dei due metodi fornirà l'accesso alle funzioni membro del controllo barra di stato. Quando si chiama `CStatusBar::GetStatusBarCtrl` , viene restituito un riferimento a un `CStatusBarCtrl` oggetto in modo che sia possibile utilizzare un set di funzioni membro. Vedere [CStatusBar](reference/cstatusbar-class.md) per informazioni sulla costruzione e la creazione di una barra di stato con `CStatusBar` .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CStatusBarCtrl](using-cstatusbarctrl.md)<br/>
[Controlli](controls-mfc.md)
