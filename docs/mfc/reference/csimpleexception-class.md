---
title: Classe CSimpleException
ms.date: 11/04/2016
f1_keywords:
- CSimpleException
- AFX/CSimpleException
- AFX/CSimpleException::CSimpleException
- AFX/CSimpleException::GetErrorMessage
helpviewer_keywords:
- CSimpleException [MFC], CSimpleException
- CSimpleException [MFC], GetErrorMessage
ms.assetid: be0eb8ef-e5b9-47d6-b0fb-efaff2d1e666
ms.openlocfilehash: eb94ba9e3d26b3cd910f23c3d4abb29d3b8b1cd1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318356"
---
# <a name="csimpleexception-class"></a>Classe CSimpleException

Questa classe è una classe di base per le eccezioni MFC critiche per le risorse.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CSimpleException : public CException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleException::CSimpleException](#csimpleexception)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleException::GetErrorMessage](#geterrormessage)|Testo su un errore che si è verificato.|

## <a name="remarks"></a>Osservazioni

`CSimpleException`è la classe base per le eccezioni MFC critiche per le risorse e gestisce la proprietà e l'inizializzazione di un messaggio di errore. Le classi `CSimpleException` seguenti usano come classe base:The following classes use as their base class:

|||
|-|-|
|[Classe CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|
|[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richieste per un'operazione non supportataRequests for an unsupported operation|
|[Classe CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa di Windows non trovata o non creabile|
|[Classe CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stata trovata una risorsa|
|[Classe CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Eccezione che indica un argomento non valido|

Poiché `CSimpleException` è una classe base `CSimpleException` astratta, non è possibile dichiarare direttamente un oggetto. È invece necessario dichiarare gli oggetti derivati, ad esempio quelli nella tabella precedente. Se si dichiara una classe derivata personalizzata, utilizzare le classi precedenti come modello.

Per ulteriori informazioni, vedere l'argomento [Classe CException](../../mfc/reference/cexception-class.md) e [Gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CSimpleException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="csimpleexceptioncsimpleexception"></a><a name="csimpleexception"></a>CSimpleException::CSimpleException

Costruttore.

```
CSimpleException();
explicit CSimpleException(BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*bEliminazione automatica*<br/>
Specificare TRUE se `CSimpleException` la memoria per l'oggetto è stata allocata nell'heap. In questo `CSimpleException` modo l'oggetto `Delete` da eliminare quando viene chiamata la funzione membro per eliminare l'eccezione. Specificare FALSE `CSimpleException` se l'oggetto si trova nello stack o è un oggetto globale. In questo caso, l'oggetto `CSimpleException` non `Delete` verrà eliminato quando viene chiamata la funzione membro.

### <a name="remarks"></a>Osservazioni

In genere non è mai necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione `CException`deve creare un'istanza di una classe derivata e chiamare il relativo costruttore oppure utilizzare una delle funzioni throw MFC, ad esempio [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito.

## <a name="csimpleexceptiongeterrormessage"></a><a name="geterrormessage"></a>CSimpleException::GetErrorMessage

Chiamare questa funzione membro per fornire il testo relativo a un errore che si è verificato.

```
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT  nMaxError,
    PUNIT  pnHelpContext = NULL);
```

### <a name="parameters"></a>Parametri

*Errore lpsz*<br/>
Puntatore a un buffer che riceverà un messaggio di errore.

*nMaxErrore*<br/>
Numero massimo di caratteri che il buffer può contenere, incluso il terminatore NULL.

*PnHelpContext*<br/>
Indirizzo di un UINT che riceverà l'ID di contesto della Guida. Se NULL, non verrà restituito alcun ID.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 se non è disponibile alcun testo del messaggio di errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [CException::GetErrorMessage](../../mfc/reference/cfileexception-class.md#geterrormessage).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Gestione delle eccezioni](../../mfc/exception-handling-in-mfc.md)
