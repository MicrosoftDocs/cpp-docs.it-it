---
title: Classe CSimpleStringT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT::PCXSTR
- ATLSIMPSTR/ATL::CSimpleStringT::PXSTR
- ATLSIMPSTR/ATL::CSimpleStringT::CSimpleStringT
- ATLSIMPSTR/ATL::CSimpleStringT::Append
- ATLSIMPSTR/ATL::CSimpleStringT::AppendChar
- ATLSIMPSTR/ATL::CSimpleStringT::CopyChars
- ATLSIMPSTR/ATL::CSimpleStringT::CopyCharsOverlapped
- ATLSIMPSTR/ATL::CSimpleStringT::Empty
- ATLSIMPSTR/ATL::CSimpleStringT::FreeExtra
- ATLSIMPSTR/ATL::CSimpleStringT::GetAllocLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetAt
- ATLSIMPSTR/ATL::CSimpleStringT::GetBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::GetBufferSetLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetLength
- ATLSIMPSTR/ATL::CSimpleStringT::GetManager
- ATLSIMPSTR/ATL::CSimpleStringT::GetString
- ATLSIMPSTR/ATL::CSimpleStringT::IsEmpty
- ATLSIMPSTR/ATL::CSimpleStringT::LockBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::Preallocate
- ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBuffer
- ATLSIMPSTR/ATL::CSimpleStringT::ReleaseBufferSetLength
- ATLSIMPSTR/ATL::CSimpleStringT::SetAt
- ATLSIMPSTR/ATL::CSimpleStringT::SetManager
- ATLSIMPSTR/ATL::CSimpleStringT::SetString
- ATLSIMPSTR/ATL::CSimpleStringT::StringLength
- ATLSIMPSTR/ATL::CSimpleStringT::Truncate
- ATLSIMPSTR/ATL::CSimpleStringT::UnlockBuffer
dev_langs:
- C++
helpviewer_keywords:
- shared classes, CSimpleStringT
- strings [C++], ATL class
- CSimpleStringT class
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 0b60a7b5c58c33ed4d8be67e1de603ef5f711742
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="csimplestringt-class"></a>Classe CSimpleStringT
Questa classe rappresenta un `CSimpleStringT` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename BaseType>
class CSimpleStringT
```  
  
### <a name="parameters"></a>Parametri  
 `BaseType`  
 Il tipo di carattere della classe string. Può essere uno dei seguenti:  
  
- `char`(per stringhe di caratteri ANSI).  
  
- `wchar_t`(per stringhe di caratteri Unicode).  
  
- **TCHAR** (per le stringhe di caratteri sia ANSI e Unicode).  

## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::PCXSTR](#pcxstr)|Puntatore a una stringa costante.|  
|[CSimpleStringT::PXSTR](#pxstr)|Un puntatore a una stringa.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::CSimpleStringT](#ctor)|Costruisce `CSimpleStringT` oggetti in vari modi.|  
|[CSimpleStringT:: ~ CSimpleStringT](#dtor)|Distruttore.|  

  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::Append](#append)|Aggiunge un `CSimpleStringT` oggetto esistente `CSimpleStringT` oggetto.|  
|[CSimpleStringT::AppendChar](#appendchar)|Aggiunge un carattere a un oggetto esistente `CSimpleStringT` oggetto.|  
|[CSimpleStringT::CopyChars](#copychars)|Copia di uno o più caratteri in un'altra stringa.|  
|[CSimpleStringT::CopyCharsOverlapped](#copycharsoverlapped)|Copia di uno o più caratteri in un'altra stringa in cui si sovrappongono i buffer.|  
|[CSimpleStringT::Empty](#empty)|Forza una stringa con lunghezza pari a zero.|  
|[CSimpleStringT::FreeExtra](#freeextra)|Consente di liberare memoria aggiuntiva allocata in precedenza dall'oggetto stringa.|  
|[CSimpleStringT::GetAllocLength](#getalloclength)|Recupera la lunghezza del allocato un `CSimpleStringT` oggetto.|  
|[CSimpleStringT::GetAt](#getat)|Restituisce il carattere in una determinata posizione.|  
|[CSimpleStringT::GetBuffer](#getbuffer)|Restituisce un puntatore ai caratteri di un `CSimpleStringT`.|  
|[CSimpleStringT::GetBufferSetLength](#getbuffersetlength)|Restituisce un puntatore ai caratteri di un `CSimpleStringT`, troncato alla lunghezza specificata.|  
|[CSimpleStringT::GetLength](#getlength)|Restituisce il numero di caratteri in un `CSimpleStringT` oggetto.|  
|[CSimpleStringT::GetManager](#getmanager)|Recupera il gestore della memoria del `CSimpleStringT` oggetto.|  
|[CSimpleStringT::GetString](#getstring)|Recupera la stringa di caratteri|  
|[CSimpleStringT::IsEmpty](#isempty)|Test se un `CSimpleStringT` oggetto non contiene alcun carattere.|  
|[CSimpleStringT::LockBuffer](#lockbuffer)|Disabilita il conteggio dei riferimenti e di proteggere la stringa nel buffer.|  
|[CSimpleStringT::Preallocate](#preallocate)|Alloca una quantità specifica di memoria per il buffer di caratteri.|  
|[CSimpleStringT::ReleaseBuffer](#releasebuffer)|Restituisce il controllo del buffer restituito da `GetBuffer`.|  
|[CSimpleStringT::ReleaseBufferSetLength](#releasebuffersetlength)|Restituisce il controllo del buffer restituito da `GetBuffer`.|  
|[CSimpleStringT::SetAt](#setat)|Imposta un carattere nella posizione specificata.|  
|[CSimpleStringT::SetManager](#setmanager)|Imposta il gestore della memoria di un `CSimpleStringT` oggetto.|  
|[CSimpleStringT::SetString](#setstring)|Imposta la stringa di un `CSimpleStringT` oggetto.|  
|[CSimpleStringT::StringLength](#stringlength)|Restituisce il numero di caratteri nella stringa specificata.|  
|[CSimpleStringT::Truncate](#truncate)|Tronca la stringa di lunghezza specificata.|  
|[CSimpleStringT::UnlockBuffer](#unlockbuffer)|Consente il conteggio dei riferimenti e rilascia la stringa nel buffer.|  

### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::operator PCXSTR](#operator_pcxstr)|Si accede direttamente ai caratteri archiviati in un `CSimpleStringT` oggetto come una stringa in formato C.|  
|[CSimpleStringT::operator\[\]](#operator_at)|Restituisce il carattere in una determinata posizione, la sostituzione di operatore per `GetAt`.|  
|[+ = CSimpleStringT::operator](#operator_add_eq)|Concatena una nuova stringa alla fine di una stringa esistente.|  
|[CSimpleStringT::operator =](#operator_eq)|Assegna un nuovo valore per un `CSimpleStringT` oggetto.|  
  
### <a name="remarks"></a>Note  
 `CSimpleStringT`è la classe base per varie classi di stringa supportate da Visual C++. Fornisce il supporto minimo per la gestione della memoria dell'oggetto stringa e la manipolazione di base del buffer. Per oggetti stringa più avanzati, vedere [classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  


## <a name="append"></a>CSimpleStringT::Append
Aggiunge un `CSimpleStringT` oggetto esistente `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void Append(const CSimpleStringT& strSrc); 
void Append(PCXSTR pszSrc, int nLength); 
void Append(PCXSTR pszSrc);
```  
#### <a name="parameters"></a>Parametri  
 `strSrc`  
 Il `CSimpleStringT` oggetto da aggiungere.  
  
 `pszSrc`  
 Un puntatore a una stringa contenente i caratteri da accodare.  
  
 `nLength`  
 Numero di caratteri da accodare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiungere un oggetto esistente `CSimpleStringT` oggetto a un altro `CSimpleStringT` oggetto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::Append`.  
  
