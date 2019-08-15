---
title: Opzioni, Creazione guidata controllo ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.control.options
helpviewer_keywords:
- ATL Control Wizard, options
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
ms.openlocfilehash: 25db3995687011de5e9cc0a98506cd26f2f1af0b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495448"
---
# <a name="options-atl-control-wizard"></a>Opzioni, Creazione guidata controllo ATL

Utilizzare questa pagina della procedura guidata per definire il tipo di controllo che si sta creando e il livello di supporto dell'interfaccia in esso contenuto.

## <a name="uielement-list"></a>Elenco UIElement

### <a name="control-type"></a>Tipo di controllo

Il tipo di controllo che si desidera creare.

- **Controllo standard**: Controllo ActiveX.

- **Controllo composito**: Controllo ActiveX che può contenere (simile a una finestra di dialogo) altri controlli ActiveX o controlli Windows. Un controllo composito include quanto segue:

  - Modello per la finestra di dialogo che implementa il controllo composito.

  - Una risorsa personalizzata, REGISTRY, che registra automaticamente il controllo composito quando viene richiamato.

  - C++ Classe che implementa il controllo composito.

  - Interfaccia COM, esposta dal controllo composito.

  - Pagina di test HTML contenente il controllo composito.

    Per impostazione predefinita, questo controllo imposta [CComControlBase:: m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true per indicare che si tratta di un controllo a finestre. Implementa una mappa di sink. Per ulteriori informazioni, vedere [supporto per il controllo DHTML](../../atl/atl-support-for-dhtml-controls.md).

- **Controllo DHTML**: Un controllo DHTML ATL specifica l'interfaccia utente, usando HTML. La classe dell'interfaccia utente DHTML contiene una mappa COM. Per impostazione predefinita, questo controllo imposta [CComControlBase:: m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true per indicare che si tratta di un controllo a finestre.

   Per ulteriori informazioni, vedere [identificazione degli elementi del progetto di controllo DHTML](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).

### <a name="minimal-control"></a>Controllo minimo

Supporta solo le interfacce che sono assolutamente necessarie per la maggior parte dei contenitori. È possibile impostare un **controllo minimo** per uno dei tipi di controllo: è possibile creare un controllo standard minimo, un controllo composito minimo o un controllo DHTML minimo.

### <a name="aggregation"></a>Aggregazione

Aggiunge il supporto di aggregazione per il controllo che si sta creando. Per ulteriori informazioni, vedere [aggregazione](../../atl/aggregation.md).

- **Sì**: Creare un controllo che può essere aggregato.

- **No**: Creare un controllo che non può essere aggregato.

- **Solo**: Creare un controllo di cui è possibile creare un'istanza solo tramite l'aggregazione.

### <a name="threading-model"></a>Modello di threading.

Specifica che il modello di threading utilizzato dal controllo.

- **Singolo**: Il controllo viene eseguito solo nel thread COM primario.

- **Apartment**: Il controllo può essere creato in qualsiasi Apartment a thread singolo. Valore predefinito.

### <a name="interface"></a>Interfaccia

Tipo di interfaccia esposto dal controllo al contenitore.

- **Doppio**: Crea un'interfaccia che espone proprietà e metodi tramite `IDispatch` e direttamente tramite il VTBL.

- **Custom**: Crea un'interfaccia che espone metodi direttamente tramite un VTBL.

   Se si seleziona **personalizzato**, è possibile specificare che il controllo è **compatibile con l'automazione**. Se si seleziona **compatibile con l'automazione**, la procedura guidata aggiunge l'attributo [oleautomation](../../windows/oleautomation.md) all'interfaccia in IDL e l'interfaccia può essere sottoposta a marshalling dal gestore di marshalling universale in Oleaut32. dll. Per ulteriori informazioni, vedere i [Dettagli](/windows/win32/com/marshaling-details) del marshalling nel Windows SDK.

   Inoltre, se si seleziona **compatibile con l'automazione**, tutti i parametri per tutti i metodi del controllo devono essere compatibili con le varianti.

### <a name="support"></a>Supporto

Imposta un supporto vario aggiuntivo per il controllo.

- **Punti di connessione**: Abilita i punti di connessione per l'oggetto rendendo la classe dell'oggetto derivata da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) e consentendo l'esposizione di un'interfaccia di origine.

- **Concesso in licenza**: Aggiunge il supporto al controllo per la [gestione delle licenze](/windows/win32/com/licensing). I controlli con licenza possono essere ospitati solo se il computer client dispone della licenza corretta.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)
