---
title: Interfaccia ICommandSource
ms.date: 03/27/2019
f1_keywords:
- ICommandSource
- AFXWINFORMS/ICommandSource
- AFXWINFORMS/ICommandSource::AddCommandHandler
- AFXWINFORMS/ICommandSource::AddCommandRangeHandler
- AFXWINFORMS/ICommandSource::AddCommandRangeUIHandler
- AFXWINFORMS/ICommandSource::AddCommandUIHandler
- AFXWINFORMS/ICommandSource::PostCommand
- AFXWINFORMS/ICommandSource::RemoveCommandHandler
- AFXWINFORMS/ICommandSource::RemoveCommandRangeHandler
- AFXWINFORMS/ICommandSource::RemoveCommandRangeUIHandler
- AFXWINFORMS/ICommandSource::RemoveCommandUIHandler
- AFXWINFORMS/ICommandSource::SendCommand
helpviewer_keywords:
- ICommandSource interface [MFC]
ms.assetid: a4b1f698-c09f-4ba8-9b13-0e74a0a4967e
ms.openlocfilehash: 6a03c46c972f7746f39a3c5c65ca9b5509983d59
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356984"
---
# <a name="icommandsource-interface"></a>Interfaccia ICommandSource

Gestisce i comandi inviati da un oggetto origine comando a un controllo utente.

## <a name="syntax"></a>Sintassi

```cpp
interface class ICommandSource
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICommandSource::AddCommandHandlerICommandSource::AddCommandHandler](#addcommandhandler)|Aggiunge un gestore di comandi a un oggetto origine comando.|
|[ICommandSource::AddCommandRangeHandlerICommandSource::AddCommandRangeHandler](#addcommandrangehandler)|Aggiunge un gruppo di gestori di comandi a un oggetto origine comando.|
|[ICommandSource::AddCommandRangeUIHandlerICommandSource::AddCommandRangeUIHandler](#addcommandrangeuihandler)|Aggiunge un gruppo di gestori di messaggi dei comandi dell'interfaccia utente a un oggetto origine comando.|
|[ICommandSource::AddCommandUIHandlerICommandSource::AddCommandUIHandler](#addcommandrangeuihandler)|Aggiunge un gestore di messaggi di comando dell'interfaccia utente a un oggetto origine comando.|
|[ICommandSource::PostCommand](#postcommand)|Pubblica un messaggio senza attendere l'elaborazione.|
|[ICommandSource::RemoveCommandHandler](#removecommandhandler)|Rimuove un gestore di comandi da un oggetto origine comando.|
|[ICommandSource::RemoveCommandRangeHandler](#removecommandrangehandler)|Rimuove un gruppo di gestori di comandi da un oggetto origine comando.|
|[ICommandSource::RemoveCommandRangeUIHandlerICommandSource::RemoveCommandRangeUIHandler](#removecommandrangeuihandler)|Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto origine comando.|
|[ICommandSource::RemoveCommandUIHandler](#removecommandrangeuihandler)|Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto origine comando.|
|[ICommandSource::SendCommand](#sendcommand)|Invia un messaggio e attende che venga elaborato prima della restituzione.|

### <a name="remarks"></a>Osservazioni

Quando si ospita un controllo utente in una visualizzazione MFC, [CWinFormsView classe](../../mfc/reference/cwinformsview-class.md) indirizza i comandi e aggiornare i messaggi dell'interfaccia utente di comando al controllo utente per consentire di gestire i comandi MFC (ad esempio, voci di menu cornice e pulsanti della barra degli strumenti). Implementando [ICommandTarget Interface](../../mfc/reference/icommandtarget-interface.md), si assegna al `ICommandSource` controllo utente un riferimento all'oggetto.

Per un esempio di utilizzo, `ICommandTarget`vedere Procedura: aggiungere il routing dei comandi al controllo Windows [Form.](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h (definita nell'assembly atlmfc.lib.mfcmifc80.dll)

## <a name="icommandsourceaddcommandhandler"></a><a name="addcommandhandler"></a>ICommandSource::AddCommandHandlerICommandSource::AddCommandHandler

Aggiunge un gestore di comandi a un oggetto origine comando.

```cpp
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.
*CmdHandler (comando cmdHandler)*<br/>
Handle per il metodo del gestore di comando.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge il gestore di comando cmdHandler all'oggetto origine comando ed esegue il mapping del gestore a cmdID.
Vedere procedura: aggiungere il routing dei comandi al controllo Windows Form per un esempio di come utilizzare AddCommandHandler.See [How to: Add Command Routing to the Windows Forms Control](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) for an example of how to use AddCommandHandler.

