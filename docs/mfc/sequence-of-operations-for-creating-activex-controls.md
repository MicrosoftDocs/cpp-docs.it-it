---
description: 'Altre informazioni su: sequenza di operazioni per la creazione di controlli ActiveX'
title: Sequenza di operazioni per la creazione di controlli ActiveX
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
- sequence [MFC], for creating ActiveX controls
- OLE controls [MFC], MFC
- sequence [MFC]
ms.assetid: 7d868c53-a0af-4ef6-a89c-e1c03c583a53
ms.openlocfilehash: 15b81716f5feee4dfd4d0ebf47ee4d0d648c4536
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217628"
---
# <a name="sequence-of-operations-for-creating-activex-controls"></a>Sequenza di operazioni per la creazione di controlli ActiveX

Nella tabella seguente vengono illustrati il ruolo e il ruolo del Framework per la creazione di controlli ActiveX (noti in precedenza come controlli OLE).

### <a name="creating-activex-controls"></a>Creazione di controlli ActiveX

|Attività|Davvero|Il Framework esegue|
|----------|------------|------------------------|
|Creazione di un Framework di controllo ActiveX.|Eseguire la creazione guidata controllo ActiveX MFC per creare il controllo. Specificare le opzioni desiderate nelle pagine opzioni. Le opzioni includono il tipo e il nome del controllo nel progetto, la gestione delle licenze, la sottoclasse e un metodo della finestra informazioni su.|La creazione guidata controllo ActiveX MFC consente di creare i file per un controllo ActiveX con funzionalità di base, inclusi i file di origine per l'applicazione, il controllo e la pagina o le pagine delle proprietà. un file di risorse. un file di progetto; e altri, tutti personalizzati per le specifiche.|
|Vedere cosa offre il controllo e la creazione guidata controllo ActiveX senza aggiungere una riga del codice.|Compilare il controllo ActiveX e testarlo con Internet Explorer o l' [esempio TSTCON](../overview/visual-cpp-samples.md).|Il controllo in esecuzione può essere ridimensionato e spostato. Dispone inoltre di un metodo **Box about** (se scelto) che può essere richiamato.|
|Implementare i metodi e le proprietà del controllo.|Implementare i metodi e le proprietà specifici del controllo aggiungendo funzioni membro per fornire un'interfaccia esposta ai dati del controllo. Aggiungere le variabili membro per mantenere le strutture dei dati e utilizzare i gestori eventi per attivare gli eventi quando si determina.|Il Framework ha già definito una mappa per supportare gli eventi, le proprietà e i metodi del controllo, consentendo di concentrarsi sulla modalità di implementazione delle proprietà e dei metodi. La pagina delle proprietà predefinita è visualizzabile e viene fornito un metodo predefinito per la finestra informazioni su.|
|Costruisce la pagina o le pagine delle proprietà del controllo.|Usare gli editor di risorse Visual C++ per modificare visivamente l'interfaccia della pagina delle proprietà del controllo:<br /><br />-Crea pagine delle proprietà aggiuntive.<br />-Creare e modificare bitmap, icone e cursori.<br /><br /> È anche possibile testare la pagina o le pagine delle proprietà nell'editor finestre.|Il file di risorse predefinito creato dalla creazione guidata applicazione MFC fornisce molte delle risorse necessarie. Visual C++ consente di modificare le risorse esistenti e aggiungere nuove risorse in modo semplice e visivo.|
|Testare gli eventi, i metodi e le proprietà del controllo.|Ricompilare il controllo e utilizzare test container per verificare che i gestori funzionino correttamente.|È possibile richiamare i metodi del controllo e modificarne le proprietà tramite l'interfaccia della pagina delle proprietà o il contenitore di test. Usare inoltre test container per tenere traccia degli eventi generati dal controllo e dalle notifiche ricevute dal contenitore del controllo.|

## <a name="see-also"></a>Vedi anche

[Compilazione nel Framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza di operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequenza di operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)
