---
title: Sequenza delle operazioni per la creazione di applicazioni OLE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE applications [MFC], creating
- OLE applications [MFC]
- applications [OLE], creating
- applications [OLE]
ms.assetid: 84b0f606-36c1-4253-9cea-44427f0074b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02542f8a4eb382ff4d7a88f98163b0052be09f75
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392519"
---
# <a name="sequence-of-operations-for-creating-ole-applications"></a>Sequenza delle operazioni per la creazione di applicazioni OLE

Nella tabella seguente viene illustrato il ruolo e il ruolo del framework nella creazione di collegamento e incorporamento delle applicazioni OLE. Questi rappresentano opzioni disponibili invece di una sequenza di passaggi da eseguire.

### <a name="creating-ole-applications"></a>Creazione di applicazioni OLE

|Attività|Davvero|Il framework esegue|
|----------|------------|------------------------|
|Creare un componente COM.|Eseguire la creazione guidata applicazione MFC. Scegliere **server completo** oppure **server ridotto** nel **supporto documenti compositi** scheda.|Il framework genera una struttura applicazione con la funzionalità componente COM di abilitati. Tutte le funzionalità di COM può essere trasferite all'applicazione esistente con solo piccole modifiche.|
|Creare un'applicazione contenitore da zero.|Eseguire la creazione guidata applicazione MFC. Scegli **contenitore** nel **supporto documenti compositi** scheda. Uso della visualizzazione classi, passare all'editor del codice sorgente. Inserire codice per le funzioni del gestore di COM.|Il framework genera una struttura applicazione che possa inserire gli oggetti COM creati dalle applicazioni di componenti (server) COM.|
|Creare un'applicazione che supporta l'automazione da zero.|Eseguire la creazione guidata applicazione MFC. Scegli **Automation** dal **funzionalità avanzate** scheda. Utilizzare Visualizzazione classi per esporre metodi e proprietà nell'applicazione per l'automazione.|Il framework genera una struttura applicazione che può essere attivata e automatizzata da altre applicazioni.|

## <a name="see-also"></a>Vedere anche

[Compilazione nel framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)<br/>
[Sequenza delle operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)

