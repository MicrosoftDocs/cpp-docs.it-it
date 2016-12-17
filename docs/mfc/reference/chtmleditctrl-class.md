---
title: "CHtmlEditCtrl Class | Microsoft Docs"
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
  - "CHtmlEditCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHtmlEditCtrl class"
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHtmlEditCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra di MFC.  
  
## Sintassi  
  
```  
class CHtmlEditCtrl: public CWnd,   
   public CHtmlEditCtrlBase< CHtmlEditCtrl >  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditCtrl::CHtmlEditCtrl](../Topic/CHtmlEditCtrl::CHtmlEditCtrl.md)|Costruisce un oggetto `CHtmlEditCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditCtrl::Create](../Topic/CHtmlEditCtrl::Create.md)|Crea un controllo ActiveX WebBrowser e lo aggiunge all'oggetto `CHtmlEditCtrl`.  Questa funzione viene automaticamente inserito il controllo ActiveX WebBrowser in modalità di modifica.|  
|[CHtmlEditCtrl::GetDHtmlDocument](../Topic/CHtmlEditCtrl::GetDHtmlDocument.md)|Recupera l'interfaccia [IHTMLDocument2](https://msdn.microsoft.com/en-us/library/aa752574.aspx) nel documento attualmente caricato nel controllo WebBrowser contenuto.|  
|[CHtmlEditCtrl::GetStartDocument](../Topic/CHtmlEditCtrl::GetStartDocument.md)|Recupera un url a un documento predefinito per caricare il controllo WebBrowser contenuto.|  
  
## Note  
 Il controllo WebBrowser ospitato viene inserito automaticamente in modalità di modifica dopo la creazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHtmlEditCtrl`  
  
## Requisiti  
 **Header:** afxhtml.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)