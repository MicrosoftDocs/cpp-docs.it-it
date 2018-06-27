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
ms.openlocfilehash: 315526a8f95a1d62ac89f3a76fab492c9b136715
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956382"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra
Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure finestra speciale. Il collegamento viene eseguita automaticamente quando il modulo viene collegato a MFC. Questa routine viene utilizzata la macro AFX_MANAGE_STATE per impostare correttamente lo stato del modulo effettivo, viene quindi chiamato `AfxWndProc`, che a sua volta delega per il `WindowProc` funzione membro di appropriata `CWnd`-oggetto derivato.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

