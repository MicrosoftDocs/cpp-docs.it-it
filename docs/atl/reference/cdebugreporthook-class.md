---
title: "CDebugReportHook Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CDebugReportHook"
  - "CDebugReportHook"
  - "ATL::CDebugReportHook"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDebugReportHook class"
ms.assetid: 798076c3-6e63-4286-83b8-aa1bbcd0c20c
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CDebugReportHook Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa classe per inviare i report di debug a una named pipe.  
  
## Sintassi  
  
```  
  
class CDebugReportHook  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDebugReportHook::CDebugReportHook](../Topic/CDebugReportHook::CDebugReportHook.md)|Chiamate [SetPipeName](../Topic/CDebugReportHook::SetPipeName.md), [SetTimeout](../Topic/CDebugReportHook::SetTimeout.md)e [SetHook](../Topic/CDebugReportHook::SetHook.md).|  
|[CDebugReportHook::~CDebugReportHook](../Topic/CDebugReportHook::~CDebugReportHook.md)|Chiamate [CDebugReportHook::RemoveHook](../Topic/CDebugReportHook::RemoveHook.md).|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDebugReportHook::CDebugReportHookProc](../Topic/CDebugReportHook::CDebugReportHookProc.md)|\(Proprietà statica\) oggetto funzione di segnalazione degli errori personalizzata che è associato al processo di creazione di report di debug di runtime del linguaggio C.|  
|[CDebugReportHook::RemoveHook](../Topic/CDebugReportHook::RemoveHook.md)|Chiamare questo metodo per interrompere di inviare i report di debug alle named pipe e ripristinare il valore precedente del rapporto.|  
|[CDebugReportHook::SetHook](../Topic/CDebugReportHook::SetHook.md)|Chiamare questo metodo per avviare inviare i report di debug alle named pipe.|  
|[CDebugReportHook::SetPipeName](../Topic/CDebugReportHook::SetPipeName.md)|Chiamare questo metodo per impostare il computer e il nome pipe ai report di debug saranno inviati.|  
|[CDebugReportHook::SetTimeout](../Topic/CDebugReportHook::SetTimeout.md)|Chiamare questo metodo per impostare il tempo in millisecondi che questa classe attenderà la named pipe diventi disponibile.|  
  
## Note  
 Creare un'istanza della classe nelle build di debug dei servizi o applicazioni inviare i report di debug a una named pipe.  I report di debug vengono generati chiamando [\_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) o tramite un wrapper per questa funzione come macro [ATLASSERT](../Topic/ATLASSERT.md) e [ATLTRACE](../Topic/ATLTRACE%20\(ATL\).md).  
  
 L'utilizzo di questa classe consente di controllare in modo interattivo ai componenti di debug in esecuzione in [stazioni della finestra](http://msdn.microsoft.com/library/windows/desktop/ms687096)non interattivo.  
  
 Si noti che i report di debug vengono inviati utilizzando il contesto del titolo sottostante del thread.  La rappresentazione temporanea è disabilitata in modo da poter visualizzare i rapporti di debug nelle situazioni in cui la rappresentazione degli utenti significativi di privilegio consegue che cosa, come in applicazioni web.  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)