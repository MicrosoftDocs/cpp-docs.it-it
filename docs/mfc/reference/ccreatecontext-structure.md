---
title: "CCreateContext Structure | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCreateContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCreateContext structure"
ms.assetid: 337a0e44-d910-49a8-afc0-c7207666a9dc
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCreateContext Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il framework utilizza la struttura `CCreateContext` durante la creazione di applicazioni utilizzano e visualizzazioni associate a un documento.  
  
## Sintassi  
  
```  
struct CCreateContext  
```  
  
## Note  
 `CCreateContext` è una struttura e non dispone di una classe base.  
  
 Quando si crea una finestra, i valori in questa struttura forniscono informazioni utilizzate per connettere componenti di un documento alla visualizzazione dei dati.  È necessario utilizzare solo `CCreateContext` se si esegue l'override delle parti del processo di creazione.  
  
 Una struttura `CCreateContext` contiene i puntatori al documento, alla finestra cornice, la visualizzazione e il modello di documento.  Contiene inoltre un puntatore a `CRuntimeClass` che identifica il tipo di visualizzazione per la.  Le informazioni sulla classe di runtime e il puntatore del documento corrente vengono utilizzati per creare dinamicamente una nuova visualizzazione.  Nella tabella seguente suggerisce come e quando ogni membro `CCreateContext` potrebbe essere utilizzato:  
  
|Membro|Type|Cui è per|  
|------------|----------|---------------|  
|`m_pNewViewClass`|`CRuntimeClass*`|`CRuntimeClass` della nuova visualizzazione da creare.|  
|`m_pCurrentDoc`|`CDocument*`|Il documento esistente da associare alla nuova visualizzazione.|  
|`m_pNewDocTemplate`|`CDocTemplate*`|Il modello di documento associato alla creazione di una nuova finestra cornice MDI.|  
|`m_pLastView`|`CView*`|La visualizzazione originale in cui le visualizzazioni aggiuntive vengono create, come la creazione di visualizzare la finestra con separatore o la creazione della visualizzazione di un documento.|  
|`m_pCurrentFrame`|`CFrameWnd*`|La finestra cornice in cui le applicazioni utilizzano aggiuntive vengono create, come la creazione di una seconda finestra cornice in un documento.|  
  
 Quando un modello di documento creato un documento e i componenti collegati, convalida le informazioni archiviate nella struttura `CCreateContext`.  Ad esempio, una visualizzazione non deve essere creata per un documento inesistente.  
  
> [!NOTE]
>  Tutti i puntatori in `CCreateContext` sono facoltativi e possono essere `NULL` se non specificato o sconosciuto.  
  
 `CCreateContext` viene utilizzato dalle funzioni membro elencate in "vedere anche." Consultare le descrizioni di queste funzioni per informazioni specifiche se si intende eseguirne l'override.  
  
 Di seguito sono riportate alcune linee guida generali:  
  
-   Una volta passato come argomento per la creazione della finestra, come in `CWnd::Create`, `CFrameWnd::Create`e `CFrameWnd::LoadFrame`, il contesto di creare specifica alla nuova finestra deve essere connessa.  Per la maggior parte delle finestre, l'intera struttura è facoltativa e un puntatore `NULL` può essere passato.  
  
-   Per funzioni membro sottoponibili a override, come `CFrameWnd::OnCreateClient`, l'argomento `CCreateContext` è facoltativo.  
  
-   Per funzioni membro legate alla creazione di visualizzazione, è necessario fornire informazioni sufficienti per creare la visualizzazione.  Ad esempio, per la prima visualizzazione di una finestra con separatore, è necessario fornire le informazioni sulle classi visualizzazione e il documento corrente.  
  
 Generalmente se si utilizzano le impostazioni predefinite del framework, è possibile ignorare `CCreateContext`.  Se si tenta delle modifiche più avanzate, il codice sorgente della libreria MFC o programmi di esempio, ad esempio VIEWEX, si consentirà.  Se non si utilizza un parametro obbligatorio, un'asserzione del framework viene indicato che si dimentichi.  
  
 Per ulteriori informazioni su `CCreateContext`, vedere l'esempio [VIEWEX](../../top/visual-cpp-samples.md)MFC.  
  
## Requisiti  
 **intestazione:** afxext.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFrameWnd::Create](../Topic/CFrameWnd::Create.md)   
 [CFrameWnd::LoadFrame](../Topic/CFrameWnd::LoadFrame.md)   
 [CFrameWnd::OnCreateClient](../Topic/CFrameWnd::OnCreateClient.md)   
 [CSplitterWnd::Create](../Topic/CSplitterWnd::Create.md)   
 [CSplitterWnd::CreateView](../Topic/CSplitterWnd::CreateView.md)   
 [CWnd::Create](../Topic/CWnd::Create.md)