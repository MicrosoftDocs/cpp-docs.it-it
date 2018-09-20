---
title: Interfaccia ICommandSource | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- ICommandSource interface [MFC]
ms.assetid: a4b1f698-c09f-4ba8-9b13-0e74a0a4967e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5071f2c6f00b3cc4aaf09974a01c4601d0078e42
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377963"
---
# <a name="icommandsource-interface"></a>Interfaccia ICommandSource

Gestisce i comandi inviati da un oggetto di origine del comando a un controllo utente.

## <a name="syntax"></a>Sintassi

```
interface class ICommandSource
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICommandSource::AddCommandHandler](#addcommandhandler)|Aggiunge un gestore di comandi a un oggetto di origine comando.|
|[ICommandSource::AddCommandRangeHandler](#addcommandrangehandler)|Aggiunge un gruppo di gestori di comandi a un oggetto di origine del comando.|
|[ICommandSource::AddCommandRangeUIHandler](#addcommandrangeuihandler)|Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto di origine del comando.|
|[ICommandSource::AddCommandUIHandler](#addcommandrangeuihandler)|Aggiunge un gestore di messaggi comandi dell'interfaccia utente a un oggetto di origine comando.|
|[ICommandSource::PostCommand](#postcommand)|Invia un messaggio senza attendere che venga elaborato.|
|[ICommandSource::RemoveCommandHandler](#removecommandhandler)|Rimuove un gestore di comandi da un oggetto di origine del comando.|
|[ICommandSource::RemoveCommandRangeHandler](#removecommandrangehandler)|Rimuove un gruppo di gestori di comandi da un oggetto di origine del comando.|
|[ICommandSource::RemoveCommandRangeUIHandler](#removecommandrangeuihandler)|Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto di origine del comando.|
|[ICommandSource::RemoveCommandUIHandler](#removecommandrangeuihandler)|Rimuove un gestore di messaggi comandi dell'interfaccia utente da un oggetto di origine del comando.|
|[ICommandSource::SendCommand](#sendcommand)|Invia un messaggio e attende che venga elaborato prima della restituzione.|

### <a name="remarks"></a>Note

Quando si ospita un controllo utente in una visualizzazione, MFC [classe CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente in modo che possa gestire i comandi MFC (ad esempio, voci di menu della cornice e i pulsanti della barra degli strumenti). Implementando [interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md), il controllo utente fornire un riferimento al `ICommandSource` oggetto.

Visualizzare [procedura: aggiungere Routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare `ICommandTarget`.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="addcommandhandler"></a>  ICommandSource::AddCommandHandler

Aggiunge un gestore di comandi a un oggetto di origine comando.
```
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore comando.

### <a name="remarks"></a>Note

Questo metodo aggiunge cmdHandler il gestore comando all'oggetto di origine del comando e viene eseguito il mapping del gestore per cmdID.
Visualizzare [procedura: aggiungere Routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare AddCommandHandler.

## <a name="addcommandrangehandler"></a> ICommandSource::AddCommandRangeHandler

Aggiunge un gruppo di gestori di comandi a un oggetto di origine del comando.
```
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```
### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
L'indice di inizio dell'intervallo di ID di comando.
*cmdIDMax*<br/>
L'indice finale dell'intervallo di ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.
### <a name="remarks"></a>Note

Questo metodo esegue il mapping di un intervallo contiguo di ID di comando per un singolo gestore di messaggi e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="addcommandrangeuihandler"></a> ICommandSource::AddCommandRangeUIHandler

Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto di origine del comando.
```
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandUIHandler^ cmdUIHandler);
```
### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
L'indice di inizio dell'intervallo di ID di comando.
*cmdIDMax*<br/>
L'indice finale dell'intervallo di ID di comando.
*cmdHandler*<br/>
Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.

### <a name="remarks"></a>Note

Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un gestore di messaggi comandi dell'interfaccia utente singolo e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="addcommanduihandler"></a> ICommandSource::AddCommandUIHandler

Aggiunge un gestore di messaggi comandi dell'interfaccia utente a un oggetto di origine comando.
```
void AddCommandUIHandler(
    unsigned int cmdID,
    CommandUIHandler^ cmdUIHandler);
```
### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
*cmdUIHandler*<br/>
Handle per il metodo del gestore messaggi comandi dell'interfaccia utente.

### <a name="remarks"></a>Note

Questo metodo aggiunge l'utente interfaccia comando messaggio gestore cmdHandler all'oggetto di origine del comando e viene eseguito il mapping del gestore per cmdID.

## <a name="postcommand"></a> ICommandSource::PostCommand

Invia un messaggio senza attendere che venga elaborato.
```
void PostCommand(unsigned int command);
```
### <a name="parameters"></a>Parametri

*command*<br/>
ID comando del messaggio da pubblicare.
### <a name="remarks"></a>Note

Questo metodo viene inviato in modo asincrono il messaggio mappato all'ID specificato dal comando. Chiama CWnd::PostMessage per inserire il messaggio nella coda di messaggi della finestra e quindi restituisce senza tempi di attesa per la finestra corrispondente elaborare il messaggio.


## <a name="removecommandhandler"></a> ICommandSource::RemoveCommandHandler

Rimuove un gestore di comandi da un oggetto di origine del comando.
```
void RemoveCommandHandler(unsigned int cmdID);
```
### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
### <a name="remarks"></a>Note

Questo metodo rimuove il gestore del comando eseguito il mapping a cmdID dall'oggetto origine del comando.


## <a name="removecommandrangecommandhandler"></a> ICommandSource::RemoveCommandRangeHandler

Rimuove un gruppo di gestori di comandi da un oggetto di origine del comando.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
L'indice di inizio dell'intervallo di ID di comando.
*cmdIDMax*<br/>
L'indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Note

Questo metodo rimuove un gruppo di gestori di messaggi, mappato a specificato l'ID comando cmdIDMin e cmdIDMax, dall'oggetto origine del comando.

## <a name="removecommandrangeuihandler"></a> ICommandSource::RemoveCommandRangeUIHandler

Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto di origine del comando.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
L'indice di inizio dell'intervallo di ID di comando.
*cmdIDMax*<br/>
L'indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Note

Questo metodo rimuove un gruppo di utenti interfaccia comando gestori di messaggi, mappato a specificato l'ID comando cmdIDMin e cmdIDMax, dall'oggetto origine del comando.

## <a name="removecommanduihandler"></a> ICommandSource::RemoveCommandUIHandler

Rimuove un gestore di messaggi comandi dell'interfaccia utente da un oggetto di origine del comando.
```
void RemoveCommandUIHandler(unsigned int cmdID);
```
### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.
### <a name="remarks"></a>Note

Questo metodo rimuove il gestore di messaggi del comando dell'interfaccia utente mappato a cmdID dall'oggetto origine del comando.

## <a name="sendcommand"></a> ICommandSource::SendCommand

Invia un messaggio e attende che venga elaborato prima della restituzione.
```
void SendCommand(unsigned int command);
```
### <a name="parameters"></a>Parametri

*command*<br/>
ID comando del messaggio da inviare.
### <a name="remarks"></a>Note

Questo metodo invia in modo sincrono il messaggio mappato all'ID specificato dal comando. CWnd:: SendMessage per inserire il messaggio nella coda di messaggi della finestra chiama e attende fino a quando tale procedura della finestra ha elaborato il messaggio prima della restituzione.
## <a name="see-also"></a>Vedere anche

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md)
