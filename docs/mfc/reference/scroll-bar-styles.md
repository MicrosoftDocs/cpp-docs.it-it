---
title: "Stili barra di scorrimento | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SBS_VERT"
  - "SBS_SIZEBOXBOTTOMRIGHTALIGN"
  - "SBS_LEFTALIGN"
  - "SBS_RIGHTALIGN"
  - "SBS_TOPALIGN"
  - "SBS_SIZEBOXTOPLEFTALIGN"
  - "SBS_BOTTOMALIGN"
  - "SBS_SIZEBOX"
  - "SBS_HORZ"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SBS_BOTTOMALIGN (costante)"
  - "SBS_HORZ (costante)"
  - "SBS_LEFTALIGN (costante)"
  - "SBS_RIGHTALIGN (costante)"
  - "SBS_SIZEBOX (costante)"
  - "SBS_SIZEBOXBOTTOMRIGHTALIGN (costante)"
  - "SBS_SIZEBOXTOPLEFTALIGN (costante)"
  - "SBS_TOPALIGN (costante)"
  - "SBS_VERT (costante)"
  - "barre di scorrimento, stili"
ms.assetid: 8bcde35b-387d-49ae-bdd6-7cda9f5dae26
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili barra di scorrimento
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   **SBS\_BOTTOMALIGN** utilizzato con lo stile di **SBS\_HORZ**.  Il bordo inferiore della barra di scorrimento viene allineato al bordo inferiore del rettangolo specificato nella funzione membro di **Crea**.  La barra di scorrimento ha l'altezza predefinita per le barre di scorrimento del sistema.  
  
-   **SBS\_HORZ** definisce una barra di scorrimento orizzontale.  Se non lo stile di **SBS\_TOPALIGN** né di **SBS\_BOTTOMALIGN** è specificato, la barra di scorrimento ha l'altezza, la larghezza e la posizione arresa la funzione membro di **Crea**.  
  
-   **SBS\_LEFTALIGN** utilizzato con lo stile di **SBS\_VERT**.  Il bordo sinistro della barra di scorrimento viene allineato al bordo sinistro del rettangolo specificato nella funzione membro di **Crea**.  La barra di scorrimento ha una larghezza predefinita per le barre di scorrimento del sistema.  
  
-   **SBS\_RIGHTALIGN** utilizzato con lo stile di **SBS\_VERT**.  Il bordo destro della barra di scorrimento viene allineato al bordo destro del rettangolo specificato nella funzione membro di **Crea**.  La barra di scorrimento ha una larghezza predefinita per le barre di scorrimento del sistema.  
  
-   **SBS\_SIZEBOX** definisce una casella di dimensione.  Se non lo stile di **SBS\_SIZEBOXTOPLEFTALIGN** né di **SBS\_SIZEBOXBOTTOMRIGHTALIGN** è specificato, la casella di dimensioni sono l'altezza, la larghezza e la posizione arresa la funzione membro di **Crea**.  
  
-   **SBS\_SIZEBOXBOTTOMRIGHTALIGN** utilizzato con lo stile di **SBS\_SIZEBOX**.  L'angolo inferiore destro della casella di dimensione è allineato all'angolo inferiore destro del rettangolo specificato nella funzione membro di **Crea**.  La casella di dimensioni sono la dimensione predefinita per le caselle delle dimensioni del sistema.  
  
-   **SBS\_SIZEBOXTOPLEFTALIGN** utilizzato con lo stile di **SBS\_SIZEBOX**.  L'angolo superiore sinistro della casella di dimensione è allineato all'angolo superiore sinistro del rettangolo specificato nella funzione membro di **Crea**.  La casella di dimensioni sono la dimensione predefinita per le caselle delle dimensioni del sistema.  
  
-   **SBS\_SIZEGRIP** stessi di **SBS\_SIZEBOX**, ma con un bordo generato.  
  
-   **SBS\_TOPALIGN** utilizzato con lo stile di **SBS\_HORZ**.  Il margine superiore della barra di scorrimento viene allineato al bordo superiore del rettangolo specificato nella funzione membro di **Crea**.  La barra di scorrimento ha l'altezza predefinita per le barre di scorrimento del sistema.  
  
-   **SBS\_VERT** definisce una barra di scorrimento verticale.  Se non lo stile di **SBS\_LEFTALIGN** né di **SBS\_RIGHTALIGN** è specificato, la barra di scorrimento ha l'altezza, la larghezza e la posizione arresa la funzione membro di **Crea**.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CScrollBar::Create](../Topic/CScrollBar::Create.md)   
 [Scroll Bar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb787533)