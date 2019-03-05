---
title: ID finestra e comando standard
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros
helpviewer_keywords:
- standard command and Window IDs
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
ms.openlocfilehash: e5f6955407f565d5cc06ef57e9bd273f6c0f7712
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267251"
---
# <a name="standard-command-and-window-ids"></a>ID finestra e comando standard

La libreria MFC definisce una serie di ID di comando e di finestra standard in Afxres.h. Questi ID sono perlopiù utilizzati negli editor risorse e nella finestra delle proprietà per eseguire il mapping di messaggi alle funzioni del gestore. Tutti i comandi standard hanno un **ID _** prefisso. Ad esempio, quando si usa l'editor dei menu, in genere associare la voce di menu Apri File per l'ID del comando ID_FILE_OPEN standard.

Per i comandi più standard, il codice dell'applicazione non è necessario fare riferimento all'ID di comando, perché il framework stesso gestisce i comandi tramite le mappe messaggi nelle relative classi principali del framework (`CWinThread`, `CWinApp`, `CView`, `CDocument`, e così via).

Oltre all'ID di comando standard, un numero di altri ID standard è definito con il prefisso del **AFX_ID**. Questi ID includono gli ID di finestra standard (prefisso **afx_idw _**), ID stringa (prefisso **afx_ids _**) e diversi altri tipi.

Gli ID che iniziano con la **AFX_ID** prefisso vengono utilizzati raramente dai programmatori, ma potrebbe essere necessario fare riferimento a tali ID quando si esegue l'override di funzioni di framework che si intende anche il **AFX_ID**s.

Gli ID non sono documentati singolarmente in questo riferimento. È possibile trovare altre informazioni su di essi in note tecniche [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md), e [22](../../mfc/tn022-standard-commands-implementation.md).

> [!NOTE]
>  Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h. È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione (.rc):

[!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
