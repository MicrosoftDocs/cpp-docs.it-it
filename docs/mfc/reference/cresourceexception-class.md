---
description: 'Altre informazioni su: classe CResourceException'
title: Classe CResourceException
ms.date: 11/04/2016
f1_keywords:
- CResourceException
- AFXWIN/CResourceException
- AFXWIN/CResourceException::CResourceException
helpviewer_keywords:
- CResourceException [MFC], CResourceException
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
ms.openlocfilehash: c76635ae2cfa6c55bf54da7e73f6afbb44506fee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264869"
---
# <a name="cresourceexception-class"></a>Classe CResourceException

Generato quando Windows non trova o alloca una risorsa richiesta.

## <a name="syntax"></a>Sintassi

```
class CResourceException : public CSimpleException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CResourceException:: CResourceException](#cresourceexception)|Costruisce un oggetto `CResourceException`.|

## <a name="remarks"></a>Commenti

Non sono necessarie ulteriori qualifiche o possibili.

Per ulteriori informazioni sull'utilizzo di `CResourceException` , vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CResourceException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cresourceexceptioncresourceexception"></a><a name="cresourceexception"></a> CResourceException:: CResourceException

Costruisce un oggetto `CResourceException`.

```
CResourceException();
```

### <a name="remarks"></a>Commenti

Non usare direttamente questo costruttore, bensì chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). Per ulteriori informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedi anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
