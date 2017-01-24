---
title: "MFC COM | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MFC COM (MFC)"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tecnologia Active [C++]"
  - "ActiveX (controlli) [C++], modello COM"
  - "COM [C++], supporto MFC"
  - "MFC [C++], supporto COM"
  - "controlli ActiveX MFC [C++], supporto COM in MFC"
  - "MFC COM [C++]"
ms.assetid: 7646bdcb-3a06-4ed5-9386-9b00f3979dcb
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# MFC COM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un sottoinsieme di MFC è progettato per supportare COM, mentre la maggior parte di Active Template Library \(ATL\) è progettato per la programmazione COM.  In questa sezione argomenti viene descritto il supporto di MFC a COM.  
  
 Le tecnologie attivo \(come contenimento del documento attivo, controlli ActiveX, OLE e così via, utilizzano il modello COM \(Component Object Model \(COM\) per consentire ai componenti software per interagire tra loro in un ambiente di reti, indipendentemente dal linguaggio con cui sono state create.  Le tecnologie attive possono essere utilizzati per creare applicazioni in esecuzione nel desktop o in internet.  Per ulteriori informazioni vedere [Introduzione a COM](../atl/introduction-to-com.md) o [Il modello COM \(Component Object Model\)](http://msdn.microsoft.com/library/windows/desktop/ms694363).  
  
 Le tecnologie attive includono entrambe le tecnologie client e server, incluse le seguenti:  
  
-   [Contenimento del documento attivo](../mfc/active-document-containment.md), supportato in MFC versione 4,2 e successive, il quale gli utenti possono visualizzare [documenti attivi](../mfc/active-documents.md) ad esempio Microsoft Excel o Word file\) e di attivare l'intera interfaccia dell'applicazione nativa documento nell'intera area client di [contenitore di documenti attivi](../mfc/active-document-containers.md) come gestore di associazione o Microsoft Internet Explorer di Microsoft Office.  I contenitori fungono da client, mentre i documenti sono forniti da [server di documenti attivi](../mfc/active-document-servers.md).  Per ulteriori informazioni sull'utilizzo di documenti attivi nelle applicazioni internet, vedere: [Documenti attivi su internet](../mfc/active-documents-on-the-internet.md).  
  
-   I controlli ActiveX sono oggetti interattivi che possono essere utilizzati come contenitori in un sito Web.  Per ulteriori informazioni sui controlli ActiveX, vedere:  
  
    -   [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
    -   [Controlli ActiveX in internet](../mfc/activex-controls-on-the-internet.md)  
  
    -   [Cenni preliminari: Internet](../mfc/mfc-internet-programming-basics.md)  
  
    -   [Aggiornare un controllo ActiveX esistente da utilizzare in internet](../mfc/upgrading-an-existing-activex-control.md)  
  
    -   [Eseguire il debug di un controllo ActiveX](../Topic/How%20to:%20Debug%20an%20ActiveX%20Control.md)  
  
-   Scripting attivo controlla il comportamento integrato di uno o più controlli ActiveX da un browser o a un server.  Per ulteriori informazioni sullo scripting attivo, vedere [Tecnologia active su internet](../mfc/active-technology-on-the-internet.md).  
  
-   [Automazione](../mfc/automation.md) \(precedentemente noto come automazione OLE\) fa sì che un'applicazione modificare gli oggetti implementati in un'altra applicazione, "o" possibile utilizzare gli oggetti in modo da poter essere modificato.  
  
     L'oggetto automatizzato potrebbe essere locale o [remoto](../mfc/remote-automation.md) \(in un altro computer accessibile attraverso una rete\).  L'automazione è disponibile sia per OLE che gli oggetti COM.  
  
-   In questa sezione vengono inoltre fornite informazioni su come scrivere componenti COM che utilizzano MFC, ad esempio, in [Punti di connessione](../mfc/connection-points.md).  
  
 Per una descrizione delle operazioni ancora è denominata OLE in cui viene ora chiamato la tecnologia active, vedere gli argomenti relativi a [OLE](../mfc/ole-in-mfc.md).  
  
 Inoltre, vedere l'articolo della Knowledge Base Q248019: HOWTO: Per impedire l'esecuzione della finestra di dialogo occupata server venga visualizzato durante un'operazione di lunga durata COM.  
  
## Argomenti della sezione  
 [Contenimento del documento attivo](../mfc/active-document-containment.md)  
  
 [Automazione](../mfc/automation.md)  
  
 [L'automazione remota](../mfc/remote-automation.md)  
  
 [Punti di connessione](../mfc/connection-points.md)  
  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)