```cpp  
CSimpleString str1(pMgr), str2(pMgr);
str1.SetString(_T("Soccer is"));
str2.SetString(_T(" an elegant game"));
str1.Append(str2);
ASSERT(_tcscmp(str1, _T("Soccer is an elegant game")) == 0);
```
  
##  <a name="appendchar"></a>CSimpleStringT::AppendChar
Aggiunge un carattere a un oggetto esistente `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void AppendChar(XCHAR ch);
```  
#### <a name="parameters"></a>Parametri  
 *CAP.*  
 Il carattere da aggiungere  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per aggiungere il carattere specificato alla fine di un oggetto esistente `CSimpleStringT` oggetto.  
  
##  <a name="copychars"></a>CSimpleStringT::CopyChars  
 Copia di uno o più caratteri per un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static void CopyChars(
  XCHAR* pchDest,
  const XCHAR* pchSrc, 
  int nChars) throw();
```  
#### <a name="parameters"></a>Parametri  
 `pchDest`  
 Puntatore a una stringa di caratteri.  
  
 `pchSrc`  
 Un puntatore a una stringa contenente i caratteri da copiare.  
  
 `nChars`  
 Il numero di `pchSrc` caratteri da copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per caratteri copiati da `pchSrc` per il `pchDest` stringa.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::CopyChars`.  
  
```cpp  
CSimpleString str(_T("xxxxxxxxxxxxxxxxxxx"), 20, pMgr);
TCHAR* pszSrc = _T("Hello world!");
_tprintf_s(_T("%s\n"), str);
str.CopyChars(str.GetBuffer(), pszSrc, 12);
_tprintf_s(_T("%s\n"), str);
```
  
##  <a name="copycharsoverlapped"></a>CSimpleStringT::CopyCharsOverlapped
Copia di uno o più caratteri per un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
static void CopyCharsOverlapped(
  XCHAR* pchDest,
  const XCHAR* pchSrc,
  int nChars) throw(); 
