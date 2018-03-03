---
title: Supporto documenti compositi, creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.compdoc
dev_langs:
- C++
ms.assetid: 42e1af83-12c4-438d-92eb-13835afdb148
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9390f3849cd7511054f1248205c5d2c408cb7e71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compound-document-support-mfc-application-wizard"></a>Supporto documenti compositi, Creazione guidata applicazione MFC
In questa pagina della creazione guidata applicazione MFC, indicare a quale livello di applicazione fornisce il supporto documenti compositi e attivi. L'applicazione deve supportare l'architettura documento/visualizzazione per il supporto documenti compositi e modelli di documento.  
  
 Per impostazione predefinita, l'applicazione non contiene nessun supporto documenti compositi. Se si accetta questa impostazione predefinita, l'applicazione non supporta i documenti attivi o file compositi.  
  
 **Supporto documenti compositi**  
 Determina se l'applicazione fornisce il supporto di contenitore, il supporto del server o entrambi. Per ulteriori informazioni su quest'area, vedere:  
  
-   [Contenitori: implementazione di un contenitore](../../mfc/containers-implementing-a-container.md)  
  
-   [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md)  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**None**|Non indica nessun supporto per Object Linking and Embedding (OLE). Per impostazione predefinita, la creazione guidata applicazione crea un'applicazione senza il supporto di ActiveX.|  
|**Contenitore**|Contiene gli oggetti collegati e incorporati.|  
|**Server ridotto**|Indica l'applicazione è possibile creare e gestire gli oggetti di documenti compositi. Si noti che i server ridotti non è possibile eseguire singolarmente e supportano solo gli elementi incorporati.|  
|**Server completo**|Indica l'applicazione è possibile creare e gestire gli oggetti di documenti compositi. Server completo sono in grado di eseguire applicazioni autonome e supportano entrambi collegati e incorporati gli elementi.|  
|**Contenitore/server completo**|Indica che l'applicazione può essere sia un contenitore e un server. Un contenitore è un'applicazione che è possibile incorporare elementi incorporati o collegati dei propri documenti. Un server è un'applicazione che è possibile creare elementi di automazione per l'utilizzo da applicazioni contenitore.|  
  
 **Opzioni aggiuntive**  
 Indica se l'applicazione supporta i documenti attivi. Vedere [documenti attivi](../../mfc/active-documents.md) per ulteriori informazioni su questa funzionalità.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Server documenti attivi**|Indica l'applicazione è possibile creare e gestire documenti attivi. Se si seleziona questa opzione, è necessario specificare un'estensione di file per il server di documenti attivi nel **estensione di File** casella il [stringhe modello documento](../../mfc/reference/document-template-strings-mfc-application-wizard.md) pagina della procedura guidata. Vedere [server di documenti attivi](../../mfc/active-document-servers.md) per ulteriori informazioni.|  
|**Contenitore documenti attivi**|Indica che l'applicazione può contenere i documenti attivi all'interno della cornice. Documenti attivi possono includere, ad esempio, Internet Explorer o documenti di Office, ad esempio i file di Microsoft Word o fogli di calcolo Excel. Vedere [Active Document Containment](../../mfc/active-document-containment.md) per ulteriori informazioni.|  
|**Supporto per file compositi**|Non vengono serializzate documenti dell'applicazione contenitore usando il formato di file composito. Questa opzione forza il caricamento di un intero file che contiene oggetti in memoria. Non sono disponibili i salvataggi incrementali per i singoli oggetti. Se un oggetto viene modificato e salvato successivamente, vengono salvati tutti gli oggetti nel file.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)

