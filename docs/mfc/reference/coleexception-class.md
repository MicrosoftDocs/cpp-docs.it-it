---
title: COleexception (classe)
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
ms.openlocfilehash: c82099d816bc8ee8c179e9d4656f474156a629a9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233197"
---
# <a name="coleexception-class"></a>COleexception (classe)

Rappresenta una condizione di eccezione correlata a un'operazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleException : public CException
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleexception::P rocess](#process)|Converte un'eccezione rilevata in un codice restituito OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleexception:: m_sc](#m_sc)|Contiene il codice di stato che indica il motivo dell'eccezione.|

## <a name="remarks"></a>Osservazioni

La `COleException` classe include un membro dati pubblico che contiene il codice di stato che indica il motivo dell'eccezione.

In generale, non è consigliabile creare `COleException` direttamente un oggetto, bensì chiamare [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Per ulteriori informazioni sulle eccezioni, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [eccezioni: eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`COleException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coleexceptionm_sc"></a><a name="m_sc"></a>COleexception:: m_sc

Questo membro dati include il codice di stato OLE che indica il motivo dell'eccezione.

```
SCODE m_sc;
```

### <a name="remarks"></a>Osservazioni

Il valore di questa variabile è impostato da [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Per ulteriori informazioni su SCODE, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#22](../../mfc/codesnippet/cpp/coleexception-class_1.cpp)]

## <a name="coleexceptionprocess"></a><a name="process"></a>COleexception::P rocess

Chiamare la funzione membro del **processo** per convertire un'eccezione rilevata in un codice di stato OLE.

```
static SCODE PASCAL Process(const CException* pAnyException);
```

### <a name="parameters"></a>Parametri

*pAnyException*<br/>
Puntatore a un'eccezione rilevata.

### <a name="return-value"></a>Valore restituito

Codice di stato OLE.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questa funzione è **`static`** .

Per ulteriori informazioni su SCODE, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes) nell'Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="see-also"></a>Vedere anche

[CALCDRIV di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
