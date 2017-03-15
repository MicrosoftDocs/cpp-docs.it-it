---
title: "Strumenti definiti dall&#39;utente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strumenti definiti dall'utente (estensioni MFC)"
ms.assetid: cb887421-78ce-4652-bc67-96a53984ccaa
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Strumenti definiti dall&#39;utente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Strumenti definiti dall'utente di MFC supporta.  Uno strumento definito dall'utente è un comando speciale che esegue un programma esterno, definito dall'utente.  È possibile utilizzare il processo di personalizzazione per gestire gli strumenti definiti dall'utente.  Tuttavia, non è possibile utilizzare questo processo se l'oggetto applicazione non deriva da [CWinAppEx Class](../mfc/reference/cwinappex-class.md).  Per ulteriori informazioni sulla personalizzazione, vedere [Personalizzazione per MFC](../mfc/customization-for-mfc.md).  
  
 Se supporto definite dall'attivazione degli strumenti, la finestra di dialogo per la personalizzazione automaticamente include la scheda di **Strumenti**.  Di seguito viene illustrata la pagina di **Strumenti**.  
  
 ![Scheda Strumenti nella finestra di dialogo Personalizza](../mfc/media/custdialogboxtoolstab.png "CustDialogBoxToolsTab")  
Scheda strumenti della finestra di dialogo per la personalizzazione  
  
## Abilitare il supporto definito dall'utente degli strumenti  
 Per abilitare gli strumenti definiti dall'utente in un'applicazione, chiamare [CWinAppEx::EnableUserTools](../Topic/CWinAppEx::EnableUserTools.md).  Tuttavia, è innanzitutto necessario definire più costanti nei file di risorse dell'applicazione utilizzare come parametri per la chiamata.  
  
 Nell'editor risorse creare un comando fittizi che utilizza un ID corretta del comando  Nell'esempio, è possibile utilizzare **ID\_TOOLS\_ENTRY** l'ID di comando  Questo ID comando contrassegna una posizione in uno o più menu in cui il framework genera gli strumenti definiti dall'utente.  
  
 È necessario eseguire lo shelving alcuni ID consecutivi nella tabella di stringhe per rappresentare gli strumenti definiti dall'utente.  Il numero di stringhe che a shelving è uguale al numero massimo degli strumenti dell'utente che gli utenti possono definire.  Nell'esempio seguente, questi vengono denominati **ID\_USER\_TOOL1** con **ID\_USER\_TOOL10**.  
  
 È possibile fornire suggerimenti agli utenti per aiutarli per selezionare le directory e argomenti per i programmi esterni che verranno chiamati come strumenti.  A tale scopo, creare due menu di scelta rapida nell'editor risorse.  Nell'esempio seguente vengono denominati **IDR\_MENU\_ARGS** e **IDR\_MENU\_DIRS**.  Per ogni comando nei menu, definire una stringa nella tabella di stringhe di applicazione.  ID di risorsa della stringa deve essere uguale all'ID di comando  
  
 È inoltre possibile creare una classe derivata da [CUserTool Class](../mfc/reference/cusertool-class.md) per sostituire l'implementazione predefinita.  A tale scopo, comunicare le informazioni di runtime per la classe derivata come il quarto parametro in CWinAppEx::EnableUserTools, anziché RUNTIME\_CLASS \([CUserTool Class](../mfc/reference/cusertool-class.md)\).  
  
 Dopo avere definito le costanti appropriate, chiamata [CWinAppEx::EnableUserTools](../Topic/CWinAppEx::EnableUserTools.md) per abilitare gli strumenti definiti dall'utente.  
  
 Illustrato nella chiamata al metodo come utilizzare queste costanti:  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#1](../mfc/codesnippet/CPP/user-defined-tools_1.cpp)]  
  
 In questo esempio, la scheda strumenti verrà inclusa nella finestra di dialogo **Personalizzazione**.  Il framework sostituirà eventuale comando corrispondente l'id di comando **ID\_TOOLS\_ENTRY** in qualsiasi menu con il set di strumenti attualmente definiti dall'utente ogni volta che un utente apre il menu.  ID di comandi **ID\_USER\_TOOL1** con **ID\_USER\_TOOL10** sono riservati per l'utilizzo degli strumenti definiti dall'utente.  La classe [CUserTool Class](../mfc/reference/cusertool-class.md) gestisce le chiamate agli strumenti dell'utente.  La scheda dello strumento della finestra di dialogo **Personalizzazione** fornisce pulsanti a destra di immissione della directory e dell'argomento per accedere ai menu **IDR\_MENU\_ARGS** e **IDR\_MENU\_DIRS**.quando un utente seleziona un comando da uno di questi menu, il framework aggiunge alla casella di testo appropriata la stringa contenente l'id della risorsa uguale all'ID di comando  
  
### Inclusi gli strumenti predefiniti  
 Se si desidera predefinire alcuni strumenti all'avvio dell'applicazione, è necessario eseguire l'override del metodo di [CFrameWnd::LoadFrame](../Topic/CFrameWnd::LoadFrame.md) della finestra principale dell'applicazione.  In questo metodo, è necessario eseguire i passaggi seguenti.  
  
##### Per aggiungere nuovi strumenti in LoadFrame  
  
1.  Ottenere un puntatore all'oggetto di [CUserToolsManager Class](../mfc/reference/cusertoolsmanager-class.md) chiamando [CWinAppEx::GetUserToolsManager](../Topic/CWinAppEx::GetUserToolsManager.md).  
  
2.  Per ogni strumento che si desidera creare, chiamata [CUserToolsManager::CreateNewTool](../Topic/CUserToolsManager::CreateNewTool.md).  Questo metodo restituisce un puntatore a un oggetto di [CUserTool Class](../mfc/reference/cusertool-class.md) e aggiunge lo strumento appena creato utente alla raccolta interna di strumenti.  Se si fornisce informazioni di runtime per una classe derivata di [CUserTool Class](../mfc/reference/cusertool-class.md) come il quarto parametro di [CWinAppEx::EnableUserTools](../Topic/CWinAppEx::EnableUserTools.md), [CUserToolsManager::CreateNewTool](../Topic/CUserToolsManager::CreateNewTool.md) creata un'istanza e restituirà un'istanza della classe.  
  
3.  Per ogni strumento, impostare la proprietà etichetta di testo impostando `CUserTool::m_strLabel` e il comando chiamando `CUserTool::SetCommand`.  L'implementazione predefinita di [CUserTool Class](../mfc/reference/cusertool-class.md) recupera automaticamente le icone disponibili nel programma specificato nella chiamata a `SetCommand`.  
  
## Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)   
 [CUserTool Class](../mfc/reference/cusertool-class.md)   
 [CUserToolsManager Class](../mfc/reference/cusertoolsmanager-class.md)   
 [CWinAppEx Class](../mfc/reference/cwinappex-class.md)