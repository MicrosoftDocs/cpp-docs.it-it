---
title: "CColorDialog Class | Microsoft Docs"
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
  - "CColorDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CColorDialog class"
  - "colori, finestra di dialogo"
  - "finestre di dialogo, colori"
ms.assetid: d013dc25-9290-4b5d-a97e-95ad7208e13b
caps.latest.revision: 25
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CColorDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente di incorporare una finestra di dialogo di selezione corrispondente nell'applicazione.  
  
## Sintassi  
  
```  
class CColorDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::CColorDialog](../Topic/CColorDialog::CColorDialog.md)|Costruisce un oggetto `CColorDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::DoModal](../Topic/CColorDialog::DoModal.md)|Visualizza una finestra di dialogo dei colori e sarà all'utente di effettuare una selezione.|  
|[CColorDialog::GetColor](../Topic/CColorDialog::GetColor.md)|Restituisce una struttura **COLORREF** contenente i valori del colore selezionato.|  
|[CColorDialog::GetSavedCustomColors](../Topic/CColorDialog::GetSavedCustomColors.md)|Recupera i colori personalizzati creati dall'utente.|  
|[CColorDialog::SetCurrentColor](../Topic/CColorDialog::SetCurrentColor.md)|Forza la selezione di colori corrente nel colore specificato.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::OnColorOK](../Topic/CColorDialog::OnColorOK.md)|Override per convalidare il colore inserito nella finestra di dialogo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CColorDialog::m\_cc](../Topic/CColorDialog::m_cc.md)|Una struttura utilizzata per personalizzare le impostazioni della finestra di dialogo.|  
  
## Note  
 Un oggetto `CColorDialog` è una finestra di dialogo con un elenco di colori definite per il sistema di visualizzazione.  L'utente può selezionare o creare un colore specifico dall'elenco, che viene presentato un rapportoapplicazione quando la finestra di dialogo chiude.  
  
 Per creare un oggetto `CColorDialog`, utilizzare il costruttore fornito o derivare una nuova classe e utilizzare il proprio costruttore personalizzato.  
  
 Una volta che la finestra di dialogo è stata creata, è possibile impostare o modificare i valori nella struttura di[m\_cc](../Topic/CColorDialog::m_cc.md) per inizializzare i valori dei controlli della finestra di dialogo.  La struttura `m_cc` è di tipo [CHOOSECOLOR](http://msdn.microsoft.com/library/windows/desktop/ms646830).  
  
 Dopo aver inizializzato i controlli finestra di dialogo, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di selezionare un colore.  `DoModal` restituisce la selezione utente della finestra di dialogo OK \(**IDOK**\) o sul pulsante di annullamento \(**IDCANCEL**\).  
  
 Se `DoModal` restituisce **IDOK**, è possibile utilizzare una delle funzioni membro di `CColorDialog` per recuperare l'input di informazioni dall'utente.  
  
 È possibile utilizzare la funzione di Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  
  
 `CColorDialog` si basa sul file di COMMDLG.DLL fornito con le versioni di Windows 3,1 e successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CColorDialog`, fornire un modello personalizzato di una finestra di dialogo e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi.  Tutti i messaggi non elaborati devono essere passati alla classe di base.  
  
 Personalizzare la funzione hook non è obbligatorio.  
  
> [!NOTE]
>  In alcune installazioni l'oggetto `CColorDialog` non viene visualizzato con uno sfondo grigio quando viene utilizzato il framework per rendere altri oggetti `CDialog` grigi.  
  
 Per ulteriori informazioni su l `CColorDialog`, vedere [Classi comuni della finestra di dialogo](../../mfc/common-dialog-classes.md)  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CColorDialog`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [MFC esempi MDI](../../top/visual-cpp-samples.md)   
 [L'esempio DRAWCLI MFC](../../top/visual-cpp-samples.md)   
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)