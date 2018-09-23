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
ms.openlocfilehash: 7da654321dfae520f458374654a21a9e8ebb98f5
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706654"
---
# <a name="idl-attributes-add-property-wizard"></a>Attributi IDL, Aggiunta guidata proprietà
Usare questa pagina dell'Aggiunta guidata proprietà per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per la proprietà.  
  
- **ID**

   Imposta l'ID numerico che identifica la proprietà. Questa opzione non è disponibile per le proprietà di interfacce personalizzate. Vedere [id](/windows/desktop/Midl/id) in *MIDL Reference* (Riferimento MIDL).  
  
- **helpcontext**

   Specifica un ID contesto che consente all'utente di visualizzare informazioni sulla proprietà corrente nel file della Guida. Vedere [helpcontext](/windows/desktop/Midl/helpcontext) in *MIDL Reference* (Riferimento MIDL).  
  
- **helpstring**

   Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. Per impostazione predefinita, viene impostata su "property *Property name*". Vedere [helpstring](/windows/desktop/Midl/helpstring) in *MIDL Reference* (Riferimento MIDL).  
  
## <a name="other-options"></a>Altre opzioni  

Non tutte le opzioni sono disponibili per tutti i tipi di proprietà.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**bindable**|Indica che la proprietà supporta il data binding. Vedere [bindable](/windows/desktop/Midl/bindable) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**defaultbind**|Indica la singola proprietà associabile che meglio rappresenta l'oggetto. Vedere [defaultbind](/windows/desktop/Midl/defaultbind) in *MIDL Reference* (Riferimento MIDL).|  
|**displaybind**|Indica che la proprietà deve essere visualizzata all'utente come associabile. Vedere [displaybind](/windows/desktop/Midl/displaybind) in *MIDL Reference* (Riferimento MIDL).|  
|**immediatebind**|Indica che tutte le modifiche apportate alla proprietà di un oggetto associato a dati verranno immediatamente notificate al database. Vedere [immediatebind](/windows/desktop/Midl/immediatebind) in *MIDL Reference* (Riferimento MIDL).|  
|**defaultcollelem**|Indica che la proprietà è una funzione di accesso per un elemento della raccolta predefinita. Vedere [defaultcollelem](/windows/desktop/Midl/defaultcollelem) in *MIDL Reference* (Riferimento MIDL).|  
|**nonbrowsable**|Assegna un tag a un membro di interfaccia o interfaccia dispatch che non deve essere visualizzato in un visualizzatore di proprietà. Vedere [nonbrowsable](/windows/desktop/Midl/nonbrowsable) in *MIDL Reference* (Riferimento MIDL).|  
|**requestedit**|Indica che la proprietà supporta la notifica **OnRequestEdit**. Vedere [requestedit](/windows/desktop/Midl/requestedit) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|  
|**source**|Indica che un membro della proprietà è un'origine di eventi. Vedere [source](/windows/desktop/Midl/source) in *MIDL Reference* (Riferimento MIDL).|  
|**hidden**|Indica che la proprietà esiste ma non deve essere visualizzata in un visualizzatore per utenti. Vedere [hidden](/windows/desktop/Midl/hidden) in *MIDL Reference* (Riferimento MIDL).|  
|**restricted**|Specifica che la proprietà non può essere chiamata in modo arbitrario. Vedere [restricted](/windows/desktop/Midl/restricted) in *MIDL Reference* (Riferimento MIDL).|  
|`local`|Specifica al compilatore MIDL che la proprietà non è remota. Vedere [local](/windows/desktop/Midl/local) in *MIDL Reference* (Riferimento MIDL).|  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Nomi, Aggiunta guidata proprietà](../ide/names-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)   
 [Proprietà predefinite](../ide/stock-properties.md)