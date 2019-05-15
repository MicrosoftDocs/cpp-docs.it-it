---
title: Accesso alla libreria dei tipi
ms.date: 11/04/2016
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
ms.openlocfilehash: 23d4675bd3638d2effd1b967f0729f9e70dac6de
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611540"
---
# <a name="type-library-access"></a>Accesso alla libreria dei tipi

Librerie dei tipi espongono le interfacce di un controllo OLE ad altre applicazioni compatibili con OLE. Ogni controllo OLE deve avere una libreria dei tipi se una o più interfacce devono essere esposti.

Le macro seguenti consentono un controllo OLE fornire l'accesso per la propria libreria dei tipi:

### <a name="type-library-access"></a>Accesso alla libreria dei tipi

|||
|-|-|
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Dichiara un `GetTypeLib` funzione membro di un controllo OLE (deve essere usato nella dichiarazione di classe).|
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implementa un `GetTypeLib` funzione membro di un controllo OLE (che sarà utilizzata nell'implementazione della classe).|

##  <a name="declare_oletypelib"></a>  DECLARE_OLETYPELIB

Dichiara il `GetTypeLib` funzione membro di classe del controllo.

```
DECLARE_OLETYPELIB(class_name)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome della classe del controllo correlata alla libreria dei tipi.

### <a name="remarks"></a>Note

Usare questa macro in file di intestazione classe del controllo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="implement_oletypelib"></a>  IMPLEMENT_OLETYPELIB

Implementa il controllo `GetTypeLib` funzione membro.

```
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Il nome della classe del controllo correlata alla libreria dei tipi.

*tlid*<br/>
Il numero di ID della libreria dei tipi.

*wVerMajor*<br/>
Il numero di versione principale della libreria di tipo.

*wVerMinor*<br/>
Il numero di versione secondaria della libreria di tipo.

### <a name="remarks"></a>Note

Questa macro deve essere presente nel file di implementazione per qualsiasi classe di controllo che usa declare_oletypelib (macro).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
