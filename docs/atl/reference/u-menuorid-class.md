---
title: "_U_MENUorID Class | Microsoft Docs"
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
  - "ATL._U_MENUorID"
  - "ATL::_U_MENUorID"
  - "_U_MENUorID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_U_MENUorID class"
  - "U_MENUorID class"
ms.assetid: cfc8032b-61b4-4a68-ba3a-92b82500ccae
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _U_MENUorID Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce wrapper per **CreateWindow** e **CreateWindowEx**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class _U_MENUorID  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_MENUorID::\_U\_MENUorID](../Topic/_U_MENUorID::_U_MENUorID.md)|Costruttore.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_MENUorID::m\_hMenu](../Topic/_U_MENUorID::m_hMenu.md)|Handle a un menu.|  
  
## Note  
 Questa classe di adattatori dell'argomento consente gli ID \(**uint**s\) o un handle di menu \(`HMENU`s\) per passare a una funzione senza richiedere un cast esplicito dal chiamante.  
  
 Questa classe è progettata per implementare i wrapper per le funzioni API Windows, in particolare [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) e [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680), entrambi due accettano un argomento `HMENU` che può essere un identificatore di finestra figlio \(**uint**piuttosto che l'handle del menu.  Ad esempio, è possibile visualizzare questa classe viene utilizzato come parametro a [CWindowImpl::Create](../Topic/CWindowImpl::Create.md).  
  
 La classe definisce due overload del costruttore: uno accetta un argomento **uint** e l'altro accetta un argomento `HMENU`.  L'argomento **uint** viene eseguito il cast solo a `HMENU` nel costruttore e il risultato archiviati nel singolo membro dati della classe, [m\_hMenu](../Topic/_U_MENUorID::m_hMenu.md).  L'argomento del costruttore `HMENU` viene memorizzato direttamente senza conversione.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)