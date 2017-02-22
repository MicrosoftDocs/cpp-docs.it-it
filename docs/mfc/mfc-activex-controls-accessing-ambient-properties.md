---
title: "Controlli ActiveX MFC: accesso a propriet&#224; di ambiente | Microsoft Docs"
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
  - "MFC (controlli ActiveX), accesso alle proprietà di ambiente"
  - "proprietà [MFC], accesso all'ambiente"
ms.assetid: fdc9db29-e6b0-45d2-a879-8bd60e2058a7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: accesso a propriet&#224; di ambiente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato un controllo ActiveX può accedere alle proprietà di ambiente del contenitore di controlli.  
  
 Un controllo può ottenere informazioni sul relativo contenitore accesso alle proprietà di ambiente del contenitore.  Queste proprietà vengono esposte le caratteristiche visive, ad esempio il colore di sfondo del contenitore, il tipo corrente utilizzata dal contenitore e caratteristiche operative, come se il contenitore è attualmente in modalità utente o in modalità di progettazione.  Un controllo può utilizzare le proprietà di ambiente per l'esattezza al relativo aspetto e il comportamento particolare contenitore in cui è incorporato.  Tuttavia, un controllo non deve mai presupporre che il relativo contenitore supporta qualsiasi proprietà di ambiente specifico.  Infatti, alcuni contenitori non supportino alcune proprietà di ambiente eseguito.  In assenza di una proprietà di ambiente, un controllo deve presupporre un valore predefinito appropriato.  
  
 Per accedere a una proprietà di ambiente, effettuare una chiamata a [COleControl::GetAmbientProperty](../Topic/COleControl::GetAmbientProperty.md).  Questa funzione accetta l'id di invio per la proprietà di ambiente come primo parametro \(il file OLECTL.H definisce la spedizione ID per il set standard delle proprietà di ambiente.  
  
 I parametri della funzione di `GetAmbientProperty` sono l'id send, un tag variabile che indicano il tipo di proprietà previsto e un puntatore alla memoria in cui il valore deve essere restituito.  Il tipo di dati a cui questo puntatore fa riferimento varia a seconda del tag variabile.  La funzione restituisce **TRUE** se il contenitore supporta la proprietà, altrimenti restituisce **FALSE**.  
  
 Nell'esempio di codice ottiene il valore della proprietà di ambiente denominata "UserMode". Se la proprietà non è supportata dal contenitore, un valore predefinito di **TRUE** presupposti:  
  
 [!code-cpp[NVC_MFC_AxUI#30](../mfc/codesnippet/CPP/mfc-activex-controls-accessing-ambient-properties_1.cpp)]  
  
 Per comodità, `COleControl` fornisce funzioni di supporto che accedono a numerose proprietà di ambiente e di utilizzo comune le impostazioni predefinite appropriate di ritorno quando le proprietà non sono disponibili.  Queste funzioni di supporto sono le seguenti:  
  
-   [COleControl::AmbientBackColor](../Topic/COleControl::AmbientBackColor.md)  
  
-   [AmbientDisplayName](../Topic/COleControl::AmbientDisplayName.md)  
  
-   [AmbientFont](../Topic/COleControl::AmbientFont.md)  
  
    > [!NOTE]
    >  Il chiamante deve chiamare **Rilascia\( \)** in tipo di carattere restituito.  
  
-   [AmbientForeColor](../Topic/COleControl::AmbientForeColor.md)  
  
-   [AmbientLocaleID](../Topic/COleControl::AmbientLocaleID.md)  
  
-   [AmbientScaleUnits](../Topic/COleControl::AmbientScaleUnits.md)  
  
-   [AmbientTextAlign](../Topic/COleControl::AmbientTextAlign.md)  
  
-   [AmbientUserMode](../Topic/COleControl::AmbientUserMode.md)  
  
-   [AmbientUIDead](../Topic/COleControl::AmbientUIDead.md)  
  
-   [AmbientShowHatching](../Topic/COleControl::AmbientShowHatching.md)  
  
-   [AmbientShowGrabHandles](../Topic/COleControl::AmbientShowGrabHandles.md)  
  
 Se il valore di una proprietà di ambiente \(con una determinata azione del contenitore\), la funzione membro di **OnAmbientPropertyChanged** del controllo viene chiamato.  Eseguire l'override di questa funzione membro per gestire tale notifica.  Il parametro per **OnAmbientPropertyChanged** è l'id di invio della proprietà di ambiente interessata.  Il valore di questo ID di divisione può essere **DISPID\_UNKNOWN**, che indica che uno o più proprietà di ambiente è stato modificato, ma le informazioni sulle cui proprietà sono state interessate non sono disponibili.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)