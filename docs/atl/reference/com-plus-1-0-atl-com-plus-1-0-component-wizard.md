---
title: COM+ 1.0, creazione guidata componente ATL COM+ 1.0 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: vc.codewiz.class.atl.mts.options
dev_langs: C++
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 102e6a0a9b7055000d051f5fb729dd45863a16cd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="com-10-atl-com-10-component-wizard"></a>COM+ 1.0, Creazione guidata componente ATL COM+ 1.0
Utilizzare questa pagina della procedura guidata componente ATL COM+ 1.0 per specificare il tipo di interfaccia e ulteriori interfacce devono essere supportati.  
  
 Per ulteriori informazioni sui progetti ATL e le classi ATL COM, vedere [componenti di Desktop ATL COM](../../atl/atl-com-desktop-components.md).  
  
 **Interface**  
 Indica il tipo di interfaccia che supporta l'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Doppio**|Specifica che l'oggetto supporta un'interfaccia duale (la vtable dell'oggetto ha funzioni di interfaccia personalizzata e ad associazione tardiva `IDispatch` metodi). Consente ai client COM e i controller di automazione accedere all'oggetto.|  
|**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (la vtable dell'oggetto ha funzioni di interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce rispetto a un'interfaccia duale, in particolare attraverso i limiti di processo.<br /><br /> -   **Compatibile con l'automazione** aggiunge il supporto di automazione per l'interfaccia personalizzata. Per i progetti con attributi, imposta il **oleautomation** attributo nella coclasse.|  
  
 **Accodabili**  
 Indica che i client possono chiamare questo componente in modo asincrono usando le code di messaggi. Aggiunge il macro con attributi custom (TLBATTR_QUEUEABLE, 0) per il file con estensione h (progetti con attributi) o al file IDL (progetti senza attributi).  
  
 **Supporto**  
 Indica il supporto aggiuntivo per il controllo di gestione e l'oggetto errore.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ISupportErrorInfo**|Per creare il supporto per il [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire informazioni sugli errori al client.|  
|**IObjectControl**|Fornisce l'accesso agli oggetti per i tre [IObjectControl](http://msdn.microsoft.com/library/windows/desktop/ms686474) metodi: [attiva](http://msdn.microsoft.com/library/windows/desktop/ms681303), [CanBePooled](http://msdn.microsoft.com/library/windows/desktop/ms684322), e [disattiva](http://msdn.microsoft.com/library/windows/desktop/ms687094).|  
|**IObjectConstruct**|Per creare il supporto per il [IObjectConstruct](http://msdn.microsoft.com/library/windows/desktop/ms680583) interfaccia per gestire il passaggio di parametri da altri metodi o oggetti.|  
  
 **Transazione**  
 Indica che l'oggetto supporta le transazioni. Il file mtxattr nel file IDL (progetti senza attributi).  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Supportato**|Specifica che l'oggetto non è mai la radice di un flusso di transazione mediante l'aggiunta di custom(TLBATTR_TRANS_SUPPORTED,0) macro attributo componente al file h (progetti con attributi) o al file IDL (progetti senza attributi).|  
|**Obbligatorio**|Specifica che l'oggetto può o non sia la radice di un flusso di transazione mediante l'aggiunta di custom(TLBATTR_TRANS_REQUIRED,0) macro attributo componente al file h (progetti con attributi) o al file IDL (progetti senza attributi).|  
|**Non è supportato**|Specifica che l'oggetto esclude le transazioni. Aggiunge il custom(TLBATTR_TRANS_NOTSUPP,0) macro attributo componente per il file con estensione h (progetti con attributi) o al file IDL (progetti senza attributi).|  
|**Richiede nuovi**|Specifica che l'oggetto è sempre la radice di un flusso di transazione mediante l'aggiunta di custom(TLBATTR_TRANS_REQNEW,0) macro attributo componente al file h (progetti con attributi) o al file IDL (progetti senza attributi).|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata 1.0 componente ATL COM+](../../atl/reference/atl-com-plus-1-0-component-wizard.md)   
 [Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)

