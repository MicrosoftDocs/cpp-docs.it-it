---
title: Sequenza di operazioni per la creazione di controlli ActiveX
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
- sequence [MFC], for creating ActiveX controls
- OLE controls [MFC], MFC
- sequence [MFC]
ms.assetid: 7d868c53-a0af-4ef6-a89c-e1c03c583a53
ms.openlocfilehash: 020c044cc0b3b96df102a5ab6625c945f1033f67
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781341"
---
# <a name="sequence-of-operations-for-creating-activex-controls"></a>Sequenza di operazioni per la creazione di controlli ActiveX

Nella tabella seguente viene illustrato il ruolo e il ruolo del framework nella creazione di controlli ActiveX (precedentemente noti come controlli OLE).

### <a name="creating-activex-controls"></a>Creazione di controlli ActiveX

|Attività|Davvero|Il framework esegue|
|----------|------------|------------------------|
|Creazione di un'infrastruttura di controllo di ActiveX.|Eseguire la creazione guidata controllo ActiveX MFC per creare un controllo. Specificare le opzioni desiderate nelle pagine delle opzioni. Le opzioni includono il tipo e il nome del controllo nel progetto, licenze, creazione di una sottoclasse e un metodo sulla finestra.|La creazione guidata controllo ActiveX MFC crea i file per un controllo ActiveX con funzionalità di base, inclusi i file di origine per l'applicazione, controllo e pagina delle proprietà o le pagine. un file di risorse. un file di progetto. e altri, tutti adattati in base alle specifiche.|
|Vedere quali il controllo e la creazione guidata controllo ActiveX offrono senza l'aggiunta di una riga di codice personalizzato.|Compilare il controllo ActiveX e testarla con Internet Explorer o la [esempio TSTCON](../overview/visual-cpp-samples.md).|Il controllo in esecuzione ha la possibilità di essere ridimensionato e spostato. Include anche un **sulla casella** metodo (se selezionato) che può essere richiamato.|
|Implementare i metodi e le proprietà del controllo.|Implementare i metodi specifici del controllo e le proprietà mediante l'aggiunta di funzioni membro per fornire un'interfaccia esposta per i dati del controllo. Aggiungere variabili membro per contenere le strutture di dati e utilizzare i gestori eventi per generare gli eventi quando determinano.|Il framework è già definita una mappa per supportare gli eventi, proprietà e metodi, lasciando all'utente di concentrarsi su come vengono implementati i metodi e proprietà del controllo. È possibile visualizzare la pagina delle proprietà predefinito e viene fornito un metodo sulla finestra predefinita.|
|Creare pagine o la pagina delle proprietà del controllo.|Usare l'editor di risorse di Visual C++ per modificare visivamente l'interfaccia pagina delle proprietà del controllo:<br /><br />-Creare pagine delle proprietà aggiuntive.<br />-Creare e modificare le bitmap, icone e cursori.<br /><br /> È anche possibile testare le pagine delle proprietà nell'editor finestre.|Il file di risorse predefinito creato per la creazione guidata applicazione MFC fornisce molte delle risorse che necessarie. Visual C++ è possibile modificare le risorse esistenti e aggiungere nuove risorse in modo semplice e visivamente.|
|Testare le proprietà, metodi ed eventi del controllo.|Ricompilare il controllo e usare Test Container per testare il corretto funzionamento dei gestori.|È possibile richiamare i metodi di controllo e modificarne le proprietà tramite l'interfaccia della pagina proprietà o il contenitore di Test. Inoltre, è possibile usare Test Container per tenere traccia eventi generati dal controllo e le notifiche ricevute dal contenitore del controllo.|

## <a name="see-also"></a>Vedere anche

[Compilazione nel framework](../mfc/building-on-the-framework.md)<br/>
[Sequenza delle operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)<br/>
[Sequenza delle operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)<br/>
[Sequenza delle operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)
