---
title: "CDataExchange Class | Microsoft Docs"
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
  - "CDataExchange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataExchange class"
  - "DDV (dialog data validation)"
  - "DDV (dialog data validation), custom DDV routines"
  - "DDX (Dialog Data Exchange)"
  - "DDX (Dialog Data Exchange), between dialog and CDialog"
  - "DDX (Dialog Data Exchange), custom DDX routines"
  - "DDX (Dialog Data Exchange), direction of exchange"
  - "DDX/DDV"
  - "DDX/DDV, CDataExchange class"
  - "DDX/DDV, Technical Note 26"
  - "exchanging data between dialogs and CDialogs"
  - "m_bSaveAndValidate"
  - "convalida dei dati, dialog box data entry"
ms.assetid: 84ed6113-325d-493e-a75d-223f03a992b8
caps.latest.revision: 20
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataExchange Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta lo scambio di dati della finestra di dialogo \(DDX\) e le routine \(DDV\) di convalida dei dati della finestra di dialogo utilizzate da Microsoft Foundation classi.  
  
## Sintassi  
  
```  
class CDataExchange  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::CDataExchange](../Topic/CDataExchange::CDataExchange.md)|Costruisce un oggetto `CDataExchange`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::Fail](../Topic/CDataExchange::Fail.md)|Chiamato quando la convalida non riesce.  Bloccando lo stato attivo al controllo e ai precedenti viene generata un'eccezione.|  
|[CDataExchange::PrepareCtrl](../Topic/CDataExchange::PrepareCtrl.md)|Prepara il controllo specificato per lo scambio di dati o la convalida.  Utilizzo dei controlli di nonedit.|  
|[CDataExchange::PrepareEditCtrl](../Topic/CDataExchange::PrepareEditCtrl.md)|Prepara il controllo di modifica specificato per lo scambio di dati o la convalida.|  
|[CDataExchange::PrepareOleCtrl](../Topic/CDataExchange::PrepareOleCtrl.md)|Prepara il controllo OLE specificato per lo scambio di dati o la convalida.  Utilizzo dei controlli di nonedit.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataExchange::m\_bSaveAndValidate](../Topic/CDataExchange::m_bSaveAndValidate.md)|Flag per la direzione di DDX e di DDV.|  
|[CDataExchange::m\_pDlgWnd](../Topic/CDataExchange::m_pDlgWnd.md)|La finestra di dialogo o la finestra in cui lo scambio di dati ha luogo.|  
  
## Note  
 `CDataExchange` non dispone di una classe base.  
  
 Utilizzare questa classe se si scrive le routine di scambio di dati per i tipi di dati personalizzati o controlli, o se si sta scrivendo le routine di convalida dei dati.  Per ulteriori informazioni sulla scrittura delle routine di DDV e DDX, vedere [nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md).  Per una panoramica su DDX e di DDV, vedere [Scambio di dati e convalida della finestra di dialogo](../../mfc/dialog-data-exchange-and-validation.md) e [finestre di dialogo](../../mfc/dialog-boxes.md).  
  
 Un oggetto `CDataExchange` vengono fornite informazioni sul contesto necessarie affinché DDX e DDV sia successiva.  Il flag `m_bSaveAndValidate` è **FALSE** quando DDX viene utilizzato per inserire i valori iniziali dei comandi della finestra di dialogo dai membri dati.  Il flag `m_bSaveAndValidate` è **TRUE** quando DDX utilizzato per impostare i valori correnti dei comandi della finestra di dialogo nei membri dati e quando DDV viene utilizzato per convalidare i valori dei dati.  Se la convalida di DDV non riesce, la routine di DDV visualizzare una finestra di messaggio che descrive l'errore di input.  La routine di DDV chiamerà **Test non superato** per reimpostare lo stato attivo sul controllo che crea il problema e generare un'eccezione per interrompere il processo di convalida.  
  
## Gerarchia di ereditarietà  
 `CDataExchange`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio VIEWEX MFC](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd::DoDataExchange](../Topic/CWnd::DoDataExchange.md)   
 [CWnd::UpdateData](../Topic/CWnd::UpdateData.md)