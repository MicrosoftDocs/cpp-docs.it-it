---
title: Server di automazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Automation servers
- COM components, Automation servers
- dispatch maps [MFC], Automation servers
- servers, Automation
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 337d5a1ec25e8fc80cf867aecef0452b1d03fb2b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="automation-servers"></a>Server di automazione
Automazione rende possibile per l'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati. Un server di automazione è un'applicazione che espone oggetti programmabili, denominati oggetti di automazione, ad altre applicazioni (chiamato [client di automazione](../mfc/automation-clients.md)). Server di automazione sono talvolta denominati componenti di automazione.  
  
 Esposizione di oggetti di automazione consente ai client di automatizzare alcune procedure accedendo direttamente agli oggetti e rende disponibili funzionalità di server. L'esposizione di oggetti in questo modo è utile quando le applicazioni forniscono funzionalità utili per le altre applicazioni. Ad esempio, un elaboratore di testo potrebbe esporre la funzionalità di controllo ortografico in modo che altri programmi possono utilizzarlo. In questo modo, l'esposizione degli oggetti consente ai fornitori di migliorare le funzionalità delle proprie applicazioni con funzionalità preconfezionate di altre applicazioni.  
  
 Questi oggetti di automazione hanno proprietà e metodi come interfaccia esterna. Gli attributi dell'oggetto di automazione sono denominate proprietà. Le proprietà sono come i membri dati di una classe C++. I metodi sono funzioni che funzionano su oggetti di automazione. I metodi sono analoghi alle funzioni membro pubblico di una classe C++.  
  
> [!NOTE]
>  Anche se le proprietà sono simili ai membri di dati C++, essi non sono direttamente accessibili. Per fornire accesso trasparente, impostare una variabile interna nell'oggetto di automazione con una coppia di funzioni membro set/get per accedere a essi.  
  
 Esponendo la funzionalità dell'applicazione tramite un'interfaccia comune e ben definita, automazione consente di compilare applicazioni in un singolo generale linguaggio di programmazione come Visual Basic, anziché nella macro diverse specifici dell'applicazione Lingue.  
  
##  <a name="_core_support_for_automation_servers"></a> Supporto per i server di automazione  
 Visual C++ e il framework MFC forniscono un supporto completo per i server di automazione. Gestiscono gran parte dell'overhead causato dalla creazione di un server di automazione, pertanto è possibile concentrare l'attenzione sulle funzionalità dell'applicazione.  
  
 Il meccanismo del framework principale per il supporto di automazione è la mappa di invio, un set di macro che si espande in dichiarazioni e alle chiamate necessarie per esporre i metodi e proprietà per OLE. Una tipica mappa di invio è simile al seguente:  
  
 [!code-cpp[NVC_MFCAutomation#1](../mfc/codesnippet/cpp/automation-servers_1.cpp)]  
  
 La finestra proprietà e visualizzazione classi d'aiuto nella gestione di mappe di invio. Quando si aggiunge un nuovo metodo o una proprietà a una classe, Visual C++ aggiunge un oggetto corrispondente `DISP_FUNCTION` o `DISP_PROPERTY` macro con parametri che indicano i nomi interni ed esterni dei tipi di metodo o proprietà e i dati, il nome della classe.  
  
 Il **Aggiungi classe** la finestra di dialogo semplifica anche la dichiarazione di classi di automazione e la gestione delle relative proprietà e operazioni. Quando si utilizza la finestra di dialogo Aggiungi classe per aggiungere una classe al progetto, specificare la relativa classe base. Se la classe di base consente l'automazione, la finestra di dialogo Aggiungi classe Visualizza controlli da usare per specificare se la nuova classe deve supportare l'automazione, se si tratta di "Creabile OLE" (ovvero, se gli oggetti della classe possano essere creati in una richiesta da un client COM) e il nome esterno per il client COM da usare.  
  
 Il **Aggiungi classe** la finestra di dialogo Crea quindi una dichiarazione di classe, tra cui le macro appropriate per le funzionalità OLE è stato specificato. Aggiunge anche la struttura del codice per l'implementazione di funzioni membro della classe.  
  
 La creazione guidata applicazione MFC semplifica i passaggi necessari per far funzionare l'applicazione server di automazione disattivare completamente riprogettato. Se si seleziona il **automazione** casella di controllo dal **funzionalità avanzate** pagina, la creazione guidata applicazione MFC viene aggiunto all'applicazione `InitInstance` funzione le chiamate necessarie per registrare l'automazione gli oggetti ed eseguire l'applicazione come server di automazione.  
  
### <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire  
  
-   [Informazioni sui client di automazione](../mfc/automation-clients.md)  
  
-   [Ulteriori informazioni sulla classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)  
  
-   [Ulteriori informazioni sulla classe COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione](../mfc/automation.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)

