---
title: "Tasti di scelta rapida globali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "CHotKeyCtrl (classe), tasti di scelta rapida globali"
  - "tasti di scelta rapida globali"
  - "tasti di scelta rapida [C++], tasti di scelta"
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Tasti di scelta rapida globali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un tasto di scelta globale viene associato a una finestra specifica di nonchild.  Consente all'utente di attivare la finestra da qualsiasi parte del sistema.  Un'applicazione impostare un tasto di scelta globale per una particolare finestra inviando il messaggio di [WM\_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) a tale finestra.  Ad esempio, se `m_HotKeyCtrl` è l'oggetto di [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) e `pMainWnd` è un puntatore alla finestra venga attivato quando il tasto di scelta viene raggiunto, è possibile utilizzare il codice seguente per associare il tasto di scelta specificato nel controllo con la finestra indicata da `pMainWnd`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#18](../mfc/codesnippet/CPP/global-hot-keys_1.cpp)]  
  
 Ogni volta che si preme un tasto di scelta globale, la finestra specificata riceve un messaggio di [WM\_SYSCOMMAND](http://msdn.microsoft.com/library/windows/desktop/ms646360) che specifica **SC\_HOTKEY** come tipo di comando.  Questo messaggio viene attivata la finestra che lo riceva.  Poiché questo messaggio non include alcuna informazione su chiave esatta premuto, utilizzando questo metodo non consente la distinzione tra i tasti di scelta diversi che possono essere associati alla stessa finestra.  Il tasto di scelta rimane valido fino all'applicazione che ha inviato le uscite di **WM\_SETHOTKEY**.  
  
## Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)