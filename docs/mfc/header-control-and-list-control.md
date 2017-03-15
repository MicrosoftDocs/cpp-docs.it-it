---
title: "Controllo Header e controllo List | Microsoft Docs"
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
  - "CHeaderCtrl (classe), con CListCtrl"
  - "CListCtrl (classe), controlli intestazione"
  - "CListCtrl (classe), con CHeaderCtrl"
  - "controlli [MFC], intestazione"
  - "controlli intestazione"
  - "controlli intestazione, controlli elenco utilizzati con"
ms.assetid: b20194b1-1a6b-4e2f-b890-1b3cca6650bc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controllo Header e controllo List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella maggior parte dei casi, si utilizzerà il controllo intestazione incorporato in un oggetto di [CListView](../mfc/reference/clistview-class.md) o di [CListCtrl](../mfc/reference/clistctrl-class.md).  Tuttavia, vi sono casi in cui un oggetto separato del controllo intestazione è utile, ad esempio la modifica dei dati, disposti in colonne o righe, in [CView](../mfc/reference/cview-class.md)\- oggetto derivato.  In questi casi, è necessario maggiore controllo sull'aspetto e del comportamento predefinito di un controllo intestazione incorporato.  
  
 Nel caso più comune che si desidera un controllo intestazione per fornire lo standard, il comportamento predefinito, è possibile utilizzare [CListCtrl](../mfc/reference/clistctrl-class.md) o [CListView](../mfc/reference/clistview-class.md) invece.  Utilizzare `CListCtrl` quando si desidera che la funzionalità di un controllo intestazione predefinito, incorporato in un controllo comune visualizzazione elenco.  Utilizzare [CListView](../mfc/reference/clistview-class.md) quando si desidera che la funzionalità di un controllo intestazione predefinito, incorporato in un oggetto visualizzazione.  
  
> [!NOTE]
>  Questi controlli includono un solo controllo intestazione incorporato se il controllo elenco viene creato utilizzando lo stile di `LVS_REPORT`.  
  
 Nella maggior parte dei casi, l'aspetto del controllo intestazione incorporato è possibile cambiarlo modificando gli stili del controllo visualizzazione elenco contenitore.  Inoltre, le informazioni sul controllo intestazione è possibile ottenere con le funzioni membro controllo visualizzazione elenco padre.  Tuttavia, per il controllo completo e accesso, attributi e stili del controllo intestazione incorporato, si consiglia di un puntatore all'oggetto controllo intestazione è ottenuto.  
  
 L'oggetto incorporato del controllo intestazione è accessibile da **CListCtrl**  o da `CListView` con una chiamata a una funzione membro di `GetHeaderCtrl` della rispettiva classe.  Il metodo è illustrato nel codice seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#14](../mfc/codesnippet/CPP/header-control-and-list-control_1.cpp)]  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di elenchi di immagini con i controlli intestazione](../mfc/using-image-lists-with-header-controls.md)  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)