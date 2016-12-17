---
title: "CSmartDockingInfo Class | Microsoft Docs"
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
  - "CSmartDockingInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSmartDockingInfo class"
ms.assetid: cab04f38-4bc1-4378-9337-c56fc87fbd68
caps.latest.revision: 27
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSmartDockingInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce l'aspetto dei marcatori intelligenti di ancoraggio.  
  
## Sintassi  
  
```  
class CSmartDockingInfo : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CSmartDockingInfo::CSmartDockingInfo`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmartDockingInfo::CopyTo](../Topic/CSmartDockingInfo::CopyTo.md)|Copia i parametri intelligenti correnti di informazioni di ancoraggio nell'oggetto fornito [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md).|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmartDockingInfo::m\_bUseThemeColorInShading](../Topic/CSmartDockingInfo::m_bUseThemeColorInShading.md)|Specifica se utilizzare il tema corrente predefiniti quando il framework visualizzare marcatori intelligenti di ancoraggio.|  
|[CSmartDockingInfo::m\_clrBaseBackground](../Topic/CSmartDockingInfo::m_clrBaseBackground.md)|Specifica il colore di sfondo di base dei marcatori intelligenti di ancoraggio.|  
|[CSmartDockingInfo::m\_clrToneDest](../Topic/CSmartDockingInfo::m_clrToneDest.md)|Specifica il colore che sostituisce `m_clrToneSrc` le bitmap intelligenti del marcatore di ancoraggio.|  
|[CSmartDockingInfo::m\_clrToneSrc](../Topic/CSmartDockingInfo::m_clrToneSrc.md)|Specifica il colore delle bitmap intelligenti del marcatore di ancoraggio.|  
|[CSmartDockingInfo::m\_clrTransparent](../Topic/CSmartDockingInfo::m_clrTransparent.md)|Specifica il colore delle bitmap intelligenti del marcatore di ancoraggio quando sono transparent.|  
|[CSmartDockingInfo::m\_nCentralGroupOffset](../Topic/CSmartDockingInfo::m_nCentralGroupOffset.md)|Specifica l'offset del gruppo centrale di marcatori intelligenti di ancoraggio dai limiti del rettangolo centrale del gruppo.|  
|[CSmartDockingInfo::m\_sizeTotal](../Topic/CSmartDockingInfo::m_sizeTotal.md)|Specifica la dimensione totale di tutti i marcatori intelligenti di ancoraggio in un gruppo.|  
|[CSmartDockingInfo::m\_uiMarkerBmpResID](../Topic/CSmartDockingInfo::m_uiMarkerBmpResID.md)|Definisce la ID risorsa bitmap che il framework per i marcatori intelligenti di ancoraggio non evidenziati.|  
|[CSmartDockingInfo::m\_uiMarkerLightBmpResID](../Topic/CSmartDockingInfo::m_uiMarkerLightBmpResID.md)|Definisce la ID risorsa bitmap che il framework per i marcatori intelligenti di ancoraggio che sono evidenziati.|  
  
## Note  
 Il framework gestisce i marcatori intelligenti di ancoraggio internamente.  Nella figura seguente vengono illustrati i marcatori intelligenti standard di ancoraggio:  
  
 ![Marcatori standard per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkers.png "nextSDmarkers")  
  
 In questa figura, l'immagine a sinistra viene illustrato un marcatore intelligente di ancoraggio del gruppo centrale che non dispone di ancoraggio a una scheda abilitata.  L'immagine al centro seguente viene mostrato un bordo destro il marcatore intelligente di ancoraggio.  L'immagine a destra viene illustrato un marcatore intelligente di ancoraggio del gruppo centrale che dispone di ancoraggio a una scheda abilitata.  Il marcatore intelligente di ancoraggio del gruppo centrale è una bitmap principale e cinque bitmap intelligenti del marcatore di ancoraggio.  
  
 È possibile personalizzare i seguenti parametri marcatori intelligenti di ancoraggio:  
  
-   Colore  Ad esempio, è possibile sostituire il colore blu marcatori nella figura con il colore definito dall'utente.  
  
-   Colore trasparenza.  
  
-   Offset di un marcatore intelligente di ancoraggio del gruppo centrale dal bordo del rettangolo di delimitazione.  
  
-   La bitmap principale che rappresenta il gruppo centrale.  
  
-   Le bitmap che rappresenta i marcatori intelligenti normali e evidenziati di ancoraggio.  
  
 Nella figura seguente viene illustrato un esempio dei marcatori intelligenti di ancoraggio che sono stati personalizzati:  
  
 ![Marcatori personalizzati per ancoraggio intelligente](../../mfc/reference/media/nextsdmarkerscustom.png "nextSDmarkersCustom")  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md)  
  
## Requisiti  
 **intestazione:** afxDockingManager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)