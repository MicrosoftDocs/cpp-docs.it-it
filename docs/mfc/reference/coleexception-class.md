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
ms.openlocfilehash: 737c9e669990f4de6ae18cdc7662c131ad61516f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375003"
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
|[COleException::Process](#process)|Converte un'eccezione intercettata in un codice restituito OLE.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleException::m_sc](#m_sc)|Contiene il codice di stato che indica il motivo dell'eccezione.|

## <a name="remarks"></a>Osservazioni

La `COleException` classe include un membro dati pubblico che contiene il codice di stato che indica il motivo dell'eccezione.

In generale, non è `COleException` necessario creare direttamente un oggetto; chiamare [afxThrowOleException](exception-processing.md#afxthrowoleexception).

Per ulteriori informazioni sulle eccezioni, vedere gli articoli [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [Eccezioni: eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`COleException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coleexceptionm_sc"></a><a name="m_sc"></a>COleException::m_sc

Questo membro dati contiene il codice di stato OLE che indica il motivo dell'eccezione.

```
SCODE m_sc;
```

### <a name="remarks"></a>Osservazioni

Il valore di questa variabile è impostato da [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Per ulteriori informazioni su SCODE, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#22](../../mfc/codesnippet/cpp/coleexception-class_1.cpp)]

## <a name="coleexceptionprocess"></a><a name="process"></a>COleException::Process

Chiamare il **Process** funzione membro per convertire un'eccezione intercettata in un codice di stato OLE.

```
static SCODE PASCAL Process(const CException* pAnyException);
```

### <a name="parameters"></a>Parametri

*pAnyException (eccezione)*<br/>
Puntatore a un'eccezione intercettata.

### <a name="return-value"></a>Valore restituito

Un codice di stato OLE.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questa funzione è **statica.**

Per ulteriori informazioni su SCODE, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="see-also"></a>Vedere anche

[Esempio MFC CALCDRIV](../../overview/visual-cpp-samples.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
