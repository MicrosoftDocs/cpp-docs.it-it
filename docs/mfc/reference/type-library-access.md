---
title: Accesso alla libreria dei tipi
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
ms.openlocfilehash: d5aa92d520e2a806837ceb5208ca1262504ee02e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62309785"
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
