---
title: Classe CInvalidArgException
ms.date: 11/04/2016
f1_keywords:
- CInvalidArgException
- AFX/CInvalidArgException
- AFX/CInvalidArgException::CInvalidArgException
helpviewer_keywords:
- CInvalidArgException [MFC], CInvalidArgException
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
ms.openlocfilehash: b28b6e84043b85a8117694a67ff5fff13e7c786b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372371"
---
# <a name="cinvalidargexception-class"></a>Classe CInvalidArgException

Questa classe rappresenta una condizione di eccezione di argomento non valido.

## <a name="syntax"></a>Sintassi

```
class CInvalidArgException : public CSimpleException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInvalidArgException::CInvalidArgException](#cinvalidargexception)|Costruttore.|

## <a name="remarks"></a>Osservazioni

Un `CInvalidArgException` oggetto rappresenta una condizione di eccezione di argomento non valido.

Per ulteriori informazioni sulla gestione delle eccezioni, vedere l'argomento [Classe CException](../../mfc/reference/cexception-class.md) e [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CInvalidArgException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cinvalidargexceptioncinvalidargexception"></a><a name="cinvalidargexception"></a>CInvalidArgException::CInvalidArgException

Costruttore.

```
CInvalidArgException();
```

### <a name="remarks"></a>Osservazioni

Non utilizzare direttamente questo costruttore; chiamare la funzione globale **AfxThrowInvalidArgException**.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSimpleException](../../mfc/reference/csimpleexception-class.md)
