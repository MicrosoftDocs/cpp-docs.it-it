---
title: COM+ 1.0, creazione guidata componente ATL COM+ 1.0 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.mts.options
dev_langs:
- C++
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 36295e5ce296ea6ba982c4ce8cf729bf45860883
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="com-10-atl-com-10-component-wizard"></a>COM+ 1.0, Creazione guidata componente ATL COM+ 1.0
Utilizzare questa pagina della creazione guidata componente ATL COM+ 1.0 per specificare il tipo di interfaccia e interfacce aggiuntive devono essere supportati.  
  
 Per ulteriori informazioni su ATL (progetti) e le classi COM ATL, vedere [componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md).  
  
 **Interfaccia**  
 Indica il tipo di interfaccia supportato dall'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Dual**|Specifica che l'oggetto supporta un'interfaccia duale (la vtable dell'oggetto con associazione tardiva e funzioni di interfaccia personalizzata `IDispatch` metodi). Consente ai client COM e i controller di automazione accedere all'oggetto.|  
|**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (la vtable dell'oggetto ha funzioni di interfaccia personalizzati). Un'interfaccia personalizzata può essere più veloce rispetto a un'interfaccia duale, soprattutto nei limiti di processo.<br /><br /> -   **Compatibile con l'automazione** aggiunge il supporto di automazione all'interfaccia personalizzata. Per i progetti con attributi, imposta il **oleautomation** attributo nella coclasse.|  
  
 **Accodabili**  
 Indica che i client possono chiamare questo componente in modo asincrono utilizzando le code di messaggi. Aggiunge il macro con attributi custom (TLBATTR_QUEUEABLE, 0) per il file con estensione h (progetti con attributi) o nel file IDL (progetti senza attributi).  
  
 **Supporto**  
 Indica il supporto aggiuntivo per il controllo di gestione e oggetto errore.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ISupportErrorInfo**|Per creare il supporto per il [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire informazioni sugli errori al client.|  
|**IObjectControl**|Fornisce l'accesso agli oggetti per i tre [IObjectControl](http://msdn.microsoft.com/library/windows/desktop/ms686474) metodi: [attiva](http://msdn.microsoft.com/library/windows/desktop/ms681303), [CanBePooled](http://msdn.microsoft.com/library/windows/desktop/ms684322), e [disattiva](http://msdn.microsoft.com/library/windows/desktop/ms687094).|  
|**IObjectConstruct**|Per creare il supporto per il [IObjectConstruct](http://msdn.microsoft.com/library/windows/desktop/ms680583) interfaccia per gestire il passaggio di parametri da altri metodi o oggetti.|  
  
 **Transazione**  
 Indica che l'oggetto supporta le transazioni. Il file mtxattr nel file IDL (progetti senza attributi).  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**È supportato**|Specifica che l'oggetto non è mai la radice di un flusso di transazioni mediante l'aggiunta di custom(TLBATTR_TRANS_SUPPORTED,0) di macro di attributo componente al file h (progetti con attributi) o nel file IDL (progetti senza attributi).|  
|**Richiesto**|Specifica che l'oggetto può o non sia la radice di un flusso di transazioni mediante l'aggiunta di custom(TLBATTR_TRANS_REQUIRED,0) di macro di attributo componente al file h (progetti con attributi) o nel file IDL (progetti senza attributi).|  
|**Non supportato**|Specifica che l'oggetto esclude le transazioni. Aggiunge il custom(TLBATTR_TRANS_NOTSUPP,0) di macro di attributo componente al file h (progetti con attributi) o nel file IDL (progetti senza attributi).|  
|**RequiresNew**|Specifica che l'oggetto è sempre la radice di un flusso di transazioni mediante l'aggiunta di custom(TLBATTR_TRANS_REQNEW,0) di macro di attributo componente al file h (progetti con attributi) o nel file IDL (progetti senza attributi).|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata 1.0 componente ATL COM+](../../atl/reference/atl-com-plus-1-0-component-wizard.md)   
 [Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)


