---
title: MFC COM
ms.date: 09/12/2018
f1_keywords:
- MFC COM (MFC)
helpviewer_keywords:
- MFC, COM support
- MFC ActiveX controls [MFC], COM support in MFC
- MFC COM [MFC]
- ActiveX controls [MFC], COM object model
- Active technology [MFC]
- COM [MFC], MFC support
ms.assetid: 7646bdcb-3a06-4ed5-9386-9b00f3979dcb
ms.openlocfilehash: 67c7ea3e93b3158abc552c552c450c31c109be80
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57257826"
---
# <a name="mfc-com"></a>MFC COM

Un sottoinsieme di MFC è progettato per supportare COM, mentre la maggior parte della libreria ATL (Active Template) è progettata per la programmazione COM. Negli argomenti di questa sezione viene descritto il supporto di MFC per COM.

Tecnologie Active (ad esempio i controlli ActiveX, contenimento dei documenti attivi, OLE e così via) usano il modello COM (Component Object) per abilitare i componenti software interagire tra loro in un ambiente di rete, indipendentemente dal linguaggio con cui fossero creato. Tecnologie Active utilizzabile per creare applicazioni in esecuzione sul desktop o Internet. Per altre informazioni, vedere [Introduzione a COM](../atl/introduction-to-com.md) oppure [The Component Object Model](/windows/desktop/com/the-component-object-model).

Tecnologie Active includono le tecnologie di client e server, incluse le seguenti:

- Controlli ActiveX sono interattivi oggetti utilizzabili in contenitori, ad esempio un sito Web. Per altre informazioni sui controlli ActiveX, vedere:

   - [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

   - [Controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md)

   - [Panoramica: Internet](../mfc/mfc-internet-programming-basics.md)

   - [Eseguire l'aggiornamento di un controllo ActiveX esistente da utilizzare in Internet](../mfc/upgrading-an-existing-activex-control.md)

   - [Debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)

- Esecuzione script attivo controlla il comportamento integrato di uno o più controlli ActiveX in un browser o un server. Per altre informazioni sulla creazione di script attivo, vedere [tecnologia Active in Internet](../mfc/active-technology-on-the-internet.md).

- [Automazione](../mfc/automation.md) (precedentemente noto come automazione OLE) rende possibile per un'applicazione possa modificare oggetti implementati in un'altra applicazione o "esporli" in modo che possano essere modificati.

   L'oggetto automatizzato potrebbe essere locale o remoto (in un altro computer accessibile attraverso una rete). L'automazione è disponibile sia per gli oggetti OLE che per gli oggetti COM.

- Questa sezione vengono fornite informazioni su come scrivere i componenti COM utilizza MFC, ad esempio, nella [punti di connessione](../mfc/connection-points.md).

Per una descrizione di ciò che viene chiamato comunque OLE rispetto a ciò che è ora denominata tecnologia active, vedere gli argomenti sul [OLE](../mfc/ole-in-mfc.md).

## <a name="in-this-section"></a>In questa sezione

[Contenimento dei documenti attivi](../mfc/active-document-containment.md)

[Automazione](../mfc/automation.md)

[Punti di connessione](../mfc/connection-points.md)

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)
