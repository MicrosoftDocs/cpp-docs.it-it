---
title: Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- document classes [MFC]
- document classes [MFC], created by application wizards
- application wizards [MFC], document/view classes created
- view classes [MFC], created by application wizards
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
ms.openlocfilehash: 766fe4efb37c199c5babb75ce2cb08ebf676cca6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616048"
---
# <a name="document-and-view-classes-created-by-the-mfc-application-wizard"></a>Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC

La creazione guidata applicazione MFC offre una guida introduttiva allo sviluppo del programma grazie alla creazione di classi di documenti e visualizzazioni scheletriche. È quindi possibile [eseguire il mapping di comandi e messaggi a queste classi](reference/mapping-messages-to-functions.md) e usare l'editor del codice sorgente Visual C++ per scrivere le funzioni membro.

La classe Document creata mediante la creazione guidata applicazione MFC deriva dalla classe [CDocument](reference/cdocument-class.md). La classe di visualizzazione è derivata da [CView](reference/cview-class.md). I nomi che la creazione guidata applicazione assegna a queste classi e i file che li contengono sono basati sul nome del progetto fornito nella finestra di dialogo Creazione guidata applicazione. Nella creazione guidata applicazione è possibile utilizzare la pagina classi generate per modificare i nomi predefiniti.

Per alcune applicazioni potrebbe essere necessaria più di una classe di documento, una classe di visualizzazione o una classe della finestra cornice. Per altre informazioni, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](multiple-document-types-views-and-frame-windows.md).

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
