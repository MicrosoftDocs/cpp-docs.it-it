---
description: 'Ulteriori informazioni su: opzioni, creazione guidata controllo ATL'
title: Opzioni, Creazione guidata controllo ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.control.options
helpviewer_keywords:
- ATL Control Wizard, options
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
ms.openlocfilehash: 428f6ba1a4bee9cec60ca05b57d66d176c3f0deb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157893"
---
# <a name="options-atl-control-wizard"></a>Opzioni, Creazione guidata controllo ATL

Utilizzare questa pagina della procedura guidata per definire il tipo di controllo che si sta creando e il livello di supporto dell'interfaccia in esso contenuto.

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

### <a name="control-type"></a>Tipo di controllo

Il tipo di controllo che si desidera creare.

- **Controllo standard**: un controllo ActiveX.

- **Controllo composito**: un controllo ActiveX che può contenere (simile a una finestra di dialogo) altri controlli ActiveX o controlli Windows. Un controllo composito include quanto segue:

  - Modello per la finestra di dialogo che implementa il controllo composito.

  - Una risorsa personalizzata, REGISTRY, che registra automaticamente il controllo composito quando viene richiamato.

  - Classe C++ che implementa il controllo composito.

  - Interfaccia COM, esposta dal controllo composito.

  - Pagina di test HTML contenente il controllo composito.

    Per impostazione predefinita, questo controllo imposta [CComControlBase:: m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true per indicare che si tratta di un controllo a finestre. Implementa una mappa di sink. Per ulteriori informazioni, vedere [supporto per il controllo DHTML](../../atl/atl-support-for-dhtml-controls.md).

- **Controllo DHTML**: un controllo DHTML ATL specifica l'interfaccia utente, usando HTML. La classe dell'interfaccia utente DHTML contiene una mappa COM. Per impostazione predefinita, questo controllo imposta [CComControlBase:: m_bWindowOnly](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true per indicare che si tratta di un controllo a finestre.

   Per ulteriori informazioni, vedere [identificazione degli elementi del progetto di controllo DHTML](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).

### <a name="minimal-control"></a>Controllo minimo

Supporta solo le interfacce che sono assolutamente necessarie per la maggior parte dei contenitori. È possibile impostare un **controllo minimo** per uno dei tipi di controllo: è possibile creare un controllo standard minimo, un controllo composito minimo o un controllo DHTML minimo.

### <a name="aggregation"></a>Aggregazione

Aggiunge il supporto di aggregazione per il controllo che si sta creando. Per ulteriori informazioni, vedere [aggregazione](../../atl/aggregation.md).

- **Sì**: crea un controllo che può essere aggregato.

- **No**: crea un controllo che non può essere aggregato.

- **Solo**: creare un controllo di cui è possibile creare un'istanza solo tramite l'aggregazione.

### <a name="threading-model"></a>Modello di threading.

Specifica che il modello di threading utilizzato dal controllo.

- **Single**: il controllo viene eseguito solo nel thread com primario.

- **Apartment**: il controllo può essere creato in qualsiasi Apartment a thread singolo. Valore predefinito.

### <a name="interface"></a>Interfaccia

Tipo di interfaccia esposto dal controllo al contenitore.

- **Dual**: crea un'interfaccia che espone proprietà e metodi tramite `IDispatch` e direttamente tramite il VTBL.

- **Custom**: crea un'interfaccia che espone metodi direttamente tramite un VTBL.

   Se si seleziona **personalizzato**, è possibile specificare che il controllo è **compatibile con l'automazione**. Se si seleziona **compatibile con l'automazione**, la procedura guidata aggiunge l'attributo [oleautomation](../../windows/attributes/oleautomation.md) all'interfaccia in IDL e l'interfaccia può essere sottoposta a marshalling dal gestore di marshalling universale in oleaut32.dll. Per ulteriori informazioni, vedere i [Dettagli del marshalling](/windows/win32/com/marshaling-details) nel Windows SDK.

   Inoltre, se si seleziona **compatibile con l'automazione**, tutti i parametri per tutti i metodi del controllo devono essere compatibili con le varianti.

### <a name="support"></a>Supporto

Imposta un supporto vario aggiuntivo per il controllo.

- **Punti di connessione**: Abilita i punti di connessione per l'oggetto rendendo la classe dell'oggetto derivata da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) e consentendo l'esposizione di un'interfaccia di origine.

- **Concesso in licenza**: aggiunge il supporto al controllo per la [gestione delle licenze](/windows/win32/com/licensing). I controlli con licenza possono essere ospitati solo se il computer client dispone della licenza corretta.

## <a name="see-also"></a>Vedi anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)
