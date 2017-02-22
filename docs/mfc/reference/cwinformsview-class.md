---
title: "CWinFormsView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinFormsView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinFormsView class"
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], MFC support"
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CWinFormsView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità generica per l'hosting di un controllo Windows Form come visualizzazione MFC.  
  
## Sintassi  
  
```  
class CWinFormsView : public CView;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsView::CWinFormsView](../Topic/CWinFormsView::CWinFormsView.md)|Costruisce un oggetto `CWinFormsView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsView::GetControl](../Topic/CWinFormsView::GetControl.md)|Recupera un puntatore al controllo Windows Form.|  
  
### Operatori pubblici  
  
|Nome||  
|----------|-|  
|[CWinFormsView::operator Control^](../Topic/CWinFormsView::operator%20Control%5E.md)|Esegue il cast di un tipo come puntatore a un controllo Windows Form.|  
  
## Note  
 MFC utilizza la classe `CWinFormsView` per ospitare un controllo Windows Form di .NET Framework all'interno di una visualizzazione MFC.  Il controllo è un elemento figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione MFC.  Il risultato è simile a una visualizzazione `CFormView`, che approfittiate di Progettazione Windows Form ed esecuzione creare le visualizzazioni basate su form dettagliate.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
> [!NOTE]
>  L'integrazione di Windows Form MFC funziona solo in progetti che vengono collegati in modo dinamico a MFC \(progetti in cui AFXDLL è definito\).  
  
> [!NOTE]
>  CWinFormsView non supporta la finestra con separatore MFC \([CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)\).  Attualmente solo la barra di divisione di Windows Form \(<xref:System.Windows.Forms.Splitter>\) è supportata.  
  
## Requisiti  
 **intestazione:** afxwinforms.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinFormsControl Class](../../mfc/reference/cwinformscontrol-class.md)   
 [CWinFormsDialog Class](../../mfc/reference/cwinformsdialog-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)