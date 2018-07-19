---
title: Classe CSimpleException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSimpleException
- AFX/CSimpleException
- AFX/CSimpleException::CSimpleException
- AFX/CSimpleException::GetErrorMessage
dev_langs:
- C++
helpviewer_keywords:
- CSimpleException [MFC], CSimpleException
- CSimpleException [MFC], GetErrorMessage
ms.assetid: be0eb8ef-e5b9-47d6-b0fb-efaff2d1e666
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 109801ff1dc974488abdc61e6b6fb4af4fafb1bd
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37853033"
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
|[CSimpleException::GetErrorMessage](#geterrormessage)|Fornisce il testo su un errore che si è verificato.|  
  
## <a name="remarks"></a>Note  
 `CSimpleException` è la classe base per le eccezioni MFC critiche risorse e gestisce le proprietà e l'inizializzazione di un messaggio di errore. Le classi seguenti utilizzano `CSimpleException` come classe di base:  
  
|||  
|-|-|  
|[Classe CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|  
|[Classe CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richieste per un'operazione non supportata|  
|[Classe CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorse di Windows non è stata trovata o non creabile|  
|[Classe CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica una risorsa non è stato trovato|  
|[Classe CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Eccezione che indica un argomento non valido|  
  
 In quanto `CSimpleException` è una classe base astratta, non è possibile dichiarare un `CSimpleException` direttamente l'oggetto. In alternativa, è necessario dichiarare gli oggetti derivati, ad esempio quelli nella tabella precedente. Se si dichiara una classe derivata, usare le classi precedenti come modello.  
  
 Per altre informazioni, vedere la [classe CException](../../mfc/reference/cexception-class.md) argomento e [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CSimpleException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="csimpleexception"></a>  CSimpleException::CSimpleException  
 Costruttore.  
  
```  
CSimpleException();  
explicit CSimpleException(BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *bAutoDelete*  
 Specificare TRUE se la memoria per il `CSimpleException` oggetto è stato allocato nell'heap. Ciò causerà il `CSimpleException` oggetto da eliminare quando il `Delete` funzione membro viene chiamata per eliminare l'eccezione. Specificare FALSE se il `CSimpleException` oggetto nello stack o è un oggetto globale. In questo caso, il `CSimpleException` oggetto non sarà eliminato quando il `Delete` viene chiamata la funzione membro.  
  
### <a name="remarks"></a>Note  
 In genere non è necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione deve creare un'istanza di un `CException`-classe derivata e chiamare il relativo costruttore, oppure deve usare uno dei MFC generare, ad esempio le funzioni [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito.  
  
##  <a name="geterrormessage"></a>  CSimpleException::GetErrorMessage  
 Chiamare questa funzione membro per fornire il testo su un errore che si è verificato.  
  
```  
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,
    UINT  nMaxError,
    PUNIT  pnHelpContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszError*  
 Un puntatore a un buffer che riceverà un messaggio di errore.  
  
 *nMaxError*  
 Il numero massimo di caratteri che nel buffer può contenere, tra cui il carattere di terminazione NULL.  
  
 *pnHelpContext*  
 L'indirizzo del UINT che riceverà l'ID del contesto della Guida. Se NULL, non verrà restituito alcun ID.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 se nessun errore testo del messaggio è disponibile.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [CException::GetErrorMessage](../../mfc/reference/cfileexception-class.md#geterrormessage).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Gestione delle eccezioni](../../mfc/exception-handling-in-mfc.md)



