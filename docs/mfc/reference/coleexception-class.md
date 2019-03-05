---
title: Classe COleException
ms.date: 11/04/2016
f1_keywords:
- COleException
- AFXDISP/COleException
- AFXDISP/COleException::Process
- AFXDISP/COleException::m_sc
helpviewer_keywords:
- COleException [MFC], Process
- COleException [MFC], m_sc
ms.assetid: 2571e9fe-26cc-42f0-9ad9-8ad5b4311ec1
ms.openlocfilehash: 4b5dd2de2924b62dd76d7f16a494566849357de8
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300362"
---
# <a name="coleexception-class"></a>Classe COleException

Rappresenta una condizione di eccezione correlata a un'operazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleException : public CException
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleException::Process](#process)|Converte un'eccezione rilevata in un codice restituito OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleException::m_sc](#m_sc)|Contiene il codice di stato che indica il motivo dell'eccezione.|

## <a name="remarks"></a>Note

Il `COleException` classe include un membro dati pubblico che contiene il codice di stato che indica il motivo dell'eccezione.

In generale, non è necessario creare un `COleException` dell'oggetto direttamente; in alternativa, è necessario chiamare [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Per altre informazioni sulle eccezioni, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [alle eccezioni: Eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`COleException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

##  <a name="m_sc"></a>  COleException::m_sc

Questo membro dati contiene il codice di stato OLE che indica il motivo dell'eccezione.

```
SCODE m_sc;
```

### <a name="remarks"></a>Note

Valore della variabile viene impostato dal [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Per altre informazioni su SCODE, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#22](../../mfc/codesnippet/cpp/coleexception-class_1.cpp)]

##  <a name="process"></a>  COleException::Process

Chiamare il **processo** funzione membro per convertire un'eccezione rilevata in un codice di stato OLE.

```
static SCODE PASCAL Process(const CException* pAnyException);
```

### <a name="parameters"></a>Parametri

*pAnyException*<br/>
Puntatore a un'eccezione rilevata.

### <a name="return-value"></a>Valore restituito

Un codice di stato OLE.

### <a name="remarks"></a>Note

> [!NOTE]
>  Questa funzione viene **statici**.

Per altre informazioni su SCODE, vedere [Structure of COM Error Codes](/windows/desktop/com/structure-of-com-error-codes) nel SDK di Windows.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="see-also"></a>Vedere anche

[Esempio MFC CALCDRIV](../../visual-cpp-samples.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
