---
title: 'Procedura: aggiungere il supporto Gestione riavvio | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Restart manager [MFC]
- C++, application crash support
ms.assetid: 7f3f5867-d4bc-4ba8-b3c9-dc1e7be93642
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e86ca1959ce22370e47bca508602d5efa35cd4f5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-add-restart-manager-support"></a>Procedura: Aggiungere il supporto di Gestione riavvio
Gestione riavvio è una funzionalità aggiunta a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)] che consente di riavviare l'applicazione in caso di chiusure o riavvii imprevisti. Il funzionamento di Gestione riavvio dipende dal tipo di applicazione Se l'applicazione è un editor di documenti, Gestione riavvio consente all'applicazione di salvare automaticamente lo stato e il contenuto di qualsiasi documento aperto e riavvia l'applicazione dopo una chiusura imprevista. Se l'applicazione non è un editor di documenti, Gestione riavvio riavvierà l'applicazione, ma per impostazione predefinita non potrà salvare lo stato dell'applicazione.  
  
 Dopo il riavvio, se l'applicazione è di tipo Unicode verrà visualizzata una finestra di dialogo delle attività. Se l'applicazione è di tipo ANSI, verrà visualizzata una finestra di messaggio di Windows. In questa fase, l'utente sceglie se ripristinare i documenti automaticamente salvati. Se l'utente non ripristina i documenti automaticamente salvati, Gestione riavvio rimuove i file temporanei.  
  
> [!NOTE]
>  È possibile eseguire l'override del comportamento predefinito di Gestione riavvio per il salvataggio dei dati e il riavvio dell'applicazione.  
  
 Per impostazione predefinita, le applicazioni MFC create con la procedura guidata del progetto in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] supportano Gestione riavvio quando le applicazioni vengono eseguite in un computer con [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)]. Se non si vuole che l'applicazione supporti Gestione riavvio, è possibile disabilitare Gestione riavvio nella creazione guidata nuovo progetto.  
  
### <a name="to-add-support-for-the-restart-manager-to-an-existing-application"></a>Per aggiungere il supporto di Gestione riavvio a un'applicazione esistente  
  
1.  Aprire un'applicazione MFC esistente in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
2.  Aprire il file sorgente dell'applicazione principale. Per impostazione predefinita si tratta del file con estensione cpp che ha lo stesso nome dell'applicazione. Ad esempio, il file sorgente dell'applicazione principale per MyProject è MyProject.cpp.  
  
3.  Trovare il costruttore dell'applicazione principale. Ad esempio, se il progetto è MyProject, il costruttore sarà `CMyProjectApp::CMyProjectApp()`.  
  
4.  Aggiungere al costruttore eventi la seguente riga di codice.  
  
 ```  
    m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;  
 ```  
  
5.  Verificare che il metodo `InitInstance` dell'applicazione chiami il metodo `InitInstance` padre: [CWinApp::InitInstance](../mfc/reference/cwinapp-class.md#initinstance) o `CWinAppEx::InitInstance`. Il metodo `InitInstance` è responsabile della verifica del parametro `m_dwRestartManagerSupportFlags` .  
  
6.  Compilare ed eseguire l'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataRecoveryHandler](../mfc/reference/cdatarecoveryhandler-class.md)   
 [CWinApp::m_dwRestartManagerSupportFlags](../mfc/reference/cwinapp-class.md#m_dwrestartmanagersupportflags)   
 [CWinApp (classe)](../mfc/reference/cwinapp-class.md)   
 [CWinApp::m_nAutosaveInterval](../mfc/reference/cwinapp-class.md#m_nautosaveinterval)   
 [CDocument::OnDocumentEvent](../mfc/reference/cdocument-class.md#ondocumentevent)
