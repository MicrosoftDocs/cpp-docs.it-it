---
title: ID finestra e comando standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard command and Window IDs
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
ms.openlocfilehash: a7f9e37702c686e13379d4034be94949f92e5e79
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372950"
---
# <a name="standard-command-and-window-ids"></a>ID finestra e comando standard

La libreria MFC definisce una serie di ID di comando e di finestra standard in Afxres.h. Questi ID vengono in genere utilizzati all'interno degli editor di risorse e della [Creazione guidata classe](mfc-class-wizard.md) per eseguire il mapping dei messaggi alle funzioni del gestore. Tutti i comandi standard hanno un prefisso **ID_.** Ad esempio, quando si utilizza l'editor di menu, in genere si associa la voce di menu Apri File all'ID di comando standard ID_FILE_OPEN.

Per la maggior parte dei comandi standard, non è necessario che il codice dell'applicazione faccia`CWinThread`riferimento `CWinApp` `CView`all'ID di comando, poiché il framework stesso gestisce i comandi tramite mappe messaggi nelle classi del framework primario ( , , , `CDocument`e così via).

Oltre agli ID di comando standard, vengono definiti numerosi altri ID standard che hanno un prefisso **AFX_ID**. Questi ID di finestra includono ID di finestra standard (prefisso **AFX_IDW_**), ID stringa (prefisso **AFX_IDS_**) e diversi altri tipi.

Gli ID che iniziano con il prefisso **AFX_ID** vengono utilizzati raramente dai programmatori, ma potrebbe essere necessario fare riferimento a questi ID quando si esegue l'override di funzioni del framework che fanno riferimento anche **ai AFX_ID.**

Gli ID non sono documentati singolarmente in questo riferimento. Ulteriori informazioni su di essi sono disponibili nelle note tecniche [20,](../../mfc/tn020-id-naming-and-numbering-conventions.md) [21](../../mfc/tn021-command-and-message-routing.md)e [22](../../mfc/tn022-standard-commands-implementation.md).

> [!NOTE]
> Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h. È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione (.rc):

[!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
