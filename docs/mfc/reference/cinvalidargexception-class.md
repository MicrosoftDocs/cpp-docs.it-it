---
description: 'Altre informazioni su: Classe CInvalidArgException'
title: Classe CInvalidArgException
ms.date: 11/04/2016
f1_keywords:
- CInvalidArgException
- AFX/CInvalidArgException
- AFX/CInvalidArgException::CInvalidArgException
helpviewer_keywords:
- CInvalidArgException [MFC], CInvalidArgException
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
ms.openlocfilehash: f68642747a81d1c45a8246f4f25abfb8b79c81d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202795"
---
# <a name="cinvalidargexception-class"></a>Classe CInvalidArgException

Questa classe rappresenta una condizione di eccezione di argomento non valido.

## <a name="syntax"></a>Sintassi

```
class CInvalidArgException : public CSimpleException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CInvalidArgException:: CInvalidArgException](#cinvalidargexception)|Costruttore.|

## <a name="remarks"></a>Commenti

Un `CInvalidArgException` oggetto rappresenta una condizione di eccezione di argomento non valido.

Per ulteriori informazioni sulla gestione delle eccezioni, vedere l'argomento relativo alla [classe CException](../../mfc/reference/cexception-class.md) e la [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CInvalidArgException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cinvalidargexceptioncinvalidargexception"></a><a name="cinvalidargexception"></a> CInvalidArgException:: CInvalidArgException

Costruttore.

```
CInvalidArgException();
```

### <a name="remarks"></a>Commenti

Non usare direttamente questo costruttore. chiamare la funzione globale **AfxThrowInvalidArgException**.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSimpleException](../../mfc/reference/csimpleexception-class.md)