```  
#### <a name="parameters"></a>Parametri  
 `pchDest`  
 Puntatore a una stringa di caratteri.  
  
 `pchSrc`  
 Un puntatore a una stringa contenente i caratteri da copiare.  
  
 `nChars`  
 Il numero di `pchSrc` caratteri da copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per caratteri copiati da `pchSrc` per il `pchDest` stringa. A differenza di `CopyChars`, `CopyCharsOverlapped` fornisce un metodo sicuro per la copia dal buffer di caratteri che potrebbero essere sovrapposte.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CSimpleStringT::CopyChars](#copychars), o il codice sorgente per `CSimpleStringT::SetString` (a cui si trova in atlsimpstr.h).  
  
##  <a name="ctor"></a>CSimpleStringT::CSimpleStringT  
 Costruisce un oggetto `CSimpleStringT`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
CSimpleStringT(const XCHAR* pchSrc, int nLength, IAtlStringMgr* pStringMgr); 
CSimpleStringT(PCXSTR pszSrc, IAtlStringMgr* pStringMgr); 
CSimpleStringT(const CSimpleStringT& strSrc); 
explicit CSimpleStringT(IAtlStringMgr* pStringMgr) throw(); 
```  
#### <a name="parameters"></a>Parametri  
 `strSrc`  
 Un oggetto esistente `CSimpleStringT` oggetto deve essere copiato `CSimpleStringT` oggetto.  
  
 `pchSrc`  
 Un puntatore a una matrice di caratteri di lunghezza `nLength`, terminata non null.  
  
 `pszSrc`  
 Una stringa con terminazione null deve essere copiato `CSimpleStringT` oggetto.  
  
 `nLength`  
 Un conteggio del numero di caratteri in `pch`.  
  
 `pStringMgr`  
 Un puntatore per la gestione della memoria del `CSimpleStringT` oggetto. Per ulteriori informazioni su `IAtlStringMgr` e gestione della memoria per `CSimpleStringT`, vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).  
  
### <a name="remarks"></a>Note  
 Costruisce un nuovo oggetto `CSimpleStringT`. Poiché i costruttori di copiano i dati di input in nuova risorsa di archiviazione allocato, possono comportare eccezioni di memoria.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di `CSimpleStringT::CSimpleStringT` utilizzando la libreria ATL `typedef` `CSimpleString`. `CSimpleString`è una specializzazione di modello di classe `CSimpleStringT`.  
  
```cpp  
CSimpleString s1(pMgr);
// Empty string
CSimpleString s2(_T("cat"), pMgr);
// From a C string literal

CSimpleString s3(s2);
// Copy constructor
CSimpleString s4(s2 + _T(" ") + s3);

// From a string expression
CSimpleString s5(_T("xxxxxx"), 6, pMgr);
// s5 = "xxxxxx"   
```

  
##  <a name="empty"></a>CSimpleStringT::Empty
Rende questa `CSimpleStringT` una stringa vuota dell'oggetto e libera la memoria come appropriato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void Empty() throw();  
```  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [stringhe: pulizia delle eccezioni di CString](../cstring-exception-cleanup.md).  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::Empty`.  
  
```cpp  
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());  
```  
  
##  <a name="freeextra"></a>CSimpleStringT::FreeExtra
Consente di liberare memoria aggiuntiva allocata in precedenza dalla stringa ma non è più necessario.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void FreeExtra(); 
```  
### <a name="remarks"></a>Note  
 Questo dovrebbe ridurre l'overhead di memoria utilizzato dall'oggetto stringa. Il metodo rialloca il buffer di lunghezza esatta restituita da [GetLength](#getlength).  
  
### <a name="example"></a>Esempio  
```cpp  
CAtlString basestr;
IAtlStringMgr* pMgr;

pMgr= basestr.GetManager();
ASSERT(pMgr != NULL);

// Create a CSimpleString with 28 characters
CSimpleString str(_T("Many sports are fun to play."), 28, pMgr);
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// Assigning a smaller string won't cause CSimpleString to free its 
// memory, because it assumes the string will grow again anyway.
str = _T("Soccer is best!");
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());

// This call forces CSimpleString to release the extra 
// memory it doesn't need.
str.FreeExtra();
_tprintf_s(_T("Alloc length is %d, String length is %d\n"),
   str.GetAllocLength(), str.GetLength());
```
  
### <a name="remarks"></a>Note  
 L'output di questo esempio è come segue:  
  
 `Alloc length is 1031, String length is 1024`  
  
 `Alloc length is 1031, String length is 15`  
  
 `Alloc length is 15, String length is 15`  
  
##  <a name="getalloclength"></a>CSimpleStringT::GetAllocLength  
Recupera la lunghezza del allocato un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
int GetAllocLength() const throw();  
```  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri allocato per questo oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare il numero di caratteri allocato per questo `CSimpleStringT` oggetto. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.  
  
##  <a name="getat"></a>CSimpleStringT::GetAt  
Restituisce un carattere da un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
XCHAR GetAt(int iChar) const;
```  
#### <a name="parameters"></a>Parametri  
 `iChar`  
 Indice in base zero del carattere di `CSimpleStringT` oggetto. Il `iChar` parametro deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength). In caso contrario, `GetAt` genererà un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 Un `XCHAR` che contiene il carattere in corrispondenza della posizione specificata nella stringa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per restituire il carattere specificato da `iChar`. L'indice di overload (`[]`) (operatore) è un alias conveniente per `GetAt`. Il terminatore null è indirizzabile senza generare un'eccezione utilizzando `GetAt`. Tuttavia, non viene conteggiato da `GetLength`, e il valore restituito è 0.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare `CSimpleStringT::GetAt`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(s.GetAt(2) == _T('c'));
```
  
