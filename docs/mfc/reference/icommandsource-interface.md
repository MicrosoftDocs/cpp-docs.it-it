---
title: Interfaccia ICommandSource | Documenti Microsoft
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
ms.openlocfilehash: 5ff57ec9deea4ff8b39e572d720ad7e0fdaa15dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33373915"
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
|[ICommandSource::AddCommandHandler](#addcommandhandler)|Aggiunge un gestore del comando a un oggetto di origine del comando.|  
|[ICommandSource::AddCommandRangeHandler](#addcommandrangehandler)|Aggiunge un gruppo di gestori di comandi su un oggetto di origine del comando.|  
|[ICommandSource::AddCommandRangeUIHandler](#addcommandrangeuihandler)|Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto di origine del comando.|  
|[ICommandSource::AddCommandUIHandler](#addcommandrangeuihandler)|Aggiunge un gestore di messaggi comando dell'interfaccia utente a un oggetto di origine del comando.|  
|[ICommandSource::PostCommand](#postcommand)|Invia un messaggio senza attendere che venga elaborato.|  
|[ICommandSource::RemoveCommandHandler](#removecommandhandler)|Rimuove un gestore del comando da un oggetto di origine del comando.|  
|[ICommandSource::RemoveCommandRangeHandler](#removecommandrangehandler)|Rimuove un gruppo di gestori di comando da un oggetto di origine del comando.|  
|[ICommandSource::RemoveCommandRangeUIHandler](#removecommandrangeuihandler)|Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto di origine del comando.|  
|[ICommandSource::RemoveCommandUIHandler](#removecommandrangeuihandler)|Rimuove un gestore di messaggi comando dell'interfaccia utente da un oggetto di origine del comando.|  
|[ICommandSource::SendCommand](#sendcommand)|Invia un messaggio e attende che venga elaborato prima della restituzione.|  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [classe CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando [interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md), assegnare il controllo utente un riferimento al `ICommandSource` oggetto.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `ICommandTarget`.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
  
## <a name="addcommandhandler"></a>  ICommandSource::AddCommandHandler
Aggiunge un gestore del comando a un oggetto di origine del comando.
```
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri  
`cmdID`  
ID di comando.  
`cmdHandler`  
Handle per il metodo di gestore del comando.

### <a name="remarks"></a>Note
Questo metodo aggiunge il cmdHandler di gestore del comando all'oggetto di origine del comando e viene eseguito il mapping del gestore per cmdID.
Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare AddCommandHandler.

## <a name="addcommandrangehandler"></a> ICommandSource::AddCommandRangeHandler

Aggiunge un gruppo di gestori di comandi su un oggetto di origine del comando.
```
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```
### <a name="parameters"></a>Parametri  
`cmdIDMin`  
L'indice di inizio dell'intervallo di ID di comando.
`cmdIDMax`  
Indice finale dell'intervallo di ID di comando.
`cmdHandler`  
Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.
### <a name="remarks"></a>Note
Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un singolo gestore di messaggi e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="addcommandrangeuihandler"></a> ICommandSource::AddCommandRangeUIHandler
Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto di origine del comando.
```
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin, 
    unsigned int cmdIDMax, 
    CommandUIHandler^ cmdUIHandler);
```
### <a name="parameters"></a>Parametri  
`cmdIDMin`  
L'indice di inizio dell'intervallo di ID di comando.
`cmdIDMax`  
Indice finale dell'intervallo di ID di comando.
`cmdHandler`  
Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.

### <a name="remarks"></a>Note
Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un gestore di messaggi comando dell'interfaccia utente singolo e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.

## <a name="addcommanduihandler"></a> ICommandSource::AddCommandUIHandler
Aggiunge un gestore di messaggi comando dell'interfaccia utente a un oggetto di origine del comando.
```
void AddCommandUIHandler(
    unsigned int cmdID, 
    CommandUIHandler^ cmdUIHandler);
```
### <a name="parameters"></a>Parametri
`cmdID`  
ID di comando.  
`cmdUIHandler`  
Handle per il metodo del gestore messaggio comando dell'interfaccia utente.

### <a name="remarks"></a>Note
Questo metodo aggiunge il gestore cmdHandler di utente interfaccia comando messaggio all'oggetto di origine del comando e viene eseguito il mapping del gestore per cmdID.

## <a name="postcommand"></a> ICommandSource::PostCommand
Invia un messaggio senza attendere che venga elaborato.
```
void PostCommand(unsigned int command);
```
### <a name="parameters"></a>Parametri
`command`  
L'ID di comando del messaggio da registrare.
### <a name="remarks"></a>Note
In modo asincrono, questo metodo invia il messaggio mappato all'ID specificato dal comando. Chiama CWnd::PostMessage per inserire il messaggio nella coda di messaggi della finestra e quindi viene restituita senza aspettare per la finestra corrispondente elaborare il messaggio.


## <a name="removecommandhandler"></a> ICommandSource::RemoveCommandHandler
Rimuove un gestore del comando da un oggetto di origine del comando.
```
void RemoveCommandHandler(unsigned int cmdID);
```
### <a name="parameters"></a>Parametri
`cmdID`  
ID di comando.
### <a name="remarks"></a>Note
Questo metodo rimuove il gestore del comando eseguito il mapping a cmdID dall'oggetto di origine di comando.


## <a name="removecommandrangecommandhandler"></a> ICommandSource::RemoveCommandRangeHandler 
Rimuove un gruppo di gestori di comando da un oggetto di origine del comando.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### <a name="parameters"></a>Parametri
`cmdIDMin`  
L'indice di inizio dell'intervallo di ID di comando.
`cmdIDMax`  
Indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Note
Questo metodo rimuove un gruppo di gestori di messaggi, il mapping allo specificato ID di comando cmdIDMin e cmdIDMax, di oggetto origine del comando.

## <a name="removecommandrangeuihandler"></a> ICommandSource::RemoveCommandRangeUIHandler 
Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto di origine del comando.
```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```
### <a name="parameters"></a>Parametri
`cmdIDMin`  
L'indice di inizio dell'intervallo di ID di comando.
`cmdIDMax`  
Indice finale dell'intervallo di ID di comando.
### <a name="remarks"></a>Note
Questo metodo rimuove un gruppo di utenti interfaccia comando gestori di messaggi, il mapping allo specificato ID di comando cmdIDMin e cmdIDMax, di oggetto origine del comando.

## <a name="removecommanduihandler"></a> ICommandSource::RemoveCommandUIHandler 
Rimuove un gestore di messaggi comando dell'interfaccia utente da un oggetto di origine del comando.
```
void RemoveCommandUIHandler(unsigned int cmdID);
```
### <a name="parameters"></a>Parametri
`cmdID`  
ID di comando.
### <a name="remarks"></a>Note
Questo metodo rimuove il gestore di messaggi del comando dell'interfaccia utente mappato a cmdID dall'oggetto di origine di comando.

## <a name="sendcommand"></a> ICommandSource::SendCommand 
Invia un messaggio e attende che venga elaborato prima della restituzione.
```
void SendCommand(unsigned int command);
```
### <a name="parameters"></a>Parametri
`command`  
L'ID di comando del messaggio da inviare.
### <a name="remarks"></a>Note
In modo sincrono, questo metodo invia il messaggio mappato all'ID specificato dal comando. CWnd:: SendMessage per inserire il messaggio nella coda di messaggi della finestra chiama e attende fino a quando tale routine della finestra ha elaborato il messaggio prima della restituzione.
## <a name="see-also"></a>Vedere anche  
 [Procedura: aggiungere comandi Routing alle finestre di controllo Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [Interfaccia ICommandTarget](../../mfc/reference/icommandtarget-interface.md)
