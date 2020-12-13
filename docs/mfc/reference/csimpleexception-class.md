---
description: 'Altre informazioni su: classe CSimpleException'
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
ms.openlocfilehash: 8070604e05fa59f7fcdfef6dcaad12ab0497da9f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342818"
---
# <a name="csimpleexception-class"></a>Classe CSimpleException

Questa classe è una classe di base per le eccezioni MFC critiche per le risorse.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CSimpleException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleException:: CSimpleException](#csimpleexception)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleException:: GetErrorMessage](#geterrormessage)|Fornisce il testo relativo a un errore che si è verificato.|

## <a name="remarks"></a>Commenti

`CSimpleException` è la classe base per le eccezioni MFC critiche per le risorse e gestisce la proprietà e l'inizializzazione di un messaggio di errore. Le classi seguenti usano `CSimpleException` come classe base:

|Nome|Description|
|-|-|
|[Classe CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|
|[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richieste di un'operazione non supportata|
|[Classe CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa Windows non trovata o non creabile|
|[Classe CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stato possibile trovare una risorsa|
|[Classe CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Eccezione che indica un argomento non valido|

Poiché `CSimpleException` è una classe di base astratta, non è possibile dichiarare `CSimpleException` direttamente un oggetto. Al contrario, è necessario dichiarare oggetti derivati come quelli nella tabella precedente. Se si dichiara una classe derivata, utilizzare le classi precedenti come modello.

Per ulteriori informazioni, vedere l'argomento relativo alla [classe CException](../../mfc/reference/cexception-class.md) e la [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CSimpleException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="csimpleexceptioncsimpleexception"></a><a name="csimpleexception"></a> CSimpleException:: CSimpleException

Costruttore.

```
CSimpleException();
explicit CSimpleException(BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*bAutoDelete*<br/>
Specificare TRUE se la memoria per l' `CSimpleException` oggetto è stata allocata nell'heap. In questo modo l' `CSimpleException` oggetto verrà eliminato quando `Delete` viene chiamata la funzione membro per eliminare l'eccezione. Specificare FALSE se l' `CSimpleException` oggetto si trova nello stack o è un oggetto globale. In questo caso, l' `CSimpleException` oggetto non verrà eliminato quando `Delete` viene chiamata la funzione membro.

### <a name="remarks"></a>Commenti

Normalmente non è necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione deve creare un'istanza di una `CException` classe derivata da e chiamare il relativo costruttore oppure utilizzare una delle funzioni throw MFC, ad esempio [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito.

## <a name="csimpleexceptiongeterrormessage"></a><a name="geterrormessage"></a> CSimpleException:: GetErrorMessage

Chiamare questa funzione membro per fornire il testo relativo a un errore che si è verificato.

```
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT  nMaxError,
    PUNIT  pnHelpContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszError*<br/>
Puntatore a un buffer che riceverà un messaggio di errore.

*nMaxError*<br/>
Numero massimo di caratteri che il buffer può includere, incluso il terminatore NULL.

*pnHelpContext*<br/>
Indirizzo di un UINT che riceverà l'ID del contesto della guida. Se è NULL, non verrà restituito alcun ID.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 se non è disponibile alcun testo del messaggio di errore.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [CException:: GetErrorMessage](../../mfc/reference/cfileexception-class.md#geterrormessage).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Gestione delle eccezioni](../../mfc/exception-handling-in-mfc.md)
