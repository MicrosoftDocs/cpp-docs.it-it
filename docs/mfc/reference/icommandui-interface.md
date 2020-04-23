---
title: Interfaccia ICommandUI
ms.date: 09/07/2019
f1_keywords:
- ICommandUI
- AFXWINFORMS/ICommandUI
- AFXWINFORMS/icommandui__Check
- AFXWINFORMS/ICommandUI::ContinueRouting
- AFXWINFORMS/ICommandUI::Enabled
- AFXWINFORMS/ICommandUI::ID
- AFXWINFORMS/ICommandUI::Index
- AFXWINFORMS/ICommandUI::Radio
- AFXWINFORMS/ICommandUI::Text
helpviewer_keywords:
- ICommandUI interface [MFC]
ms.assetid: 134afe8d-dcdf-47ca-857a-a166a6b665dd
ms.openlocfilehash: b75509beb7287fad5e51dc9d15fc3e47cacf6854
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751315"
---
# <a name="icommandui-interface"></a>Interfaccia ICommandUI

Gestisce i comandi dell'interfaccia utente.

## <a name="syntax"></a>Sintassi

```
interface class ICommandUI
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[icommandui__Check](#check)|Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.|
|[ICommandUI::ContinueRoutingICommandUI::ContinueRouting](#continuerouting)|Indica al meccanismo di routing dei comandi di continuare a instradare il messaggio corrente lungo la catena di gestori.|
|[ICommandUI::Abilitato](#enabled)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|
|[ICommandUI::ID](#id)|Ottiene l'ID dell'oggetto dell'interfaccia utente rappresentato dall'oggetto. `ICommandUI`|
|[ICommandUI::IndiceICommandUI::Index](#index)|Ottiene l'indice dell'oggetto dell'interfaccia utente rappresentato dall'oggetto. `ICommandUI`|
|[ICommandUI::Radio](#radio)|Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.|
|[ICommandUI::Testo](#text)|Imposta il testo dell'elemento dell'interfaccia utente per questo comando.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia fornisce metodi e proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI`è simile alla [classe CCmdUI](../../mfc/reference/ccmdui-class.md), ad eccezione del fatto che `ICommandUI` viene utilizzata per le applicazioni MFC che interagiscono con i componenti .NET.

`ICommandUI`viene utilizzato all'interno di un gestore di ON_UPDATE_COMMAND_UI in una classe derivata da [ICommandTarget.](../../mfc/reference/icommandtarget-interface.md) Quando un utente di un'applicazione attiva (seleziona o fa clic) un menu, ogni voce di menu viene visualizzata come abilitata o disabilitata. La destinazione di ogni comando di menu fornisce queste informazioni implementando un gestore di ON_UPDATE_COMMAND_UI. Per ognuno degli oggetti dell'interfaccia utente di comando nell'applicazione, utilizzare la [Creazione guidata classe](mfc-class-wizard.md) per creare una voce della mappa messaggi e un prototipo di funzione per ogni gestore.

Per ulteriori informazioni `ICommandUI` sull'utilizzo dell'interfaccia nel routing dei comandi, vedere [Procedura: aggiungere il routing](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)dei comandi al controllo Windows Form .

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Per ulteriori informazioni sulla modalità di gestione dei comandi dell'interfaccia utente in MFC, vedere [Classe CCmdUI](../../mfc/reference/ccmdui-class.md).

## <a name="icommanduicheck"></a><a name="check"></a>ICommandUI::Controlla

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.

```
property UICheckState Check;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato. Impostare Controllo sui seguenti valori:

- 0 Deselezionare
- 1 Controllare
- 2 Impostare indeterminato

## <a name="icommanduicontinuerouting"></a><a name="continuerouting"></a>ICommandUI::ContinueRoutingICommandUI::ContinueRouting

Indica al meccanismo di routing dei comandi di continuare a instradare il messaggio corrente lungo la catena di gestori.

```cpp
void ContinueRouting();
```

## <a name="remarks"></a>Osservazioni

Si tratta di una funzione membro avanzata che deve essere utilizzata insieme a un gestore di ON_COMMAND_EX che restituisce FALSE. Per ulteriori informazioni, vedere Nota tecnica TN006: mappe messaggi.

## <a name="icommanduienabled"></a><a name="enabled"></a>ICommandUI::Abilitato

Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.

```
property bool Enabled;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà abilita o disabilita l'elemento dell'interfaccia utente per questo comando. Impostare Abilitato su TRUE per abilitare l'elemento, FALSE per disabilitarlo.

## <a name="icommanduiid"></a><a name="id"></a>ICommandUI::ID

Ottiene l'ID dell'oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

```
property unsigned int ID;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà ottiene l'ID (un handle) della voce di menu, pulsante della barra degli strumenti o altro oggetto dell'interfaccia utente rappresentato dal ICommandUI oggetto.

## <a name="icommanduiindex"></a><a name="index"></a>ICommandUI::IndiceICommandUI::Index

Ottiene l'indice dell'oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

```
property unsigned int Index;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà ottiene l'indice (un handle) della voce di menu, pulsante della barra degli strumenti o altro oggetto dell'interfaccia utente rappresentato dal ICommandUI oggetto.

## <a name="icommanduiradio"></a><a name="radio"></a>ICommandUI::Radio

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato.

```
property bool Radio;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di controllo appropriato. Impostare Radio su TRUE per abilitare l'elemento; in caso contrario, FALSE.

## <a name="icommanduitext"></a><a name="text"></a>ICommandUI::Testo

Imposta il testo dell'elemento dell'interfaccia utente per questo comando.

```
property String^ Text;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta il testo dell'elemento dell'interfaccia utente per questo comando. Impostare Text su un handle di stringa di testo.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h (definita nell'assembly atlmfc.lib.mfcmifc80.dll)

## <a name="see-also"></a>Vedere anche

[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)
