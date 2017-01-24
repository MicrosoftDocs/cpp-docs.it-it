---
title: "COccManager Class | Microsoft Docs"
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
  - "COccManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori dei controlli ActiveX [C++], control site"
  - "CNoTrackObject class"
  - "COccManager class"
  - "controlli personalizzati [MFC], sites"
ms.assetid: 7d47aeed-d1ab-48e3-b4cf-d429718e370a
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COccManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce vari siti del controllo personalizzato, implementata da `COleControlContainer` e oggetti `COleControlSite`.  
  
## Sintassi  
  
```  
class COccManager : public CNoTrackObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COccManager::CreateContainer](../Topic/COccManager::CreateContainer.md)|Crea un oggetto **COleContainer**.|  
|[COccManager::CreateDlgControls](../Topic/COccManager::CreateDlgControls.md)|Crea controlli ActiveX, ospitati dall'oggetto collegato `COleContainer`.|  
|[COccManager::CreateSite](../Topic/COccManager::CreateSite.md)|Crea un oggetto `COleClientSite`.|  
|[COccManager::GetDefBtnCode](../Topic/COccManager::GetDefBtnCode.md)|Recupera il codice del pulsante predefinito.|  
|[COccManager::IsDialogMessage](../Topic/COccManager::IsDialogMessage.md)|Determina la destinazione di un messaggio di dialogo.|  
|[COccManager::IsLabelControl](../Topic/COccManager::IsLabelControl.md)|Determina se il controllo specificato è un controllo label.|  
|[COccManager::IsMatchingMnemonic](../Topic/COccManager::IsMatchingMnemonic.md)|Determina se il tasto corrente corrisponde al tasto del controllo specificato.|  
|[COccManager::OnEvent](../Topic/COccManager::OnEvent.md)|Tentativi di gestire l'evento specificato.|  
|[COccManager::PostCreateDialog](../Topic/COccManager::PostCreateDialog.md)|Libera le risorse allocate durante la creazione della finestra di dialogo.|  
|[COccManager::PreCreateDialog](../Topic/COccManager::PreCreateDialog.md)|Elabora un modello di finestra di dialogo per i controlli ActiveX.|  
|[COccManager::SetDefaultButton](../Topic/COccManager::SetDefaultButton.md)|Consente di alternare lo stato predefinito del controllo specificato.|  
|[COccManager::SplitDialogTemplate](../Topic/COccManager::SplitDialogTemplate.md)|Separa i controlli ActiveX esistenti da controlli comuni nel modello specificato della finestra di dialogo.|  
  
## Note  
 La classe base, **CNoTrackObject**, è una classe base non documentata \(trova in AFXTLS.H\).  Progettate per l'utilizzo da parte del framework MFC, le classi derivate dalla classe **CNoTrackObject** sono esenti dal rilevamento di perdite di memoria.  Non è consigliabile che derivano direttamente da **CNoTrackObject**.  
  
## Gerarchia di ereditarietà  
 `CNoTrackObject`  
  
 `COccManager`  
  
## Requisiti  
 **Header:** afxocc.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleControlSite Class](../../mfc/reference/colecontrolsite-class.md)   
 [COleControlContainer Class](../../mfc/reference/colecontrolcontainer-class.md)