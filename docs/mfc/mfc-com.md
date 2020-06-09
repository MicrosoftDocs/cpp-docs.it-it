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
ms.openlocfilehash: da194510938e3fe02eba5993182e811fdf2e1b7c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618017"
---
# <a name="mfc-com"></a>MFC COM

Un subset di MFC è progettato per supportare COM, mentre la maggior parte dei Active Template Library (ATL) è progettata per la programmazione COM. In questa sezione degli argomenti viene descritto il supporto di MFC per COM.

Le tecnologie attive (ad esempio i controlli ActiveX, il contenimento dei documenti attivi, OLE e così via) utilizzano il Component Object Model (COM) per consentire ai componenti software di interagire tra loro in un ambiente di rete, indipendentemente dal linguaggio con cui sono stati creati. È possibile utilizzare le tecnologie attive per creare applicazioni in esecuzione sul desktop o su Internet. Per ulteriori informazioni, vedere [Introduzione a com](../atl/introduction-to-com.md) o [al Component Object Model](/windows/win32/com/the-component-object-model).

Le tecnologie attive includono le tecnologie client e server, incluse le seguenti:

- I controlli ActiveX sono oggetti interattivi che possono essere utilizzati in contenitori come un sito Web. Per ulteriori informazioni sui controlli ActiveX, vedere:

  - [Controlli ActiveX MFC](mfc-activex-controls.md)

  - [Controlli ActiveX in Internet](activex-controls-on-the-internet.md)

  - [Panoramica: Internet](mfc-internet-programming-basics.md)

  - [Aggiornare un controllo ActiveX esistente da usare su Internet](upgrading-an-existing-activex-control.md)

  - [Debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)

- Lo scripting attivo controlla il comportamento integrato di uno o più controlli ActiveX da un browser o un server. Per ulteriori informazioni sullo scripting attivo, vedere la pagina relativa alla [tecnologia attiva su Internet](active-technology-on-the-internet.md).

- [Automation](automation.md) (noto in precedenza come automazione OLE) consente a un'applicazione di modificare gli oggetti implementati in un'altra applicazione o di "esporre" oggetti in modo che possano essere modificati.

   L'oggetto automatizzato potrebbe essere locale o remoto (in un altro computer accessibile attraverso una rete). L'automazione è disponibile sia per gli oggetti OLE che per gli oggetti COM.

- In questa sezione vengono inoltre fornite informazioni su come scrivere componenti COM utilizzando MFC, ad esempio, nei [punti di connessione](connection-points.md).

Per informazioni su ciò che viene ancora chiamato OLE rispetto a quello che ora è denominato tecnologia Active, vedere gli argomenti su [OLE](ole-in-mfc.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Contenimento dei documenti attivi](active-document-containment.md)

[Automazione](automation.md)

[Punti di connessione](connection-points.md)

[Controlli ActiveX MFC](mfc-activex-controls.md)

## <a name="see-also"></a>Vedere anche

[Concetti](mfc-concepts.md)
