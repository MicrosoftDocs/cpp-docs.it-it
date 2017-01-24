---
title: "Derivazione di controlli da un controllo standard | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni [C++], derivazione da"
  - "controlli [MFC], derivati"
  - "controlli derivati"
  - "controlli standard"
  - "controlli standard, derivazione dei controlli da"
  - "controlli comuni di Windows [C++], derivazione da"
ms.assetid: a6f84315-7007-4e0e-8576-78be81254802
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Derivazione di controlli da un controllo standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come con qualsiasi [CWnd](../mfc/reference/cwnd-class.md)\- classe derivata, è possibile modificare il comportamento di un controllo derivando una nuova classe da una classe del controllo esistente.  
  
### Per creare una classe del controllo derivata  
  
1.  Derivare la classe da una classe di controllo esistente ed eventualmente eseguire l'override della funzione membro di **Crea** in modo da fornire argomenti necessari alla funzione di **Crea** della classe base.  
  
2.  Fornire a funzioni membro per la gestione dei messaggi e le voci della mappa messaggi per modificare il comportamento del controllo in risposta ai messaggi specifici di windows.  Per informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).  
  
3.  Specificare le nuove funzioni membro per estendere la funzionalità del controllo \(facoltativo\).  
  
 Utilizzo di un controllo derivato in una finestra di dialogo richiede un lavoro aggiuntivo.  I tipi e le posizioni dei controlli in una finestra di dialogo in genere vengono specificati in una risorsa di dialogo\- modello.  Se si crea una classe del controllo derivata, non è possibile specificarlo in un modello di finestra di dialogo poiché il compilatore di risorse non conosce nothing sulla classe derivata.  
  
#### Per inserire il controllo derivato in una finestra di dialogo  
  
1.  Importare un oggetto della classe del controllo derivata nella dichiarazione della classe derivata la finestra di dialogo.  
  
2.  Eseguire l'override della funzione membro di `OnInitDialog` nella classe della finestra di dialogo per chiamare la funzione membro di `SubclassDlgItem` per il controllo derivato.  
  
 sottoclassi di`SubclassDlgItem` "in" un controllo creato da un modello di finestra di dialogo.  Quando un controllo è dinamicamente sottoclassato, agganciate in windows, elaborate alcuni messaggi all'interno della propria applicazione, quindi passare i messaggi rimanenti su finestre.  Per ulteriori informazioni, vedere la funzione membro [SubclassDlgItem](../Topic/CWnd::SubclassDlgItem.md) della classe `CWnd` nel *Riferimento MFC*.  Nell'esempio seguente viene illustrato come scrivere un override di `OnInitDialog` per chiamare `SubclassDlgItem`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#3](../mfc/codesnippet/CPP/deriving-controls-from-a-standard-control_1.cpp)]  
  
 Poiché il controllo derivato è incorporato in una classe di finestre di dialogo, sarà costruito quando la finestra di dialogo viene costruita e viene distrutto quando la finestra di dialogo viene eliminato.  Confrontare questo codice all'esempio in [Aggiunta di controlli a mano](../mfc/adding-controls-by-hand.md).  
  
## Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)