##  <a name="getbuffer"></a>CSimpleStringT::GetBuffer  
Restituisce un puntatore al buffer di caratteri interno per il `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
PXSTR GetBuffer(int nMinBufferLength); 
PXSTR GetBuffer();
```  
#### <a name="parameters"></a>Parametri  
 `nMinBufferLength`  
 Il numero minimo di caratteri che può contenere il buffer di caratteri. Questo valore non include lo spazio per una terminazione null.  
  
 Se `nMinBufferLength` è maggiore della lunghezza del buffer corrente, `GetBuffer` Elimina definitivamente il buffer corrente, li sostituisce con un buffer di dimensione richiesta e reimposta il numero di riferimento di oggetto su zero. Se è già stato chiamato [LockBuffer](#lockbuffer) su questo buffer, si perde il blocco di buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Un `PXSTR` puntatore al buffer di caratteri (con terminazione null) dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per restituire il contenuto del buffer dei `CSimpleStringT` oggetto. L'oggetto restituito `PXSTR` non è una costante e pertanto consente la modifica diretta dei `CSimpleStringT` contenuto.  
  
 Se si utilizza il puntatore restituito da `GetBuffer` per modificare il contenuto della stringa, è necessario chiamare [ReleaseBuffer](#releasebuffer) prima di usare qualsiasi altro `CSimpleStringT` i metodi membri.  
  
 L'indirizzo restituito da `GetBuffer` potrebbe non essere valido dopo la chiamata a `ReleaseBuffer` perché aggiuntive `CSimpleStringT` operazioni possono causare il `CSimpleStringT` buffer da riallocare. Il buffer viene riallocato se non si modifica la lunghezza del `CSimpleStringT`.  
  
 La memoria del buffer viene automaticamente liberato quando il `CSimpleStringT` oggetto viene eliminato definitivamente.  
  
 Se si tiene traccia della lunghezza della stringa manualmente, è consigliabile non aggiungere il carattere di terminazione null. Tuttavia, è necessario specificare la lunghezza della stringa finale quando si rilascia il buffer con `ReleaseBuffer`. Se si aggiunge un carattere di terminazione null, è consigliabile passare -1 (impostazione predefinita) per la lunghezza. `ReleaseBuffer`quindi, determina la lunghezza del buffer.  
  
 Se è presente memoria insufficiente per soddisfare il `GetBuffer` richiesta, questo metodo genera un'eccezione CMemoryException *.  
  
### <a name="example"></a>Esempio  
```cpp  
CSimpleString s(_T("abcd"), pMgr);
LPTSTR pBuffer = s.GetBuffer(10);
int sizeOfBuffer = s.GetAllocLength();

// Directly access CSimpleString buffer
_tcscpy_s(pBuffer, sizeOfBuffer, _T("Hello"));
ASSERT(_tcscmp(s, _T("Hello")) == 0);
s.ReleaseBuffer();   
```
  
##  <a name="getbuffersetlength"></a>CSimpleStringT::GetBufferSetLength  
Restituisce un puntatore al buffer di caratteri interno per il `CSimpleStringT` oggetto, troncamento o l'aumento delle dimensioni la sua lunghezza, se necessario, per corrispondere esattamente alla lunghezza specificata nella `nLength`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
PXSTR GetBufferSetLength(int nLength);
```  
#### <a name="parameters"></a>Parametri  
 `nLength`  
 La dimensione esatta del `CSimpleStringT` buffer di caratteri in caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `PXSTR` puntatore al buffer di caratteri (con terminazione null) dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare una lunghezza specificata del buffer interno del `CSimpleStringT` oggetto. L'oggetto restituito `PXSTR` puntatore non è `const` e pertanto consente la modifica diretta dei `CSimpleStringT` contenuto.  
  
 Se si utilizza il puntatore restituito da [GetBufferSetLength](#getbuffersetlength) per modificare il contenuto della stringa, chiamare `ReleaseBuffer` per aggiornare lo stato interno di `CsimpleStringT` prima di usare qualsiasi altro `CSimpleStringT` metodi.  
  
 L'indirizzo restituito da `GetBufferSetLength` potrebbe non essere valido dopo la chiamata a `ReleaseBuffer` perché aggiuntive `CSimpleStringT` operazioni possono causare il `CSimpleStringT` buffer da riallocare. Il buffer non è stato riassegnato se non si modifica la lunghezza del `CSimpleStringT`.  
  
 La memoria del buffer viene automaticamente liberato quando il `CSimpleStringT` oggetto viene eliminato definitivamente.  
  
 Se si tiene traccia della lunghezza della stringa se stessi, non non aggiungere il carattere di terminazione null. È necessario specificare la lunghezza della stringa finale quando si rilascia il buffer utilizzando `ReleaseBuffer`. Se si aggiunge un carattere di terminazione null quando si chiama `ReleaseBuffer`, passare -1 (impostazione predefinita) per la lunghezza di `ReleaseBuffer`, e `ReleaseBuffer` eseguirà un `strlen` nel buffer per determinare la lunghezza.  
  
 Per ulteriori informazioni su conteggio dei riferimenti, vedere gli articoli seguenti:  
  
- [La gestione della durata degli oggetti mediante il conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms687260) in Windows SDK. 
  
- [Implementazione di conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms693431) in Windows SDK.
  
- [Le regole per la gestione dei conteggi dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms692481) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::GetBufferSetLength`.  
  
```cpp  
CSimpleString str(pMgr);
LPTSTR pstr = str.GetBufferSetLength(3);
pstr[0] = _T('C');
pstr[1] = _T('u');
pstr[2] = _T('p');

// No need for trailing zero or call to ReleaseBuffer() 
// because GetBufferSetLength() set it for us.

str += _T(" soccer is best!");
ASSERT(_tcscmp(str, _T("Cup soccer is best!")) == 0);
```
  
##  <a name="getlength"></a>CSimpleStringT::GetLength  
Restituisce il numero di caratteri di `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
int GetLength() const throw();  
```  
### <a name="return-value"></a>Valore restituito  
 Numero di caratteri nella stringa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per restituire il numero di caratteri nell'oggetto. Il conteggio non include un carattere di terminazione null.  
  
 Per set di caratteri multibyte (MBCS), `GetLength` conteggi ogni byte di caratteri; vale a dire un responsabile e itinerario di 8 bit in un carattere multibyte vengono conteggiati come due byte. Vedere [FreeExtra](#freeextra) per un esempio di chiamata a questa funzione.  
  
##  <a name="getmanager"></a>CSimpleStringT::GetManager  
Recupera il gestore della memoria del `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
IAtlStringMgr* GetManager() const throw();  
```  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il gestore della memoria per il `CSimpleStringT` oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare la memoria utilizzata dal gestore di `CSimpleStringT` oggetto. Per ulteriori informazioni per i gestori di memoria e gli oggetti stringa, vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).  
  
##  <a name="getstring"></a>CSimpleStringT::GetString
Recupera la stringa di caratteri.  
  
### <a name="syntax"></a>Sintassi  
  
```  
PCXSTR GetString() const throw();
```  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa di caratteri con terminazione null.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare la stringa di caratteri associata il `CSimpleStringT` oggetto.  
  
> [!NOTE]
>  L'oggetto restituito `PCXSTR` puntatore `const` e non consente la modifica diretta dei `CSimpleStringT` contenuto.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::GetString`.  
  
```cpp  
CSimpleString str(pMgr);
str += _T("Cup soccer is best!");
_tprintf_s(_T("%s"), str.GetString());
```
  
##  <a name="isempty"></a>CSimpleStringT::IsEmpty  
Test di un `CSimpleStringT` oggetto per la condizione vuota.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool IsEmpty() const throw();  
```  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il `CSimpleStringT` oggetto ha lunghezza 0; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare se l'oggetto contiene una stringa vuota.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::IsEmpty`.  
  
```cpp  
CSimpleString s(pMgr);
ASSERT(s.IsEmpty());
```
  
##  <a name="lockbuffer"></a>CSimpleStringT::LockBuffer  
Disabilita il conteggio dei riferimenti e di proteggere la stringa nel buffer.  
  
### <a name="syntax"></a>Sintassi  
  
```  
PXSTR LockBuffer();
```  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CSimpleStringT` oggetto o una stringa con terminazione null.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per bloccare il buffer dei `CSimpleStringT` oggetto. Chiamando `LockBuffer`, si crea una copia della stringa, con un -1 per il conteggio dei riferimenti. Quando il valore del conteggio di riferimento è -1, la stringa nel buffer viene considerata in uno stato "bloccato". Sebbene in uno stato bloccato, la stringa è protetto in due modi:  
  
-   Nessun altra stringa è possibile ottenere un riferimento ai dati nella stringa di bloccato, anche se tale stringa viene assegnato alla stringa di bloccato.  
  
-   La stringa bloccata non verrà mai fare riferimento un'altra stringa, anche se tale stringa altri viene copiata nella stringa bloccato.  
  
 Bloccando la stringa nel buffer, assicurarsi che esclusivo della stringa nel buffer rimarranno invariata.  
  
 Dopo aver completato con `LockBuffer`, chiamare [UnlockBuffer](#unlockbuffer) reimpostare il conteggio dei riferimenti su 1.  
  
> [!NOTE]
>  Se si chiama [GetBuffer](#getbuffer) su un buffer bloccato e viene impostato il `GetBuffer` parametro `nMinBufferLength` per maggiore della lunghezza del buffer corrente, si perderanno il blocco di buffer. La chiamata a `GetBuffer` Elimina definitivamente il buffer corrente e lo sostituisce con un buffer di dimensione richiesta viene reimpostato il conteggio dei riferimenti su zero.  
  
 Per ulteriori informazioni su conteggio dei riferimenti, vedere gli articoli seguenti:  
  
- [La gestione della durata degli oggetti mediante il conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms687260) in Windows SDK  
  
- [Implementazione di conteggio dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms693431) in Windows SDK  
  
- [Le regole per la gestione dei conteggi dei riferimenti](http://msdn.microsoft.com/library/windows/desktop/ms692481) in Windows SDK  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::LockBuffer`.  
  
```cpp  
CSimpleString str(_T("Hello"), pMgr);
TCHAR ch;

str.LockBuffer();
ch = str.GetAt(2);
_tprintf_s(_T("%c"), ch);
str.UnlockBuffer();
```
  
##  <a name="operator_at"></a>CSimpleStringT::operator\[\]  
Chiamare questa funzione per accedere a un singolo carattere di una matrice di caratteri.  
  
### <a name="syntax"></a>Sintassi  
  
```  
XCHAR operator[](int iChar) const;
```  
#### <a name="parameters"></a>Parametri  
 `iChar`  
 Indice in base zero di un carattere nella stringa.  
  
### <a name="remarks"></a>Note  
 L'indice di overload (`[]`) operatore restituisce un singolo carattere specificato dall'indice in base zero in `iChar`. Questo operatore è un sostituto ideale per il [GetAt](#getat) funzione membro.  
  
> [!NOTE]
>  È possibile utilizzare l'indice (`[]`) (operatore) per ottenere il valore di un carattere in un `CSimpleStringT`, ma non è possibile utilizzare per modificare il valore di un carattere in un `CSimpleStringT`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di **CSimpleStringT::operator [**.  
  
```cpp  
CSimpleString s(_T("abc"), pMgr);
ASSERT(s[1] == _T('b'));
```
  
## <a name="operator_at"></a>CSimpleStringT::operator\[\]
Chiamare questa funzione per accedere a un singolo carattere di una matrice di caratteri.  
  
### <a name="syntax"></a>Sintassi  
  
```   
XCHAR operator[](int iChar) const;
```  
  
### <a name="parameters"></a>Parametri  
 `iChar`  
 Indice in base zero di un carattere nella stringa.  
  
### <a name="remarks"></a>Note  
 L'indice di overload (`[]`) operatore restituisce un singolo carattere specificato dall'indice in base zero in `iChar`. Questo operatore è un sostituto ideale per il [GetAt](#getat) funzione membro.  
  
> [!NOTE]
>  È possibile utilizzare l'indice (`[]`) (operatore) per ottenere il valore di un carattere in un `CSimpleStringT`, ma non è possibile utilizzare per modificare il valore di un carattere in un `CSimpleStringT`.  
  
  
##  <a name="operator_add_eq"></a>+ = CSimpleStringT::operator  
Aggiunge una nuova stringa o un carattere alla fine di una stringa esistente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
CSimpleStringT& operator +=(PCXSTR pszSrc); 
CSimpleStringT& operator +=(const CSimpleStringT& strSrc); 
template<int t_nSize>  
CSimpleStringT& operator+=(const CStaticString< XCHAR, t_nSize >& strSrc); 
CSimpleStringT& operator +=(char ch); 
CSimpleStringT& operator +=(unsigned char ch); 
CSimpleStringT& operator +=(wchar_t ch);
```  
#### <a name="parameters"></a>Parametri  
 `pszSrc`  
 Un puntatore a una stringa con terminazione null.  
  
 `strSrc`  
 Un puntatore a un oggetto esistente `CSimpleStringT` oggetto.  
  
 *CAP.*  
 Il carattere da aggiungere.  
  
### <a name="remarks"></a>Note  
 L'operatore accetta un altro `CSimpleStringT` oggetto o un carattere. Si noti che la memoria che potrebbero verificarsi eccezioni quando si usa l'operatore di concatenazione perché nuova risorsa di archiviazione può essere allocato per i caratteri aggiunti a questa `CSimpleStringT` oggetto.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di **+ = CSimpleStringT::operator**.  
  
```cpp  
CSimpleString str(_T("abc"), pMgr);
ASSERT(_tcscmp((str += _T("def")), _T("abcdef")) == 0);
```
  
##  <a name="operator_eq"></a>CSimpleStringT::operator =  
Assegna un nuovo valore per un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
CSimpleStringT& operator =(PCXSTR pszSrc); 
CSimpleStringT& operator =(const CSimpleStringT& strSrc);
```  
#### <a name="parameters"></a>Parametri  
 `pszSrc`  
 Un puntatore a una stringa con terminazione null.  
  
 `strSrc`  
 Un puntatore a un oggetto esistente `CSimpleStringT` oggetto.  
  
### <a name="remarks"></a>Note  
 Se la stringa di destinazione (il lato sinistro) è sufficiente per archiviare i nuovi dati, non viene eseguita alcuna nuova allocazione di memoria. Si noti che la memoria che potrebbero verificarsi eccezioni quando si usa l'operatore di assegnazione poiché spesso viene allocata nuova archiviazione per contenere il valore risultante `CSimpleStringT` oggetto.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di **CSimpleStringT::operator =**.  
  
```cpp  
CSimpleString s1(pMgr), s2(pMgr);
// Empty CSimpleStringT objects

s1 = _T("cat");
// s1 = "cat"
ASSERT(_tcscmp(s1, _T("cat")) == 0);

s2 = s1;               // s1 and s2 each = "cat"
ASSERT(_tcscmp(s2, _T("cat")) == 0);

s1 = _T("the ") + s1;      
// Or expressions
ASSERT(_tcscmp(s1, _T("the cat")) == 0);

s1 = _T("x");
// Or just individual characters
ASSERT(_tcscmp(s1, _T("x")) == 0);
```
  
##  <a name="operator_pcxstr"></a>CSimpleStringT::operator PCXSTR  

 Si accede direttamente ai caratteri archiviati in un `CSimpleStringT` oggetto come una stringa in formato C.  
  
### <a name="syntax"></a>Sintassi  
  
```  
operator PCXSTR() const throw();
```  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati della stringa di caratteri.  
  
### <a name="remarks"></a>Note  
 Caratteri non vengono copiati; viene restituito solo un puntatore. Prestare attenzione con questo operatore. Se si modifica un `CString` oggetto dopo aver ottenuto dal puntatore ai caratteri, può causare una riallocazione di memoria che invalida il puntatore del mouse.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di **CSimpleStringT::operator PCXSTR**.  
  
```cpp  
// If the prototype of a function is known to the compiler, 
// the PCXSTR cast operator may be invoked implicitly.

CSimpleString strSports(L"Soccer is Best!", pMgr);
WCHAR sz[1024];

wcscpy_s(sz, strSports);

// If the prototype isn't known or is a va_arg prototype, 
// you must invoke the cast operator explicitly. For example, 
// the va_arg part of a call to swprintf_s() needs the cast:

swprintf_s(sz, 1024, L"I think that %s!\n", (PCWSTR)strSports);

// While the format parameter is known to be an PCXSTR and 
// therefore doesn't need the cast:

swprintf_s(sz, 1024, strSports);

// Note that some situations are ambiguous. This line will 
// put the address of the strSports object to stdout:

wcout << strSports;

// while this line will put the content of the string out:

wcout << (PCWSTR)strSports;   
``` 
  
##  <a name="pcxstr"></a>CSimpleStringT::PCXSTR
Puntatore a una stringa costante.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef ChTraitsBase< BaseType >::PCXSTR PCXSTR;    
```  
##  <a name="preallocate"></a>CSimpleStringT::Preallocate  
Alloca una quantità specifica di byte per il `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void Preallocate( int nLength);
```  
#### <a name="parameters"></a>Parametri  
 `nLength`  
 La dimensione esatta del `CSimpleStringT` buffer di caratteri in caratteri.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per allocare una determinata dimensione buffer per il `CSimpleStringT` oggetto.  
  
 `CSimpleStringT`Genera un `STATUS_NO_MEMORY` eccezione se non è in grado di allocare spazio per il buffer di caratteri. Per impostazione predefinita, viene eseguita l'allocazione di memoria da funzioni API WIN32 `HeapAlloc` o `HeapReAlloc`.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::Preallocate`.  
  
```cpp  
CSimpleString str(pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
str.Preallocate(100);
_tprintf_s(_T("Allocated length: %d\n"), str.GetAllocLength());
```
  
##  <a name="pxstr"></a>CSimpleStringT::PXSTR  
Un puntatore a una stringa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
typedef ChTraitsBase< BaseType >::PXSTR PXSTR;  
```  
##  <a name="releasebuffer"></a>CSimpleStringT::ReleaseBuffer  
Restituisce il controllo del buffer allocato da [GetBuffer](#getbuffer).  
  
### <a name="syntax"></a>Sintassi  
  
```  
void ReleaseBuffer(int nNewLength = -1);
```  
#### <a name="parameters"></a>Parametri  
 `nNewLength`  
 Nuova lunghezza della stringa in caratteri, senza contare una terminazione null. Se la stringa con terminazione null il valore predefinito-1 per impostare il `CSimpleStringT` dimensioni per la lunghezza della stringa corrente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per riallocare o liberare il buffer dell'oggetto string. Se si è certi che la stringa nel buffer è con terminazione null, è possibile omettere il `nNewLength` argomento. Se la stringa non è null terminato, utilizzare `nNewLength` per specificare la lunghezza. L'indirizzo restituito da [GetBuffer](#getbuffer) non è valido dopo la chiamata a `ReleaseBuffer` o qualsiasi altro `CSimpleStringT` operazione.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::ReleaseBuffer`.  
  
```cpp  
const int bufferSize = 1024;
CSimpleString s(_T("abc"), pMgr);
LPTSTR p = s.GetBuffer(bufferSize);
_tcscpy_s(p, bufferSize, _T("abc"));

  // use the buffer directly
ASSERT(s.GetLength() == 3);

// String length = 3
s.ReleaseBuffer();

// Surplus memory released, p is now invalid.
ASSERT(s.GetLength() == 3);

// Length still 3
```
  
##  <a name="releasebuffersetlength"></a>CSimpleStringT::ReleaseBufferSetLength

Restituisce il controllo del buffer allocato da [GetBuffer](#getbuffer).  
  
### <a name="syntax"></a>Sintassi  
  
```  
void ReleaseBufferSetLength(int nNewLength);
```  
#### <a name="parameters"></a>Parametri  
 `nNewLength`  
 La lunghezza della stringa rilasciata  
  
### <a name="remarks"></a>Note  
 Questa funzione è funzionalmente simile a [ReleaseBuffer](#releasebuffer) ad eccezione del fatto che una lunghezza valida per l'oggetto stringa deve essere passata.  
  
##  <a name="setat"></a>CSimpleStringT::SetAt  
Imposta un singolo carattere da un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void SetAt(int iChar, XCHAR ch);
```  
#### <a name="parameters"></a>Parametri  
 `iChar`  
 Indice in base zero del carattere di `CSimpleStringT` oggetto. Il `iChar` parametro deve essere maggiore o uguale a 0 e minore del valore restituito da [GetLength](#getlength).  
  
 *CAP.*  
 Il carattere di nuova.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per sovrascrivere il carattere in `iChar`. Questo metodo non comporterà l'aumento della stringa se `iChar` supera i limiti della stringa esistente.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::SetAt`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);
s.SetAt(1, _T('a'));
ASSERT(_tcscmp(s, _T("aacdef")) == 0);
``` 
  
##  <a name="setmanager"></a>CSimpleStringT::SetManager  
Specifica il gestore della memoria del `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void SetManager(IAtlStringMgr* pStringMgr);
```  
#### <a name="parameters"></a>Parametri  
 `pStringMgr`  
 Puntatore al gestore della memoria di nuovo.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per specificare una nuova memoria utilizzata dal gestore di `CSimpleStringT` oggetto. Per ulteriori informazioni per i gestori di memoria e gli oggetti stringa, vedere [gestione della memoria e CStringT](../memory-management-with-cstringt.md).  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::SetManager`.  
  
```cpp  
CSimpleString s(pMgr);
s.SetManager(pCustomMgr);
```
  
##  <a name="setstring"></a>CSimpleStringT::SetString  
Imposta la stringa di un `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void SetString(PCXSTR pszSrc, int nLength); 
void SetString(PCXSTR pszSrc);
```  
#### <a name="parameters"></a>Parametri  
 `pszSrc`  
 Un puntatore a una stringa con terminazione null.  
  
 `nLength`  
 Un conteggio del numero di caratteri in `pszSrc`.  
  
### <a name="remarks"></a>Note  
 Copiare una stringa nel `CSimpleStringT` oggetto. `SetString`sovrascrive i precedenti dati stringa nel buffer.  
  
 Entrambe le versioni di `SetString` controllare se `pszSrc` è un puntatore null e se è, genera un **E_INVALIDARG** errore.  
  
 La versione di un parametro di `SetString` prevede `pszSrc` in modo che punti a una stringa con terminazione null.  
  
 La versione di due parametri di `SetString` prevede inoltre `pszSrc` deve essere una stringa con terminazione null. Usa `nLength` come la lunghezza della stringa a meno che non viene rilevato un carattere di terminazione null prima di tutto.  
  
 La versione di due parametri di `SetString` controlla inoltre se `pszSrc` punta a una posizione nel buffer corrente in `CSimpleStringT`. In questo caso speciale, `SetString` utilizza una funzione di copia della memoria non sovrascrivere i dati della stringa al buffer di copia i dati di stringa.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::SetString`.  
  
```cpp  
CSimpleString s(_T("abcdef"), pMgr);
ASSERT(_tcscmp(s, _T("abcdef")) == 0);
s.SetString(_T("Soccer"), 6);
ASSERT(_tcscmp(s, _T("Soccer")) == 0);
```
  
##  <a name="stringlength"></a>CSimpleStringT::StringLength  
Restituisce il numero di caratteri nella stringa specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
ATL_NOINLINE static int StringLength(PCXSTR psz) throw();
```  
#### <a name="parameters"></a>Parametri  
 `psz`  
 Un puntatore a una stringa con terminazione null.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri in `psz`; senza contare una terminazione null.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il numero di caratteri nella stringa a cui puntata `psz`.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::StringLength`.  
  
```cpp  
ASSERT(CSimpleString::StringLength(_T("soccer")) == 6);
``` 
  
##  <a name="truncate"></a>CSimpleStringT::Truncate
Tronca la stringa per la nuova lunghezza.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void Truncate(int nNewLength);
```  
#### <a name="parameters"></a>Parametri  
 `nNewLength`  
 Nuova lunghezza della stringa.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per troncare il contenuto della stringa per la nuova lunghezza.  
  
> [!NOTE]
>  Questa operazione non influenza la lunghezza del buffer allocata. Per ridurre o aumentare il buffer corrente, vedere [FreeExtra](#freeextra) e [Preallocate](#preallocate).  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra l'uso di `CSimpleStringT::Truncate`.  
  
```cpp  
CSimpleString str(_T("abcdefghi"), pMgr);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
str.Truncate(4);
_tprintf_s(_T("Allocated length: %d\n"), str.GetLength());
_tprintf_s(_T("Contents: %s\n"), str);
``` 
  
##  <a name="unlockbuffer"></a>CSimpleStringT::UnlockBuffer
 Sblocca il buffer dei `CSimpleStringT` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void UnlockBuffer() throw();
```  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per reimpostare il conteggio dei riferimenti della stringa su 1.  
  
 Il `CSimpleStringT` distruttore chiama automaticamente `UnlockBuffer` per garantire che il buffer non è bloccato quando viene chiamato il distruttore. Per un esempio di questo metodo, vedere [LockBuffer](#lockbuffer).  
  
##  <a name="dtor"></a>CSimpleStringT:: ~ CSimpleStringT
Elimina un oggetto `CSimpleStringT`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
~CSimpleStringT() throw();
```  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per eliminare definitivamente il `CSimpleStringT` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
