---
title: Le notifiche inviate mediante controlli Animation | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb83fe6195c01c1e9dbcc2c00e43738af9ebc8e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386392"
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation

Un controllo animation ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) invia due diversi tipi di messaggi di notifica. Le notifiche vengono inviate sotto forma di [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi.

Il [messaggio ACN_START](/windows/desktop/Controls/acn-start) messaggio viene inviato quando il controllo animazione è stata avviata la riproduzione di una clip. Il [messaggio ACN_STOP](/windows/desktop/Controls/acn-stop) messaggio viene inviato quando il controllo animazione completato o interrotto un filmato.

## <a name="see-also"></a>Vedere anche

[Uso di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

