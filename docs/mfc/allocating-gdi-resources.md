---
title: "Allocazione di risorse GDI | Microsoft Docs"
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
  - "oggetti GDI, allocazione durante la stampa"
  - "stampa [MFC], allocazione di risorse GDI"
  - "risorse [MFC], stampa"
ms.assetid: cef7e94d-5a27-4aea-a9ee-8369fc895d3a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Allocazione di risorse GDI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo descrive come allocare e deallocare gli oggetti Graphics Device Interface \(GDI\) di Windows necessari per la stampa.  
  
> [!NOTE]
>  GDI\+ è incluso in Windows XP ed è disponibile come componente ridistribuibile per Windows NT 4.0 SP6, Windows 2000, Windows 98 e Windows Me.  Per scaricare la versione più recente del componente ridistribuibile, vedere [http:\/\/www.microsoft.com\/msdownload\/platformsdk\/sdkupdate\/psdkredist.htm](http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm).  Per altre informazioni, vedere la documentazione di GDI\+ SDK in MSDN: [http:\/\/msdn.microsoft.com\/library\/default.asp?url\=\/library\/gdicpp\/GDIPlus\/GDIPlus.asp](http://msdn.microsoft.com/library/default.asp?url=/library/gdicpp/GDIPlus/GDIPlus.asp).  
  
 Si supponga di dover usare determinati tipi di carattere, penne o altri oggetti GDI per la stampa, ma non per la visualizzazione sullo schermo.  A causa della quantità di memoria che richiedono, non è conveniente allocare questi oggetti all'avvio dell'applicazione.  Quando l'applicazione non stampa un documento, la memoria potrebbe essere necessaria per altri scopi.  È preferibile allocare gli oggetti all'avvio della stampa e quindi eliminarli al termine.  
  
 Per allocare questi oggetti GDI, eseguire l'override della funzione membro [OnBeginPrinting](../Topic/CView::OnBeginPrinting.md).  Questa funzione è particolarmente adatta a questo scopo per due motivi: viene chiamata dal framework una volta all'avvio di ogni processo di stampa e, a differenza di [OnPreparePrinting](../Topic/CView::OnPreparePrinting.md), ha accesso all'oggetto [CDC](../mfc/reference/cdc-class.md) che rappresenta il driver della stampante.  È possibile archiviare questi oggetti per usarli durante il processo di stampa definendo variabili membro nella classe di visualizzazione che puntano a oggetti GDI, ad esempio membri **CFont \*** e così via.  
  
 Per usare gli oggetti GDI creati, selezionarli nel contesto di dispositivo stampante nella funzione membro [OnPrint](../Topic/CView::OnPrint.md).  Se sono necessari oggetti GDI diversi a seconda delle pagine del documento, è possibile esaminare il membro `m_nCurPage` della struttura [CPrintInfo](../mfc/reference/cprintinfo-structure.md) e selezionare l'oggetto GDI di conseguenza.  Se è necessario un oggetto GDI per diverse pagine consecutive, in Windows è necessario selezionarlo nel contesto di dispositivo ogni volta che viene chiamato `OnPrint`.  
  
 Per deallocare questi oggetti GDI, eseguire l'override della funzione membro [OnEndPrinting](../Topic/CView::OnEndPrinting.md).  Il framework chiama questa funzione alla fine di ogni processo di stampa, permettendo di deallocare oggetti GDI specifici della stampa prima che l'applicazione torni ad altre attività.  
  
## Vedere anche  
 [Stampa](../mfc/printing.md)   
 [Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)