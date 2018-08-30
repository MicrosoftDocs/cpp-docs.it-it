---
title: L'impostazione di un tasto di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts [MFC], hot keys
- access keys [MFC], hot keys
- CHotKeyCtrl class [MFC], setting hot key
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 254d7532b83a4f30c0029b2488bb0b2111cce31d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43219397"
---
# <a name="setting-a-hot-key"></a>Impostazione di un tasto di scelta rapida
L'applicazione può usare le informazioni fornite da un tasto di scelta rapida ([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)) controllo in uno dei due modi:  
  
-   Configurare un tasto di scelta rapida globale per l'attivazione di una finestra non figlio mediante l'invio di un [messaggio WM_SETHOTKEY](/windows/desktop/inputdev/wm-sethotkey) messaggio nella finestra di attivazione.  
  
-   Configurare un tasto di scelta rapida specifici di thread chiamando la funzione di Windows [RegisterHotKey](https://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

