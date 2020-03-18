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
ms.openlocfilehash: a57ca6f36546a17b9a35ebea875ff01b43de1332
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445706"
---
# <a name="icommandsource-interface"></a>Interfaccia ICommandSource

Gestisce i comandi inviati da un oggetto di origine del comando a un controllo utente.

## <a name="syntax"></a>Sintassi

```
interface class ICommandSource
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICommandSource:: AddCommandHandler](#addcommandhandler)|Aggiunge un gestore di comando a un oggetto di origine del comando.|
|[ICommandSource:: AddCommandRangeHandler](#addcommandrangehandler)|Aggiunge un gruppo di gestori di comandi a un oggetto di origine del comando.|
|[ICommandSource:: AddCommandRangeUIHandler](#addcommandrangeuihandler)|Aggiunge un gruppo di gestori di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.|
|[ICommandSource:: AddCommandUIHandler](#addcommandrangeuihandler)|Aggiunge un gestore di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.|
|[ICommandSource::P ostCommand](#postcommand)|Invia un messaggio senza attendere che venga elaborato.|
|[ICommandSource:: RemoveCommandHandler](#removecommandhandler)|Rimuove un gestore comandi da un oggetto di origine comando.|
|[ICommandSource:: RemoveCommandRangeHandler](#removecommandrangehandler)|Rimuove un gruppo di gestori di comandi da un oggetto di origine comando.|
|[ICommandSource:: RemoveCommandRangeUIHandler](#removecommandrangeuihandler)|Rimuove un gruppo di gestori di messaggi del comando dell'interfaccia utente da un oggetto di origine comando.|
|[ICommandSource:: RemoveCommandUIHandler](#removecommandrangeuihandler)|Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto di origine comando.|
|[ICommandSource:: SendCommand](#sendcommand)|Invia un messaggio e attende che venga elaborato prima della restituzione.|

### <a name="remarks"></a>Osservazioni

Quando si ospita un controllo utente in una vista MFC, la [classe CWinFormsView](../../mfc/reference/cwinformsview-class.md) instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando l' [Interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md), si concede all'utente il controllo di un riferimento all'oggetto `ICommandSource`.

Vedere [procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare `ICommandTarget`.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="addcommandhandler"></a>ICommandSource:: AddCommandHandler

Aggiunge un gestore di comando a un oggetto di origine del comando.

```
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore del comando.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge il gestore di comandi cmdHandler all'oggetto di origine del comando ed esegue il mapping del gestore a cmdID.
Vedere [procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare AddCommandHandler.

## <a name="addcommandrangehandler"></a>ICommandSource:: AddCommandRangeHandler

Aggiunge un gruppo di gestori di comandi a un oggetto di origine del comando.

```
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*Da cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore di messaggi a cui vengono mappati i comandi.
### <a name="remarks"></a>Osservazioni

Questo metodo esegue il mapping di un intervallo contiguo di ID comando a un singolo gestore di messaggi e lo aggiunge all'oggetto di origine comando. Viene utilizzato per gestire un gruppo di pulsanti correlati con un solo metodo.

## <a name="addcommandrangeuihandler"></a>ICommandSource:: AddCommandRangeUIHandler

Aggiunge un gruppo di gestori di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.

```
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*Da cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore di messaggi a cui vengono mappati i comandi.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue il mapping di un intervallo contiguo di ID comando a un singolo gestore di messaggi di comando dell'interfaccia utente e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per gestire un gruppo di pulsanti correlati con un solo metodo.

## <a name="addcommanduihandler"></a>ICommandSource:: AddCommandUIHandler

Aggiunge un gestore di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.

```
void AddCommandUIHandler(
    unsigned int cmdID,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
*cmdUIHandler*<br/>
Handle per il metodo del gestore del messaggio del comando dell'interfaccia utente.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge il gestore del messaggio del comando dell'interfaccia utente cmdHandler all'oggetto di origine del comando ed esegue il mapping del gestore a cmdID.

## <a name="postcommand"></a>ICommandSource::P ostCommand

Invia un messaggio senza attendere che venga elaborato.

```
void PostCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*command*<br/>
ID del messaggio da inviare.
### <a name="remarks"></a>Osservazioni

Questo metodo invia in modo asincrono il messaggio mappato all'ID specificato dal comando. Chiama CWnd::P ostMessage per inserire il messaggio nella coda di messaggi della finestra e quindi restituisce un risultato senza attendere che la finestra corrispondente elabori il messaggio.

## <a name="removecommandhandler"></a>ICommandSource:: RemoveCommandHandler

Rimuove un gestore comandi da un oggetto di origine comando.

```
void RemoveCommandHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
### <a name="remarks"></a>Osservazioni

Questo metodo rimuove il gestore di comandi mappato a cmdID dall'oggetto di origine comando.

## <a name="removecommandrangehandler"></a>ICommandSource:: RemoveCommandRangeHandler

Rimuove un gruppo di gestori di comandi da un oggetto di origine comando.

```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*Da cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Osservazioni

Questo metodo rimuove un gruppo di gestori di messaggi, mappato agli ID di comando specificati da cmdIDMin e da cmdIDMax, dall'oggetto di origine comando.

## <a name="removecommandrangeuihandler"></a>ICommandSource:: RemoveCommandRangeUIHandler

Rimuove un gruppo di gestori di messaggi del comando dell'interfaccia utente da un oggetto di origine comando.

```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.
*Da cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Osservazioni

Questo metodo rimuove un gruppo di gestori di messaggi del comando dell'interfaccia utente, mappato agli ID di comando specificati da cmdIDMin e da cmdIDMax, dall'oggetto di origine del comando.

## <a name="removecommanduihandler"></a>ICommandSource:: RemoveCommandUIHandler

Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto di origine comando.

```
void RemoveCommandUIHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
### <a name="remarks"></a>Osservazioni

Questo metodo rimuove il gestore di messaggi del comando dell'interfaccia utente mappato a cmdID dall'oggetto di origine comando.

## <a name="sendcommand"></a>ICommandSource:: SendCommand

Invia un messaggio e attende che venga elaborato prima della restituzione.

```
void SendCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*command*<br/>
ID del messaggio da inviare.
### <a name="remarks"></a>Osservazioni

Questo metodo invia in modo sincrono il messaggio mappato all'ID specificato dal comando. Chiama CWnd:: SendMessage per inserire il messaggio nella coda di messaggi della finestra e attende che la routine della finestra abbia elaborato il messaggio prima della restituzione.
## <a name="see-also"></a>Vedere anche

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md)
