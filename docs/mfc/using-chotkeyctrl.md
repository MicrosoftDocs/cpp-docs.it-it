---
title: Utilizzo di CHotKeyCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CHotKeyCtrl
dev_langs: C++
helpviewer_keywords:
- keys, hot and CHotKeyCtrl
- CHotKeyCtrl class [MFC], using
- hot key controls
ms.assetid: 9b207117-d848-4224-8888-c3d197bb0c95
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a4cb304e014412e16f425b4162fd4950dcc7789f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="using-chotkeyctrl"></a>Utilizzo di CHotKeyCtrl
Un controllo tasto di scelta, rappresentato dalla classe [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md), è una finestra che visualizza una rappresentazione di testo della combinazione di tasti, l'utente digita, ad esempio CTRL + MAIUSC + Q. Viene mantenuta anche una rappresentazione interna di questa chiave in forma di un codice tasto virtuale e un set di flag che rappresentano lo stato di spostamento. Controllo tasto di scelta non impostato il tasto di scelta rapida, questa operazione viene effettuata dal programma. (Per un elenco di codici di tasti virtuali standard, vedere winuser. h).  
  
 Utilizzare un controllo tasto di scelta per ottenere l'input dell'utente per il tasto di scelta rapida da associare a una finestra o di un thread. Controlli tasto di scelta vengono spesso utilizzati nelle finestre di dialogo, ad esempio, potrebbe essere visualizzato quando viene richiesto all'utente per assegnare un tasto di scelta rapida. È responsabilità del programma per recuperare i valori che descrivono il tasto di scelta dal controllo tasto di scelta e chiamare le funzioni appropriate per associare il tasto di scelta rapida a una finestra o di un thread.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Uso di un controllo tasto di scelta rapida](../mfc/using-a-hot-key-control.md)  
  
-   [Impostazione di un tasto di scelta rapida](../mfc/setting-a-hot-key.md)  
  
-   [Tasti di scelta rapida globali](../mfc/global-hot-keys.md)  
  
-   [Tasti di scelta rapida specifici di thread](../mfc/thread-specific-hot-keys.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)

