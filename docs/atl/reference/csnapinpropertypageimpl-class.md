---
title: "CSnapInPropertyPageImpl Class | Microsoft Docs"
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
  - "CSnapInPropertyPageImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSnapInPropertyPageImpl class"
  - "proprietà (pagine), ATL"
  - "snap-ins"
  - "snap-ins, proprietà (pagine)"
ms.assetid: 75bdce5a-985e-4166-bd44-493132e023c4
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSnapInPropertyPageImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per implementare un oggetto della pagina delle proprietà dello snap\-in.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
CSnapInPropertyPageImpl : public CDialogImplBase  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](../Topic/CSnapInPropertyPageImpl::CSnapInPropertyPageImpl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::CancelToClose](../Topic/CSnapInPropertyPageImpl::CancelToClose.md)|Modifica lo stato dei pulsanti **Annulla** e **OK**.|  
|[CSnapInPropertyPageImpl::Create](../Topic/CSnapInPropertyPageImpl::Create.md)|Inizializza un oggetto appena creata `CSnapInPropertyPageImpl`.|  
|[CSnapInPropertyPageImpl::OnApply](../Topic/CSnapInPropertyPageImpl::OnApply.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Applica ora** durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::OnHelp](../Topic/CSnapInPropertyPageImpl::OnHelp.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Guida** durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::OnKillActive](../Topic/CSnapInPropertyPageImpl::OnKillActive.md)|Chiamato dal framework quando la pagina corrente non è più attiva.|  
|[CSnapInPropertyPageImpl::OnQueryCancel](../Topic/CSnapInPropertyPageImpl::OnQueryCancel.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Annulla** e prima dell'annullamento abbia avuto luogo.|  
|[CSnapInPropertyPageImpl::OnReset](../Topic/CSnapInPropertyPageImpl::OnReset.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Reimposta** durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::OnSetActive](../Topic/CSnapInPropertyPageImpl::OnSetActive.md)|Chiamato dal framework quando la pagina corrente diventa attiva.|  
|[CSnapInPropertyPageImpl::OnWizardBack](../Topic/CSnapInPropertyPageImpl::OnWizardBack.md)|Chiamato dal framework quando l'utente fa clic sul pulsante di**Indietro** durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::OnWizardFinish](../Topic/CSnapInPropertyPageImpl::OnWizardFinish.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Fine** durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::OnWizardNext](../Topic/CSnapInPropertyPageImpl::OnWizardNext.md)|Chiamato dal framework quando l'utente fa clic sul pulsante `Next` durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CSnapInPropertyPageImpl::QuerySiblings](../Topic/CSnapInPropertyPageImpl::QuerySiblings.md)|Inoltra il messaggio corrente a tutte le pagine delle proprietà.|  
|[CSnapInPropertyPageImpl::SetModified](../Topic/CSnapInPropertyPageImpl::SetModified.md)|Chiamata per attivare o disattivare il pulsante **Applica ora**.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::m\_psp](../Topic/CSnapInPropertyPageImpl::m_psp.md)|La struttura di Windows **PROPSHEETPAGE** utilizzata dall'oggetto `CSnapInPropertyPageImpl`.|  
  
## Note  
 `CSnapInPropertyPageImpl` fornisce un'implementazione di base per un oggetto della pagina delle proprietà dello snap\-in.  Le funzionalità di base di una pagina delle proprietà dello snap\-in vengono implementate utilizzando diverse interfacce e eseguono il mapping dei tipi.  
  
## Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSnapInPropertyPageImpl`  
  
## Requisiti  
 **Header:** atlsnap.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)