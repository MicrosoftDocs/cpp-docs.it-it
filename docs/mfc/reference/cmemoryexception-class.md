---
title: Classe CMemoryException
ms.date: 11/04/2016
f1_keywords:
- CMemoryException
- AFX/CMemoryException
- AFX/CMemoryException::CMemoryException
helpviewer_keywords:
- CMemoryException [MFC], CMemoryException
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
ms.openlocfilehash: 71b17e777db9d6351192da7cffd075b3a64553bd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222927"
---
# <a name="cmemoryexception-class"></a>Classe CMemoryException

Rappresenta una condizione di eccezione di memoria insufficiente.

## <a name="syntax"></a>Sintassi

```
class CMemoryException : public CSimpleException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemoryException:: CMemoryException](#cmemoryexception)|Costruisce un oggetto `CMemoryException`.|

## <a name="remarks"></a>Osservazioni

Non sono necessarie ulteriori qualifiche o possibili. Le eccezioni di memoria vengono generate automaticamente da **`new`** . Se si scrivono funzioni di memoria personalizzate usando `malloc` , ad esempio, si è responsabili della generazione di eccezioni di memoria.

Per ulteriori informazioni su `CMemoryException` , vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CMemoryException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cmemoryexceptioncmemoryexception"></a><a name="cmemoryexception"></a>CMemoryException:: CMemoryException

Costruisce un oggetto `CMemoryException`.

```
CMemoryException();
```

### <a name="remarks"></a>Osservazioni

Non usare direttamente questo costruttore, bensì chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). Questa funzione globale può avere esito positivo in una situazione di memoria insufficiente perché costruisce l'oggetto eccezione nella memoria allocata in precedenza. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [eccezioni](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
