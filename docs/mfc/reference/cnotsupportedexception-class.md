---
title: Classe CNotSupportedException
ms.date: 11/04/2016
f1_keywords:
- CNotSupportedException
- AFX/CNotSupportedException
- AFX/CNotSupportedException::CNotSupportedException
helpviewer_keywords:
- CNotSupportedException [MFC], CNotSupportedException
ms.assetid: e517391b-eb94-4c39-ae32-87b45bf7d624
ms.openlocfilehash: c3af508cd39e277ca4ae0a9aad5e639f66edc53b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407926"
---
# <a name="cnotsupportedexception-class"></a>Classe CNotSupportedException

Rappresenta un'eccezione che è il risultato della richiesta di una funzionalità non supportata.

## <a name="syntax"></a>Sintassi

```
class CNotSupportedException : public CSimpleException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CNotSupportedException::CNotSupportedException](#cnotsupportedexception)|Costruisce un oggetto `CNotSupportedException`.|

## <a name="remarks"></a>Note

Nessun ulteriore qualificazione è necessaria o possibile.

Per altre informazioni sull'uso `CNotSupportedException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CNotSupportedException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="cnotsupportedexception"></a>  CNotSupportedException::CNotSupportedException

Costruisce un oggetto `CNotSupportedException`.

```
CNotSupportedException();
```

### <a name="remarks"></a>Note

Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowNotSupportedException](exception-processing.md#afxthrownotsupportedexception). per altre informazioni sull'elaborazione delle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico della gerarchia](../hierarchy-chart.md)
