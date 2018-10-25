---
title: Creazione guidata controllo ATL, opzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.options
dev_langs:
- C++
helpviewer_keywords:
- ATL Control Wizard, options
ms.assetid: 4607c51a-992d-433e-9281-919c6f519a3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c1acf9602dedf0eef1b8d96344914c367ce5926
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50073552"
---
# <a name="options-atl-control-wizard"></a>Opzioni, Creazione guidata controllo ATL

Inserisci qui "Riepilogo risultati di ricerca".

Utilizzare questa pagina della procedura guidata per definire il tipo di controllo che si sta creando e il livello di supporto di interfaccia che contiene.

## <a name="uielement-list"></a>Elenco UIElement

### <a name="control-type"></a>Tipo di controllo

Il tipo di controllo da creare.

- **Controllo standard**: un controllo ActiveX.

- **Controllo composito**: un controllo ActiveX che può contenere, simile a una finestra di dialogo, altri controlli ActiveX o Windows. Un controllo composito include quanto segue:

   - Un modello per la finestra di dialogo che implementa il controllo composito.

   - Una risorsa personalizzata, Registro di sistema, che registra automaticamente il controllo composito quando viene richiamato.

   - Una classe C++ che implementa il controllo composito.

   - Un'interfaccia COM, esposta dal controllo composito.

   - Una pagina HTML test che contiene il controllo composito.

   Per impostazione predefinita, questo controllo imposta [CComControlBase](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true, per indicare che si tratta di un controllo con finestra. Implementa una mappa di sink. Per altre informazioni, vedere [supporto per controlli DHTML](../../atl/atl-support-for-dhtml-controls.md).

- **Controllo DHTML**: controllo DHTML ATL una specifica interfaccia utente, utilizzando il codice HTML. La classe DHTML UI contiene una mappa COM. Per impostazione predefinita, questo controllo imposta [CComControlBase](../../atl/reference/ccomcontrolbase-class.md#m_bwindowonly) su true, per indicare che si tratta di un controllo con finestra.

   Per altre informazioni, vedere [identificazione degli elementi del progetto controllo DHTML](../../atl/identifying-the-elements-of-the-dhtml-control-project.md).

### <a name="minimal-control"></a>Controllo minimo

Supporta solo le interfacce che sono assolutamente necessarie per la maggior parte dei contenitori. È possibile impostare **controllo minimo** per uno qualsiasi dei tipi di controllo: è possibile creare un controllo standard minimo, un controllo composito minima o un controllo DHTML minimo.

### <a name="aggregation"></a>Aggregazione

Aggiunge il supporto di aggregazione per il controllo che si sta creando. Per altre informazioni, vedere [aggregazione](../../atl/aggregation.md).

- **Sì**: creare un controllo che può essere aggregato.

- **No**: creare un controllo che non può essere aggregato.

- **Solo**: creare un controllo che è possibile creare solo istanze tramite aggregazione.

### <a name="threading-model"></a>Modello di threading.

Specifica che il modello di threading utilizzato dal controllo.

- **Singolo**: il controllo viene eseguito solo nel thread COM primario.

- **Apartment**: il controllo può essere creato in qualsiasi apartment a thread singolo. Valore predefinito.

### <a name="interface"></a>Interfaccia

Il tipo di interfaccia di questo controllo espone al contenitore.

- **Doppia**: consente di creare un'interfaccia che espone le proprietà e metodi tramite `IDispatch` e direttamente tramite VTBL.

- **Custom**: crea un'interfaccia che espone i metodi direttamente tramite un VTBL.

   Se si seleziona **Custom**, quindi è possibile specificare che il controllo è **compatibile con l'automazione**. Se si seleziona **compatibile con l'automazione**, quindi la procedura guidata aggiunge i [oleautomation](../../windows/oleautomation.md) attributo per l'interfaccia nel file IDL, e l'interfaccia può essere sottoposto a marshalling dal gestore di marshalling universale in oleaut32.dll. Visualizzare [marshalling dettagli](/windows/desktop/com/marshaling-details) nel SDK di Windows per altre informazioni.

   Inoltre, se si seleziona **compatibile con l'automazione**, tutti i parametri per tutti i metodi del controllo devono essere variante compatibile.

### <a name="support"></a>Supporto

Imposta supporti aggiuntivi per il controllo.

- **Punti di connessione**: consente ai punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) e consentendo di esporre un'interfaccia di origine.

- **Concesso in licenza**: aggiunge il supporto per il controllo per [licensing](/windows/desktop/com/licensing). Controlli con licenza possono essere ospitati solo se il computer client ha la licenza corretta.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)

