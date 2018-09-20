---
title: Interfaccia ICommandTarget | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- ICommandTarget
- AFXWINFORMS/ICommandTarget
- AFXWINFORMS/ICommandTarget::Initialize
dev_langs:
- C++
helpviewer_keywords:
- ICommandTarget interface [MFC]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 95faae4de2e9fa756a4f69f231839e19019e08fd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436806"
---
# <a name="icommandtarget-interface"></a>Interfaccia ICommandTarget

Fornisce un controllo utente con un'interfaccia per la ricezione di comandi da un oggetto di origine del comando.

## <a name="syntax"></a>Sintassi

```
interface class ICommandTarget
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ICommandTarget:: Initialize](#initialize)|Inizializza l'oggetto di destinazione del comando.|

## <a name="remarks"></a>Note

Quando si ospita un controllo utente in una visualizzazione, MFC [CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente in modo che possa gestire i comandi MFC (ad esempio, voci di menu della cornice e i pulsanti della barra degli strumenti). Implementando `ICommandTarget`, il controllo utente fornire un riferimento al [ICommandSource](../../mfc/reference/icommandsource-interface.md) oggetto.

Visualizzare [procedura: aggiungere Routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come usare `ICommandTarget`.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)

##  <a name="initialize"></a> ICommandTarget:: Initialize

Inizializza l'oggetto di destinazione del comando.

```
void Initialize(ICommandSource^ cmdSource);
```

### <a name="parameters"></a>Parametri

*cmdSource*<br/>
Handle all'oggetto di origine del comando.

### <a name="remarks"></a>Note

Quando si ospita un controllo utente in una visualizzazione di MFC, CWinFormsView invia comandi e messaggi dell'interfaccia utente del comando di aggiornamento per il controllo utente in modo che possa gestire i comandi MFC.

Questo metodo inizializza l'oggetto di destinazione di comando e associa il cmdSource oggetto di origine comando specificato. Deve essere chiamato nell'implementazione della classe del controllo utente. In fase di inizializzazione, è consigliabile registrare gestori di comandi con l'oggetto di origine comando da ICommandSource::AddCommandHandler chiamante nell'implementazione di inizializzazione. Vedere Procedura: aggiungere il Routing di comandi al controllo Windows Form per un esempio di come utilizzare Initialize a tale scopo.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiungere il routing dei comandi al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)<br/>
[Interfaccia ICommandSource](../../mfc/reference/icommandsource-interface.md)



