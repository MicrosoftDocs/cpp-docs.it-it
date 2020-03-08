---
title: Accesso alla libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
ms.openlocfilehash: 23d4675bd3638d2effd1b967f0729f9e70dac6de
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78867033"
---
# <a name="type-library-access"></a>Accesso alla libreria dei tipi

Le librerie dei tipi espongono le interfacce di un controllo OLE ad altre applicazioni in grado di riconoscere OLE. Ogni controllo OLE deve disporre di una libreria di tipi se devono essere esposte una o più interfacce.

Le macro seguenti consentono a un controllo OLE di fornire accesso alla propria libreria dei tipi:

### <a name="type-library-access"></a>Accesso alla libreria dei tipi

|||
|-|-|
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Dichiara una funzione membro `GetTypeLib` di un controllo OLE (deve essere utilizzata nella dichiarazione di classe).|
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implementa una funzione membro `GetTypeLib` di un controllo OLE (deve essere utilizzata nell'implementazione della classe).|

##  <a name="declare_oletypelib"></a>DECLARE_OLETYPELIB

Dichiara la funzione membro `GetTypeLib` della classe del controllo.

```
DECLARE_OLETYPELIB(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo correlato alla libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Usare questa macro nel file di intestazione della classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="implement_oletypelib"></a>IMPLEMENT_OLETYPELIB

Implementa la funzione membro `GetTypeLib` del controllo.

```
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo correlato alla libreria dei tipi.

*tlid*<br/>
Numero ID della libreria dei tipi.

*wVerMajor*<br/>
Numero di versione principale della libreria dei tipi.

*wVerMinor*<br/>
Numero della versione secondaria della libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Questa macro deve essere visualizzata nel file di implementazione per qualsiasi classe del controllo che usa la macro DECLARE_OLETYPELIB.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e globali](../../mfc/reference/mfc-macros-and-globals.md)