## <a name="icommandsourceaddcommandrangehandler"></a><a name="addcommandrangehandler"></a>ICommandSource::AddCommandRangeHandlerICommandSource::AddCommandRangeHandler

Aggiunge un gruppo di gestori di comandi a un oggetto origine comando.

```cpp
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*comandoidMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
*CmdHandler (comando cmdHandler)*<br/>
Handle per il metodo del gestore messaggi a cui vengono mappati i comandi.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un singolo gestore di messaggi e lo aggiunge all'oggetto origine comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="icommandsourceaddcommandrangeuihandler"></a><a name="addcommandrangeuihandler"></a>ICommandSource::AddCommandRangeUIHandlerICommandSource::AddCommandRangeUIHandler

Aggiunge un gruppo di gestori di messaggi dei comandi dell'interfaccia utente a un oggetto origine comando.

```cpp
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*comandoidMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
*CmdHandler (comando cmdHandler)*<br/>
Handle per il metodo del gestore messaggi a cui vengono mappati i comandi.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un singolo gestore di messaggi del comando dell'interfaccia utente e lo aggiunge all'oggetto origine comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="icommandsourceaddcommanduihandler"></a><a name="addcommanduihandler"></a>ICommandSource::AddCommandUIHandlerICommandSource::AddCommandUIHandler

Aggiunge un gestore di messaggi di comando dell'interfaccia utente a un oggetto origine comando.

```cpp
void AddCommandUIHandler(
    unsigned int cmdID,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.
*cmdUIHandler (comando cmdUIHandler)*<br/>
Handle per il metodo del gestore dei messaggi del comando dell'interfaccia utente.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge il gestore del messaggio del comando dell'interfaccia utente cmdHandler all'oggetto origine comando ed esegue il mapping del gestore a cmdID.

## <a name="icommandsourcepostcommand"></a><a name="postcommand"></a>ICommandSource::PostCommand

Pubblica un messaggio senza attendere l'elaborazione.

```cpp
void PostCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*Comando*<br/>
ID di comando del messaggio da inviare.

### <a name="remarks"></a>Osservazioni

Questo metodo invia in modo asincrono il messaggio mappato all'ID specificato dal comando. Chiama CWnd::PostMessage per inserire il messaggio nella coda di messaggi della finestra e quindi viene restituito senza attendere che la finestra corrispondente elabori il messaggio.

## <a name="icommandsourceremovecommandhandler"></a><a name="removecommandhandler"></a>ICommandSource::RemoveCommandHandler

Rimuove un gestore di comandi da un oggetto origine comando.

```cpp
void RemoveCommandHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove il gestore di comando mappato a cmdID dall'oggetto di origine del comando.

## <a name="icommandsourceremovecommandrangehandler"></a><a name="removecommandrangehandler"></a>ICommandSource::RemoveCommandRangeHandler

Rimuove un gruppo di gestori di comandi da un oggetto origine comando.

```cpp
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*comandoidMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove un gruppo di gestori di messaggi, mappati agli ID di comando specificati da cmdIDMin e cmdIDMax, dall'oggetto origine comando.

## <a name="icommandsourceremovecommandrangeuihandler"></a><a name="removecommandrangeuihandler"></a>ICommandSource::RemoveCommandRangeUIHandlerICommandSource::RemoveCommandRangeUIHandler

Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto origine comando.

```cpp
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*comandoidMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente, mappati agli ID di comando specificati da cmdIDMin e cmdIDMax, dall'oggetto origine comando.

## <a name="icommandsourceremovecommanduihandler"></a><a name="removecommanduihandler"></a>ICommandSource::RemoveCommandUIHandler

Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto origine comando.

```cpp
void RemoveCommandUIHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID (informazioni in stato in com*<br/>
ID di comando.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove il gestore del messaggio del comando dell'interfaccia utente mappato a cmdID dall'oggetto origine del comando.

## <a name="icommandsourcesendcommand"></a><a name="sendcommand"></a>ICommandSource::SendCommand

Invia un messaggio e attende che venga elaborato prima della restituzione.

```cpp
void SendCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*Comando*<br/>
ID di comando del messaggio da inviare.

### <a name="remarks"></a>Osservazioni

Questo metodo invia in modo sincrono il messaggio mappato all'ID specificato dal comando. Chiama CWnd::SendMessage per inserire il messaggio nella coda di messaggi della finestra e attende fino a quando la routine della finestra ha elaborato il messaggio prima della restituzione.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md)
