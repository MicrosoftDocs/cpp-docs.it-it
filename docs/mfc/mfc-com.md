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
ms.openlocfilehash: 514251475050e728be1959417ead1dbdf96e4800
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358188"
---
# <a name="mfc-com"></a>MFC COM

Un sottoinsieme di MFC è progettato per supportare COM, mentre la maggior parte della libreria ATL (Active Template) è progettata per la programmazione COM. In questa sezione degli argomenti viene descritto il supporto di MFC per COM.

Le tecnologie attive (ad esempio i controlli ActiveX, il contenimento dei documenti attivi, OLE e così via) utilizzano il modello COM (Component Object Model) per consentire ai componenti software di interagire tra loro in un ambiente di rete, indipendentemente dal linguaggio con cui sono stati creati. Le tecnologie attive possono essere utilizzate per creare applicazioni che vengono eseguite sul desktop o su Internet. Per ulteriori informazioni, vedere [Introduzione a COM](../atl/introduction-to-com.md) o Modello a oggetti dei [componenti](/windows/win32/com/the-component-object-model).

Le tecnologie attive includono tecnologie client e server, tra cui:

- I controlli ActiveX sono oggetti interattivi che possono essere utilizzati in contenitori come un sito Web. Per ulteriori informazioni sui controlli ActiveX, vedere:

  - [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

  - [Controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md)

  - [Panoramica: Internet](../mfc/mfc-internet-programming-basics.md)

  - [Aggiornare un controllo ActiveX esistente da utilizzare su Internet](../mfc/upgrading-an-existing-activex-control.md)

  - [Debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)

- Lo scripting attivo controlla il comportamento integrato di uno o più controlli ActiveX da un browser o un server. Per ulteriori informazioni sugli script attivi, vedere [Active Technology on the Internet](../mfc/active-technology-on-the-internet.md).

- [L'automazione](../mfc/automation.md) (precedentemente nota come automazione OLE) consente a un'applicazione di modificare gli oggetti implementati in un'altra applicazione o di "esporre" gli oggetti in modo che possano essere modificati.

   L'oggetto automatico potrebbe essere locale o remoto (su un altro computer accessibile attraverso una rete). L'automazione è disponibile sia per gli oggetti OLE che per gli oggetti COM.

- In questa sezione vengono inoltre fornite informazioni su come scrivere componenti COM utilizzando MFC, ad esempio in [Punti di connessione](../mfc/connection-points.md).

Per una discussione su ciò che è ancora chiamato OLE rispetto a ciò che viene ora chiamato tecnologia attiva, vedere gli argomenti su [OLE](../mfc/ole-in-mfc.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Contenimento dei documenti attivi](../mfc/active-document-containment.md)

[Automazione](../mfc/automation.md)

[Punti di connessione](../mfc/connection-points.md)

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)
