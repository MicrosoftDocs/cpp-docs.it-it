---
title: Classe CResourceException
ms.date: 11/04/2016
f1_keywords:
- CResourceException
- AFXWIN/CResourceException
- AFXWIN/CResourceException::CResourceException
helpviewer_keywords:
- CResourceException [MFC], CResourceException
ms.assetid: af6ae043-d124-4bfd-b35e-7bb0db67d289
ms.openlocfilehash: b29112b4901a1fecac37aa7ae61496e874959370
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57268109"
---
# <a name="cresourceexception-class"></a>Classe CResourceException

Generato quando Windows non trova o alloca una risorsa richiesta.

## <a name="syntax"></a>Sintassi

```
class CResourceException : public CSimpleException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CResourceException::CResourceException](#cresourceexception)|Costruisce un oggetto `CResourceException`.|

## <a name="remarks"></a>Note

Nessun ulteriore qualificazione è necessaria o possibile.

Per altre informazioni sull'uso `CResourceException`, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

[CSimpleException](../../mfc/reference/csimpleexception-class.md)

`CResourceException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cresourceexception"></a>  CResourceException::CResourceException

Costruisce un oggetto `CResourceException`.

```
CResourceException();
```

### <a name="remarks"></a>Note

Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowResourceException](exception-processing.md#afxthrowresourceexception). per altre informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni in MFC](../exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classe CException](cexception-class.md)<br/>
[Grafico della gerarchia](../hierarchy-chart.md)
