---
title: "Tasti di scelta rapida specifici di thread | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tasti di scelta [C++], tasti di scelta"
  - "CHotKeyCtrl (classe), tasti di scelta specifici di thread"
  - "tasti di scelta rapida [C++], tasti di scelta"
  - "threading [C++], scelte rapide in CHotKeyCtrl"
ms.assetid: b6021274-1498-483f-bcbf-ba5723547cc8
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tasti di scelta rapida specifici di thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione impostare un tasto di scelta appropriato specifico \([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)\) utilizzando la funzione di **RegisterHotKey** di windows.  Quando l'utente preme un tasto di scelta appropriato specifico, le finestre invia un messaggio di [WM\_HOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646279) all'inizio della coda messaggi di un thread specifico.  Il messaggio di **WM\_HOTKEY** contiene il codice tasto virtuale, lo stato di spostamento e l'id definito dall'utente del tasto di scelta specifico che è stato premuto.  Per un elenco dei codici tasto virtuali standard, vedere Winuser.h.  Per ulteriori informazioni su questo metodo, vedere [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
 Si noti che i flag dello stato dello shift utilizzati nella chiamata a **RegisterHotKey** non sono uguali a quelli restituiti dalla funzione membro di [GetHotKey](../Topic/CHotKeyCtrl::GetHotKey.md) ; sarà necessario convertire questi flag prima di chiamare **RegisterHotKey**.  
  
## Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)