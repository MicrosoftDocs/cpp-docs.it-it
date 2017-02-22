---
title: "CMFCBaseVisualManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCBaseVisualManager"
  - "CMFCBaseVisualManager.~CMFCBaseVisualManager"
  - "~CMFCBaseVisualManager"
  - "CMFCBaseVisualManager::~CMFCBaseVisualManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~CMFCBaseVisualManager destructor"
  - "CMFCBaseVisualManager class"
  - "CMFCBaseVisualManager class, distruttore"
ms.assetid: d56f3afc-cdea-4de1-825a-a08999c571e0
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CMFCBaseVisualManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un livello tra i gestori visualizzazione derivati e il tema API di Windows.  
  
 `CMFCBaseVisualManager` carica UxTheme.dll, se disponibile e gestisce l'accesso ai metodi di tema API di Windows.  
  
 Questa classe è per utilizzo interno.  
  
## Sintassi  
  
```  
class CMFCBaseVisualManager: public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCBaseVisualManager::CMFCBaseVisualManager](../Topic/CMFCBaseVisualManager::CMFCBaseVisualManager.md)|Costrutti e inizializza un oggetto `CMFCBaseVisualManager`.|  
|`CMFCBaseVisualManager::~CMFCBaseVisualManager`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCBaseVisualManager::DrawCheckBox](../Topic/CMFCBaseVisualManager::DrawCheckBox.md)|Estrae un controllo casella di controllo utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::DrawComboBorder](../Topic/CMFCBaseVisualManager::DrawComboBorder.md)|Estrae un bordo della casella combinata utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::DrawComboDropButton](../Topic/CMFCBaseVisualManager::DrawComboDropButton.md)|Estrae un pulsante a discesa della casella combinata utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::DrawPushButton](../Topic/CMFCBaseVisualManager::DrawPushButton.md)|Estrae un pulsante di comando utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::DrawRadioButton](../Topic/CMFCBaseVisualManager::DrawRadioButton.md)|Estrae un controllo pulsante di opzione utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::DrawStatusBarProgress](../Topic/CMFCBaseVisualManager::DrawStatusBarProgress.md)|Estrae un indicatore di stato in un controllo barra di stato \([CMFCStatusBar Class](../../mfc/reference/cmfcstatusbar-class.md)\) utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::FillReBarPane](../Topic/CMFCBaseVisualManager::FillReBarPane.md)|Riempie lo sfondo del controllo Rebar utilizzando il tema corrente di Windows.|  
|[CMFCBaseVisualManager::GetStandardWindowsTheme](../Topic/CMFCBaseVisualManager::GetStandardWindowsTheme.md)|Ottiene il tema corrente di Windows.|  
  
### Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCBaseVisualManager::CleanUpThemes](../Topic/CMFCBaseVisualManager::CleanUpThemes.md)|Chiama `CloseThemeData` per tutti gli handle `UpdateSystemColors`.|  
|[CMFCBaseVisualManager::UpdateSystemColors](../Topic/CMFCBaseVisualManager::UpdateSystemColors.md)|Chiamate `OpenThemeData` per ottenere un handle per disegnare i vari controlli: windows, barre degli strumenti, pulsanti, e così via.|  
  
## Note  
 Non è necessario creare istanze direttamente gli oggetti della classe.  
  
 Poiché è una classe base per tutti i gestori visualizzazione, è sufficiente chiamare [CMFCVisualManager::GetInstance](../Topic/CMFCVisualManager::GetInstance.md), si ottiene un puntatore al gestore visualizzazione corrente e accedere ai metodi per `CMFCBaseVisualManager` utilizzando il puntatore.  Tuttavia, se è necessario visualizzare un controllo mediante il tema corrente di Windows, è preferibile utilizzare l'interfaccia `CMFCVisualManagerWindows`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxvisualmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)