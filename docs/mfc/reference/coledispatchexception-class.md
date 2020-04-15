---
title: Classe COleDispatchException
ms.date: 11/04/2016
f1_keywords:
- COleDispatchException
- AFXDISP/COleDispatchException
- AFXDISP/COleDispatchException::m_dwHelpContext
- AFXDISP/COleDispatchException::m_strDescription
- AFXDISP/COleDispatchException::m_strHelpFile
- AFXDISP/COleDispatchException::m_strSource
- AFXDISP/COleDispatchException::m_wCode
helpviewer_keywords:
- COleDispatchException [MFC], m_dwHelpContext
- COleDispatchException [MFC], m_strDescription
- COleDispatchException [MFC], m_strHelpFile
- COleDispatchException [MFC], m_strSource
- COleDispatchException [MFC], m_wCode
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
ms.openlocfilehash: 4572b639b757569d8e3cfa731f99c123762f3900
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375056"
---
# <a name="coledispatchexception-class"></a>Classe COleDispatchException

Gestisce le eccezioni specifiche all'interfaccia OLE `IDispatch` che rappresentano una parte importante dell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleDispatchException : public CException
```

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDispatchException::m_dwHelpContext](#m_dwhelpcontext)|Contesto della Guida per l'errore.|
|[COleDispatchException::m_strDescription](#m_strdescription)|Descrizione dell'errore verbale.|
|[COleDispatchException::m_strHelpFile](#m_strhelpfile)|File della Guida `m_dwHelpContext`da utilizzare con .|
|[COleDispatchException::m_strSource](#m_strsource)|Applicazione che ha generato l'eccezione.|
|[COleDispatchException::m_wCode](#m_wcode)|`IDispatch`Codice di errore specifico.|

## <a name="remarks"></a>Osservazioni

Analogamente alle altre `CException` classi di `COleDispatchException` eccezione derivate dalla classe base, è possibile utilizzare con le macro THROW, THROW_LAST, TRY, CATCH, AND_CATCH e END_CATCH.

In generale, è necessario chiamare [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) per creare e generare un `COleDispatchException` oggetto.

Per ulteriori informazioni sulle eccezioni, vedere gli articoli [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) ed [Eccezioni: eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`COleDispatchException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="coledispatchexceptionm_dwhelpcontext"></a><a name="m_dwhelpcontext"></a>COleDispatchException::m_dwHelpContext

Identifica un contesto della Guida nella Guida dell'applicazione (. HLP).

```
DWORD m_dwHelpContext;
```

### <a name="remarks"></a>Osservazioni

Questo membro viene impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="coledispatchexceptionm_strdescription"></a><a name="m_strdescription"></a>COleDispatchException::m_strDescription

Contiene una descrizione dell'errore verbale, ad esempio "Disco pieno".

```
CString m_strDescription;
```

### <a name="remarks"></a>Osservazioni

Questo membro viene impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="coledispatchexceptionm_strhelpfile"></a><a name="m_strhelpfile"></a>COleDispatchException::m_strHelpFile

Il framework compila questa stringa con il nome del file della Guida dell'applicazione.

```
CString m_strHelpFile;
```

## <a name="coledispatchexceptionm_strsource"></a><a name="m_strsource"></a>COleDispatchException::m_strSource

Il framework compila questa stringa con il nome dell'applicazione che ha generato l'eccezione.

```
CString m_strSource;
```

### <a name="example"></a>Esempio

  Vedere l'esempio relativo a [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="coledispatchexceptionm_wcode"></a><a name="m_wcode"></a>COleDispatchException::m_wCode

Contiene un codice di errore specifico per l'applicazione.

```
WORD m_wCode;
```

### <a name="remarks"></a>Osservazioni

Questo membro viene impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.

## <a name="see-also"></a>Vedere anche

[Esempio MFC CALCDRIV](../../overview/visual-cpp-samples.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)<br/>
[Classe COleException](../../mfc/reference/coleexception-class.md)
