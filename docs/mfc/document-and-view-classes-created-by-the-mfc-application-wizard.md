---
title: Documentare e visualizzare classi create dalla creazione guidata applicazione MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- document classes [MFC]
- document classes [MFC], created by application wizards
- application wizards [MFC], document/view classes created
- view classes [MFC], created by application wizards
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb1a1fc6c35bfb9589e827d798cb112640fa9b2f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46417618"
---
# <a name="document-and-view-classes-created-by-the-mfc-application-wizard"></a>Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC

La creazione guidata applicazione MFC offre un punto di partenza sviluppo di un programma tramite la creazione di classi base documento e visualizzazione per l'utente. È quindi possibile [eseguire il mapping di comandi e i messaggi a queste classi](../mfc/reference/mapping-messages-to-functions.md) e usare l'editor di codice sorgente di Visual C++ per scrivere le relative funzioni membro.

Il documento creato dalla creazione guidata applicazione MFC viene derivata dalla classe [CDocument](../mfc/reference/cdocument-class.md). La classe di visualizzazione è derivata dalla [CView](../mfc/reference/cview-class.md). I nomi che la creazione guidata applicazione offre queste classi e i file in esse contengono sono basati sul nome del progetto è fornire nella finestra di dialogo Creazione guidata applicazione. Nella procedura guidata dell'applicazione, è possibile utilizzare la pagina di classi generate per modificare i nomi predefiniti.

Alcune applicazioni potrebbe essere necessario più di una classe documento, classe di visualizzazione o classe della finestra cornice. Per altre informazioni, vedere [tipi di documenti multipli, visualizzazioni e Frame Windows](../mfc/multiple-document-types-views-and-frame-windows.md).

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

