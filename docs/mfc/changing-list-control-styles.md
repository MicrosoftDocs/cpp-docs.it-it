---
title: "Modifica degli stili del controllo List | Microsoft Docs"
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
  - "CListCtrl (classe), modifica degli stili"
  - "CListCtrl (classe), stili"
  - "stili, CListCtrl"
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Modifica degli stili del controllo List
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile modificare lo stile della finestra di un controllo elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\) in qualsiasi momento dopo averla creata.  Modifica dello stile, si modifica il tipo di visualizzazione utilizzata dal controllo.  Ad esempio, per emulare in esplora soluzioni, immettere le voci di menu o pulsanti per passare il controllo tra le diverse visualizzazioni: visualizzazione icone, visualizzazione elenco, e così via.  
  
 Ad esempio, quando l'utente seleziona la voce di menu, effettuare una chiamata a [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584) per recuperare lo stile del controllo corrente e quindi chiamare [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) per reimpostare lo stile.  Per ulteriori informazioni, vedere [Utilizzo di controlli di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Gli stili disponibili sono elencati in [Crea](../Topic/CListCtrl::Create.md).  Gli stili `LVS_ICON`, `LVS_SMALLICON`, `LVS_LIST` e `LVS_REPORT` definiscono le quattro visualizzazioni di controllo list.  
  
## Extended Styles  
 Oltre agli stili standard per un controllo elenco, esiste un altro set, definito stili estesi.  Questi stili, descritti in [Stili estesi di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774732) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], forniscono varie funzionalità utili la personalizzazione del comportamento del controllo elenco.  Per implementare il comportamento di un determinato stile \(come selezione del passaggio del mouse\), selezionare una chiamata a [CListCtrl::SetExtendedStyle](../Topic/CListCtrl::SetExtendedStyle.md), passando lo stile necessario.  Il seguente esempio viene illustrata la chiamata di funzione:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#22](../mfc/codesnippet/CPP/changing-list-control-styles_1.cpp)]  
  
> [!NOTE]
>  Per la selezione del passaggio del mouse funzioni, è necessario inoltre disporre o **LVS\_EX\_ONECLICKACTIVATE** o **LVS\_EX\_TWOCLICKACTIVATE** abilitato.  
  
## Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)