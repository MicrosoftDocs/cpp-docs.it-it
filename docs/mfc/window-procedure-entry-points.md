---
title: Punti di ingresso della routine della finestra
ms.date: 11/04/2016
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
ms.openlocfilehash: 9e395ff96d27476bc2869e23139cb2d1233f02ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500919"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra

Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure apposita finestra. Il collegamento si verifica automaticamente quando il modulo viene collegato a MFC. Questa procedura di finestra viene utilizzata la macro AFX_MANAGE_STATE per definire correttamente lo stato effettivo del modulo, quindi chiama `AfxWndProc`, che a sua volta delegati per il `WindowProc` funzione membro di appropriato `CWnd`-oggetto derivato.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

