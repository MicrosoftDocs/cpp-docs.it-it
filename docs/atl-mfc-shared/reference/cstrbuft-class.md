---
title: Classe CStrBufT | Microsoft Docs
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
ms.openlocfilehash: cfe483c89345dd0920bbd2f32500679c88ebf85a
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882585"
---
# <a name="cstrbuft-class"></a>Classe CStrBufT
Questa classe fornisce la pulizia automatica delle risorse delle `GetBuffer` e `ReleaseBuffer` viene chiamato su un oggetto esistente `CStringT` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename TCharType>
class CStrBufT
```  
  
#### <a name="parameters"></a>Parametri  
 *TCharType*  
 Il tipo di carattere del `CStrBufT` classe. Può essere uno dei seguenti:  
  
- **Char** (per le stringhe di caratteri ANSI)  
  
- **wchar_t** (per le stringhe di caratteri Unicode)  
  
- TCHAR (per le stringhe di caratteri ANSI sia Unicode)  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|PCXSTR|Puntatore a una stringa costante.|  
|PXSTR|Un puntatore a una stringa.|  
|`StringType`|Il tipo di stringa il cui buffer è deve essere modificato da specializzazioni di questo modello di classe.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::CStrBufT](#cstrbuft)|Il costruttore per l'oggetto del buffer di stringa.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::SetLength](#setlength)|Imposta la lunghezza del buffer di caratteri dell'oggetto string associato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::operator PCXSTR](#operator_pcxstr)|Recupera una **const** puntatore al buffer di caratteri dell'oggetto string associato.|  
|[CStrBufT::operator PXSTR](#operator_pxstr)|Recupera un puntatore al buffer di caratteri dell'oggetto string associato.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::AUTO_LENGTH](#auto_length)|Consente di determinare automaticamente la nuova lunghezza della stringa al momento del rilascio.|  
|[CStrBufT::SET_LENGTH](#set_length)|Impostare la lunghezza dell'oggetto string in fase di GetBuffer|  
  
## <a name="remarks"></a>Note  
 Questa classe viene utilizzata come una classe wrapper per la sostituzione di chiamate a [GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [ReleaseBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer), o [GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) e `ReleaseBuffer`.  
  
 Progettato come classe helper `CStrBufT` offre un modo pratico per uno sviluppatore lavorare con il buffer di caratteri di un oggetto stringa senza preoccuparsi di come o quando chiamare `ReleaseBuffer`. Ciò è possibile perché l'oggetto wrapper esce dall'ambito ovviamente nel caso di un'eccezione o per più percorsi di codice in fase di chiusura. causa il distruttore di liberare la risorsa di tipo stringa.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  
  
##  <a name="auto_length"></a>  CStrBufT::AUTO_LENGTH  
 Consente di determinare automaticamente la nuova lunghezza della stringa al momento del rilascio.  
  
```
static const DWORD AUTO_LENGTH = 0x01;
```  
  
### <a name="remarks"></a>Note  
 Consente di determinare automaticamente la nuova lunghezza della stringa al momento del rilascio. La stringa deve essere con terminazione null.  
  
##  <a name="cstrbuft"></a>  CStrBufT::CStrBufT  
 Costruisce un oggetto del buffer.  
  
```
CStrBufT(StringType& str, int nMinLength, DWORD dwFlags = AUTO_LENGTH) throw(...);
explicit CStrBufT(StringType& str) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 *str*  
 Oggetto string associato al buffer. In genere, lo sviluppatore userà dei typedef predefiniti indicati `CStrBuf` (variant TCHAR), `CStrBufA` (**char** variant) e `CStrBufW` (**wchar_t** variante).  
  
 *nMinLength*  
 La lunghezza minima del buffer di caratteri.  
  
 *dwFlags*  
 Determina se la lunghezza della stringa viene determinata automaticamente. Può essere uno dei seguenti:  
  
- La lunghezza della stringa AUTO_LENGTH viene automaticamente determinata quando [CSimpleStringT::Release](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) viene chiamato. La stringa deve essere con terminazione null. Valore predefinito.  
  
- Viene impostata quando la lunghezza della stringa SET_LENGTH [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) viene chiamato.  
  
### <a name="remarks"></a>Note  
 Crea un buffer di stringa per l'oggetto stringa associata. Durante la costruzione [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) oppure [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) viene chiamato.  
  
 Si noti che è il costruttore di copia **privato**.  
  
##  <a name="operator_pcxstr"></a>  CStrBufT::operator PCXSTR  
 Consente di accedere direttamente caratteri archiviati nell'oggetto string associato come una stringa in formato C.  
  
```  
operator PCXSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati della stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Il contenuto dell'oggetto stringa non può essere modificato con puntatore ' this '.  
  
##  <a name="operator_pxstr"></a>  CStrBufT::operator PXSTR  
 Consente di accedere direttamente caratteri archiviati nell'oggetto string associato come una stringa in formato C.  
  
```
operator PXSTR() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati della stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Lo sviluppatore può modificare il contenuto dell'oggetto stringa a puntatore ' this '.  
  
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
 Impostare la lunghezza dell'oggetto stringa a `GetBuffer` ora.  
  
```
static const DWORD SET_LENGTH = 0x02;
```  
  
### <a name="remarks"></a>Note  
 Impostare la lunghezza dell'oggetto string in fase di GetBuffer.  
  
 Determina se [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) vengono chiamati quando viene costruito l'oggetto del buffer di stringa.  
  
##  <a name="setlength"></a>  CStrBufT::SetLength  
 Imposta la lunghezza del buffer di caratteri.  
  
```
void SetLength(int nLength);
```  
  
### <a name="parameters"></a>Parametri  
 *nLength*  
 La nuova lunghezza del buffer di caratteri dell'oggetto stringa.  
  
> [!NOTE]
>  Deve essere minore o uguale alla lunghezza minima del buffer specificata nel costruttore della `CStrBufT`.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare la lunghezza della stringa rappresentata dall'oggetto del buffer.  
  
##  <a name="stringtype"></a>  CStrBufT::StringType  
 Il tipo di stringa il cui buffer è deve essere modificato da specializzazioni di questo modello di classe.  
  
```
typedef CSimpleStringT<TCharType> StringType;
```  
  
### <a name="remarks"></a>Note  
 `TCharType` è il tipo di carattere usato per specializzare il modello di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


