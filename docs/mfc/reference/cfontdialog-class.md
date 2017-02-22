---
title: "CFontDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFontDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFontDialog class"
  - "finestre di dialogo, tipi di carattere"
  - "tipi di carattere"
  - "tipi di carattere, selezione"
ms.assetid: 6228d500-ed0f-4156-81e5-ab0d57d1dcf4
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CFontDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di incorporare una finestra di dialogo di fonte\- selezione nell'applicazione.  
  
## Sintassi  
  
```  
class CFontDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::CFontDialog](../Topic/CFontDialog::CFontDialog.md)|Costruisce un oggetto `CFontDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::DoModal](../Topic/CFontDialog::DoModal.md)|Visualizzare la finestra di dialogo e sarà all'utente di effettuare una selezione.|  
|[CFontDialog::GetCharFormat](../Topic/CFontDialog::GetCharFormat.md)|Recupera la formattazione carattere del tipo di carattere selezionato.|  
|[CFontDialog::GetColor](../Topic/CFontDialog::GetColor.md)|Restituisce il colore del carattere selezionata.|  
|[CFontDialog::GetCurrentFont](../Topic/CFontDialog::GetCurrentFont.md)|Assegna le caratteristiche di carattere attualmente selezionata in una struttura `LOGFONT`.|  
|[CFontDialog::GetFaceName](../Topic/CFontDialog::GetFaceName.md)|Restituisce il nome di fronte del tipo di carattere selezionato.|  
|[CFontDialog::GetSize](../Topic/CFontDialog::GetSize.md)|Restituisce le dimensioni in punti del tipo di carattere selezionato.|  
|[CFontDialog::GetStyleName](../Topic/CFontDialog::GetStyleName.md)|Restituisce il nome dello stile del carattere selezionata.|  
|[CFontDialog::GetWeight](../Topic/CFontDialog::GetWeight.md)|Restituisce lo spessore del tipo di carattere selezionato.|  
|[CFontDialog::IsBold](../Topic/CFontDialog::IsBold.md)|Determina se il tipo è in grassetto.|  
|[CFontDialog::IsItalic](../Topic/CFontDialog::IsItalic.md)|Determina se il carattere il segnalibro sia in corsivo.|  
|[CFontDialog::IsStrikeOut](../Topic/CFontDialog::IsStrikeOut.md)|Determina se il tipo viene visualizzata con lo a.|  
|[CFontDialog::IsUnderline](../Topic/CFontDialog::IsUnderline.md)|Determina se il tipo è sottolineata.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontDialog::m\_cf](../Topic/CFontDialog::m_cf.md)|Una struttura utilizzata per personalizzare un oggetto `CFontDialog`.|  
  
## Note  
 Un oggetto `CFontDialog` è una finestra di dialogo con un elenco di tipi di carattere attualmente installati nel sistema.  L'utente può selezionare un tipo di carattere specifico dall'elenco e la selezione viene presentato un rapporto all'applicazione.  
  
 Per creare un oggetto `CFontDialog`, utilizzare il costruttore fornito o derivare una nuova sottoclasse e utilizzare il proprio costruttore personalizzato.  
  
 Una volta creato un oggetto `CFontDialog` è stato creato, è possibile utilizzare la struttura `m_cf` per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura [m\_cf](../Topic/CFontDialog::m_cf.md) è di tipo [CHOOSEFONT](http://msdn.microsoft.com/library/windows/desktop/ms646832).  Per ulteriori informazioni sulla struttura, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Dopo aver inizializzato i controlli dell'oggetto finestra di dialogo, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di selezionare un tipo di carattere.  `DoModal` restituisce se l'utente ha scelto del pulsante OK \(**IDOK**\) o annulla \(**IDCANCEL**\).  
  
 Se `DoModal` restituisce **IDOK**, è possibile utilizzare una delle funzioni membro di `CFontDialog` per recuperare l'input di informazioni dall'utente.  
  
 È possibile utilizzare la funzione di Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  Per ulteriori informazioni su questa funzione, vedere [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `CFontDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFontDialog`, fornire un modello personalizzato di una finestra di dialogo e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi.  Tutti i messaggi non elaborati devono essere passati alla classe di base.  
  
 Personalizzare la funzione hook non è obbligatorio.  
  
 Per ulteriori informazioni su l `CFontDialog`, vedere [Classi comuni della finestra di dialogo](../../mfc/common-dialog-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFontDialog`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [MFC campione HIERSVR](../../top/visual-cpp-samples.md)   
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)