---
title: ID finestra e comando standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard command and Window IDs
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
ms.openlocfilehash: 40783bc19e51afb0e9fe9e4a429df0239a8e7f09
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907709"
---
# <a name="standard-command-and-window-ids"></a>ID finestra e comando standard

La libreria MFC definisce una serie di ID di comando e di finestra standard in Afxres.h. Questi ID vengono usati più di frequente negli editor di risorse e nella [creazione guidata classe](mfc-class-wizard.md) per eseguire il mapping dei messaggi alle funzioni del gestore. Tutti i comandi standard hanno un prefisso **ID_** . Ad esempio, quando si usa l'editor di menu, in genere si associa la voce di menu file Open all'ID del comando standard ID_FILE_OPEN.

Per la maggior parte dei comandi standard, il codice dell'applicazione non deve fare riferimento all'ID del comando, perché il Framework stesso gestisce i comandi tramite le mappe messaggi nelle`CWinThread`classi del `CView`Framework `CDocument`primario (, `CWinApp`,, e così via).

Oltre agli ID di comando standard, viene definito un numero di altri ID standard con prefisso **AFX_ID**. Questi ID includono gli ID di finestra standard (prefix **AFX_IDW_** ), gli ID di stringa (prefisso **AFX_IDS_** ) e diversi altri tipi.

Gli ID che iniziano con il prefisso **AFX_ID** vengono usati raramente dai programmatori, ma potrebbe essere necessario fare riferimento a questi ID quando si eseguono l'override delle funzioni del Framework che fanno riferimento anche a **AFX_ID**s.

Gli ID non sono documentati singolarmente in questo riferimento. È possibile trovare altre informazioni su di esse nelle note tecniche [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md)e [22](../../mfc/tn022-standard-commands-implementation.md).

> [!NOTE]
>  Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h. È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione (.rc):

[!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro e globali](../../mfc/reference/mfc-macros-and-globals.md)
