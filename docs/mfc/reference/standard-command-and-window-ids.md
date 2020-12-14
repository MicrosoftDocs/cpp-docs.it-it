---
description: 'Altre informazioni su: comandi standard e ID finestra'
title: ID finestra e comando standard
ms.date: 11/04/2016
helpviewer_keywords:
- standard command and Window IDs
ms.assetid: 0424805c-fff8-4531-8f0c-15cfb13aa612
ms.openlocfilehash: 9f5a6b59d9451d749a48443bddf3560d2702bfe5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218901"
---
# <a name="standard-command-and-window-ids"></a>ID finestra e comando standard

La libreria MFC definisce una serie di ID di comando e di finestra standard in Afxres.h. Questi ID vengono usati più di frequente negli editor di risorse e nella [creazione guidata classe](mfc-class-wizard.md) per eseguire il mapping dei messaggi alle funzioni del gestore. Tutti i comandi standard hanno un prefisso **ID_** . Ad esempio, quando si usa l'editor di menu, in genere si associa la voce di menu Apri file al ID_FILE_OPEN standard ID comando.

Per la maggior parte dei comandi standard, il codice dell'applicazione non deve fare riferimento all'ID del comando, perché il Framework stesso gestisce i comandi tramite le mappe messaggi nelle classi del Framework primario ( `CWinThread` ,, `CWinApp` `CView` , `CDocument` e così via).

Oltre agli ID di comando standard, viene definito un numero di altri ID standard con prefisso **AFX_ID**. Questi ID includono gli ID di finestra standard (prefisso      **AFX_IDW_**), gli ID di stringa (prefisso **AFX_IDS_**) e molti altri tipi.

Gli ID che iniziano con il prefisso **AFX_ID** vengono usati raramente dai programmatori, ma potrebbe essere necessario fare riferimento a questi ID quando si eseguono l'override delle funzioni del Framework che fanno riferimento anche a **AFX_ID**.

Gli ID non sono documentati singolarmente in questo riferimento. È possibile trovare altre informazioni su di esse nelle note tecniche [20](../../mfc/tn020-id-naming-and-numbering-conventions.md), [21](../../mfc/tn021-command-and-message-routing.md)e [22](../../mfc/tn022-standard-commands-implementation.md).

> [!NOTE]
> Il file di intestazione Afxres.h è incluso indirettamente in Afxwin.h. È necessario includere in modo esplicito la seguente istruzione nel file di script di risorsa dell'applicazione (.rc):

[!code-cpp[NVC_MFC_Utilities#47](../../mfc/codesnippet/cpp/standard-command-and-window-ids_1.h)]

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
