---
description: 'Altre informazioni su: punti di ingresso della routine della finestra'
title: Punti di ingresso della routine della finestra
ms.date: 11/04/2016
helpviewer_keywords:
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
ms.openlocfilehash: 2c2e5dc5d37a2e6f187e694d39205c4cd95b3810
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214481"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra

Per proteggere le routine della finestra MFC, i collegamenti statici di un modulo con un'implementazione di routine della finestra speciale. Il collegamento viene eseguito automaticamente quando il modulo è collegato a MFC. Questa procedura della finestra usa la macro AFX_MANAGE_STATE per impostare correttamente lo stato del modulo effettivo, quindi chiama `AfxWndProc` , che a sua volta delega la `WindowProc` funzione membro dell' `CWnd` oggetto derivato da appropriato.

## <a name="see-also"></a>Vedi anche

[Gestione dei dati sullo stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)
