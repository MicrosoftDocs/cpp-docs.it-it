---
title: "CSimpleDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CSimpleDialog"
  - "CSimpleDialgo"
  - "CSimpleDialog"
  - "ATL.CSimpleDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleDialog class"
  - "CSimpleDialog class, modal dialog boxes in ATL"
  - "finestre di dialogo, modali"
  - "finestre di dialogo modali, ATL"
ms.assetid: 2ae65cc9-4f32-4168-aecd-200b4a480fdf
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CSimpleDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa una finestra di dialogo modale di base.  
  
## Sintassi  
  
```  
  
      template <  
   WORD t_wDlgTemplateID,  
   BOOL t_bCenter = TRUE  
>  
class CSimpleDialog :  
   public CDialogImplBase  
```  
  
#### Parametri  
 *t\_wDlgTemplateID*  
  
 ID di risorsa di risorsa modello di finestra di dialogo.  
  
 *t\_bCenter*  
 **TRUE** se l'oggetto della finestra di dialogo deve essere centrato nella finestra proprietaria; in caso contrario **FALSE**.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleDialog::DoModal](../Topic/CSimpleDialog::DoModal.md)|Crea una finestra di dialogo modale.|  
  
## Note  
 Implementa una finestra di dialogo modale con funzionalità di base.  `CSimpleDialog` fornisce il supporto per i controlli comuni di Windows solo.  Per creare e visualizzare una finestra di dialogo modale, creare un'istanza della classe, fornendo il nome di un modello esistente di risorse per la finestra di dialogo.  L'oggetto della finestra di dialogo verrà chiusa quando l'utente fa clic su un controllo con un valore predefinito \(come IDOK o IDCANCEL\).  
  
 `CSimpleDialog` consente di creare solo finestre di dialogo modali.  `CSimpleDialog` fornisce la routine della finestra di dialogo, contenente la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.  
  
 Vedere [implementare una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni.  
  
## Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSimpleDialog`  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)