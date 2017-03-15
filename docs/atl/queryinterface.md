---
title: "QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce, disponibilità"
  - "interfacce, puntatori"
  - "QueryInterface (metodo)"
ms.assetid: 62fce95e-aafa-4187-b50b-e6611b74c3b3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# QueryInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sebbene esistano meccanismi che un oggetto può esprimere le funzionalità includono staticamente \(prima che vengano create\), il meccanismo sottostante COM è possibile utilizzare il metodo **IUnknown** chiamato [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Ogni interfaccia è derivata da **IUnknown**, in modo da ogni interfaccia è un'implementazione `QueryInterface`.  Indipendentemente dall'implementazione, questo metodo esegue una query su un oggetto utilizzando dall'interfaccia a cui il chiamante richiede un puntatore.  Se i contenuti multimediali collegata, `QueryInterface` l'oggetto recupera un puntatore a interfaccia, mentre però chiamando `AddRef`.  In caso contrario, restituisce il codice di errore **E\_NOINTERFACE**.  
  
 Si noti che è necessario devono sempre le regole [Conteggio dei riferimenti](../atl/reference-counting.md).  Se si chiama **Release** in un puntatore a interfaccia per diminuire il conteggio dei riferimenti a zero, non è necessario utilizzare nuovamente il puntatore.  Talvolta potrebbe essere necessario ottenere un riferimento debole a un oggetto \(ovvero è possibile ottenere un puntatore a una delle interfacce senza incrementare il conteggio dei riferimenti\), ma non è possibile eseguire questa operazione chiamando `QueryInterface` seguito da **Release**.  Il puntatore ottenuto in modo non valido e non deve essere utilizzato.  Questo diventa più facilmente evidente quando [\_ATL\_DEBUG\_INTERFACES](../Topic/_ATL_DEBUG_INTERFACES.md) è definito, pertanto definire questa macro è utile di individuare i bug di conteggio dei riferimenti.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [QueryInterface: Navigating in an Object](http://msdn.microsoft.com/library/windows/desktop/ms687230)