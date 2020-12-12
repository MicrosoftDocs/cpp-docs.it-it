---
description: 'Altre informazioni su: accesso alla libreria dei tipi'
title: Accesso alla libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
ms.openlocfilehash: c855f82914e540ab13f4bc20581c041633b5bc0d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218654"
---
# <a name="type-library-access"></a>Accesso alla libreria dei tipi

Le librerie dei tipi espongono le interfacce di un controllo OLE ad altre applicazioni in grado di riconoscere OLE. Ogni controllo OLE deve disporre di una libreria di tipi se devono essere esposte una o più interfacce.

Le macro seguenti consentono a un controllo OLE di fornire accesso alla propria libreria dei tipi:

### <a name="type-library-access"></a>Accesso alla libreria dei tipi

|Nome|Description|
|-|-|
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Dichiara una `GetTypeLib` funzione membro di un controllo OLE (deve essere utilizzato nella dichiarazione di classe).|
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implementa una `GetTypeLib` funzione membro di un controllo OLE (deve essere utilizzata nell'implementazione della classe).|

## <a name="declare_oletypelib"></a><a name="declare_oletypelib"></a> DECLARE_OLETYPELIB

Dichiara la `GetTypeLib` funzione membro della classe del controllo.

```
DECLARE_OLETYPELIB(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe del controllo correlato alla libreria dei tipi.

### <a name="remarks"></a>Commenti

Usare questa macro nel file di intestazione della classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="implement_oletypelib"></a><a name="implement_oletypelib"></a> IMPLEMENT_OLETYPELIB

Implementa la `GetTypeLib` funzione membro del controllo.

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

### <a name="remarks"></a>Commenti

Questa macro deve essere visualizzata nel file di implementazione per qualsiasi classe del controllo che usa la macro DECLARE_OLETYPELIB.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
