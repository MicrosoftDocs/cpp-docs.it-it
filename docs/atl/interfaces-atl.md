---
title: "Interfaces (ATL) | Microsoft Docs"
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
  - "COM (interfacce)"
  - "interfacce, COM"
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interfaces (ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia è il modo in cui un oggetto espone la funzionalità di tutto il mondo esterno.  In COM, un'interfaccia è una tabella dei puntatori \(come C\+\+ vtable\) alle funzioni implementate dall'oggetto.  La tabella rappresenta l'interfaccia e funzioni a cui punta sono metodi dell'interfaccia.  Un oggetto può esporre il numero di interfacce e scegliere.  
  
 Ogni interfaccia è basata sull'interfaccia COM sottostante, [IUnknown](../atl/iunknown.md).  I metodi **IUnknown** possibile navigare alle altre interfacce esposte dall'oggetto.  
  
 Inoltre, ogni interfaccia è assegnato un ID univoco dell'interfaccia \(IID\).  Questa univocità semplifica supportare il controllo delle versioni di interfaccia.  Una nuova versione di un'interfaccia è semplicemente una nuova interfaccia, con un nuovo IID.  
  
> [!NOTE]
>  Gli IID per le interfacce COM e OLE standard sono predefiniti.  
  
## Vedere anche  
 [Introduzione a COM](../atl/introduction-to-com.md)   
 [COM Objects and Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms690343)