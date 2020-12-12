---
description: 'Ulteriori informazioni su: sequenza di operazioni per la creazione di applicazioni OLE'
title: Sequenza delle operazioni per la creazione di applicazioni OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE applications [MFC], creating
- OLE applications [MFC]
- applications [OLE], creating
- applications [OLE]
ms.assetid: 84b0f606-36c1-4253-9cea-44427f0074b9
ms.openlocfilehash: 2bce49d569c6d3def536cbe9386cafbe08ccdbfb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217562"
---
# <a name="sequence-of-operations-for-creating-ole-applications"></a>Sequenza delle operazioni per la creazione di applicazioni OLE

La tabella seguente illustra il ruolo e il ruolo del Framework per la creazione di applicazioni di collegamento e incorporamento OLE. Rappresentano le opzioni disponibili anziché una sequenza di passaggi da eseguire.

### <a name="creating-ole-applications"></a>Creazione di applicazioni OLE

|Attività|Davvero|Il Framework esegue|
|----------|------------|------------------------|
|Creazione di un componente COM.|Eseguire la creazione guidata applicazione MFC. Scegliere **server completo** o **Mini-Server** nella scheda **supporto documenti compositi** .|Il Framework genera un'applicazione Skeleton con funzionalità di componente COM abilitata. Tutte le funzionalità COM possono essere trasferite all'applicazione esistente con una lieve modifica.|
|Creare un'applicazione contenitore da zero.|Eseguire la creazione guidata applicazione MFC. Scegliere **contenitore** nella scheda **supporto documenti compositi** . usando Visualizzazione classi, passare all'editor del codice sorgente. Inserire il codice per le funzioni del gestore COM.|Il Framework genera un'applicazione Skeleton che può inserire oggetti COM creati da applicazioni del componente COM (Server).|
|Creare un'applicazione che supporti l'automazione da zero.|Eseguire la creazione guidata applicazione MFC. Scegliere **automazione** dalla scheda **funzionalità avanzate** . utilizzare Visualizzazione classi per esporre i metodi e le proprietà nell'applicazione per l'automazione.|Il Framework genera un'applicazione Skeleton che può essere attivata e automatizzata da altre applicazioni.|

## <a name="see-also"></a>Vedi anche

[Compilazione nel Framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)<br/>
[Sequenza di operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)
