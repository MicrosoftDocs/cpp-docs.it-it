---
title: Accesso alla libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
ms.openlocfilehash: 1794e16489ab48d919bbd4116588fba4b74b88d9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372882"
---
# <a name="type-library-access"></a>Accesso alla libreria dei tipi

Le librerie dei tipi espongono le interfacce di un controllo OLE ad altre applicazioni oLE.Type libraries expose the interfaces of an OLE control to other OLE-aware applications. Ogni controllo OLE deve avere una libreria dei tipi se una o più interfacce devono essere esposte.

Le macro seguenti consentono a un controllo OLE di fornire l'accesso alla propria libreria dei tipi:

### <a name="type-library-access"></a>Accesso alla libreria dei tipi

|||
|-|-|
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Dichiara una `GetTypeLib` funzione membro di un controllo OLE (deve essere utilizzato nella dichiarazione di classe).|
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implementa `GetTypeLib` una funzione membro di un controllo OLE (deve essere utilizzato nell'implementazione della classe).|

## <a name="declare_oletypelib"></a><a name="declare_oletypelib"></a>DECLARE_OLETYPELIB

Dichiara la `GetTypeLib` funzione membro della classe del controllo.

```
DECLARE_OLETYPELIB(class_name)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo correlata alla libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro nel file di intestazione della classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="implement_oletypelib"></a><a name="implement_oletypelib"></a>IMPLEMENT_OLETYPELIB

Implementa la funzione `GetTypeLib` membro del controllo.

```
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe del controllo correlata alla libreria dei tipi.

*tlid*<br/>
Numero ID della libreria dei tipi.

*wVerMajor (informazioni in base alle persone*<br/>
Numero di versione principale della libreria dei tipi.

*wVerMinor (informazioni in base al ruolo minore)*<br/>
Numero di versione secondario della libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Questa macro deve essere visualizzata nel file di implementazione per qualsiasi classe di controllo che utilizza la macro DECLARE_OLETYPELIB.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
