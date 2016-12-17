---
title: "CFindReplaceDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFindReplaceDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFindReplaceDialog class"
  - "Find/Replace dialog box"
  - "sostituzione di testo"
  - "sostituzione di testo, CFindReplaceDialog class"
  - "ricerche di testo, CFindReplaceDialog class"
  - "ricerche di testo, sostituzione di testo"
ms.assetid: 610f0b5d-b398-4ef6-8c05-e9d6641e50a8
caps.latest.revision: 25
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFindReplaceDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di ricerca standard della stringa di utilizzo\/finestre di dialogo di sostituzione nell'applicazione.  
  
## Sintassi  
  
```  
class CFindReplaceDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::CFindReplaceDialog](../Topic/CFindReplaceDialog::CFindReplaceDialog.md)|Chiamare la funzione per creare un oggetto `CFindReplaceDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::Create](../Topic/CFindReplaceDialog::Create.md)|Crea e visualizza una finestra di dialogo `CFindReplaceDialog`.|  
|[CFindReplaceDialog::FindNext](../Topic/CFindReplaceDialog::FindNext.md)|Chiamare la funzione per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.|  
|[CFindReplaceDialog::GetFindString](../Topic/CFindReplaceDialog::GetFindString.md)|Chiamare questa funzione per recuperare la stringa corrente di ricerca.|  
|[CFindReplaceDialog::GetNotifier](../Topic/CFindReplaceDialog::GetNotifier.md)|Chiamare questa funzione per recuperare la struttura **FINDREPLACE** nel gestore di messaggi registrato.|  
|[CFindReplaceDialog::GetReplaceString](../Topic/CFindReplaceDialog::GetReplaceString.md)|Chiamare questa funzione per recuperare il corrente sostituiscono la stringa.|  
|[CFindReplaceDialog::IsTerminating](../Topic/CFindReplaceDialog::IsTerminating.md)|Chiamare questa funzione per determinare se la finestra di dialogo è irreversibile.|  
|[CFindReplaceDialog::MatchCase](../Topic/CFindReplaceDialog::MatchCase.md)|Chiamare la funzione per determinare se il consumer deve corrispondere al caso della stringa di ricerca esattamente.|  
|[CFindReplaceDialog::MatchWholeWord](../Topic/CFindReplaceDialog::MatchWholeWord.md)|Chiamare la funzione per determinare se il consumer deve corrispondere a parole intere solo.|  
|[CFindReplaceDialog::ReplaceAll](../Topic/CFindReplaceDialog::ReplaceAll.md)|Chiamare questa funzione per determinare se l'utente desidera tutte le occorrenze della stringa da sostituire.|  
|[CFindReplaceDialog::ReplaceCurrent](../Topic/CFindReplaceDialog::ReplaceCurrent.md)|Chiamare questa funzione per determinare se l'utente desidera la parola corrente da sostituire.|  
|[CFindReplaceDialog::SearchDown](../Topic/CFindReplaceDialog::SearchDown.md)|Chiamare questa funzione per determinare se l'utente desidera la ricerca procedano in una direzione discendente.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::m\_fr](../Topic/CFindReplaceDialog::m_fr.md)|Una struttura utilizzata per personalizzare un oggetto `CFindReplaceDialog`.|  
  
## Note  
 A differenza delle altre finestre di dialogo comuni di Windows, gli oggetti `CFindReplaceDialog` non sono modali, consentendo agli utenti di interagire con altre finestre mentre sono sullo schermo.  Esistono due tipi di oggetti `CFindReplaceDialog` : Finestre di dialogo trova e trova o finestre di dialogo di sostituzione.  Sebbene le finestre di dialogo consentono alla ricerca di input e la ricerca e alle stringhe di sostituzione, non vi sono alcune delle funzioni di ricerca o sostituzione.  È necessario aggiungere questi elementi all'applicazione.  
  
 Per creare un oggetto `CFindReplaceDialog`, utilizzare il costruttore fornito \(senza argomenti.\)  Poiché questa è una finestra di dialogo non modale, allocare l'oggetto nell'heap mediante l'operatore **new**, anziché sullo stack.  
  
 Una volta creato un oggetto `CFindReplaceDialog` è stato creato, è necessario chiamare la funzione membro [Crea](../Topic/CFindReplaceDialog::Create.md) per creare e visualizzare la finestra di dialogo.  
  
 Utilizzare la struttura [m\_fr](../Topic/CFindReplaceDialog::m_fr.md) per inizializzare la finestra di dialogo prima di chiamare **Crea**.  La struttura `m_fr` è di tipo [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835).  Per ulteriori informazioni sulla struttura, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Affinché la finestra padre per comunicare trova\/richieste di sostituzione, è necessario utilizzare la funzione di Windows [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) e utilizzare la macro della mappa messaggi [ON\_REGISTERED\_MESSAGE](../Topic/ON_REGISTERED_MESSAGE.md) nella finestra cornice che gestisce il messaggio registrato.  
  
 È possibile determinare se l'utente ha deciso di terminare la finestra di dialogo con la funzione membro `IsTerminating`.  
  
 `CFindReplaceDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFindReplaceDialog`, fornire un modello personalizzato di una finestra di dialogo e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi.  Tutti i messaggi non elaborati devono essere passati alla classe di base.  
  
 Personalizzare la funzione hook non è obbligatorio.  
  
 Per ulteriori informazioni su l `CFindReplaceDialog`, vedere [Classi comuni della finestra di dialogo](../../mfc/common-dialog-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFindReplaceDialog`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)