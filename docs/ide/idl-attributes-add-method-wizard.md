---
title: "Attributi IDL, Aggiunta guidata metodo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.method.idlattrib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata metodo [C++]"
  - "Attributi IDL, Aggiunta guidata metodo"
ms.assetid: f80c3bc1-b515-4d6c-83ee-98c2c21ba902
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Attributi IDL, Aggiunta guidata metodo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa schermata dell'Aggiunta guidata metodo per specificare qualsiasi impostazione IDL \(interface definition language\) per il metodo.  
  
 **id**  
 Consente di impostare l'ID numerico che identifica il metodo.  Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in *Riferimento a MIDL*.  
  
 La casella non è disponibile per le interfacce personalizzate e per le interfacce dispatch MFC.  
  
 **call\_as**  
 Consente di specificare il nome di un metodo remoto cui è possibile mappare il metodo locale.  Vedere [call\_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) in *Riferimento a MIDL*.  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **helpcontext**  
 Consente di specificare un ID di contesto che permette di visualizzare informazioni sul metodo nel file della Guida.  Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in *Riferimento a MIDL*.  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **helpstring**  
 Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.  Per impostazione predefinita, è impostata su "metodo *NomeMetodo*". Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in *Riferimento a MIDL*.  
  
 Non disponibile per le interfacce dispatch MFC.  
  
 **Attributi aggiuntivi**  
 Non disponibile per le interfacce dispatch MFC.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|**hidden**|Indica che il metodo esiste ma non deve essere visualizzato in un visualizzatore per utenti.  Vedere [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in *Riferimento a MIDL*.|  
|**source**|Indica che un membro del metodo è un'origine di eventi.  Vedere [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in *Riferimento a MIDL*.|  
|`local`|Specifica al compilatore MIDL che il metodo non è remoto.  Vedere [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in *Riferimento a MIDL*.|  
|**restricted**|Specifica che non è possibile chiamare arbitrariamente il metodo.  Vedere [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in *Riferimento a MIDL*.|  
|**vararg**|Specifica che il metodo accetta un numero variabile di argomenti.  A tale scopo è necessario che l'ultimo argomento sia una matrice protetta di tipo **VARIANT** contenente i restanti argomenti.  Vedere [vararg](http://msdn.microsoft.com/library/windows/desktop/aa367304) in *Riferimento a MIDL*.|  
  
## Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Aggiunta guidata metodo](../ide/add-method-wizard.md)