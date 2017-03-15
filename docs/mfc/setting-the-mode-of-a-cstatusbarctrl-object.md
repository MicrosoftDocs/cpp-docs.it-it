---
title: "Impostazione della modalit&#224; di un oggetto CStatusBarCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStatusBarCtrl (classe), modalità semplice e non semplice"
  - "IsSimple (metodo), utilizzo"
  - "modalità non semplice e controlli della barra di stato"
  - "SetSimple (metodo)"
  - "modalità semplice e controlli della barra di stato"
  - "controlli della barra di stato, modalità semplice e non semplice"
ms.assetid: ca6076e5-1501-4e33-8d35-9308941e46c0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Impostazione della modalit&#224; di un oggetto CStatusBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono due modi per un oggetto di `CStatusBarCtrl` : semplice e non semplice.  Nella maggior parte dei casi, il controllo barra di stato disporrà di uno o più parti, con testo ed eventualmente un'icona o icone.  Si tratta della modalità non semplice.  Per ulteriori informazioni su questa modalità, vedere [Inizializzare le parti di un oggetto di CStatusBarCtrl](../mfc/initializing-the-parts-of-a-cstatusbarctrl-object.md).  
  
 Tuttavia, vi sono casi in cui è necessario solo visualizza una sola riga di testo.  In questo caso, la modalità semplice è sufficiente alle proprie esigenze.  Per modificare l'aspetto dell'oggetto di `CStatusBarCtrl` a semplice, fare una chiamata a una funzione membro di [SetSimple](../Topic/CStatusBarCtrl::SetSimple.md).  Una volta che il controllo barra di stato è in modalità semplice, impostare il testo chiamando la funzione membro di **SetText**, passando 255 come valore per il parametro di **nPane**.  
  
 È possibile utilizzare la funzione di [IsSimple](../Topic/CStatusBarCtrl::IsSimple.md) per determinare la modalità l'oggetto di `CStatusBarCtrl` è.  
  
> [!NOTE]
>  Se l'oggetto barra di stato viene modificato da non semplice a semplice, o viceversa, la finestra immediatamente viene ridisegnato e, se utilizzabile, tutte le parti definite automaticamente viene ripristinata.  
  
## Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)