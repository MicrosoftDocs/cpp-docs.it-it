---
title: Impostazioni per il controllo della barra degli strumenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- toolbar controls [MFC], about toolbar controls
- CToolBarCtrl class [MFC], settings
ms.assetid: 025ba920-b3ee-4d82-9367-e652cd7875b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 81631ba25f898e3740b82c0fab9d5af5da930117
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373356"
---
# <a name="settings-for-the-toolbar-control"></a>Impostazioni per il controllo Toolbar

I pulsanti di una barra degli strumenti possono visualizzare una bitmap, una stringa o entrambi. Per impostazione predefinita, la dimensione dell'immagine è impostata sulle dimensioni di 16 per 15 pixel. Tutti i pulsanti sono della stessa larghezza, per impostazione predefinita 24 per 22 pixel. L'altezza di una barra degli strumenti è determinata dall'altezza dei pulsanti e la larghezza di una barra degli strumenti è uguale alla larghezza dell'area client della finestra padre, anche per impostazione predefinita.

Una barra degli strumenti può presentare funzionalità di personalizzazione incorporate, inclusa una finestra di dialogo di personalizzazione definita dal sistema, che consentono all'utente di inserire, eliminare o riordinare i pulsanti della barra degli strumenti. Un'applicazione determina se le funzionalità di personalizzazione sono disponibili all'utente e controlla l'ambito in cui l'utente può personalizzare la barra degli strumenti. Per altre informazioni sulla personalizzazione barra degli strumenti, vedere la classe [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) nel *riferimento MFC*.

## <a name="see-also"></a>Vedere anche

[Uso di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

