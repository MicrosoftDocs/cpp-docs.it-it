---
title: Creazione guidata controllo ActiveX MFC | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
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
ms.openlocfilehash: ccf2da630c72962ee3e74badc250de5cce5f14e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407153"
---
# <a name="mfc-activex-control-wizard"></a>Creazione guidata controllo ActiveX MFC

Un controllo ActiveX è un tipo specifico di [server di automazione](../../mfc/automation-servers.md); è un componente riutilizzabile. L'applicazione che ospita il controllo ActiveX è il [client di automazione](../../mfc/automation-clients.md) di tale controllo. Se l'obiettivo consiste nel creare un componente riutilizzabile, quindi utilizzare la procedura guidata per creare un controllo. Visualizzare [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) per altre informazioni.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](../activex-controls.md).

In alternativa, è possibile creare un'automazione server MFC applicazione usando il [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).

Un controllo ActiveX creato con questa procedura guidata può avere un'interfaccia utente, o può essere invisibile. È possibile indicare questa opzione nella finestra di [le impostazioni di controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina della procedura guidata. Un controllo timer è un esempio di un controllo ActiveX che si sia invisibile.

I controlli ActiveX possono avere un'interfaccia utente complessa. Alcuni controlli potrebbero essere, ad esempio form incapsulata: un singolo controllo contenente molti campi, ognuno di un controllo di Windows in sé. Ad esempio, un oggetto di parti automatico implementato come controllo ActiveX MFC può presentare un'interfaccia utente del form tramite il quale gli utenti è stato possibile leggere e modificare il numero di parte, nome della parte e altre informazioni. Visualizzare [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) per altre informazioni.

Se è necessario creare un contenitore per gli oggetti ActiveX, vedere [creare un contenitore di controlli ActiveX](../../mfc/reference/creating-an-mfc-activex-control-container.md).

Il programma di avvio MFC include i file di origine (. cpp) di C++, i file di risorse (RC) e un file di progetto (vcxproj). Il codice generato in questi file di avvio è basato su MFC.

L'elenco di esempio seguente illustra le attività e i tipi di funzionalità avanzate per il controllo ActiveX:

- [Ottimizzazione di un controllo ActiveX](../../mfc/mfc-activex-controls-optimization.md)

- [Aggiunta di eventi predefiniti a un controllo ActiveX](../../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)

- [Aggiunta di eventi personalizzati](../../mfc/mfc-activex-controls-adding-custom-events.md)

- [Aggiunta di metodi predefiniti](../../mfc/mfc-activex-controls-adding-stock-methods.md)

- [Aggiunta di metodi personalizzati](../../mfc/mfc-activex-controls-adding-custom-methods.md)

- [Aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md)

- [Aggiunta di proprietà personalizzate](../../mfc/mfc-activex-controls-adding-custom-properties.md)

- [Programmazione di controlli ActiveX in un contenitore di controlli ActiveX](../../mfc/programming-activex-controls-in-a-activex-control-container.md)

## <a name="overview"></a>Panoramica

Questa pagina della procedura guidata descrive le impostazioni dell'applicazione corrente per il progetto controllo ActiveX MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:

- Il progetto predefinito viene generato alcun file di licenza o la Guida in fase di esecuzione. È possibile modificare queste impostazioni predefinite nella [le impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md) pagina. Solo le selezioni effettuate in questa pagina della creazione guidata controllo ActiveX si riflettono nella **Panoramica** pagina.

- Il progetto include una classe del controllo e una classe di pagina delle proprietà, in base al nome del progetto. È possibile modificare i nomi dei nomi di progetto e file nei [i nomi dei controlli](../../mfc/reference/control-names-mfc-activex-control-wizard.md) pagina.

- Il controllo basato su alcun controllo di Windows esistente, viene attivato quando diventa visibile, con un'interfaccia utente e include un' **sulle** nella finestra di dialogo. È possibile modificare queste impostazioni predefinite nella [le impostazioni di controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina.

## <a name="see-also"></a>Vedere anche

[Creazione e gestione di progetti Visual C++](../../ide/creating-and-managing-visual-cpp-projects.md)<br/>
[Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)<br/>
[Concetti](../../atl/active-template-library-atl-concepts.md)

