---
description: 'Altre informazioni su: Interfaccia ICommandTarget'
title: Interfaccia ICommandTarget
ms.date: 11/04/2016
f1_keywords:
- ICommandTarget
- AFXWINFORMS/ICommandTarget
- AFXWINFORMS/ICommandTarget::Initialize
helpviewer_keywords:
- ICommandTarget interface [MFC]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
ms.openlocfilehash: 6deb11ecca94160ea19225fb955826845a4cdefa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219577"
---
# <a name="icommandtarget-interface"></a>Interfaccia ICommandTarget

Fornisce un controllo utente con un'interfaccia per ricevere comandi da un oggetto di origine comando.

## <a name="syntax"></a>Sintassi

```
interface class ICommandTarget
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ICommandTarget:: Initialize](#initialize)|Inizializza l'oggetto di destinazione del comando.|

## <a name="remarks"></a>Commenti

Quando si ospita un controllo utente in una vista MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando `ICommandTarget` , si assegna all'utente il controllo di un riferimento all'oggetto [ICommandSource](../../mfc/reference/icommandsource-interface.md) .

Vedere [procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare `ICommandTarget` .

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definita nell'assembly atlmfc\lib\mfcmifc80.dll)

## <a name="icommandtargetinitialize"></a><a name="initialize"></a> ICommandTarget:: Initialize

Inizializza l'oggetto di destinazione del comando.

```cpp
void Initialize(ICommandSource^ cmdSource);
```

### <a name="parameters"></a>Parametri

*cmdSource*<br/>
Handle per l'oggetto di origine del comando.

### <a name="remarks"></a>Commenti

Quando si ospita un controllo utente in una vista MFC, CWinFormsView instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC.

Questo metodo inizializza l'oggetto di destinazione del comando e lo associa all'oggetto di origine del comando specificato cmdSource. Deve essere chiamato nell'implementazione della classe del controllo utente. Quando si esegue l'inizializzazione, è necessario registrare i gestori dei comandi con l'oggetto di origine del comando chiamando ICommandSource:: AddCommandHandler nell'implementazione Initialize. Vedere Procedura: aggiungere il routing dei comandi al controllo Windows Forms per un esempio di come usare Initialize per eseguire questa operazione.

## <a name="see-also"></a>Vedi anche

[Procedura: aggiungere il routing dei comandi al controllo Windows Forms](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandSource](../../mfc/reference/icommandsource-interface.md)
