---
title: "Attributi IDL, aggiunta guidata proprietà | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.prop.idlattributes
dev_langs: C++
ms.assetid: 356ed666-79d0-4bd9-a5e7-cda679cbadbd
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8dd58ebd25c3b70b10ae3530577d70058bef5b86
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idl-attributes-add-property-wizard"></a>Attributi IDL, Aggiunta guidata proprietà
Utilizzare questa pagina dell'Aggiunta guidata proprietà per specificare eventuali impostazioni interface definition language (IDL) per la proprietà.  
  
 **id**  
 Imposta l'ID numerico che identifica la proprietà. Questa opzione non è disponibile per le proprietà di interfacce personalizzate. Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) nel *MIDL riferimento*.  
  
 **helpcontext**  
 Specifica un ID di contesto che consente di visualizzare informazioni su questa proprietà nel file della Guida. Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) nel *MIDL riferimento*.  
  
 **helpstring**  
 Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata. Per impostazione predefinita, viene impostata su "proprietà *nome della proprietà*." Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) nel *MIDL riferimento*.  
  
## <a name="other-options"></a>Altre opzioni  
 Non tutte le opzioni sono disponibili per tutti i tipi di proprietà.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**bindable**|Indica che la proprietà supporta l'associazione dati. Vedere [associabili](http://msdn.microsoft.com/library/windows/desktop/aa366738) nel *MIDL riferimento*. Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**defaultbind**|Indica che la singola proprietà associabile migliore rappresenta l'oggetto. Vedere [defaultbind](http://msdn.microsoft.com/library/windows/desktop/aa366790) nel *MIDL riferimento*.|  
|**displaybind**|Indica che questa proprietà deve essere visualizzata all'utente come associabile. Vedere [displaybind](http://msdn.microsoft.com/library/windows/desktop/aa366804) nel *MIDL riferimento*.|  
|**immediatebind**|Indica che il database verrà informato immediatamente di tutte le modifiche a questa proprietà di un oggetto con associazione a dati. Vedere [immediatebind](http://msdn.microsoft.com/library/windows/desktop/aa367045) nel *MIDL riferimento*.|  
|**defaultcollelem**|Indica che la proprietà è una funzione di accesso per un elemento della raccolta predefinita. Vedere [defaultcollelem](http://msdn.microsoft.com/library/windows/desktop/aa366792) nel *MIDL riferimento*.|  
|**nonbrowsable**|Tag di un membro di interfaccia o interfaccia dispatch che non deve essere visualizzato in un visualizzatore di proprietà. Vedere [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) nel *MIDL riferimento*.|  
|**requestedit**|Indica che la proprietà supporta il **OnRequestEdit** notifica vedere [requestedit](http://msdn.microsoft.com/library/windows/desktop/aa367155) nel *MIDL riferimento*. Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**origine**|Indica che un membro della proprietà è un'origine di eventi. Vedere [origine](http://msdn.microsoft.com/library/windows/desktop/aa367166) nel *MIDL riferimento*.|  
|**hidden**|Indica che la proprietà esiste ma non deve essere visualizzata in un visualizzatore per utente. Vedere [nascosto](http://msdn.microsoft.com/library/windows/desktop/aa366861) nel *MIDL riferimento*.|  
|**restricted**|Specifica che la proprietà non può essere chiamata in modo arbitrario. Vedere [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) nel *MIDL riferimento*.|  
|`local`|Specifica al compilatore MIDL che la proprietà non è remota. Vedere [locale](http://msdn.microsoft.com/library/windows/desktop/aa367071) nel *MIDL riferimento*.|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [I nomi, aggiunta guidata proprietà](../ide/names-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)   
 [Proprietà predefinite](../ide/stock-properties.md)