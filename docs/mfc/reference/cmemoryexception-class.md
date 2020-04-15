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
ms.openlocfilehash: 375b4227a25ae4c18cfd263eff4c3ec13f1304e1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370000"
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
|[CMemoryException::CMemoryException](#cmemoryexception)|Costruisce un oggetto `CMemoryException`.|

## <a name="remarks"></a>Osservazioni

Non sono necessarie o possibili ulteriori qualifiche. Le eccezioni di memoria vengono generate automaticamente da **new**. Se si scrivono funzioni `malloc`di memoria personalizzate, utilizzando , ad esempio, si è responsabili della generazione di eccezioni di memoria.

Per ulteriori `CMemoryException`informazioni su , vedere l'articolo [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CMemoryException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cmemoryexceptioncmemoryexception"></a><a name="cmemoryexception"></a>CMemoryException::CMemoryException

Costruisce un oggetto `CMemoryException`.

```
CMemoryException();
```

### <a name="remarks"></a>Osservazioni

Non utilizzare questo costruttore direttamente, ma chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). questa funzione globale può avere esito positivo in una situazione di memoria insufficiente perché costruisce l'oggetto eccezione nella memoria allocata in precedenza. Per ulteriori informazioni sull'elaborazione delle [eccezioni,](../exception-handling-in-mfc.md)vedere l'articolo exceptions .

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico delle gerarchie](../hierarchy-chart.md)
