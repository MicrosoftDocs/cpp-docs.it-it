---
title: "Reference Counting | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef method [C++]"
  - "AddRef method [C++], reference counting"
  - "reference counting"
  - "reference counts"
  - "riferimenti, conteggio"
ms.assetid: b1fd4514-6de6-429f-9e60-2777c0d07a3d
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Reference Counting
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

COM stessa automaticamente non tenta di rimuovere un oggetto dalla memoria quando si prevede che l'oggetto non sia più utilizzato.  Invece, il programmatore dell'oggetto deve rimuovere l'oggetto inutilizzato.  Il programmatore determina se un oggetto può essere rimosso in base a un conteggio dei riferimenti.  
  
 COM vengono utilizzati i metodi **IUnknown**, [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317), gestire il conteggio dei riferimenti delle interfacce in un oggetto.  Le regole generali per chiamare questi metodi sono:  
  
-   Ogni volta che un client riceve un puntatore a interfaccia, `AddRef` deve essere chiamato sull'interfaccia.  
  
-   Ogni volta che il client ha completato utilizzando il puntatore a interfaccia, deve chiamare **Release**.  
  
 In un'implementazione semplice, gli incrementi di ogni chiamata `AddRef` e ogni **Release** chiamano i decrementi una variabile contatore interno dell'oggetto.  Quando si torna a conteggio zero, l'interfaccia non ha più alcun utente e sono liberi di rimuovere se stesso dalla memoria.  
  
 Il conteggio dei riferimenti può essere implementato in modo da contare ogni riferimento all'oggetto \(non a una singola interfaccia\).  In questo caso, ogni `AddRef` e i delegati di chiamata **Release** a un'implementazione centrale sull'oggetto e **Release** libera l'intero oggetto quando le relative intervalli zero di conteggio dei riferimenti.  
  
> [!NOTE]
>  Quando `CComObject`l'oggetto derivato da viene costruito utilizzando l'operatore **new**, il conteggio dei riferimenti è 0.  Di conseguenza, una chiamata a `AddRef` deve essere correttamente dopo la creazione `CComObject`oggetto derivato da.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [Managing Object Lifetimes through Reference Counting](http://msdn.microsoft.com/library/windows/desktop/ms687260)