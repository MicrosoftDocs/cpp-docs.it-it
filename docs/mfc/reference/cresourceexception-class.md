---
title: Classe CResourceException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CResourceException
- AFXWIN/CResourceException
- AFXWIN/CResourceException::CResourceException
dev_langs:
- C++
helpviewer_keywords:
- CResourceException [MFC], CResourceException
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2e1fea7db1ef79eed2bc2678bd1e9283c71bb161
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50071862"
---
# <a name="cresourceexception-class"></a>Classe CResourceException

Generato quando Windows non trova o alloca una risorsa richiesta.

## <a name="syntax"></a>Sintassi

```
class CResourceException : public CSimpleException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CResourceException::CResourceException](#cresourceexception)|Costruisce un oggetto `CResourceException`.|

## <a name="remarks"></a>Note

Nessun ulteriore qualificazione è necessaria o possibile.

Per altre informazioni sull'uso `CResourceException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CResourceException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cresourceexception"></a>  CResourceException::CResourceException

Costruisce un oggetto `CResourceException`.

```
CResourceException();
```

### <a name="remarks"></a>Note

Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). per altre informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico della gerarchia](../hierarchy-chart.md)

