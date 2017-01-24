---
title: "COM+ 1.0, Creazione guidata componente ATL COM+ 1.0 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.mts.options"
dev_langs: 
  - "C++"
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM+ 1.0, Creazione guidata componente ATL COM+ 1.0
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa schermata della Creazione guidata componente ATL COM\+ 1.0 per specificare il tipo di interfaccia e le interfacce aggiuntive supportate.  
  
 Per ulteriori informazioni sui progetti ATL e sulle classi COM ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).  
  
 **Interfaccia**  
 Consente di specificare il tipo di interfaccia supportato dall'oggetto.  Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Duale**|Utilizzare questa opzione per specificare che l'interfaccia supportata dall'oggetto è un'interfaccia duale \(la vtable dell'oggetto ha funzioni di interfaccia personalizzate oltre a metodi `IDispatch` con associazione tardiva\).  L'accesso all'oggetto è consentito sia ai client COM che ai controller di automazione.|  
|**Personalizzato**|Utilizzare questa opzione per specificare che l'oggetto supporta un'interfaccia personalizzata \(la vtable dell'oggetto ha funzionalità di interfaccia personalizzate\).  Tale interfaccia può essere più veloce di un'interfaccia duale, in particolare nell'ambito dei processi.<br /><br /> -   **Automation compatible** aggiunge il supporto di automazione dell'interfaccia.  Per i progetti con attributi, imposta l'attributo **oleautomation** nella coclasse.|  
  
 **Accodabile**  
 Utilizzare questa opzione per specificare che i client possono chiamare questo componente in modo asincrono utilizzando le code di messaggi.  La macro con attributi custom \(TLBATTR\_QUEUEABLE, 0\) viene aggiunta al file H \(progetti con attributi\) o al file IDL \(progetti senza attributi\).  
  
 **Supporto**  
 Consente di definire il supporto aggiuntivo per la gestione degli errori e il controllo degli oggetti.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**ISupportErrorInfo**|Utilizzare questa opzione per creare il supporto per l'interfaccia [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) in modo che l'oggetto possa restituire le informazioni sugli errori al client.|  
|**IObjectControl**|Utilizzare questa opzione per consentire all'oggetto di accedere ai tre metodi di [IObjectControl](http://msdn.microsoft.com/library/windows/desktop/ms686474): [Activate](http://msdn.microsoft.com/library/windows/desktop/ms681303), [CanBePooled](http://msdn.microsoft.com/library/windows/desktop/ms684322) e [Deactivate](http://msdn.microsoft.com/library/windows/desktop/ms687094).|  
|**IObjectConstruct**|Utilizzare questa opzione per creare il supporto per l'interfaccia [IObjectConstruct](http://msdn.microsoft.com/library/windows/desktop/ms680583) per gestire il passaggio di parametri da altri metodi o oggetti.|  
  
 **Transazione**  
 Consente di indicare che l'oggetto supporta le transazioni.  Il file mtxattr.h viene incluso nel file IDL \(progetti senza attributi\).  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Supportato**|Utilizzare questa opzione per specificare che l'oggetto non è mai la radice di un flusso di transazioni mediante l'aggiunta della macro con attributi custom\(TLBATTR\_TRANS\_SUPPORTED,0\) al file H \(progetti con attributi\) o al file IDL \(progetti senza attributi\).|  
|**Obbligatorio**|Utilizzare questa opzione per specificare che l'oggetto può essere o meno la radice di un flusso di transazioni mediante l'aggiunta della macro con attributi custom\(TLBATTR\_TRANS\_SUPPORTED,0\) al file H \(progetti con attributi\) o al file IDL \(progetti senza attributi\).|  
|**Non supportato**|Utilizzare questa opzione per specificare che l'oggetto esclude le transazioni.  La macro con attributi custom\(TLBATTR\_TRANS\_NOTSUPP, 0\) viene aggiunta al file H \(progetti con attributi\) o al file IDL \(progetti senza attributi\).|  
|**Nuova obbligatoria**|Utilizzare questa opzione per specificare che l'oggetto è sempre la radice di un flusso di transazioni mediante l'aggiunta della macro con attributi custom\(TLBATTR\_TRANS\_REQNEW,0\) al file H \(progetti con attributi\) o al file IDL \(progetti senza attributi\).|  
  
## Vedere anche  
 [Creazione guidata componente ATL COM\+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)   
 [ATL COM\+ 1.0 Component](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)