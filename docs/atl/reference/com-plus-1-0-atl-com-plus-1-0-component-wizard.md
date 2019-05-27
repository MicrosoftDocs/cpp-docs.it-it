---
title: COM+ 1.0, Creazione guidata componente ATL COM+ 1.0
ms.date: 05/09/2019
f1_keywords:
- vc.codewiz.class.atl.mts.options
ms.assetid: 2fbe259c-6be1-4d0e-9cfe-721c75c97cb1
ms.openlocfilehash: bff7f87fbdebbff9a1823ae8718c64be4f47a2ea
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707441"
---
# <a name="com-10-atl-com-10-component-wizard"></a>COM+ 1.0, Creazione guidata componente ATL COM+ 1.0

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Usare questa pagina della Creazione guidata componente ATL COM+ 1.0 per specificare il tipo di interfaccia e le interfacce aggiuntive da supportare.

Per altre informazioni sui progetti ATL e le classi ATL COM, vedere [Componenti desktop ATL COM](../../atl/atl-com-desktop-components.md).

- **Interface**

   Indica il tipo di interfaccia supportata dall'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.

   |Opzione|Description|
   |------------|-----------------|
   |**Doppia**|Specifica che l'oggetto supporta un'interfaccia duale (la relativa vtable dispone di funzioni di interfaccia personalizzate e metodi `IDispatch` di associazione tardiva). Consente sia ai client COM che ai controller di automazione di accedere all'oggetto.|
   |**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (la relativa vtable dispone di funzioni dell'interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce di un'interfaccia duale, in particolare attraverso i limiti dei processi.<br /><br /> - **Compatibile con l'automazione** Aggiunge il supporto per l'automazione all'interfaccia personalizzata. Per i progetti con attributi, imposta l'attributo **oleautomation** nella coclasse.|

- **Accodabile**

   Indica che i client possono chiamare questo componente in modo asincrono usando le code di messaggi. Aggiunge la macro per gli attributi del componente custom(TLBATTR_QUEUEABLE, 0) al file con estensione h (progetti con attributi) o al file con estensione idl (progetti senza attributi).

- **Supporto**

   Indica il supporto aggiuntivo per la gestione degli errori e il controllo degli oggetti.

   |Opzione|Description|
   |------------|-----------------|
   |**ISupportErrorInfo**|Crea il supporto per l'interfaccia [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) in modo che l'oggetto possa restituire le informazioni sull'errore al client.|
   |**IObjectControl**|Fornisce all'oggetto l'accesso ai tre metodi [IObjectControl](/windows/desktop/api/comsvcs/nn-comsvcs-iobjectcontrol): [Activate](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-activate), [CanBePooled](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-canbepooled) e [Deactivate](/windows/desktop/api/comsvcs/nf-comsvcs-iobjectcontrol-deactivate).|
   |**IObjectConstruct**|Crea il supporto per l'interfaccia [IObjectConstruct](/windows/desktop/api/comsvcs/nn-comsvcs-iobjectconstruct) per gestire il passaggio dei parametri da altri metodi o oggetti.|

- **Transazione**

   Indica che l'oggetto supporta le transazioni. Include il file mtxattr.h nel file con estensione idl (progetti senza attributi).

   |Opzione|Description|
   |------------|-----------------|
   |**Supportato**|Specifica che l'oggetto non è mai la radice di un flusso di transazioni aggiungendo la macro per gli attributi del componente custom(TLBATTR_TRANS_SUPPORTED,0) al file con estensione h (progetti con attributi) o al file con estensione idl (progetti senza attributi).|
   |**Obbligatorio**|Specifica che l'oggetto può essere o meno la radice di un flusso di transazioni aggiungendo la macro per gli attributi del componente custom(TLBATTR_TRANS_REQUIRED,0) al file con estensione h (progetti con attributi) o al file con estensione idl (progetti senza attributi).|
   |**Non supportato**|Specifica che l'oggetto esclude le transazioni. Aggiunge la macro per gli attributi del componente custom(TLBATTR_TRANS_NOTSUPP, 0) al file con estensione h (progetti con attributi) o al file con estensione idl (progetti senza attributi).|
   |**Nuovo obbligatorio**|Specifica che l'oggetto è sempre la radice di un flusso di transazioni aggiungendo la macro per gli attributi del componente custom(TLBATTR_TRANS_REQNEW,0) al file con estensione h (progetti con attributi) o al file con estensione idl (progetti senza attributi).|

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione guidata componente ATL COM+ 1.0](../../atl/reference/atl-com-plus-1-0-component-wizard.md)<br/>
[Componente ATL COM+ 1.0](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)
