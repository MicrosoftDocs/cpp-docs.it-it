---
title: Tasti di scelta rapida globali | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- CHotKeyCtrl class [MFC], global hot keys
- access keys [MFC], hot keys
- global hot keys [MFC]
ms.assetid: e0b95d14-c571-4c9a-9cd1-e7fc1f0e278d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a2ef1e2135ebd780938fb0ed194a93058fd010f6
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209154"
---
# <a name="global-hot-keys"></a>Tasti di scelta rapida globali
Un tasto di scelta rapida globale è associato a una finestra non figlio specifico. Consente all'utente di attivare la finestra da qualsiasi parte del sistema. Un'applicazione imposta un tasto di scelta rapida globale per una particolare finestra inviando il [messaggio WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) alla finestra di messaggio. Ad esempio, se `m_HotKeyCtrl` è il [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) oggetto e `pMainWnd` è un puntatore alla finestra da attivare quando viene premuto il tasto di scelta rapida, è possibile usare il codice seguente per associare il tasto di scelta rapida specificato nel controllo con la finestra a cui punta `pMainWnd`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#18](../mfc/codesnippet/cpp/global-hot-keys_1.cpp)]  
  
 Ogni volta che l'utente preme un tasto di scelta rapida globale, la finestra specificata riceve un [WM_SYSCOMMAND](/windows/desktop/menurc/wm-syscommand) messaggio che specifica **SC_HOTKEY** come tipo di comando. Questo messaggio viene inoltre attivata la finestra che lo riceve. Poiché questo messaggio include le informazioni sulla chiave esatta che è stata premuta, utilizzando questo metodo non consente di distinguere tra diversi tasti di scelta rapida che possono essere collegati alla stessa finestra. Il tasto di scelta rapida rimane valido finché l'applicazione che ha inviato **messaggio WM_SETHOTKEY** viene chiuso.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

