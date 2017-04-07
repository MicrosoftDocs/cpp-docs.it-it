---
title: CComBSTR (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComBSTR
- ATLBASE/ATL::CComBSTR
- ATLBASE/ATL::CComBSTR::CComBSTR
- ATLBASE/ATL::CComBSTR::Append
- ATLBASE/ATL::CComBSTR::AppendBSTR
- ATLBASE/ATL::CComBSTR::AppendBytes
- ATLBASE/ATL::CComBSTR::ArrayToBSTR
- ATLBASE/ATL::CComBSTR::AssignBSTR
- ATLBASE/ATL::CComBSTR::Attach
- ATLBASE/ATL::CComBSTR::BSTRToArray
- ATLBASE/ATL::CComBSTR::ByteLength
- ATLBASE/ATL::CComBSTR::Copy
- ATLBASE/ATL::CComBSTR::CopyTo
- ATLBASE/ATL::CComBSTR::Detach
- ATLBASE/ATL::CComBSTR::Empty
- ATLBASE/ATL::CComBSTR::Length
- ATLBASE/ATL::CComBSTR::LoadString
- ATLBASE/ATL::CComBSTR::ReadFromStream
- ATLBASE/ATL::CComBSTR::ToLower
- ATLBASE/ATL::CComBSTR::ToUpper
- ATLBASE/ATL::CComBSTR::WriteToStream
- ATLBASE/ATL::CComBSTR::m_str
dev_langs:
- C++
helpviewer_keywords:
- BSTRs, wrapper
- CComBSTR class
- CComBSTR
ms.assetid: 8fea1879-a05e-47a5-a803-8dec60eaa534
caps.latest.revision: 21
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
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 4c7ab8630a4793f0363567fa00cecb8a3bc19e3b
ms.lasthandoff: 03/31/2017

---
# <a name="ccombstr-class"></a>CComBSTR (classe)
Questa classe è un wrapper per `BSTR`s.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComBSTR
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::CComBSTR](#ccombstr)|Costruttore.|  
|[CComBSTR:: ~ CComBSTR](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::Append](#append)|Aggiunge una stringa per `m_str`.|  
|[CComBSTR::AppendBSTR](#appendbstr)|Aggiunge un `BSTR` a `m_str`.|  
|[CComBSTR::AppendBytes](#appendbytes)|Aggiunge un numero specificato di byte da `m_str`.|  
|[CComBSTR::ArrayToBSTR](#arraytobstr)|Crea un `BSTR` dal primo carattere di ogni elemento safearray e lo collega al `CComBSTR` oggetto.|  
|[CComBSTR::AssignBSTR](#assignbstr)|Assegna un `BSTR` a `m_str`.|  
|[CComBSTR::Attach](#attach)|Collega un `BSTR` per il `CComBSTR` oggetto.|  
|[CComBSTR::BSTRToArray](#bstrtoarray)|Crea un safearray in base zero unidimensionale in cui ogni elemento della matrice è un carattere di `CComBSTR` oggetto.|  
|[CComBSTR::ByteLength](#bytelength)|Restituisce la lunghezza di `m_str` in byte.|  
|[CComBSTR::Copy](#copy)|Restituisce una copia di `m_str`.|  
|[CComBSTR::CopyTo](#copyto)|Restituisce una copia di `m_str` tramite un **[out]** parametro|  
|[CComBSTR::Detach](#detach)|Scollega `m_str` dal `CComBSTR` oggetto.|  
|[CComBSTR::Empty](#empty)|Libera `m_str`.|  
|[CComBSTR::Length](#length)|Restituisce la lunghezza di `m_str`.|  
|[CComBSTR::LoadString](#loadstring)|Carica una risorsa di stringa.|  
|[CComBSTR::ReadFromStream](#readfromstream)|Carica un `BSTR` oggetto da un flusso.|  
|[CComBSTR::ToLower](#tolower)|Converte la stringa in caratteri minuscoli.|  
|[CComBSTR::ToUpper](#toupper)|Converte la stringa in lettere maiuscole.|  
|[CComBSTR::WriteToStream](#writetostream)|Salva `m_str` in un flusso.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::operator BSTR](#operator_bstr)|Cast di un `CComBSTR` l'oggetto in un `BSTR`.|  
|[CComBSTR::operator!](#operator_not)|Restituisce `true` o `false`, a seconda se `m_str`è `NULL`.|  
|[CComBSTR::operator! =](#operator_neq)|Confronta un `CComBSTR` con una stringa.|  
|[CComBSTR::operator /](#operator_amp)|Restituisce l'indirizzo di `m_str`.|  
|[+ = CComBSTR::operator](#operator_add_eq)|Aggiunge un `CComBSTR` all'oggetto.|  
|[CComBSTR::operator](#operator_lt)|Confronta un `CComBSTR` con una stringa.|  
|[CComBSTR::operator =](#operator_eq)|Assegna un valore a `m_str`.|  
|[CComBSTR::operator = =](#operator_eq_eq)|Confronta un `CComBSTR` con una stringa.|  
|[CComBSTR::operator >](#operator_gt)|Confronta un `CComBSTR` con una stringa.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::m_str](#m_str)|Contiene il `BSTR` associato il `CComBSTR` oggetto.|  
  
## <a name="remarks"></a>Note  
 Il `CComBSTR` classe è un wrapper per `BSTR`s, che sono stringhe con prefisso di lunghezza. La lunghezza viene archiviata come valore integer in corrispondenza della posizione di memoria che precede i dati nella stringa.  
  
 Oggetto [BSTR](http://msdn.microsoft.com/en-us/1b2d7d2c-47af-4389-a6b6-b01b7e915228) è con terminazione null dopo l'ultimo conteggiati carattere ma può anche contenere caratteri null incorporati all'interno della stringa. La lunghezza della stringa è il numero di caratteri, non al primo carattere null.  
  
> [!NOTE]
>  La `CComBSTR` classe fornisce un numero di membri (costruttori, gli operatori di assegnazione e operatori di confronto) che accettano stringhe ANSI o Unicode come argomenti. Le versioni ANSI di queste funzioni sono meno efficienti rispetto alle relative controparti Unicode perché le stringhe Unicode temporanee vengono spesso create internamente. Per motivi di efficienza, utilizzare le versioni Unicode laddove possibile.  
  
> [!NOTE]
>  Il comportamento di ricerca migliorata implementata in Visual Studio .NET, a causa di codice, ad esempio `bstr = L"String2" + bstr;`, che è possibile che siano compilati nelle versioni precedenti, ma deve essere implementata come `bstr = CStringW(L"String2") + bstr`.  
  
 Per un elenco di avvisi quando si utilizza `CComBSTR`, vedere [programmazione con CComBSTR](../../atl/programming-with-ccombstr-atl.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="append"></a>CComBSTR::Append  
 Aggiunge uno `lpsz` o `BSTR` membro di `bstrSrc` a [m_str](#m_str).  
  
```
HRESULT Append(const CComBSTR& bstrSrc) throw();
HRESULT Append(wchar_t ch) throw();
HRESULT Append(char ch) throw();
HRESULT Append(LPCOLESTR lpsz) throw();
HRESULT Append(LPCSTR lpsz) throw();
HRESULT Append(LPCOLESTR lpsz, int nLen) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bstrSrc`  
 [in] Oggetto `CComBSTR` oggetto da accodare.  
  
 *CAP.*  
 [in] Carattere da accodare.  
  
 `lpsz`  
 [in] Una stringa di caratteri con terminazione zero da aggiungere. È possibile passare una stringa Unicode tramite il **LPCOLESTR** overload o una stringa ANSI tramite il `LPCSTR` versione.  
  
 `nLen`  
 [in] Il numero di caratteri da `lpsz` da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
### <a name="remarks"></a>Note  
 Una stringa ANSI verrà convertita in Unicode prima accodato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 32 NVC_ATL_Utilities](../../atl/codesnippet/cpp/ccombstr-class_1.cpp)]  
  
##  <a name="appendbstr"></a>CComBSTR::AppendBSTR  
 Aggiunge l'oggetto specificato `BSTR` a [m_str](#m_str).  
  
```
HRESULT AppendBSTR(BSTR p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Oggetto `BSTR` da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
### <a name="remarks"></a>Note  
 Non passare una stringa di caratteri wide normale a questo metodo. Il compilatore non è possibile rilevare l'errore e di esecuzione si verificano errori.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #33](../../atl/codesnippet/cpp/ccombstr-class_2.cpp)]  
  
##  <a name="appendbytes"></a>CComBSTR::AppendBytes  
 Aggiunge il numero specificato di byte da [m_str](#m_str) senza conversione.  
  
```
HRESULT AppendBytes(const char* lpsz, int nLen) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 [in] Puntatore a una matrice di byte da aggiungere.  
  
 `p`  
 [in] Il numero di byte da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #34](../../atl/codesnippet/cpp/ccombstr-class_3.cpp)]  
  
##  <a name="arraytobstr"></a>CComBSTR::ArrayToBSTR  
 Libera qualsiasi stringa esistente contenuta nella `CComBSTR` dell'oggetto, quindi crea un `BSTR` dal primo carattere di ogni elemento safearray e lo collega al `CComBSTR` oggetto.  
  
```
HRESULT ArrayToBSTR(const SAFEARRAY* pSrc) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pSrc`  
 [in] Safearray contenente gli elementi utilizzati per creare la stringa.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
##  <a name="assignbstr"></a>CComBSTR::AssignBSTR  
 Assegna un `BSTR` a [m_str](#m_str).  
  
```
HRESULT AssignBSTR(const BSTR bstrSrc) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bstrSrc`  
 [in] Oggetto `BSTR` da assegnare all'oggetto corrente `CComBSTR` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
##  <a name="attach"></a>CComBSTR::Attach  
 Collega un `BSTR` per il `CComBSTR` oggetto impostando il [m_str](#m_str) membro *src*.  
  
```
void Attach(BSTR src) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *src*  
 [in] Il `BSTR` di collegare l'oggetto.  
  
### <a name="remarks"></a>Note  
 Non passare una stringa di caratteri wide normale a questo metodo. Il compilatore non è possibile rilevare l'errore e di esecuzione si verificano errori.  
  
> [!NOTE]
>  Questo metodo genera un'asserzione se `m_str` è non **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]  
  
##  <a name="bstrtoarray"></a>CComBSTR::BSTRToArray  
 Crea un safearray in base zero unidimensionale in cui ogni elemento della matrice è un carattere di `CComBSTR` oggetto.  
  
```
HRESULT BSTRToArray(LPSAFEARRAY* ppArray) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `ppArray`  
 [out] Il puntatore safearray utilizzato per archiviare i risultati della funzione.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`in caso di esito positivo o qualsiasi standard `HRESULT` valore di errore.  
  
##  <a name="bytelength"></a>CComBSTR::ByteLength  
 Restituisce il numero di byte in `m_str`, escluso il carattere di terminazione null.  
  
```
unsigned int ByteLength() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza di [m_str](#m_str) membro in byte.  
  
### <a name="remarks"></a>Note  
 Restituisce 0 se `m_str` è **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #36](../../atl/codesnippet/cpp/ccombstr-class_5.cpp)]  
  
##  <a name="ccombstr"></a>CComBSTR::CComBSTR  
 Costruttore. Il costruttore predefinito imposta il [m_str](#m_str) membro **NULL**.  
  
```
CComBSTR() throw();
CComBSTR(const CComBSTR& src);  
CComBSTR(REFGUID  guid);  
CComBSTR(int nSize);  
CComBSTR(int nSize, LPCOLESTR sz);  
CComBSTR(int nSize, LPCSTR sz);  
CComBSTR(LPCOLESTR pSrc);  
CComBSTR(LPCSTR pSrc);  
CComBSTR(CComBSTR&& src) throw(); // (Visual Studio 2017)
```  
  
### <a name="parameters"></a>Parametri  
 `nSize`  
 [in] Numero di caratteri da copiare da `sz` o dimensioni iniziali in caratteri per `CComBSTR`.  
  
 `sz`  
 [in] Stringa da copiare. La versione Unicode specifica un **LPCOLESTR**; la versione ANSI specifica un `LPCSTR`.  
  
 `pSrc`  
 [in] Stringa da copiare. La versione Unicode specifica un **LPCOLESTR**; la versione ANSI specifica un `LPCSTR`.  
  
 *src*  
 [in] Oggetto `CComBSTR`.  
  
 `guid`  
 [in] Un riferimento a un **GUID** struttura.  
  
### <a name="remarks"></a>Note  
 I costruttore di copia imposta `m_str` a una copia del `BSTR` membro di *src*. Il **REFGUID** costruttore converte il **GUID** in una stringa tramite **StringFromGUID2** e archivia il risultato.  
  
 L'altro costruttore imposta `m_str` su una copia della stringa specificata. Se si passa un valore per `nSize` verranno copiati solo i caratteri `nSize`, seguiti da un carattere di terminazione null.  
  
 `CComBSTR` supporta la semantica di spostamento. È possibile utilizzare il costruttore di spostamento (il costruttore che accetta un riferimento rvalue ( `&&`) per creare un nuovo oggetto che utilizza gli stessi dati sottostanti dell'oggetto precedente passato come argomento, senza il sovraccarico di copiare l'oggetto.  
  
 Il distruttore libera la stringa a cui punta `m_str`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #37](../../atl/codesnippet/cpp/ccombstr-class_6.cpp)]  
  
##  <a name="dtor"></a>CComBSTR:: ~ CComBSTR  
 Distruttore.  
  
```
~CComBSTR();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera la stringa a cui punta `m_str`.  
  
##  <a name="copy"></a>CComBSTR::Copy  
 Alloca e restituisce una copia di `m_str`.  
  
```
BSTR Copy() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una copia del [m_str](#m_str) membro. If `m_str` is **NULL**, returns **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #38](../../atl/codesnippet/cpp/ccombstr-class_7.cpp)]  
  
##  <a name="copyto"></a>CComBSTR::CopyTo  
 Alloca e restituisce una copia di [m_str](#m_str) tramite il parametro.  
  
```
HRESULT CopyTo(BSTR* pbstr) throw();

HRESULT CopyTo(VARIANT* pvarDest) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pbstr*  
 [out] L'indirizzo di un `BSTR` nel quale restituire la stringa allocata da questo metodo.  
  
 `pvarDest`  
 [out] L'indirizzo di un **VARIANT** nel quale restituire la stringa allocata da questo metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Standard `HRESULT` valore che indica l'esito positivo o negativo della copia.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato questo metodo, il **VARIANT** a cui puntava `pvarDest` sarà di tipo `VT_BSTR`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #39](../../atl/codesnippet/cpp/ccombstr-class_8.cpp)]  
  
##  <a name="detach"></a>CComBSTR::Detach  
 Scollega [m_str](#m_str) dal `CComBSTR` oggetto e imposta `m_str` a **NULL**.  
  
```
BSTR Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `BSTR` associato il `CComBSTR` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[# NVC_ATL_Utilities 40](../../atl/codesnippet/cpp/ccombstr-class_9.cpp)]  
  
##  <a name="empty"></a>CComBSTR::Empty  
 Libera la [m_str](#m_str) membro.  
  
```
void Empty() throw();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[# NVC_ATL_Utilities 41](../../atl/codesnippet/cpp/ccombstr-class_10.cpp)]  
  
##  <a name="length"></a>CComBSTR::Length  
 Restituisce il numero di caratteri in `m_str`, escluso il carattere di terminazione null.  
  
```
unsigned int Length() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza di [m_str](#m_str) membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #42](../../atl/codesnippet/cpp/ccombstr-class_11.cpp)]  
  
##  <a name="loadstring"></a>CComBSTR::LoadString  
 Carica una risorsa di stringa specificata da `nID` e lo archivia in questo oggetto.  
  
```
bool LoadString(HINSTANCE hInst, UINT nID) throw();
bool LoadString(UINT nID) throw();
```  
  
### <a name="parameters"></a>Parametri  
 Vedere [LoadString](http://msdn.microsoft.com/library/windows/desktop/ms647486) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la stringa è stato caricato; in caso contrario, restituisce **false**.  
  
### <a name="remarks"></a>Note  
 La prima funzione carica la risorsa dal modulo identificato dall'utente tramite il `hInst` parametro. La seconda funzione carica la risorsa dal modulo di risorse associato il [CComModule](../../atl/reference/ccommodule-class.md)-oggetto utilizzato in questo progetto derivato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #43](../../atl/codesnippet/cpp/ccombstr-class_12.cpp)]  
  
##  <a name="m_str"></a>CComBSTR::m_str  
 Contiene il `BSTR` associato il `CComBSTR` oggetto.  
  
```
BSTR m_str;
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #49](../../atl/codesnippet/cpp/ccombstr-class_13.cpp)]  
  
##  <a name="operator_bstr"></a>CComBSTR::operator BSTR  
 Cast di un `CComBSTR` l'oggetto in un `BSTR`.  
  
```  
operator BSTR() const throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di passare `CComBSTR` oggetti per le funzioni contenenti **[in] BSTR** parametri.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CComBSTR::m_str](#m_str).  
  
##  <a name="operator_not"></a>CComBSTR::operator!  
 Controlla se `BSTR` stringa è NULL.  
  
```
bool operator!() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il [m_str](#m_str) membro **NULL**; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Questo operatore verifica solo per un valore NULL, non per una stringa vuota.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #35](../../atl/codesnippet/cpp/ccombstr-class_4.cpp)]  
  
##  <a name="operator_neq"></a>CComBSTR::operator! =  
 Restituisce l'opposto logico di [operatore = =](#operator_eq_eq).  
  
```
bool operator!= (const CComBSTR& bstrSrc) const throw();
bool operator!= (LPCOLESTR pszSrc) const;
bool operator!= (LPCSTR pszSrc) const;
bool operator!= (int nNull) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bstrSrc`  
 [in] Oggetto `CComBSTR`.  
  
 `pszSrc`  
 [in] Una stringa termina con zero.  
  
 `nNull`  
 [in] Deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento da confrontare non è uguale al `CComBSTR` oggetto; in caso contrario, restituisce **false**.  
  
### <a name="remarks"></a>Note  
 `CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. L'operatore di confronto finale confronta solo la stringa contenuta contro **NULL**.  
  
##  <a name="operator_amp"></a>CComBSTR::operator&amp;  
 Restituisce l'indirizzo del `BSTR` archiviati nel [m_str](#m_str) membro.  
  
```
BSTR* operator&() throw();
```  
  
### <a name="remarks"></a>Note  
 `CComBstr operator &`per identificare le perdite di memoria associato un'asserzione speciale. Il programma verrà verificata quando il `m_str` membro viene inizializzato. Questa asserzione è stata creata per identificare le situazioni in cui viene utilizzato un programmatore di `& operator` per assegnare un nuovo valore per `m_str` membro senza la prima allocazione di `m_str`. Se `m_str` è uguale a NULL, il programma si presuppone che m_str non è stata allocata ancora. In questo caso, il programma non verrà verificata.  
  
 Questa asserzione non è abilitata per impostazione predefinita. Definire `ATL_CCOMBSTR_ADDRESS_OF_ASSERT` per abilitare questa asserzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #46](../../atl/codesnippet/cpp/ccombstr-class_14.cpp)]  
  
 [!code-cpp[NVC_ATL_Utilities #47](../../atl/codesnippet/cpp/ccombstr-class_15.cpp)]  
  
##  <a name="operator_add_eq"></a>+ = CComBSTR::operator  
 Aggiunge una stringa per il `CComBSTR` oggetto.  
  
```
CComBSTR& operator+= (const CComBSTR& bstrSrc);  
CComBSTR& operator+= (const LPCOLESTR pszSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `bstrSrc`  
 [in] Oggetto `CComBSTR` oggetto da accodare.  
  
 `pszSrc`  
 [in] Una stringa con terminazione zero da aggiungere.  
  
### <a name="remarks"></a>Note  
 `CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente. Il **LPCOLESTR** il confronto viene eseguito tramite `memcmp` su dati non elaborati in ciascuna stringa. Il `LPCSTR` confronto viene eseguito nello stesso modo quando una variabile temporanea Unicode una copia `pszSrc` è stato creato. L'operatore di confronto finale confronta solo la stringa contenuta contro **NULL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #48](../../atl/codesnippet/cpp/ccombstr-class_16.cpp)]  
  
##  <a name="operator_lt"></a>CComBSTR::operator&lt;  
 Confronta un `CComBSTR` con una stringa.  
  
```
bool operator<(const CComBSTR& bstrSrc) const throw();
bool operator<(LPCOLESTR pszSrc) const throw();
bool operator<(LPCSTR pszSrc) const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento da confrontare è inferiore a quello di `CComBSTR` oggetto; in caso contrario, restituisce **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto viene eseguito con impostazioni locali predefinite dell'utente.  
  
##  <a name="operator_eq"></a>CComBSTR::operator =  
 Imposta il [m_str](#m_str) membro a una copia di `pSrc` o a una copia del `BSTR` membro di *src*. Sposta l'operatore di assegnazione di spostamento `src` senza copiarlo.   
  
```
CComBSTR& operator= (const CComBSTR& src);  
CComBSTR& operator= (LPCOLESTR pSrc);  
CComBSTR& operator= (LPCSTR pSrc);
CComBSTR& operator= (CComBSTR&& src) throw(); // (Visual Studio 2017)
```  
  
### <a name="remarks"></a>Note  
 Il `pSrc` parametro specifica un **LPCOLESTR** per le versioni Unicode o `LPCSTR` per le versioni ANSI.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CComBSTR::Copy](#copy).  
  
##  <a name="operator_eq_eq"></a>CComBSTR::operator = =  
 Confronta un `CComBSTR` con una stringa. `CComBSTR`s vengono confrontati testualmente nel contesto delle impostazioni locali predefinite dell'utente.  
  
```
bool operator== (const CComBSTR& bstrSrc) const throw();
bool operator== (LPCOLESTR pszSrc) const;
bool operator== (LPCSTR pszSrc) const;
bool operator== (int nNull) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `bstrSrc`  
 [in] Oggetto `CComBSTR`.  
  
 `pszSrc`  
 [in] Una stringa termina con zero.  
  
 `nNull`  
 [in] Deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento da confrontare è uguale al `CComBSTR` oggetto; in caso contrario, restituisce **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore di confronto finale confronta solo la stringa contenuta contro **NULL**.  
  
##  <a name="operator_gt"></a>CComBSTR::operator&gt;  
 Confronta un `CComBSTR` con una stringa.  
  
```
bool operator>(const CComBSTR& bstrSrc) const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento confrontato è maggiore di `CComBSTR` oggetto; in caso contrario, restituisce **false**.  
  
### <a name="remarks"></a>Note  
 Il confronto viene eseguito con impostazioni locali predefinite dell'utente.  
  
##  <a name="readfromstream"></a>CComBSTR::ReadFromStream  
 Imposta il [m_str](#m_str) membro per il `BSTR` contenuti nel flusso specificato.  
  
```
HRESULT ReadFromStream(IStream* pStream) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia sul flusso contenente i dati.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 **ReadToStream** richiede il contenuto del flusso in corrispondenza della posizione corrente per essere compatibile con il formato dei dati scritto da una chiamata a [WriteToStream](#writetostream).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #44](../../atl/codesnippet/cpp/ccombstr-class_17.cpp)]  
  
##  <a name="tolower"></a>CComBSTR::ToLower  
 Converte la stringa contenuta in caratteri minuscoli.  
  
```
HRESULT ToLower() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Vedere **CharLowerBuff** per ulteriori informazioni sulle modalità di esecuzione della conversione.  
  
##  <a name="toupper"></a>CComBSTR::ToUpper  
 Converte la stringa contenuta in maiuscolo.  
  
```
HRESULT ToUpper() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Vedere **CharUpperBuff** per ulteriori informazioni sulle modalità di esecuzione della conversione.  
  
##  <a name="writetostream"></a>CComBSTR::WriteToStream  
 Salva il [m_str](#m_str) membro in un flusso.  
  
```
HRESULT WriteToStream(IStream* pStream) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia in un flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 È possibile ricreare un BSTR dal contenuto del flusso tramite il [ReadFromStream](#readfromstream) (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities #45](../../atl/codesnippet/cpp/ccombstr-class_18.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Macro di conversione di stringhe MFC e ATL](string-conversion-macros.md)

