---
title: Tipo di accesso alla libreria | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- type libraries [MFC], accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1a361c1e50945b19562082424c178a21191bd0b9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404741"
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

*CLASS_NAME*<br/>
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

*CLASS_NAME*<br/>
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
