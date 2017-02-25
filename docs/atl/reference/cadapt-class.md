---
title: "CAdapt Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAdapt"
  - "ATL.CAdapt<T>"
  - "ATL::CAdapt"
  - "ATL::CAdapt<T>"
  - "CAdapt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "& (operatore), address-of (operatore)"
  - "adapter objects"
  - "address-of (operatore)"
  - "CAdapt class"
ms.assetid: 0bb695a5-72fe-43d1-8f39-7e4da6e34765
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CAdapt Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo modello viene utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address\-of per restituire un valore diverso da quello dell'indirizzo dell'oggetto.  
  
## Sintassi  
  
```  
  
      template <  
   class T  
>  
class CAdapt  
```  
  
#### Parametri  
 `T`  
 Il tipo adattato.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::CAdapt](../Topic/CAdapt::CAdapt.md)|Costruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::operator const T&](../Topic/CAdapt::operator%20const%20T&.md)|Restituisce un riferimento `const` a `m_T`.|  
|[CAdapt::operator T&](../Topic/CAdapt::operator%20T&.md)|Restituisce un riferimento a `m_T`.|  
|[CAdapt::operator \<](../Topic/CAdapt::operator%20%3C.md)|Confronta un oggetto del tipo adattato con `m_T`.|  
|[CAdapt::operator \=](../Topic/CAdapt::operator%20=.md)|Assegna un oggetto del tipo adattato a `m_T`.|  
|[CAdapt::operator \=\=](../Topic/CAdapt::operator%20==.md)|Confronta un oggetto del tipo adattato con `m_T`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAdapt::m\_T](../Topic/CAdapt::m_T.md)|I dati che vengono adattati.|  
  
## Note  
 `CAdapt` è un modello semplice utilizzato per eseguire il wrapping delle classi che consentono di ridefinire l'operatore address\-of \(`operator &`\) per restituire un valore diverso da quello dell'indirizzo dell'oggetto.  Esempi di tali classi includono le classi `CComBSTR`, `CComPtr` e `CComQIPtr` di ATL e la classe di supporto COM del compilatore, `_com_ptr_t`.  Tutte le classi consentono di ridefinire l'operatore address\-of per restituire l'indirizzo di uno dei relativi membri dati \(`BSTR` nel caso di `CComBSTR` e un puntatore a interfaccia nel caso delle altre classi\).  
  
 Il ruolo primario di`CAdapt` è quello di nascondere l'operatore address\-of definito dalla classe `T`, mantenendo le caratteristiche della classe adattata.  `CAdapt` soddisfa questo ruolo utilizzando un membro pubblico, [m\_T](../Topic/CAdapt::m_T.md), di tipo `T` e definendo gli operatori di conversione, gli operatori di confronto e un costruttore di copia per consentire che le specializzazioni di `CAdapt` vengano considerate come se fossero oggetti di tipo `T`.  
  
 La classe `CAdapt` dell'adattatore è utile in quanto alcune classi stile contenitore si prevede siano in grado di ottenere gli indirizzi dei rispettivi oggetti contenuti utilizzando address\-of.  La ridefinizione dell'operatore address\-of può confondere questo requisito, in genere causando errori di compilazione e impedendo l'utilizzo del tipo non adattato con le classi che si aspettano che funzioni.  `CAdapt` fornisce un modo per risolvere questi problemi.  
  
 In genere, si utilizza `CAdapt` quando si desidera archiviare gli oggetti `CComBSTR`, `CComPtr`, `CComQIPtr` o `_com_ptr_t` in una classe stile contenitore.  Questa operazione è normalmente necessaria per i contenitori della libreria standard di C\+\+ precedenti al supporto per lo standard C\+\+11, ma i contenitori della libreria standard C\+\+11 automaticamente utilizzano i tipi che hanno eseguito l'overload di `operator&()`.  La libreria standard raggiunge ciò utilizzando internamente [std::addressof \(\)](../Topic/addressof.md) per ottenere gli indirizzi veri degli oggetti.  
  
## Requisiti  
 **Intestazione:** atlcomcli.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)