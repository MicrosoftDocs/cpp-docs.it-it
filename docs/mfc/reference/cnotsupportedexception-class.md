---
description: 'Altre informazioni su: classe CNotSupportedException'
title: Classe CNotSupportedException
ms.date: 11/04/2016
f1_keywords:
- CNotSupportedException
- AFX/CNotSupportedException
- AFX/CNotSupportedException::CNotSupportedException
helpviewer_keywords:
- CNotSupportedException [MFC], CNotSupportedException
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
ms.openlocfilehash: 61bf729753897e1d30c5a12bc371489ba6f2d64f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331480"
---
# <a name="cnotsupportedexception-class"></a>Classe CNotSupportedException

Rappresenta un'eccezione che è il risultato della richiesta di una funzionalità non supportata.

## <a name="syntax"></a>Sintassi

```
class CNotSupportedException : public CSimpleException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CNotSupportedException:: CNotSupportedException](#cnotsupportedexception)|Costruisce un oggetto `CNotSupportedException`.|

## <a name="remarks"></a>Commenti

Non sono necessarie ulteriori qualifiche o possibili.

Per ulteriori informazioni sull'utilizzo di `CNotSupportedException` , vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CNotSupportedException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cnotsupportedexceptioncnotsupportedexception"></a><a name="cnotsupportedexception"></a> CNotSupportedException:: CNotSupportedException

Costruisce un oggetto `CNotSupportedException`.

```
CNotSupportedException();
```

### <a name="remarks"></a>Commenti

Non usare direttamente questo costruttore, bensì chiamare la funzione globale [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedi anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
