---
title: Utilizzo di CSliderCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CSliderCtrl
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl class [MFC], using
- slider controls [MFC], using
ms.assetid: 242c7bcd-126e-4b9b-8f76-8082ad06fe73
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8dec5e0500d7857c8b6781cfd0f78fb18cf93349
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380326"
---
# <a name="using-csliderctrl"></a>Utilizzo di CSliderCtrl

Il [CSliderCtrl](../mfc/reference/csliderctrl-class.md) classe rappresenta un controllo dispositivo di scorrimento, che è anche detto trackbar. Un "controllo dispositivo di scorrimento" è una finestra che contiene un dispositivo di scorrimento e facoltativamente dei segni di graduazione. Quando l'utente sposta il dispositivo di scorrimento utilizzando il mouse o i tasti di direzione, dal controllo dispositivo di scorrimento vengono inviati dei messaggi di notifica per indicare il cambiamento.

I controlli dispositivo di scorrimento sono utili quando si desidera che l'utente selezioni un valore distinto o un set di valori consecutivi in un intervallo. È ad esempio possibile utilizzare un controllo dispositivo di scorrimento per consentire all'utente di impostare la velocità di ripetizione della tastiera spostando il dispositivo di scorrimento in corrispondenza di uno specifico segno di graduazione.

Il dispositivo di scorrimento in un controllo dispositivo di scorrimento viene spostato ad incrementi che si specificano durante la creazione del dispositivo. Ad esempio, se si specifica che il controllo dispositivo di scorrimento debba avere un intervallo di cinque, il dispositivo di scorrimento potrà occupare solo sei posizioni: una posizione sul lato sinistro del controllo dispositivo di scorrimento e una posizione per ciascun incremento nell'intervallo. In genere, ognuna di queste posizioni è identificata da un segno di graduazione.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Uso di controlli Slider](../mfc/using-slider-controls.md)

- [Stili del controllo Slider](../mfc/slider-control-styles.md)

- [Funzioni membro controllo Slider](../mfc/slider-control-member-functions.md)

- [Messaggi di notifica dispositivo di scorrimento](../mfc/slider-notification-messages.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)

