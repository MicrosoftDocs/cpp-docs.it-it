---
title: Finestra punti di ingresso Procedure | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1095061cce8ff8f189984aca99a06eb741a46e83
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382073"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra
Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure finestra speciale. Il collegamento viene eseguita automaticamente quando il modulo viene collegato a MFC. Utilizza questa procedura di finestra di `AFX_MANAGE_STATE` macro per definire correttamente lo stato del modulo effettivo, viene quindi chiamato **AfxWndProc**, che a sua volta delega al `WindowProc` funzione membro di appropriato `CWnd`-derivato oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

