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
ms.openlocfilehash: 11be0eba080085c507ed718ea23219ca1c93aeba
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57294746"
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

## <a name="remarks"></a>Note

Nessun ulteriore qualificazione è necessaria o possibile. Le eccezioni di memoria vengono generate automaticamente da **nuovo**. Se si scrivono funzioni di memoria, utilizzo `malloc`, ad esempio, significa che sono responsabili della generazione di eccezioni di memoria.

Per ulteriori informazioni sul `CMemoryException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CMemoryException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="cmemoryexception"></a>  CMemoryException::CMemoryException

Costruisce un oggetto `CMemoryException`.

```
CMemoryException();
```

### <a name="remarks"></a>Note

Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). Questa funzione globale può avere esito positivo in una situazione di memoria insufficiente poiché costruisce l'oggetto eccezione di memoria allocato in precedenza. per altre informazioni sull'elaborazione delle eccezioni, vedere l'articolo [eccezioni](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico della gerarchia](../hierarchy-chart.md)
