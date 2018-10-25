---
title: Classe CMemoryException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMemoryException
- AFX/CMemoryException
- AFX/CMemoryException::CMemoryException
dev_langs:
- C++
helpviewer_keywords:
- CMemoryException [MFC], CMemoryException
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df664db673ee3989d689b8cf28b87cfff32a8dc7
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50076815"
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

