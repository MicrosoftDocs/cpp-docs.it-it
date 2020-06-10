---
title: Personalizzazione per MFC
ms.date: 11/04/2016
helpviewer_keywords:
- customizations, MFC Extensions
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
ms.openlocfilehash: 3b7597c3709ed700e82af94c78450ee5aff2d99b
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622966"
---
# <a name="customization-for-mfc"></a>Personalizzazione per MFC

In questo argomento vengono forniti suggerimenti per la personalizzazione di un'applicazione MFC.

## <a name="general-customizations"></a>Personalizzazioni generali

È possibile salvare e caricare lo stato dell'applicazione nel registro di sistema. Quando si abilita questa opzione, l'applicazione caricherà lo stato iniziale dal registro di sistema. Se si modifica il layout di ancoraggio iniziale per l'applicazione, sarà necessario cancellare i dati del registro di sistema per l'applicazione. In caso contrario, i dati nel registro di sistema sostituiranno le eventuali modifiche apportate al layout iniziale.

## <a name="class-specific-customizations"></a>Personalizzazioni specifiche della classe

Altri suggerimenti sulla personalizzazione sono disponibili negli argomenti seguenti:

- [Classe CBasePane](reference/cbasepane-class.md)

- [CDockablePane Class](reference/cdockablepane-class.md)

- [Classe CDockingManager](reference/cdockingmanager-class.md)

- [CMFCBaseTabCtrl Class](reference/cmfcbasetabctrl-class.md)

## <a name="additional-customization-tips"></a>Suggerimenti aggiuntivi per la personalizzazione

[Personalizzazione di tastiera e mouse](keyboard-and-mouse-customization.md)

[Strumenti definiti dall'utente](user-defined-tools.md)

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop MFC](mfc-desktop-applications.md)<br/>
[Implicazioni relative alla sicurezza della personalizzazione](security-implications-of-customization.md)
