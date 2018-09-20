---
title: Personalizzazione per MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- customizations, MFC Extensions
ms.assetid: 3b1b7532-8cc9-48dc-9bbe-7fd4060530b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 640d6726623e8fb6d563153823f449f7caefcf30
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385001"
---
# <a name="customization-for-mfc"></a>Personalizzazione per MFC

In questo argomento vengono forniti suggerimenti per la personalizzazione di un'applicazione MFC.

## <a name="general-customizations"></a>Personalizzazioni generali

È possibile salvare e caricare lo stato dell'applicazione nel Registro di sistema. Quando si abilita questa opzione, l'applicazione caricherà il suo stato iniziale dal Registro di sistema. Se si modifica il layout di ancoraggio iniziale per l'applicazione, è necessario cancellare i dati del Registro di sistema per l'applicazione. In caso contrario, i dati nel Registro di sistema sostituiranno tutte le modifiche apportate al layout iniziale.

## <a name="class-specific-customizations"></a>Personalizzazioni specifiche della classe

Suggerimenti per un'ulteriore personalizzazione sono disponibili negli argomenti seguenti:

- [Classe CBasePane](../mfc/reference/cbasepane-class.md)

- [Classe CDockablePane](../mfc/reference/cdockablepane-class.md)

- [Classe CDockingManager](../mfc/reference/cdockingmanager-class.md)

- [Classe CMFCBaseTabCtrl](../mfc/reference/cmfcbasetabctrl-class.md)

## <a name="additional-customization-tips"></a>Suggerimenti per un'ulteriore personalizzazione

[Personalizzazione di tastiera e mouse](../mfc/keyboard-and-mouse-customization.md)

[Strumenti definiti dall'utente](../mfc/user-defined-tools.md)

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md)<br/>
[Implicazioni relative alla sicurezza della personalizzazione](../mfc/security-implications-of-customization.md)

