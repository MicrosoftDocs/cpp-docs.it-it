---
title: Finestra punti di ingresso di procedura | Microsoft Docs
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
ms.openlocfilehash: c3226df51d2a83484de78d0d76c9af67e150e8eb
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403188"
---
# <a name="window-procedure-entry-points"></a>Punti di ingresso della routine della finestra

Per proteggere le routine di finestra MFC, con collegamenti modulo statica con un'implementazione di procedure apposita finestra. Il collegamento si verifica automaticamente quando il modulo viene collegato a MFC. Questa procedura di finestra viene utilizzata la macro AFX_MANAGE_STATE per definire correttamente lo stato effettivo del modulo, quindi chiama `AfxWndProc`, che a sua volta delegati per il `WindowProc` funzione membro di appropriato `CWnd`-oggetto derivato.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

