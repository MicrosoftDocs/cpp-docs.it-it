---
title: Classe CResourceException
ms.date: 11/04/2016
f1_keywords:
- CResourceException
- AFXWIN/CResourceException
- AFXWIN/CResourceException::CResourceException
helpviewer_keywords:
- CResourceException [MFC], CResourceException
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
ms.openlocfilehash: 557bfe1cc41c3dda65bd95d7d687820c0b9862b7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368322"
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

## <a name="remarks"></a>Osservazioni

Non sono necessarie o possibili ulteriori qualifiche.

Per ulteriori informazioni `CResourceException`sull'utilizzo di , vedere l'articolo [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CResourceException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cresourceexceptioncresourceexception"></a><a name="cresourceexception"></a>CResourceException::CResourceException

Costruisce un oggetto `CResourceException`.

```
CResourceException();
```

### <a name="remarks"></a>Osservazioni

Non utilizzare questo costruttore direttamente, ma chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
