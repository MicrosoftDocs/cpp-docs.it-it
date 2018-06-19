---
title: Creazione guidata controllo ActiveX MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.ctl.overview
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [MFC], MFC
- MFC ActiveX controls [MFC], wizards
- OLE controls [MFC], creating
- MFC ActiveX Control Wizard
- OLE controls [MFC]
ms.assetid: f19d698c-bdc3-4c74-af97-3d6ccb441b75
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 45af43a98244e90f52075817fc9e17a905cbf065
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33375063"
---
# <a name="mfc-activex-control-wizard"></a>Creazione guidata controllo ActiveX MFC
Un controllo ActiveX è un tipo specifico di [server di automazione](../../mfc/automation-servers.md); è un componente riutilizzabile. L'applicazione che ospita il controllo ActiveX è il [client di automazione](../../mfc/automation-clients.md) del controllo. Se l'obiettivo consiste nel creare un componente riutilizzabile, utilizzare la procedura guidata per creare un controllo. Vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) per ulteriori informazioni.  
  
 In alternativa, è possibile creare un'automazione server MFC applicazione utilizzando il [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).  
  
 Un controllo ActiveX creato con questa procedura guidata può avere un'interfaccia utente, o può essere invisibile. È possibile indicare l'opzione di [le impostazioni di controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina della procedura guidata. Un controllo timer è un esempio di un controllo ActiveX che si desidera sia invisibile.  
  
 Controlli ActiveX possono avere un'interfaccia utente complessa. Alcuni controlli potrebbero essere come form incapsulato: un singolo controllo contenente diversi campi, ognuno dei controlli Windows in sé. Ad esempio, un oggetto di parti di auto implementato come un controllo ActiveX MFC potrebbe presentare un'interfaccia utente simili a moduli tramite il quale gli utenti può leggere e modificare il numero parte, il nome di parte e altre informazioni. Vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) per ulteriori informazioni.  
  
 Se è necessario creare un contenitore per gli oggetti ActiveX, vedere [creare un contenitore di controlli ActiveX](../../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
 Il programma di avvio MFC include i file di origine (. cpp) di C++, file di risorse (RC) e un file di progetto (vcxproj). Il codice generato in questi file di avvio è basato su MFC.  
  
 L'elenco di esempio seguente mostra l'attività e tipi di miglioramenti per il controllo ActiveX:  
  
-   [Ottimizzazione di un controllo ActiveX](../../mfc/mfc-activex-controls-optimization.md)  
  
-   [Aggiunta di eventi predefiniti a un controllo ActiveX](../../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)  
  
-   [Aggiunta di eventi personalizzati](../../mfc/mfc-activex-controls-adding-custom-events.md)  
  
-   [Aggiunta di metodi predefiniti](../../mfc/mfc-activex-controls-adding-stock-methods.md)  
  
-   [Aggiunta di metodi personalizzati](../../mfc/mfc-activex-controls-adding-custom-methods.md)  
  
-   [Aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [Aggiunta di proprietà personalizzate](../../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [Programmazione di controlli ActiveX in un contenitore di controlli ActiveX](../../mfc/programming-activex-controls-in-a-activex-control-container.md)  
  
## <a name="overview"></a>Panoramica  
 Questa pagina della procedura guidata descrive le impostazioni correnti per il progetto controllo ActiveX MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:  
  
-   Il progetto predefinito viene generato alcun file di licenza o la Guida in fase di esecuzione. È possibile modificare queste impostazioni predefinite nella [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md) pagina. Solo le selezioni effettuate in questa pagina della creazione guidata controllo ActiveX vengono eseguiti il **Panoramica** pagina.  
  
-   Il progetto include una classe del controllo e una classe di pagina delle proprietà, in base al nome del progetto. È possibile modificare i nomi dei nomi di progetto e i file nel [i nomi dei controlli](../../mfc/reference/control-names-mfc-activex-control-wizard.md) pagina.  
  
-   Il controllo basato su Nessun controllo Windows esistente, viene attivato quando diventa visibile, con un'interfaccia utente e include un **su** la finestra di dialogo. È possibile modificare queste impostazioni predefinite nella [le impostazioni di controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e gestione di progetti Visual C++](../../ide/creating-and-managing-visual-cpp-projects.md)   
 [Tipi di progetto di Visual C++](../../ide/visual-cpp-project-types.md)   
 [Concetti](../../atl/active-template-library-atl-concepts.md)

