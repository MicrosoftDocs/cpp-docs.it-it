---
title: "Attributi IDL, Aggiunta guidata propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.prop.idlattributes"
dev_langs: 
  - "C++"
ms.assetid: 356ed666-79d0-4bd9-a5e7-cda679cbadbd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Attributi IDL, Aggiunta guidata propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa schermata dell'Aggiunta guidata proprietà per specificare qualsiasi impostazione IDL \(interface definition language\) per la proprietà.  
  
 **id**  
 Consente di impostare l'ID numerico che identifica la proprietà.  L'opzione non è disponibile per proprietà e interfacce personalizzate.  Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in *Riferimento a MIDL*.  
  
 **helpcontext**  
 Specifica un ID di contesto che consente all'utente di visualizzare informazioni sulla proprietà nel file della Guida.  Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in *Riferimento a MIDL*.  
  
 **helpstring**  
 Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.  Per impostazione predefinita viene impostata su "proprietà *NomeProprietà*". Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in *Riferimento a MIDL*.  
  
## Altre opzioni  
 Non tutte le opzioni sono disponibili per tutti i tipi di proprietà.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**bindable**|Indica che la proprietà supporta l'associazione dati.  Vedere [bindable](http://msdn.microsoft.com/library/windows/desktop/aa366738) in *Riferimento a MIDL*.  Per l'implementazione predefinita della proprietà, questa opzione viene impostata automaticamente e non è modificabile.|  
|**defaultbind**|Indica che la singola proprietà associabile è la migliore rappresentazione dell'oggetto.  Vedere [defaultbind](http://msdn.microsoft.com/library/windows/desktop/aa366790) in *Riferimento a MIDL*.|  
|**displaybind**|Indica che la proprietà deve essere visualizzata all'utente come associabile.  Vedere [displaybind](http://msdn.microsoft.com/library/windows/desktop/aa366804) in *Riferimento a MIDL*.|  
|**immediatebind**|Indica che al database verranno notificate immediatamente tutte le modifiche apportate alla proprietà di un oggetto associato ai dati.  Vedere [immediatebind](http://msdn.microsoft.com/library/windows/desktop/aa367045) in *Riferimento a MIDL*.|  
|**defaultcollelem**|Indica che la proprietà è una funzione di accesso per un elemento della raccolta predefinito.  Vedere [defaultcollelem](http://msdn.microsoft.com/library/windows/desktop/aa366792) in *Riferimento a MIDL*.|  
|**nonbrowsable**|Inserisce un tag in un'interfaccia o in un membro dispatch perché non venga visualizzato in un browser delle proprietà.  Vedere [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) in *Riferimento a MIDL*.|  
|**requestedit**|Indica che la proprietà supporta la notifica **OnRequestEdit**. Vedere [requestedit](http://msdn.microsoft.com/library/windows/desktop/aa367155) in *Riferimento a MIDL*.  Per l'implementazione predefinita della proprietà, questa opzione viene impostata automaticamente e non è modificabile.|  
|**source**|Indica che un membro della proprietà è un'origine di eventi.  Vedere [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in *Riferimento a MIDL*.|  
|**hidden**|Indica che la proprietà esiste ma non deve essere visualizzata in un visualizzatore per utenti.  Vedere [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in *Riferimento a MIDL*.|  
|**restricted**|Specifica che non è possibile chiamare la proprietà in modo arbitrario.  Vedere [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in *Riferimento a MIDL*.|  
|`local`|Specifica al compilatore MIDL che la proprietà non è remota.  Vedere [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in *Riferimento a MIDL*.|  
  
## Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Nomi, Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)   
 [Proprietà predefinite](../ide/stock-properties.md)