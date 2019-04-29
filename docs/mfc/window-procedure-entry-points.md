---
title: Punti di ingresso della routine della finestra
ms.date: 11/04/2016
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
ms.openlocfilehash: 6d91e2c432588afc5a84f7189fa87a7fc2531b1a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62372012"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra

Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure apposita finestra. Il collegamento si verifica automaticamente quando il modulo viene collegato a MFC. Questa procedura di finestra viene utilizzata la macro AFX_MANAGE_STATE per definire correttamente lo stato effettivo del modulo, quindi chiama `AfxWndProc`, che a sua volta delegati per il `WindowProc` funzione membro di appropriato `CWnd`-oggetto derivato.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)
