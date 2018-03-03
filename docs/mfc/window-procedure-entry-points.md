---
title: Finestra punti di ingresso Procedure | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5f4e99ce38bd5ae472d688dc779bdd4ccf9fd4c5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra
Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure finestra speciale. Il collegamento viene eseguita automaticamente quando il modulo viene collegato a MFC. Utilizza questa procedura di finestra di `AFX_MANAGE_STATE` macro per definire correttamente lo stato del modulo effettivo, viene quindi chiamato **AfxWndProc**, che a sua volta delega al `WindowProc` funzione membro di appropriato `CWnd`-derivato oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

