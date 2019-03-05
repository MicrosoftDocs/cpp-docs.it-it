---
title: Utilizzo di CHotKeyCtrl
ms.date: 11/04/2016
f1_keywords:
- CHotKeyCtrl
helpviewer_keywords:
- keys, hot and CHotKeyCtrl
- CHotKeyCtrl class [MFC], using
- hot key controls
ms.assetid: 9b207117-d848-4224-8888-c3d197bb0c95
ms.openlocfilehash: f52d676f68718cdd4d16cf93bf0d7e3fd6b03822
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275753"
---
# <a name="using-chotkeyctrl"></a>Utilizzo di CHotKeyCtrl

Un controllo tasto di scelta, rappresentato dalla classe [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md), è una finestra che visualizza una rappresentazione di testo della combinazione di tasti l'utente digita in essa, ad esempio CTRL + MAIUSC + Q. Mantiene anche una rappresentazione interna di questa chiave sotto forma di un codice tasto virtuale e un set di flag che rappresentano lo stato di spostamento. Il controllo tasto di scelta non è impostata la chiave di accesso frequente, questa operazione è responsabilità del programma. (Per un elenco di codici di tasti virtuali standard, vedere winuser. h).

Usare un controllo tasto di scelta per ottenere l'input dell'utente per la quale tasto di scelta rapida da associare a una finestra o thread. Controlli tasto di scelta vengono spesso usati nelle finestre di dialogo, ad esempio potrebbe essere visualizzato quando si richiede all'utente di assegnare un tasto di scelta rapida. È responsabilità del programma per recuperare i valori che descrivono il tasto di scelta dal controllo tasto di scelta e per chiamare le funzioni appropriate per associare il tasto di scelta rapida a una finestra o thread.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Uso di un controllo tasto di scelta rapida](../mfc/using-a-hot-key-control.md)

- [Impostazione di un tasto di scelta rapida](../mfc/setting-a-hot-key.md)

- [Tasti di scelta rapida globali](../mfc/global-hot-keys.md)

- [Tasti di scelta rapida specifici di thread](../mfc/thread-specific-hot-keys.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)
