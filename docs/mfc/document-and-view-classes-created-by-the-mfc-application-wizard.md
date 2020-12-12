---
description: Ulteriori informazioni sulle classi di documento e visualizzazione create dalla creazione guidata applicazione MFC
title: Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- document classes [MFC]
- document classes [MFC], created by application wizards
- application wizards [MFC], document/view classes created
- view classes [MFC], created by application wizards
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
ms.openlocfilehash: f182278ebdd971364e3e35e15e51b6ea5e7aaf68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330311"
---
# <a name="document-and-view-classes-created-by-the-mfc-application-wizard"></a>Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC

La creazione guidata applicazione MFC offre una guida introduttiva allo sviluppo del programma grazie alla creazione di classi di documenti e visualizzazioni scheletriche. È quindi possibile [eseguire il mapping di comandi e messaggi a queste classi](reference/mapping-messages-to-functions.md) e usare l'editor del codice sorgente Visual C++ per scrivere le funzioni membro.

La classe Document creata mediante la creazione guidata applicazione MFC deriva dalla classe [CDocument](reference/cdocument-class.md). La classe di visualizzazione è derivata da [CView](reference/cview-class.md). I nomi che la creazione guidata applicazione assegna a queste classi e i file che li contengono sono basati sul nome del progetto fornito nella finestra di dialogo Creazione guidata applicazione. Nella creazione guidata applicazione è possibile utilizzare la pagina classi generate per modificare i nomi predefiniti.

Per alcune applicazioni potrebbe essere necessaria più di una classe di documento, una classe di visualizzazione o una classe della finestra cornice. Per altre informazioni, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](multiple-document-types-views-and-frame-windows.md).

## <a name="see-also"></a>Vedi anche

[Architettura documento/visualizzazione](document-view-architecture.md)
