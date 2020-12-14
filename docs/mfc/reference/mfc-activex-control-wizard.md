---
description: 'Ulteriori informazioni su: creazione guidata controllo ActiveX MFC'
title: Creazione guidata controllo ActiveX MFC
ms.date: 09/12/2018
f1_keywords:
- vc.appwiz.mfc.ctl.overview
helpviewer_keywords:
- ActiveX controls [MFC], MFC
- MFC ActiveX controls [MFC], wizards
- OLE controls [MFC], creating
- MFC ActiveX Control Wizard
- OLE controls [MFC]
ms.assetid: f19d698c-bdc3-4c74-af97-3d6ccb441b75
ms.openlocfilehash: f313f2a218c06a20eddbfff33e936109e4be2cf0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219265"
---
# <a name="mfc-activex-control-wizard"></a>Creazione guidata controllo ActiveX MFC

Un controllo ActiveX è un tipo specifico di [server di automazione](../../mfc/automation-servers.md); si tratta di un componente riutilizzabile. L'applicazione che ospita il controllo ActiveX è il [client di automazione](../../mfc/automation-clients.md) del controllo. Se l'obiettivo è quello di creare un componente riutilizzabile, usare questa procedura guidata per creare il controllo. Per ulteriori informazioni, vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) .

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](../activex-controls.md).

In alternativa, è possibile creare un'applicazione MFC del server di automazione utilizzando la [creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).

Un controllo ActiveX creato con questa procedura guidata può avere un'interfaccia utente oppure può essere invisibile. È possibile indicare questa opzione nella pagina [Impostazioni controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) della procedura guidata. Un controllo timer è un esempio di un controllo ActiveX che si desidera sia invisibile.

I controlli ActiveX possono avere un'interfaccia utente complessa. Alcuni controlli potrebbero essere simili a moduli incapsulati, ovvero un singolo controllo contenente molti campi, ognuno dei quali è un controllo di Windows in proprio diritto. Un oggetto auto part implementato come controllo ActiveX MFC, ad esempio, può presentare un'interfaccia utente simile a un form tramite la quale gli utenti possono leggere e modificare il numero di parte, il nome della parte e altre informazioni. Per ulteriori informazioni, vedere [controlli ActiveX MFC](../../mfc/mfc-activex-controls.md) .

Se è necessario creare un contenitore per gli oggetti ActiveX, vedere [creare un contenitore di controlli ActiveX](../../mfc/reference/creating-an-mfc-activex-control-container.md).

Il programma di avvio MFC include file di origine (con estensione cpp) C++, file di risorse (RC) e un file di progetto (con estensione vcxproj). Il codice generato in questi file di avvio è basato su MFC.

Nell'elenco di esempio seguente vengono illustrate le attività e i tipi di miglioramenti per il controllo ActiveX:

- [Ottimizzazione di un controllo ActiveX](../../mfc/mfc-activex-controls-optimization.md)

- [Aggiunta di eventi azionari a un controllo ActiveX](../../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)

- [Aggiunta di eventi personalizzati](../../mfc/mfc-activex-controls-adding-custom-events.md)

- [Aggiunta di metodi azionari](../../mfc/mfc-activex-controls-adding-stock-methods.md)

- [Aggiunta di metodi personalizzati](../../mfc/mfc-activex-controls-adding-custom-methods.md)

- [Aggiunta di proprietà predefinite](../../mfc/mfc-activex-controls-adding-stock-properties.md)

- [Aggiunta di proprietà personalizzate](../../mfc/mfc-activex-controls-adding-custom-properties.md)

- [Programmazione di controlli ActiveX in un contenitore di controlli ActiveX](../../mfc/programming-activex-controls-in-a-activex-control-container.md)

## <a name="overview"></a>Panoramica

In questa pagina della procedura guidata vengono descritte le impostazioni correnti dell'applicazione per il progetto di controllo ActiveX MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:

- Il progetto predefinito non genera alcun file della guida o della licenza in fase di esecuzione. È possibile modificare queste impostazioni predefinite nella pagina [Impostazioni applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md) . Solo le selezioni effettuate in questa pagina della creazione guidata controllo ActiveX si riflettono nella pagina **Panoramica** .

- Il progetto include una classe di controlli e una classe di pagine delle proprietà, in base al nome del progetto. È possibile modificare i nomi del progetto e i nomi di file nella pagina [dei nomi dei controlli](../../mfc/reference/control-names-mfc-activex-control-wizard.md) .

- Il controllo è basato su nessun controllo Windows esistente, si attiva quando diventa visibile, dispone di un'interfaccia utente e include una finestra **di dialogo informazioni su** . È possibile modificare queste impostazioni predefinite nella pagina [Impostazioni controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) .

## <a name="see-also"></a>Vedi anche

[Progetti di Visual Studio-C++](../../build/creating-and-managing-visual-cpp-projects.md)<br/>
[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Concetti](../../atl/active-template-library-atl-concepts.md)
