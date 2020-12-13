---
description: 'Altre informazioni su: classe CMemoryException'
title: Classe CMemoryException
ms.date: 11/04/2016
f1_keywords:
- CMemoryException
- AFX/CMemoryException
- AFX/CMemoryException::CMemoryException
helpviewer_keywords:
- CMemoryException [MFC], CMemoryException
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
ms.openlocfilehash: 694629d65c8b4cffc351873d5da3d8ed3c34cf8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336650"
---
# <a name="cmemoryexception-class"></a>Classe CMemoryException

Rappresenta una condizione di eccezione di memoria insufficiente.

## <a name="syntax"></a>Sintassi

```
class CMemoryException : public CSimpleException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMemoryException:: CMemoryException](#cmemoryexception)|Costruisce un oggetto `CMemoryException`.|

## <a name="remarks"></a>Commenti

Non sono necessarie ulteriori qualifiche o possibili. Le eccezioni di memoria vengono generate automaticamente da **`new`** . Se si scrivono funzioni di memoria personalizzate usando `malloc` , ad esempio, si è responsabili della generazione di eccezioni di memoria.

Per ulteriori informazioni su `CMemoryException` , vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CMemoryException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cmemoryexceptioncmemoryexception"></a><a name="cmemoryexception"></a> CMemoryException:: CMemoryException

Costruisce un oggetto `CMemoryException`.

```
CMemoryException();
```

### <a name="remarks"></a>Commenti

Non usare direttamente questo costruttore, bensì chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). Questa funzione globale può avere esito positivo in una situazione di memoria insufficiente perché costruisce l'oggetto eccezione nella memoria allocata in precedenza. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere l'articolo [eccezioni](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedi anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
