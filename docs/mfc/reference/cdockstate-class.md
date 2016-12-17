---
title: "CDockState Class | Microsoft Docs"
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
  - "CDockState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockState class"
  - "dock state"
  - "docking control bars"
  - "docking tool windows"
  - "posizione, control bar"
  - "dimensione"
  - "dimensione, control bar"
  - "stati, dockable control bar"
ms.assetid: 09e7c10b-3abd-4cb2-ad36-42420fe6bc36
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDockState Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe serializzata `CObject` che carica, scarica, o rimuove lo stato di una o più barre di controllo ancorabile in memoria persistente \(file\).  
  
## Sintassi  
  
```  
class CDockState : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockState::Clear](../Topic/CDockState::Clear.md)|Cancella le informazioni sullo stato di ancoraggio.|  
|[CDockState::GetVersion](../Topic/CDockState::GetVersion.md)|Recupera il numero di versione dello stato archiviato della barra.|  
|[CDockState::LoadState](../Topic/CDockState::LoadState.md)|Recupera le informazioni sullo stato dal Registro di sistema o file di .INI.|  
|[CDockState::SaveState](../Topic/CDockState::SaveState.md)|Salva le informazioni sullo stato al Registro di sistema o al file INI.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockState::m\_arrBarInfo](../Topic/CDockState::m_arrBarInfo.md)|Matrice di puntatori a informazioni sullo stato memorizzate di ancoraggio con una voce per ogni barra di controllo.|  
  
## Note  
 Lo stato di ancoraggio include la dimensione e la posizione della barra e a è ancorata.  Nel recuperare lo stato archiviato ancoraggio, `CDockState` controlla la posizione e, se la barra non è visibile alle impostazioni correnti dello schermo, `CDockState` della barra ridimensiona la posizione della barra in modo che sia visibile.  Lo scopo principale `CDockState` è utilizzare l'intero stato di una serie di barre di controllo e di consentire tale stato da salvare e caricare o al Registro di sistema, il file di .INI dell'applicazione, o in formato binario come parte del contenuto di un oggetto `CArchive`.  
  
 La barra può essere qualsiasi barra di controllo ancorabile, inclusa una barra degli strumenti, una barra di stato, o una barra della finestra di dialogo.  Gli oggetti di`CDockState` sono scritti in lettura a un file mediante un oggetto `CArchive`.  
  
 [CFrameWnd::GetDockState](../Topic/CFrameWnd::GetDockState.md) recupera le informazioni sullo stato `CControlBar` di qualsiasi finestra cornice oggetti e lo inserisce nell'oggetto `CDockState`.  È quindi possibile scrivere il contenuto dell'oggetto `CDockState` di archiviazione a [Serializzare](../Topic/CObject::Serialize.md) o [CDockState::SaveState](../Topic/CDockState::SaveState.md).  Se successivamente si desidera ripristinare lo stato delle barre di controllo nella finestra cornice, è possibile caricare lo stato con `Serialize` o [CDockState::LoadState](../Topic/CDockState::LoadState.md), quindi utilizzare [CFrameWnd::SetDockState](../Topic/CFrameWnd::SetDockState.md) per applicare lo stato salvato le barre di controllo della finestra cornice.  
  
 Per ulteriori informazioni su ancorare le barre di controllo, vedere gli articoli [barre di controllo](../../mfc/control-bars.md), [Barre degli strumenti: L'aggancio e float](../../mfc/docking-and-floating-toolbars.md)e [Applicazioni utilizzano](../../mfc/frame-windows.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDockState`  
  
## Requisiti  
 **Header:** afxadv.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)