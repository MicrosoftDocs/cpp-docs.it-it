---
title: "_U_STRINGorID Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL._U_STRINGorID"
  - "ATL::_U_STRINGorID"
  - "_U_STRINGorID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_U_STRINGorID class"
  - "U_STRINGorID class"
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# _U_STRINGorID Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe di adattatori dell'argomento consente nomi di risorsa \(`LPCTSTR`s\) o la risorsa gli ID**uint**\(oggetti\) da passare a una funzione senza richiedere al chiamante di convertire l'id a una stringa utilizzando la macro **MAKEINTRESOURCE**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class _U_STRINGorID  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_STRINGorID::\_U\_STRINGorID](../Topic/_U_STRINGorID::_U_STRINGorID.md)|Costruttore.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[\_U\_STRINGorID::m\_lpstr](../Topic/_U_STRINGorID::m_lpstr.md)|L'identificatore della risorsa.|  
  
## Note  
 Questa classe è progettata per implementare i wrapper la gestione delle risorse di Windows come funzioni [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042), [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072)e [LoadMenu](http://msdn.microsoft.com/library/windows/desktop/ms647990), che accettano un argomento `LPCTSTR` che può essere il nome di una risorsa o all'ID.  
  
 La classe definisce due overload del costruttore: uno accetta un argomento `LPCTSTR` e l'altro accetta un argomento **uint**.  L'argomento **uint** viene convertito in un tipo di risorsa compatibile con le funzioni di gestione risorse di Windows utilizzando la macro **MAKEINTRESOURCE** e i risultati archiviati nel singolo membro dati della classe, [m\_lpstr](../Topic/_U_STRINGorID::m_lpstr.md).  L'argomento del costruttore `LPCTSTR` viene memorizzato direttamente senza conversione.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)