---
title: Interfaccia ICommandTarget
ms.date: 11/04/2016
f1_keywords:
- ICommandTarget
- AFXWINFORMS/ICommandTarget
- AFXWINFORMS/ICommandTarget::Initialize
helpviewer_keywords:
- ICommandTarget interface [MFC]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
ms.openlocfilehash: 865a8a27d96f84f536e40ec5a7bbbbdd9837dfcd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356920"
---
# <a name="icommandtarget-interface"></a>Interfaccia ICommandTarget

Fornisce un controllo utente con un'interfaccia per ricevere comandi da un oggetto origine comando.

## <a name="syntax"></a>Sintassi

```
interface class ICommandTarget
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICommandTarget::Initialize](#initialize)|Inizializza l'oggetto di destinazione del comando.|

## <a name="remarks"></a>Osservazioni

Quando si ospita un controllo utente in una visualizzazione MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) indirizza i comandi e aggiornare i messaggi dell'interfaccia utente di comando al controllo utente per consentire di gestire i comandi MFC (ad esempio, voci di menu cornice e pulsanti della barra degli strumenti). Implementando `ICommandTarget`, si assegna al controllo utente un riferimento all'oggetto [ICommandSource](../../mfc/reference/icommandsource-interface.md) .

Per un esempio di utilizzo, `ICommandTarget`vedere Procedura: aggiungere il routing dei comandi al controllo Windows [Form.](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h (definita nell'assembly atlmfc.lib.mfcmifc80.dll)

## <a name="icommandtargetinitialize"></a><a name="initialize"></a>ICommandTarget::Initialize

Inizializza l'oggetto di destinazione del comando.

```
void Initialize(ICommandSource^ cmdSource);
```

### <a name="parameters"></a>Parametri

*CmdSource (informazioni in base a un*<br/>
Handle per l'oggetto origine del comando.

### <a name="remarks"></a>Osservazioni

Quando si ospita un controllo utente in una visualizzazione MFC, CWinFormsView indirizza i comandi e aggiornare i messaggi dell'interfaccia utente dei comandi al controllo utente per consentire di gestire i comandi MFC.

Questo metodo inizializza l'oggetto destinazione del comando e lo associa all'oggetto origine comando specificato cmdSource. Deve essere chiamato nell'implementazione della classe del controllo utente. Al momento dell'inizializzazione, è necessario registrare i gestori di comando con l'oggetto origine comando chiamando ICommandSource::AddCommandHandler nell'implementazione di Initialize.In initialization, you should register command handlers with the command source object by calling ICommandSource::AddCommandHandler in the Initialize implementation. Vedere procedura: aggiungere il routing dei comandi al controllo Windows Form per un esempio di come utilizzare Initialize a tale scopo.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandSource](../../mfc/reference/icommandsource-interface.md)
