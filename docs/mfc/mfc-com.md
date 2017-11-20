---
title: MFC COM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: MFC COM (MFC)
dev_langs: C++
helpviewer_keywords:
- MFC, COM support
- MFC ActiveX controls [MFC], COM support in MFC
- MFC COM [MFC]
- ActiveX controls [MFC], COM object model
- Active technology [MFC]
- COM [MFC], MFC support
ms.assetid: 7646bdcb-3a06-4ed5-9386-9b00f3979dcb
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 652e299ad7dc01f070e3fe4ed9738fc9ed47a493
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mfc-com"></a>MFC COM
Un subset di MFC è progettato per il supporto COM, mentre la maggior parte della libreria ATL (Active Template) è progettata per la programmazione COM. Negli argomenti di questa sezione viene descritto il supporto di MFC per COM.  
  
 Tecnologia Active (ad esempio i controlli ActiveX, contenimento dei documenti attivi, OLE e così via) utilizza il modello COM (Component Object) per consentire ai componenti software di interagire tra loro in un ambiente di rete, indipendentemente dal linguaggio con cui sono stati creato. Tecnologia Active utilizzabile per creare applicazioni in esecuzione sul desktop o Internet. Per ulteriori informazioni vedere [Introduzione a COM](../atl/introduction-to-com.md) o [il Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363).  
  
 Le tecnologie Active includono tecnologie client e server, incluse le seguenti:  
  
-   [Contenimento dei documenti attivi](../mfc/active-document-containment.md), supportata nelle versioni MFC 4.2 e versioni successive, consente agli utenti di visualizzare [documenti attivi](../mfc/active-documents.md) (ad esempio i file di Microsoft Excel o Word) e attivare l'intera interfaccia nativa del documento l'intera area client dell'applicazione un [contenitore documenti attivi](../mfc/active-document-containers.md) come il Raccoglitore Microsoft Office o Microsoft Internet Explorer. I contenitori di agiscono come client, mentre i documenti vengono forniti da [server documenti attivi](../mfc/active-document-servers.md). Per ulteriori informazioni sull'utilizzo di documenti attivi nelle applicazioni di Internet, vedere: [documenti attivi su Internet](../mfc/active-documents-on-the-internet.md).  
  
-   Controlli ActiveX sono oggetti interattivi che possono essere usati in contenitori, ad esempio un sito Web. Per ulteriori informazioni sui controlli ActiveX, vedere:  
  
    -   [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
    -   [Controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md)  
  
    -   [Panoramica: Internet](../mfc/mfc-internet-programming-basics.md)  
  
    -   [L'aggiornamento di un controllo ActiveX esistente da utilizzare in Internet](../mfc/upgrading-an-existing-activex-control.md)  
  
    -   [Debug di un controllo ActiveX](/visualstudio/debugger/how-to-debug-an-activex-control)  
  
-   Esecuzione script attivo controlla il comportamento integrato di uno o più controlli ActiveX in un browser o server. Per ulteriori informazioni sulla creazione di script attivo, vedere [tecnologia Active in Internet](../mfc/active-technology-on-the-internet.md).  
  
-   [Automazione](../mfc/automation.md) (precedentemente nota come automazione OLE) rende possibile un'applicazione possa modificare oggetti implementati in un'altra applicazione o "esporli" in modo che possano essere modificati.  
  
     L'oggetto automatizzato potrebbe essere locale o [remoto](../mfc/remote-automation.md) (in un altro computer accessibile in rete). L'automazione è disponibile sia per gli oggetti OLE che per gli oggetti COM.  
  
-   Questa sezione vengono fornite informazioni su come scrivere componenti COM tramite MFC, ad esempio, in [punti di connessione](../mfc/connection-points.md).  
  
 Per una discussione sulle quali viene ancora chiamato OLE cosiddetto ora la tecnologia active, vedere gli argomenti su [OLE](../mfc/ole-in-mfc.md).  
  
 Inoltre, vedere l'articolo della Knowledge Base Q248019: procedura: impedire Server occupato finestra di dialogo casella da visualizzato durante un COM operazione di lunga durata.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)  
  
 [Automazione](../mfc/automation.md)  
  
 [Automazione remota](../mfc/remote-automation.md)  
  
 [Punti di connessione](../mfc/connection-points.md)  
  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)

