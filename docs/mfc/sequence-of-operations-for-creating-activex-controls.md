---
title: Sequenza di operazioni per la creazione di controlli ActiveX | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], creating
- ActiveX controls [MFC], creating
- sequence [MFC], for creating ActiveX controls
- OLE controls [MFC], MFC
- sequence [MFC]
ms.assetid: 7d868c53-a0af-4ef6-a89c-e1c03c583a53
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: caf4c74f2263505ad5d7112021003f92c85a4b84
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="sequence-of-operations-for-creating-activex-controls"></a>Sequenza di operazioni per la creazione di controlli ActiveX
Nella tabella seguente viene illustrato il ruolo e il ruolo del framework per la creazione di controlli ActiveX (precedentemente noti come controlli OLE).  
  
### <a name="creating-activex-controls"></a>Creazione di controlli ActiveX  
  
|Attività|Davvero|Dal framework|  
|----------|------------|------------------------|  
|Creare un'infrastruttura di controllo ActiveX.|Eseguire la creazione guidata controllo ActiveX MFC per creare un controllo. Specificare le opzioni desiderate nelle pagine di opzioni. Le opzioni includono il tipo e il nome del controllo nel progetto, licenze, la creazione di sottoclassi e un metodo finestra informazioni su.|Creazione guidata controllo ActiveX MFC crea i file per un controllo ActiveX con funzionalità di base, inclusi i file di origine per l'applicazione, controllo e pagina delle proprietà o le pagine. un file di risorse. un file di progetto. e ad altri utenti, tutti adattati in base alle specifiche.|  
|Vedere quali il controllo e la creazione guidata controllo ActiveX offrono senza aggiungere una riga di codice.|Compilare il controllo ActiveX ed eseguirne il test con Internet Explorer o [esempio TSTCON](../visual-cpp-samples.md).|Il controllo in esecuzione ha la possibilità di essere ridimensionato e spostato. Include inoltre un **finestra informazioni su** (metodo) (se selezionato) che può essere richiamato.|  
|Implementare i metodi e proprietà del controllo.|Implementare i metodi specifici del controllo e proprietà mediante l'aggiunta di funzioni membro per fornire un'interfaccia esposta per i dati del controllo. Aggiungere variabili membro per contenere strutture di dati e consente di generare eventi per determinare i gestori di eventi.|Il framework è già definita una mappa per supportare gli eventi, proprietà e metodi, lasciando di concentrarsi sulla modalità di implementazione dei metodi e proprietà del controllo. È possibile visualizzare la pagina delle proprietà predefinito e viene fornito un metodo di finestra predefinito.|  
|Costruire pagine o la pagina delle proprietà del controllo.|Utilizzare gli editor di risorse di Visual C++ per modificare visivamente l'interfaccia pagina delle proprietà del controllo:<br /><br /> : Consente di creare pagine delle proprietà aggiuntive.<br />: Consente di creare e modificare le bitmap, icone e cursori.<br /><br /> È anche possibile testare le pagine delle proprietà nell'editor finestre.|Il file di risorse predefinito creato da Creazione guidata applicazione MFC fornisce molte delle risorse che necessarie. Visual C++ consente di modificare le risorse esistenti e aggiungere nuove risorse visivamente e facilmente.|  
|Verificare le proprietà, metodi ed eventi del controllo.|Ricompilare il controllo e utilizzare Test Container per verificare il corretto funzionano dei gestori.|È possibile richiamare i metodi del controllo e modificarne le proprietà tramite l'interfaccia pagina delle proprietà o il contenitore di Test. Inoltre, è possibile utilizzare Test Container per tenere traccia eventi generati dal controllo e notifiche ricevute dal contenitore del controllo.|  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione nel Framework](../mfc/building-on-the-framework.md)   
 [Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza di operazioni per la creazione di applicazioni OLE](../mfc/sequence-of-operations-for-creating-ole-applications.md)   
 [Sequenza delle operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)

