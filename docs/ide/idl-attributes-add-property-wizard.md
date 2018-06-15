---
title: Attributi IDL, Aggiunta guidata proprietà | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.prop.idlattributes
dev_langs:
- C++
ms.assetid: 356ed666-79d0-4bd9-a5e7-cda679cbadbd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 77931296d8d33337c4e630b7327a1ec8fd0a458f
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33340190"
---
# <a name="idl-attributes-add-property-wizard"></a>Attributi IDL, Aggiunta guidata proprietà
Usare questa pagina dell'Aggiunta guidata proprietà per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per la proprietà.  
  
 **ID**  
 Imposta l'ID numerico che identifica la proprietà. Questa opzione non è disponibile per le proprietà di interfacce personalizzate. Vedere [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in *MIDL Reference* (Riferimento MIDL).  
  
 **helpcontext**  
 Specifica un ID contesto che consente all'utente di visualizzare informazioni sulla proprietà corrente nel file della Guida. Vedere [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in *MIDL Reference* (Riferimento MIDL).  
  
 **helpstring**  
 Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. Per impostazione predefinita, viene impostata su "property *Property name*". Vedere [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in *MIDL Reference* (Riferimento MIDL).  
  
## <a name="other-options"></a>Altre opzioni  
 Non tutte le opzioni sono disponibili per tutti i tipi di proprietà.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**bindable**|Indica che la proprietà supporta il data binding. Vedere [bindable](http://msdn.microsoft.com/library/windows/desktop/aa366738) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**defaultbind**|Indica la singola proprietà associabile che meglio rappresenta l'oggetto. Vedere [defaultbind](http://msdn.microsoft.com/library/windows/desktop/aa366790) in *MIDL Reference* (Riferimento MIDL).|  
|**displaybind**|Indica che la proprietà deve essere visualizzata all'utente come associabile. Vedere [displaybind](http://msdn.microsoft.com/library/windows/desktop/aa366804) in *MIDL Reference* (Riferimento MIDL).|  
|**immediatebind**|Indica che tutte le modifiche apportate alla proprietà di un oggetto associato a dati verranno immediatamente notificate al database. Vedere [immediatebind](http://msdn.microsoft.com/library/windows/desktop/aa367045) in *MIDL Reference* (Riferimento MIDL).|  
|**defaultcollelem**|Indica che la proprietà è una funzione di accesso per un elemento della raccolta predefinita. Vedere [defaultcollelem](http://msdn.microsoft.com/library/windows/desktop/aa366792) in *MIDL Reference* (Riferimento MIDL).|  
|**nonbrowsable**|Assegna un tag a un membro di interfaccia o interfaccia dispatch che non deve essere visualizzato in un visualizzatore di proprietà. Vedere [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) in *MIDL Reference* (Riferimento MIDL).|  
|**requestedit**|Indica che la proprietà supporta la notifica **OnRequestEdit**. Vedere [requestedit](http://msdn.microsoft.com/library/windows/desktop/aa367155) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**source**|Indica che un membro della proprietà è un'origine di eventi. Vedere [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in *MIDL Reference* (Riferimento MIDL).|  
|**hidden**|Indica che la proprietà esiste ma non deve essere visualizzata in un visualizzatore per utenti. Vedere [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in *MIDL Reference* (Riferimento MIDL).|  
|**restricted**|Specifica che la proprietà non può essere chiamata in modo arbitrario. Vedere [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in *MIDL Reference* (Riferimento MIDL).|  
|`local`|Specifica al compilatore MIDL che la proprietà non è remota. Vedere [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in *MIDL Reference* (Riferimento MIDL).|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Nomi, Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)   
 [Proprietà predefinite](../ide/stock-properties.md)