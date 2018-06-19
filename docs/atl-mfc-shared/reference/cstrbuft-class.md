---
title: Classe CStrBufT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CStrBufT
- ATLSIMPSTR/ATL::CStrBufT
- ATLSIMPSTR/ATL::CStrBufT::CStrBufT
- ATLSIMPSTR/ATL::CStrBufT::SetLength
- ATLSIMPSTR/ATL::CStrBufT::AUTO_LENGTH
- ATLSIMPSTR/ATL::CStrBufT::SET_LENGTH
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], custom memory management
- CStrBufT class
- shared classes, CStrBufT
ms.assetid: 6b50fa8f-87e8-4ed4-a229-157ce128710f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 695c3bc4c5e03f2ff6c1865f456b1ef358e3dcf4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32361358"
---
# <a name="cstrbuft-class"></a>Classe CStrBufT
Questa classe fornisce la pulizia automatica di risorsa per `GetBuffer` e `ReleaseBuffer` viene chiamato su un oggetto esistente `CStringT` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename TCharType>
class CStrBufT
```  
  
#### <a name="parameters"></a>Parametri  
 *TCharType*  
 Il tipo di carattere della `CStrBufT` classe. Può essere uno dei seguenti:  
  
- `char` (per le stringhe di caratteri ANSI)  
  
- `wchar_t` (per le stringhe di caratteri Unicode)  
  
- **TCHAR** (per le stringhe di caratteri sia ANSI e Unicode)  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`PCXSTR`|Puntatore a una stringa costante.|  
|`PXSTR`|Un puntatore a una stringa.|  
|`StringType`|Tipo stringa il cui buffer deve essere modificati da specializzazioni di questo modello di classe.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::CStrBufT](#cstrbuft)|Il costruttore per l'oggetto buffer di stringa.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::SetLength](#setlength)|Imposta la lunghezza del buffer di caratteri dell'oggetto string associato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::operator PCXSTR](#operator_pcxstr)|Recupera un **const** puntatore al buffer di caratteri dell'oggetto string associato.|  
|[CStrBufT::operator PXSTR](#operator_pxstr)|Recupera un puntatore al buffer di caratteri dell'oggetto string associato.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::AUTO_LENGTH](#auto_length)|Consente di determinare automaticamente la nuova lunghezza della stringa di versione.|  
|[CStrBufT::SET_LENGTH](#set_length)|Impostare la lunghezza dell'oggetto string in fase di GetBuffer|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata come una classe wrapper per la sostituzione delle chiamate a [GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [ReleaseBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer), o [GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) e `ReleaseBuffer`.  
  
 Progettato principalmente come una classe helper, `CStrBufT` fornisce un modo pratico per uno sviluppatore di utilizzare buffer di caratteri di un oggetto stringa senza doversi preoccupare come o quando chiamare `ReleaseBuffer`. Ciò è possibile perché l'oggetto wrapper esce dall'ambito naturalmente nel caso di un'eccezione o per più percorsi di codice in fase di chiusura. causa il distruttore di liberare la risorsa di stringa.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  
  
##  <a name="auto_length"></a>  CStrBufT::AUTO_LENGTH  
 Consente di determinare automaticamente la nuova lunghezza della stringa di versione.  
  
```
static const DWORD AUTO_LENGTH = 0x01;
```  
  
### <a name="remarks"></a>Note  
 Consente di determinare automaticamente la nuova lunghezza della stringa di versione. La stringa deve essere con terminazione null.  
  
##  <a name="cstrbuft"></a>  CStrBufT::CStrBufT  
 Costruisce un oggetto di buffer.  
  
```
CStrBufT(StringType& str, int nMinLength, DWORD dwFlags = AUTO_LENGTH) throw(...);
explicit CStrBufT(StringType& str) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 L'oggetto stringa associato con il buffer. In genere, lo sviluppatore utilizzerà typedef predefiniti indicati di **CStrBuf** ( **TCHAR** variante), **CStrBufA** ( `char` variante) e **CStrBufW**  ( `wchar_t` variante).  
  
 *nMinLength*  
 La lunghezza minima del buffer di caratteri.  
  
 `dwFlags`  
 Determina se la lunghezza della stringa viene determinata automaticamente. Può essere uno dei seguenti:  
  
- **AUTO_LENGTH** la lunghezza della stringa viene automaticamente determinato quando [CSimpleStringT::Release](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) viene chiamato. La stringa deve essere con terminazione null. Valore predefinito.  
  
- **SET_LENGTH** viene impostata quando la lunghezza della stringa [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) viene chiamato.  
  
### <a name="remarks"></a>Note  
 Crea un buffer di stringa per l'oggetto stringa associato. Durante la costruzione, [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) o [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) viene chiamato.  
  
 Si noti che il costruttore di copia è `private`.  
  
##  <a name="operator_pcxstr"></a>  CStrBufT::operator PCXSTR  
 Si accede direttamente ai caratteri archiviati nell'oggetto string associato come una stringa in formato C.  
  
```  
operator PCXSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati della stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Impossibile modificare il contenuto dell'oggetto string con l'indicatore di misura.  
  
##  <a name="operator_pxstr"></a>  CStrBufT::operator PXSTR  
 Si accede direttamente ai caratteri archiviati nell'oggetto string associato come una stringa in formato C.  
  
```
operator PXSTR() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati della stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Lo sviluppatore può modificare il contenuto dell'oggetto string con l'indicatore di misura.  
  
##  <a name="pcxstr"></a>  CStrBufT::PCXSTR  
 Puntatore a una stringa costante.  
  
```
typedef CSimpleStringT<TCharType>::PCXSTR PCXSTR;
```  
  
##  <a name="pxstr"></a>  CStrBufT::PXSTR  
 Un puntatore a una stringa.  
  
```
typedef CSimpleStringT<TCharType>::PXSTR PXSTR;
```  
  
##  <a name="set_length"></a>  CStrBufT::SET_LENGTH  
 Impostare la lunghezza dell'oggetto string in `GetBuffer` ora.  
  
```
static const DWORD SET_LENGTH = 0x02;
```  
  
### <a name="remarks"></a>Note  
 Impostare la lunghezza dell'oggetto string in fase di GetBuffer.  
  
 Determina se [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) vengono chiamati quando viene creato l'oggetto buffer di stringa.  
  
##  <a name="setlength"></a>  CStrBufT::SetLength  
 Imposta la lunghezza del buffer di caratteri.  
  
```
void SetLength(int nLength);
```  
  
### <a name="parameters"></a>Parametri  
 `nLength`  
 Nuova lunghezza del buffer di caratteri dell'oggetto string.  
  
> [!NOTE]
>  Deve essere minore o uguale alla lunghezza minima del buffer specificata nel costruttore di `CStrBufT`.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare la lunghezza della stringa rappresentata dall'oggetto buffer.  
  
##  <a name="stringtype"></a>  CStrBufT::StringType  
 Tipo stringa il cui buffer deve essere modificati da specializzazioni di questo modello di classe.  
  
```
typedef CSimpleStringT<TCharType> StringType;
```  
  
### <a name="remarks"></a>Note  
 **TCharType** è il tipo di carattere utilizzato per specializzare il modello di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


