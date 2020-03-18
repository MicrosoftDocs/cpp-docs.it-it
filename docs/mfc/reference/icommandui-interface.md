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
ms.openlocfilehash: a7bb3ab5ed292cef8108e937e67bc9e2ccc1ebce
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421296"
---
# <a name="icommandui-interface"></a>Interfaccia ICommandUI

Gestisce i comandi dell'interfaccia utente.

## <a name="syntax"></a>Sintassi

```
interface class ICommandUI
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[icommandui__Check](#check)|Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.|
|[ICommandUI:: ContinueRouting](#continuerouting)|Indica al meccanismo di routing del comando di continuare a indirizzare il messaggio corrente alla catena di gestori.|
|[ICommandUI:: Enabled](#enabled)|Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando.|
|[ICommandUI:: ID](#id)|Ottiene l'ID dell'oggetto interfaccia utente rappresentato dall'oggetto `ICommandUI`.|
|[ICommandUI:: index](#index)|Ottiene l'indice dell'oggetto dell'interfaccia utente rappresentato dall'oggetto `ICommandUI`.|
|[ICommandUI:: Radio](#radio)|Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.|
|[ICommandUI:: Text](#text)|Imposta il testo dell'elemento dell'interfaccia utente per questo comando.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia fornisce i metodi e le proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI` è simile alla [classe CCmdUI](../../mfc/reference/ccmdui-class.md), con la differenza che `ICommandUI` viene usato per le applicazioni MFC che interagiscono con i componenti .NET.

`ICommandUI` viene usato all'interno di un gestore di ON_UPDATE_COMMAND_UI in una classe derivata da [ICommandTarget](../../mfc/reference/icommandtarget-interface.md). Quando un utente di un'applicazione attiva (Seleziona o fa clic) un menu, ogni voce di menu viene visualizzata come abilitata o disabilitata. La destinazione di ogni comando di menu fornisce queste informazioni implementando un gestore ON_UPDATE_COMMAND_UI. Per ogni oggetto dell'interfaccia utente del comando nell'applicazione, usare la [creazione guidata classe](mfc-class-wizard.md) per creare una voce della mappa messaggi e un prototipo di funzione per ogni gestore.

Per altre informazioni sull'uso dell'interfaccia `ICommandUI` nel routing dei comandi, vedere [procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Per ulteriori informazioni sulla gestione dei comandi dell'interfaccia utente in MFC, vedere la [classe CCmdUI](../../mfc/reference/ccmdui-class.md).

## <a name="check"></a>ICommandUI:: check

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.
```
property UICheckState Check;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato. Impostare controlla sui valori seguenti:
- 0 deseleziona
- 1 controllo
- 2 impostare indeterminato

## <a name="continuerouting"></a>ICommandUI:: ContinueRouting

Indica al meccanismo di routing dei comandi di continuare il routing del messaggio corrente alla catena di gestori.
```
void ContinueRouting();
```

## <a name="remarks"></a>Osservazioni

Si tratta di una funzione membro avanzata da usare insieme a un gestore di ON_COMMAND_EX che restituisce FALSE. Per ulteriori informazioni, vedere la nota tecnica TN006: mappe messaggi.

## <a name="enabled"></a>ICommandUI:: Enabled

Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando.
```
property bool Enabled;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando. Impostare Enabled su TRUE per abilitare l'elemento, FALSE per disabilitarlo.

## <a name="id"></a>ICommandUI:: ID

Ottiene l'ID dell'oggetto interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int ID;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà ottiene l'ID (un handle) della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="index"></a>ICommandUI:: index

Ottiene l'indice dell'oggetto interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int Index;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà ottiene l'indice (un handle) della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="radio"></a>ICommandUI:: Radio

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.
```
property bool Radio;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato. Impostare radio su TRUE per abilitare l'elemento; in caso contrario, FALSE.

## <a name="text"></a>ICommandUI:: Text

Imposta il testo dell'elemento dell'interfaccia utente per questo comando.
```
property String^ Text;
```

## <a name="remarks"></a>Osservazioni

Questa proprietà imposta il testo dell'elemento dell'interfaccia utente per questo comando. Imposta il testo su un handle di stringa di testo.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="see-also"></a>Vedere anche

[Classe CCmdUI](../../mfc/reference/ccmdui-class.md)
