---
title: "CMultiPageDHtmlDialog Class | Microsoft Docs"
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
  - "CMultiPageDHtmlDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiPageDHtmlDialog class"
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMultiPageDHtmlDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una finestra di dialogo a più pagine visualizzate più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.  
  
## Sintassi  
  
```  
class CMultiPageDHtmlDialog : public CDHtmlDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiPageDHtmlDialog::CMultiPageDHtmlDialog](../Topic/CMultiPageDHtmlDialog::CMultiPageDHtmlDialog.md)|Costruisce un oggetto finestra di dialogo \(stile procedura guidata\) a più pagine DHTML.|  
|[CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog](../Topic/CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog.md)|Elimina un oggetto finestra di dialogo a più pagine DHTML.|  
  
## Note  
 Il meccanismo per questo scopo è [Mappa eventi di URL e DHTML](http://msdn.microsoft.com/it-it/2a7332f0-79d7-46e4-b816-0a618c46777a), che contiene [mappe eventi incorporate](../Topic/BEGIN_EMBED_DHTML_EVENT_MAP.md) per ogni pagina.  
  
## Esempio  
 Questa finestra di dialogo a più pagine presuppone tre risorse HTML che definiscono la simile a una procedura guidata semplice funzionalità.  La prima pagina contiene un pulsante `Next`, il secondo pulsante `Next` e **Prev** e il terzo un pulsante **Prev**.  Quando uno dei pulsanti viene premuto, chiamate di funzioni di gestione [CDHtmlDialog::LoadFromResource](../Topic/CDHtmlDialog::LoadFromResource.md) per caricare la nuova pagina appropriata.  
  
 Le parti rilevanti della dichiarazione di classe \(in CMyMultiPageDlg.h\):  
  
 [!code-cpp[NVC_MFCDocView#181](../../mfc/codesnippet/CPP/cmultipagedhtmldialog-class_1.h)]  
  
 Le parti rilevanti dell'implementazione della classe \(in CMyMultipageDlg.cpp\):  
  
 [!code-cpp[NVC_MFCDocView#182](../../mfc/codesnippet/CPP/cmultipagedhtmldialog-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)  
  
 `CMultiPageDHtmlDialog`  
  
## Requisiti  
 **Header:** afxdhtml.h  
  
## Vedere anche  
 [CDHtmlDialog Class](../../mfc/reference/cdhtmldialog-class.md)   
 [Multipage DHTML and URL Event Maps \(NIB\)](http://msdn.microsoft.com/it-it/2a7332f0-79d7-46e4-b816-0a618c46777a)