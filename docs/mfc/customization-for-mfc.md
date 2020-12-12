---
description: 'Altre informazioni su: personalizzazione per MFC'
title: Personalizzazione per MFC
ms.date: 11/04/2016
helpviewer_keywords:
- customizations, MFC Extensions
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
ms.openlocfilehash: 50df32d4743381e1212eae53b695e2355bc8d0e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309407"
---
# <a name="customization-for-mfc"></a>Personalizzazione per MFC

In questo argomento vengono forniti suggerimenti per la personalizzazione di un'applicazione MFC.

## <a name="general-customizations"></a>Personalizzazioni generali

È possibile salvare e caricare lo stato dell'applicazione nel registro di sistema. Quando si abilita questa opzione, l'applicazione caricherà lo stato iniziale dal registro di sistema. Se si modifica il layout di ancoraggio iniziale per l'applicazione, sarà necessario cancellare i dati del registro di sistema per l'applicazione. In caso contrario, i dati nel registro di sistema sostituiranno le eventuali modifiche apportate al layout iniziale.

## <a name="class-specific-customizations"></a>Personalizzazioni di Class-Specific

Altri suggerimenti sulla personalizzazione sono disponibili negli argomenti seguenti:

- [Classe CBasePane](reference/cbasepane-class.md)

- [Classe CDockablePane](reference/cdockablepane-class.md)

- [Classe CDockingManager](reference/cdockingmanager-class.md)

- [Classe CMFCBaseTabCtrl](reference/cmfcbasetabctrl-class.md)

## <a name="additional-customization-tips"></a>Suggerimenti aggiuntivi per la personalizzazione

[Personalizzazione di tastiera e mouse](keyboard-and-mouse-customization.md)

[Strumenti definiti dall'utente](user-defined-tools.md)

## <a name="see-also"></a>Vedi anche

[Applicazioni desktop MFC](mfc-desktop-applications.md)<br/>
[Implicazioni relative alla sicurezza della personalizzazione](security-implications-of-customization.md)
