---
title: "ICommandSource Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ICommandSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandSource interface"
ms.assetid: a4b1f698-c09f-4ba8-9b13-0e74a0a4967e
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# ICommandSource Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce i controlli inviati da un oggetto origine del comando a un controllo utente.  
  
## Sintassi  
  
```  
interface class ICommandSource  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICommandSource::AddCommandHandler](../Topic/ICommandSource::AddCommandHandler.md)|Aggiunge un gestore comando a un oggetto origine del comando.|  
|[ICommandSource::AddCommandRangeHandler](../Topic/ICommandSource::AddCommandRangeHandler.md)|Aggiunge un gruppo di gestori comandi a un oggetto origine del comando.|  
|[ICommandSource::AddCommandRangeUIHandler](../Topic/ICommandSource::AddCommandRangeUIHandler.md)|Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto origine del comando.|  
|[ICommandSource::AddCommandUIHandler](../Topic/ICommandSource::AddCommandUIHandler.md)|Aggiunge un gestore di messaggi di comando dell'interfaccia utente a un oggetto origine del comando.|  
|[ICommandSource::PostCommand](../Topic/ICommandSource::PostCommand.md)|Invia un messaggio senza attenderlo da elaborare.|  
|[ICommandSource::RemoveCommandHandler](../Topic/ICommandSource::RemoveCommandHandler.md)|Rimuove un gestore comando da un oggetto origine del comando.|  
|[ICommandSource::RemoveCommandRangeHandler](../Topic/ICommandSource::RemoveCommandRangeHandler.md)|Rimuove un gruppo di gestori comandi da un oggetto origine del comando.|  
|[ICommandSource::RemoveCommandRangeUIHandler](../Topic/ICommandSource::RemoveCommandRangeUIHandler.md)|Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto origine del comando.|  
|[ICommandSource::RemoveCommandUIHandler](../Topic/ICommandSource::RemoveCommandUIHandler.md)|Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto origine del comando.|  
|[ICommandSource::SendCommand](../Topic/ICommandSource::SendCommand.md)|Invia un messaggio e attende che venga elaborata prima di restituire.|  
  
## Note  
 Quando contenga un controllo utente in una visualizzazione MFC, [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md) ai controlli e i messaggi dell'interfaccia utente del comando di aggiornamento al controllo utente consentire la gestione dei comandi MFC, ad esempio voci di menu frame e pulsanti della barra degli strumenti\).  Distribuzione [ICommandTarget Interface](../../mfc/reference/icommandtarget-interface.md), assegnare al controllo utente un riferimento all'oggetto `ICommandSource`.  
  
 Per un esempio sull'utilizzo di `ICommandTarget`, vedere [Procedura: aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## Requisiti  
 **intestazione:** afxwinforms.h \(definito nell'assembly atlmfc \\ spostamento di liberare \\ mfcmifc80.dll\)  
  
## Vedere anche  
 [Procedura: aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [ICommandTarget Interface](../../mfc/reference/icommandtarget-interface.md)