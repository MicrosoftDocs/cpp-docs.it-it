---
title: Finestra punti di ingresso Procedure | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 99a4cf3fe356cf888101935aba5bec9a599135f9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra
Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure finestra speciale. Il collegamento viene eseguita automaticamente quando il modulo viene collegato a MFC. Utilizza questa procedura di finestra di `AFX_MANAGE_STATE` macro per definire correttamente lo stato del modulo effettivo, viene quindi chiamato **AfxWndProc**, che a sua volta delega al `WindowProc` funzione membro di appropriato `CWnd`-derivato oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

