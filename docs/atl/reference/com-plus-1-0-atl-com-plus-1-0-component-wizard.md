---
title: COM+ 1.0, Creazione guidata componente ATL COM+ 1.0
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.mts.options
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
ms.openlocfilehash: 0fa649ba41a684be6ed18bd05d48954503c5db16
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62278592"
---
# <a name="com-10-atl-com-10-component-wizard"></a>COM+ 1.0, Creazione guidata componente ATL COM+ 1.0

Utilizzare questa pagina della procedura guidata componente ATL COM+ 1.0 per specificare il tipo di interfaccia e altre interfacce devono essere supportati.

Per altre informazioni sulle classi ATL COM e progetti ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).

- **Interface**

   Indica il tipo di interfaccia che supporta l'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Dual**|Specifica che l'oggetto supporta le interfacce duali (relativo vtable ha funzioni dell'interfaccia personalizzata e associazione tardiva `IDispatch` metodi). Consente ai client COM e i controller di automazione accedere all'oggetto.|
   |**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (relativo vtable ha funzioni dell'interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce rispetto a un'interfaccia duale, in particolare tra i limiti dei processi.<br /><br /> - **Compatibile con l'automazione** aggiunge il supporto di automazione per l'interfaccia personalizzata. Per i progetti con gli attributi, imposta la **oleautomation** attributo nella coclasse.|

- **Queueable**

   Indica che i client possono chiamare questo componente in modo asincrono usando le code di messaggi. Aggiunge l'oggetto personalizzato di macro con attributi (TLBATTR_QUEUEABLE, 0) per il file con estensione h (progetti con gli attributi) o per il file con estensione IDL (nei progetti).

- **Supporto**

   Indica il supporto aggiuntivo per il controllo di oggetto e la gestione degli errori.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**ISupportErrorInfo**|Per creare il supporto per la [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire le informazioni sull'errore al client.|
   |**IObjectControl**|Fornisce l'accesso agli oggetti per i tre [IObjectControl](/windows/desktop/api/comsvcs/nn-comsvcs-iobjectcontrol) metodi: [Attivare](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-activate), [CanBePooled](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-canbepooled), e [disattivare](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-deactivate).|
   |**IObjectConstruct**|Per creare il supporto per la [IObjectConstruct](/windows/desktop/api/comsvcs/nn-comsvcs-iobjectconstruct) interfaccia per gestire il passaggio di parametri da altri metodi o gli oggetti.|

- **Transazione**

   Indica che l'oggetto supporta le transazioni. Il file mtxattr nel file IDL (nei progetti).

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Supportato**|Specifica che l'oggetto non è mai la radice di un flusso di transazione aggiungendo la custom(TLBATTR_TRANS_SUPPORTED,0) macro di attributo componente per il file con estensione h (progetti con gli attributi) o per il file con estensione IDL (nei progetti).|
   |**Obbligatorio**|Specifica che l'oggetto può o potrebbe non essere la radice di un flusso di transazione aggiungendo la custom(TLBATTR_TRANS_REQUIRED,0) macro di attributo componente per il file con estensione h (progetti con gli attributi) o per il file con estensione IDL (nei progetti).|
   |**Non supportato**|Specifica che l'oggetto esclude le transazioni. Aggiunge il custom(TLBATTR_TRANS_NOTSUPP,0) macro di attributo componente per il file con estensione h (progetti con gli attributi) o per il file con estensione IDL (nei progetti).|
   |**RequiresNew**|Specifica che l'oggetto è sempre la radice di un flusso di transazione aggiungendo la custom(TLBATTR_TRANS_REQNEW,0) macro di attributo componente per il file con estensione h (progetti con gli attributi) o per il file con estensione IDL (nei progetti).|

## <a name="see-also"></a>Vedere anche

[Creazione guidata componente ATL COM+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)<br/>
[Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)
