---
title: "CMFCKeyMapDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCKeyMapDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCKeyMapDialog class"
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CMFCKeyMapDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCKeyMapDialog` supporta un controllo che associa i controlli alle chiavi della tastiera.  
  
## Sintassi  
  
```  
class CMFCKeyMapDialog : public CDialogEx  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::CMFCKeyMapDialog](../Topic/CMFCKeyMapDialog::CMFCKeyMapDialog.md)|Costruisce un oggetto `CMFCKeyMapDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::DoModal](../Topic/CMFCKeyMapDialog::DoModal.md)|Visualizza una finestra di dialogo del mapping della tastiera.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCKeyMapDialog::FormatItem](../Topic/CMFCKeyMapDialog::FormatItem.md)|Chiamato dal framework per compilare una stringa che descrive un mapping principale.  Per impostazione predefinita, la stringa contenente il nome del comando, i tasti di scelta rapida utilizzati e la descrizione del tasto di scelta rapida.|  
|[CMFCKeyMapDialog::GetCommandKeys](../Topic/CMFCKeyMapDialog::GetCommandKeys.md)|Recupera una stringa contenente un elenco dei tasti di scelta rapida associati al comando specificato.|  
|[CMFCKeyMapDialog::OnInsertItem](../Topic/CMFCKeyMapDialog::OnInsertItem.md)|Chiamato dal framework prima che un nuovo elemento venga inserito nel controllo elenco interno che supporta il controllo del mapping della tastiera.|  
|[CMFCKeyMapDialog::OnPrintHeader](../Topic/CMFCKeyMapDialog::OnPrintHeader.md)|Chiamato dal framework per stampare l'intestazione per il mapping della tastiera a una nuova pagina.|  
|[CMFCKeyMapDialog::OnPrintItem](../Topic/CMFCKeyMapDialog::OnPrintItem.md)|Chiamato dal framework per stampare un elemento mapping della tastiera.|  
|[CMFCKeyMapDialog::OnSetColumns](../Topic/CMFCKeyMapDialog::OnSetColumns.md)|Chiamato dal framework per impostare i sottotitoli per le colonne nel controllo elenco interno che supporta il controllo del mapping della tastiera.|  
|[CMFCKeyMapDialog::PrintKeyMap](../Topic/CMFCKeyMapDialog::PrintKeyMap.md)|Chiamato dal framework quando un utente fa clic sul pulsante **Stampa**.|  
|[CMFCKeyMapDialog::SetColumnsWidth](../Topic/CMFCKeyMapDialog::SetColumnsWidth.md)|Chiamato dal framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo del mapping della tastiera.|  
  
## Note  
 Utilizzare la classe `CMFCKeyMapDialog` per implementare una finestra ridimensionabile del mapping della tastiera.  La finestra di dialogo utilizza un controllo visualizzazione elenco per visualizzare i tasti di scelta rapida e i relativi controlli connessi.  
  
 Per utilizzare la classe `CMFCKeyMapDialog` in un'applicazione, passare un puntatore alla finestra cornice principale come parametro al costruttore `CMFCKeyMapDialog`.  Chiamare il metodo `DoModal` per avviare una finestra di dialogo modale.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDialogEx](../../mfc/reference/cdialogex-class.md)  
  
 [CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)  
  
## Requisiti  
 **intestazione:** afxkeymapdialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)