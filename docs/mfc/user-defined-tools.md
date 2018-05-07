---
title: Strumenti definiti dall'utente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- user-defined tools (MFC Extensions)
ms.assetid: cb887421-78ce-4652-bc67-96a53984ccaa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3b755fc35c98652ab87231e9d8f58cde748bfc0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="user-defined-tools"></a>Strumenti definiti dall'utente
MFC supporta strumenti definiti dall'utente. Uno strumento definito dall'utente è un comando speciale che esegue un programma esterno, specificato dall'utente. È possibile utilizzare il processo di personalizzazione per gestire gli strumenti definiti dall'utente. Tuttavia, è possibile utilizzare questo processo se l'oggetto di applicazione non è derivato da [CWinAppEx Class](../mfc/reference/cwinappex-class.md). Per ulteriori informazioni sulla personalizzazione, vedere [personalizzazione per MFC](../mfc/customization-for-mfc.md).  
  
 Se è abilitato il supporto di strumenti definiti dall'utente, la finestra di dialogo di personalizzazione include automaticamente il **strumenti** scheda. La figura seguente mostra il **strumenti** pagina.  
  
 ![Scheda strumenti nella finestra di dialogo Personalizza](../mfc/media/custdialogboxtoolstab.png "custdialogboxtoolstab")  
Personalizzazione finestra di dialogo Strumenti scheda  
  
## <a name="enabling-user-defined-tools-support"></a>Supporto di strumenti di attivazione definito dall'utente  
 Per abilitare gli strumenti definiti dall'utente in un'applicazione, chiamare [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools). Tuttavia, è necessario definire innanzitutto diverse costanti nei file di risorse dell'applicazione da utilizzare come parametri per questa chiamata.  
  
 Nell'editor di risorse creare un comando fittizio che usa un ID di comando appropriato. Nell'esempio seguente, utilizziamo **ID_TOOLS_ENTRY** come ID di comando. Questo ID di comando contrassegna una posizione in uno o più menu in cui il framework inserirà gli strumenti definiti dall'utente.  
  
 È necessario riservare alcuni ID consecutivi nella tabella di stringhe per rappresentare gli strumenti definiti dall'utente. Il numero di stringhe che riservato è uguale al numero massimo di strumenti di utente che è possono definire gli utenti. Nell'esempio seguente, queste sono denominate **ID_USER_TOOL1** tramite **ID_USER_TOOL10**.  
  
 È possibile offrire suggerimenti degli utenti per aiutarli a selezionare una directory e gli argomenti per i programmi esterni che verranno chiamati come strumenti. A tale scopo, creare due menu di scelta rapida nell'editor di risorse. Nell'esempio seguente denominati **IDR_MENU_ARGS** e **IDR_MENU_DIRS**. Per ogni comando in questi menu, definire una stringa nella tabella di stringhe applicazione. L'ID risorsa della stringa deve essere uguale all'ID di comando.  
  
 È anche possibile creare una classe derivata da [CUserTool classe](../mfc/reference/cusertool-class.md) per sostituire l'implementazione predefinita. A tale scopo, passare le informazioni di runtime per le classi derivate come quarto parametro in CWinAppEx::EnableUserTools, anziché RUNTIME_CLASS ([CUserTool classe](../mfc/reference/cusertool-class.md)).  
  
 Dopo aver definito le costanti appropriate, chiamare [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools) per consentire agli strumenti definiti dall'utente.  
  
 La chiamata al metodo seguente viene illustrato come utilizzare queste costanti:  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#1](../mfc/codesnippet/cpp/user-defined-tools_1.cpp)]  
  
 In questo esempio, la scheda strumenti verrà inclusi nel **personalizzazione** la finestra di dialogo. Il framework sostituirà tutti i comandi che corrispondano all'ID di comando **ID_TOOLS_ENTRY** in alcun menu con il set di strumenti utente attualmente definito, ogni volta che un utente apre il menu. L'ID di comando **ID_USER_TOOL1** tramite **ID_USER_TOOL10** sono riservati per l'uso di strumenti definiti dall'utente. La classe [CUserTool classe](../mfc/reference/cusertool-class.md) gestisce le chiamate agli strumenti utente. Scheda strumento del **personalizzazione** la finestra di dialogo contiene i pulsanti a destra dei campi di immissione argomento e la directory per accedere ai menu **IDR_MENU_ARGS** e **IDR_MENU_DIRS**. Quando un utente seleziona un comando da uno di questi menu, il framework aggiunge alla casella di testo appropriato la stringa che contiene l'ID di risorsa uguale all'ID di comando.  
  
### <a name="including-predefined-tools"></a>Inclusi gli strumenti predefiniti  
 Se si desidera predefinire alcuni strumenti sull'avvio dell'applicazione, è necessario eseguire l'override di [CFrameWnd::LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) metodo della finestra principale dell'applicazione. In quel metodo, è necessario eseguire i passaggi seguenti.  
  
##### <a name="to-add-new-tools-in-loadframe"></a>Per aggiungere nuovi strumenti in LoadFrame  
  
1.  Ottenere un puntatore per il [CUserToolsManager classe](../mfc/reference/cusertoolsmanager-class.md) oggetto chiamando [CWinAppEx::GetUserToolsManager](../mfc/reference/cwinappex-class.md#getusertoolsmanager).  
  
2.  Per ogni strumento che si desidera creare, chiamare [CUserToolsManager::CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool). Questo metodo restituisce un puntatore a un [CUserTool classe](../mfc/reference/cusertool-class.md) dell'oggetto e aggiunge l'utente appena creato alla raccolta interna di strumenti. Se fornito le informazioni di runtime per una classe derivata di [CUserTool classe](../mfc/reference/cusertool-class.md) come quarto parametro del [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools), [CUserToolsManager::CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool) verrà creare un'istanza e restituire un'istanza di tale classe.  
  
3.  Per ogni strumento, impostare la relativa etichetta di testo impostando `CUserTool::m_strLabel` e impostare il relativo comando chiamando `CUserTool::SetCommand`. L'implementazione predefinita di [CUserTool classe](../mfc/reference/cusertool-class.md) recupera automaticamente icone disponibili nel programma specificato nella chiamata a `SetCommand`.  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)   
 [Classe CUserTool](../mfc/reference/cusertool-class.md)   
 [Classe CUserToolsManager](../mfc/reference/cusertoolsmanager-class.md)   
 [Classe CWinAppEx](../mfc/reference/cwinappex-class.md)




