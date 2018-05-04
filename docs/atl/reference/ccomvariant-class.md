---
title: Classe CComVariant | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComVariant
- ATLCOMCLI/ATL::CComVariant
- ATLCOMCLI/ATL::CComVariant::CComVariant
- ATLCOMCLI/ATL::CComVariant::Attach
- ATLCOMCLI/ATL::CComVariant::ChangeType
- ATLCOMCLI/ATL::CComVariant::Clear
- ATLCOMCLI/ATL::CComVariant::Copy
- ATLCOMCLI/ATL::CComVariant::CopyTo
- ATLCOMCLI/ATL::CComVariant::Detach
- ATLCOMCLI/ATL::CComVariant::GetSize
- ATLCOMCLI/ATL::CComVariant::ReadFromStream
- ATLCOMCLI/ATL::CComVariant::SetByRef
- ATLCOMCLI/ATL::CComVariant::WriteToStream
dev_langs:
- C++
helpviewer_keywords:
- VARIANT macro
- CComVariant class
- VARIANT macro, ATL
ms.assetid: 4d31149c-d005-44b5-a509-10f84afa2b61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e2ebef74f6da48d2124d69f002a85c467db73406
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomvariant-class"></a>Classe CComVariant
Questa classe esegue il wrapping di `VARIANT` tipo, fornendo un membro che indica il tipo di dati archiviati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
cpp
class CComVariant : public tagVARIANT  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComVariant::CComVariant](#ccomvariant)|Costruttore.|  
|[CComVariant:: ~ CComVariant](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComVariant::Attach](#attach)|Collega un **VARIANT** per il `CComVariant` oggetto.|  
|[CComVariant::ChangeType](#changetype)|Converte il `CComVariant` oggetto in un nuovo tipo.|  
|[CComVariant::Clear](#clear)|Cancella il `CComVariant` oggetto.|  
|[CComVariant::Copy](#copy)|Copia un **VARIANT** per il `CComVariant` oggetto.|  
|[CComVariant::CopyTo](#copyto)|Copia il contenuto del `CComVariant` oggetto.|  
|[CComVariant::Detach](#detach)|Scollega sottostante **VARIANT** dal `CComVariant` oggetto.|  
|[CComVariant::GetSize](#getsize)|Restituisce le dimensioni in numero di byte del contenuto del `CComVariant` oggetto.|  
|[CComVariant::ReadFromStream](#readfromstream)|Carica un **VARIANT** da un flusso.|  
|[CComVariant::SetByRef](#setbyref)|Inizializza il `CComVariant` oggetto e imposta il **vt** membro **VT_BYREF**.|  
|[CComVariant:: WriteToStream](#writetostream)|Salva sottostante **VARIANT** in un flusso.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|||  
|-|-|  
|[CComVariant:: operator <](#operator_lt)|Indica se il `CComVariant` oggetto è minore di specificato **VARIANT**.|  
|[CComVariant:: operator >](#operator_gt)|Indica se il `CComVariant` oggetto è maggiore di specificato **VARIANT**.|  
|[operatore! =](#operator_neq)|Indica se il `CComVariant` oggetto non è uguale specificato **VARIANT**.|  
|[operator =](#operator_eq)|Assegna un valore per il `CComVariant` oggetto.|  
|[operatore = =](#operator_eq_eq)|Indica se il `CComVariant` oggetto specificato equivale a **VARIANT**.|  
  
## <a name="remarks"></a>Note  
 `CComVariant` esegue il wrapping di `VARIANT and VARIANTARG` tipo, che è costituito da un'unione e un membro che indica il tipo di dati archiviati nell'unione. **VARIANT**s vengono in genere utilizzati in automazione.  
  
 `CComVariant` deriva la **VARIANT** digitare in modo che può essere utilizzato ovunque un **VARIANT** può essere utilizzato. Ad esempio, è possibile utilizzare il **V_VT** macro per estrarre il tipo di un `CComVariant` o è possibile accedere il **vt** membro direttamente nello stesso modo in cui è possibile con un **VARIANT**.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `CComVariant`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  
  
##  <a name="attach"></a>  CComVariant::Attach  
 Cancella in modo sicuro il contenuto corrente del `CComVariant` oggetto, copia il contenuto di `pSrc` in questo oggetto, quindi imposta il tipo variant di `pSrc` a `VT_EMPTY`.  
  
```
HRESULT Attach(VARIANT* pSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `pSrc`  
 [in] Punta al [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) da collegare all'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Proprietà dei dati utilizzate dagli `pSrc` viene trasferito di `CComVariant` oggetto.  
  
##  <a name="ccomvariant"></a>  CComVariant::CComVariant  
 Ogni costruttore gestisce l'inizializzazione di sicuro il `CComVariant` oggetto chiamando il `VariantInit` funzione Win32 o mediante l'impostazione di valore dell'oggetto e il tipo in base ai parametri passati.  
  
```
CComVariant() throw();
CComVariant(const CComVariant& varSrc);
CComVariant(const VARIANT& varSrc);
CComVariant(LPCOLESTR lpszSrc);
CComVariant(LPCSTR lpszSrc);
CComVariant(bool bSrc);
CComVariant(BYTE nSrc) throw();
CComVariant(int nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned int  nSrc, VARTYPE vtSrc = VT_UI4) throw();
CComVariant(shor  nSrc) throw();
CComVariant(unsigned short nSrc) throw();
CComVariant(long  nSrc, VARTYPE vtSrc = VT_I4) throw();
CComVariant(unsigned long  nSrc) throw();
CComVariant(LONGLONG  nSrc) throw();
CComVariant(ULONGLONG  nSrc) throw();
CComVariant(float  fltSrc) throw();
CComVariant(double  dblSrc, VARTYPE vtSrc = VT_R8) throw();
CComVariant(CY  cySrc) throw();
CComVariant(IDispatch* pSrc) throw();
CComVariant(IUnknown* pSrc) throw();
CComVariant(const SAFEARRAY* pSrc);
CComVariant(char  cSrc) throw();
CComVariant(const CComBSTR& bstrSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 [in] Il `CComVariant` o `VARIANT` utilizzato per inizializzare il `CComVariant` oggetto. Il contenuto della variante di origine viene copiato nella destinazione senza conversione.  
  
 `lpszSrc`  
 [in] La stringa di caratteri utilizzata per inizializzare il `CComVariant` oggetto. È possibile passare una terminazione zero wide (Unicode) stringa di caratteri per il **LPCOLESTR** versione del costruttore o una stringa ANSI per il `LPCSTR` versione. In entrambi i casi la stringa viene convertita in Unicode `BSTR` allocati mediante **SysAllocString**. Il tipo di `CComVariant` oggetto sarà `VT_BSTR`.  
  
 `bSrc`  
 [in] Il `bool` utilizzato per inizializzare il `CComVariant` oggetto. Il `bool` argomento sarà convertito in un **VARIANT_BOOL** prima di essere archiviati. Il tipo di `CComVariant` oggetto sarà `VT_BOOL`.  
  
 `nSrc`  
 [in] Il `int`, **BYTE**, **breve**, **lungo**, **LONGLONG**, **ULONGLONG**, **unsigned short**, `unsigned long`, o `unsigned int` utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_I4`, `VT_UI1`, `VT_I2`, `VT_I4`, **VT_I8**, **VT_UI8**, **VT_UI2**,  **VT_UI4**, o **VT_UI4**, rispettivamente.  
  
 `vtSrc`  
 [in] Il tipo del variant. Quando il primo parametro è `int`, i tipi validi sono `VT_I4` e **VT_INT**. Quando il primo parametro è **lungo**, i tipi validi sono `VT_I4` e `VT_ERROR`. Quando il primo parametro è **doppie**, i tipi validi sono `VT_R8` e `VT_DATE`. Quando il primo parametro è `unsigned int`, i tipi validi sono **VT_UI4** e **VT_UINT**.  
  
 `fltSrc`  
 [in] Il **float** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_R4`.  
  
 `dblSrc`  
 [in] Il **doppie** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_R8`.  
  
 `cySrc`  
 [in] Il **CY** utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_CY`.  
  
 `pSrc`  
 [in] Il `IDispatch` o **IUnknown** puntatore utilizzato per inizializzare il `CComVariant` oggetto. `AddRef` verrà chiamato sul puntatore a interfaccia. Il tipo di `CComVariant` oggetto sarà **VT_DISPATCH** o **VT_UNKNOWN**, rispettivamente.  
  
 O, **SAFERRAY** puntatore utilizzato per inizializzare il `CComVariant` oggetto. Una copia del **SAFEARRAY** viene archiviato nel `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà una combinazione del tipo originale del **SAFEARRAY** e **VT_ARRAY**.  
  
 `cSrc`  
 [in] Il `char` utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà **VT_I1**.  
  
 `bstrSrc`  
 [in] La stringa BSTR utilizzato per inizializzare il `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_BSTR`.  
  
### <a name="remarks"></a>Note  
 Il distruttore gestisce pulizia chiamando [CComVariant::Clear](#clear).  
  
##  <a name="dtor"></a>  CComVariant:: ~ CComVariant  
 Distruttore.  
  
```
~CComVariant() throw();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo gestisce pulizia chiamando [CComVariant::Clear](#clear).  
  
##  <a name="changetype"></a>  CComVariant::ChangeType  
 Converte il `CComVariant` oggetto in un nuovo tipo.  
  
```
HRESULT ChangeType(VARTYPE vtNew, const VARIANT* pSrc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `vtNew`  
 [in] Il nuovo tipo per il `CComVariant` oggetto.  
  
 `pSrc`  
 [in] Un puntatore al `VARIANT` il cui valore verrà convertito nel nuovo tipo. Il valore predefinito è **NULL**, ovvero il `CComVariant` verrà convertito l'oggetto sul posto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se si passa un valore per `pSrc`, `ChangeType` utilizzerà questo **VARIANT** come origine per la conversione. In caso contrario, il `CComVariant` oggetto sarà l'origine.  
  
##  <a name="clear"></a>  CComVariant::Clear  
 Cancella il `CComVariant` oggetto chiamando il `VariantClear` funzione Win32.  
  
```
HRESULT Clear();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Il distruttore chiama automaticamente **deselezionare**.  
  
##  <a name="copy"></a>  CComVariant::Copy  
 Libera la `CComVariant` dell'oggetto e quindi assegna una copia dell'oggetto specificato **VARIANT**.  
  
```
HRESULT Copy(const VARIANT* pSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `pSrc`  
 [in] Un puntatore al [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="copyto"></a>  CComVariant::CopyTo  
 Copia il contenuto del `CComVariant` oggetto.  
  
```
HRESULT CopyTo(BSTR* pstrDest);
```  
  
### <a name="parameters"></a>Parametri  
 *pstrDest*  
 Punta a un `BSTR` che riceveranno una copia del contenuto del `CComVariant` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Il **CComVariant** oggetto deve essere di tipo `VT_BSTR`.  
  
##  <a name="detach"></a>  CComVariant::Detach  
 Scollega sottostante **VARIANT** dal `CComVariant` dell'oggetto e imposta il tipo dell'oggetto `VT_EMPTY`.  
  
```
HRESULT Detach(VARIANT* pDest);
```  
  
### <a name="parameters"></a>Parametri  
 `pDest`  
 [out] Restituisce l'oggetto sottostante `VARIANT` valore dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Si noti che il contenuto del `VARIANT` a cui fa riferimento `pDest` verrà automaticamente cancellato prima che venga assegnato il valore e il tipo di chiamante **CComVariant** oggetto.  
  
##  <a name="getsize"></a>  CComVariant::GetSize  
 Per una dimensione fissa semplice `VARIANT`, questo metodo restituisce il `sizeof` il tipo di dati sottostante più `sizeof(VARTYPE)`.  
  
```
ULONG GetSize() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni in byte del contenuto corrente del `CComVariant` oggetto.  
  
### <a name="remarks"></a>Note  
 Se il `VARIANT` contiene un puntatore a interfaccia `GetSize` esegue una query per `IPersistStream` o `IPersistStreamInit`. Se ha esito positivo, il valore restituito è 32 bit meno significativi del valore restituito da `GetSizeMax` più il `sizeof` un `CLSID` e `sizeof(VARTYPE)`. Se il puntatore di interfaccia è `NULL`, `GetSize` restituisce il `sizeof` un `CLSID` più `sizeof(VARTYPE)`. Se la dimensione totale è maggiore di `ULONG_MAX`, `GetSize` restituisce `sizeof(VARTYPE)` che indica un errore.  
  
 In tutti gli altri casi, una password temporanea `VARIANT` di tipo `VT_BSTR` viene convertito da corrente `VARIANT`. La lunghezza di questo `BSTR` viene calcolato come la dimensione della lunghezza della stringa e la lunghezza della stringa stessa più le dimensioni del carattere null più `sizeof(VARTYPE)`. Se il `VARIANT` non può essere assegnato a un `VARIANT` di tipo `VT_BSTR`, `GetSize` restituisce `sizeof(VARTYPE)`.  
  
 Le dimensioni restituite dal metodo corrispondano al numero di byte utilizzati dalla [CComVariant:: WriteToStream](#writetostream) in condizioni di esito positivo.  
  
##  <a name="operator_eq"></a>  CComVariant:: operator =  
 Assegna un valore e il tipo corrispondente per il `CComVariant` oggetto.  
  
```
CComVariant& operator=(const CComVariant& varSrc);
CComVariant& operator=(const VARIANT& varSrc);
CComVariant& operator=(const CComBSTR& bstrSrc);
CComVariant& operator=(LPCOLESTR lpszSrc);
CComVariant& operator=(LPCSTR lpszSrc);
CComVariant& operator=(bool bSrc);
CComVariant& operator=(BYTE nSrc) throw();
CComVariant& operator=int nSrc) throw();
CComVariant& operator=(unsigned int nSrc) throw();
CComVariant& operator=(short nSrc) throw();
CComVariant& operator=(unsigned short nSrc) throw();
CComVariant& operator=(long nSrc) throw();
CComVariant& operator=(unsigned long nSrc) throw();
CComVariant& operator=(LONGLONG nSrc) throw();
CComVariant& operator=(ULONGLONG nSrc) throw();
CComVariant& operator=(float fltSrc) throw();
CComVariant& operator=(double dblSrc) throw();
CComVariant& operator=(CY cySrc) throw();
CComVariant& operator=(IDispatch* pSrc) throw();
CComVariant& operator=(IUnknown* pSrc) throw();
CComVariant& operator=(const SAFEARRAY* pSrc);
CComVariant& operator=(char cSrc) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 [in] Il `CComVariant` o [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) da assegnare al `CComVariant` oggetto. Il contenuto della variante di origine viene copiato nella destinazione senza conversione.  
  
 `bstrSrc`  
 [in] La stringa BSTR da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_BSTR`.  
  
 `lpszSrc`  
 [in] La stringa di caratteri da assegnare al `CComVariant` oggetto. È possibile passare una terminazione zero wide (Unicode) stringa di caratteri per il **LPCOLESTR** versione dell'operatore di o una stringa ANSI per il `LPCSTR` versione. In entrambi i casi, la stringa viene convertita in Unicode `BSTR` allocati mediante **SysAllocString**. Il tipo di `CComVariant` oggetto sarà `VT_BSTR`.  
  
 `bSrc`  
 [in] Il `bool` da assegnare al `CComVariant` oggetto. Il `bool` argomento sarà convertito in un **VARIANT_BOOL** prima di essere archiviati. Il tipo di `CComVariant` oggetto sarà `VT_BOOL`.  
  
 `nSrc`  
 [in] Il `int`, **BYTE**, **breve**, **lungo**, **LONGLONG**, **ULONGLONG**, **unsigned short**, `unsigned long`, o `unsigned int` da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_I4`, `VT_UI1`, `VT_I2`, `VT_I4`, **VT_I8**, **VT_UI8**, **VT_UI2**,  **VT_UI4**, o **VT_UI4**, rispettivamente.  
  
 `fltSrc`  
 [in] Il **float** da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_R4`.  
  
 `dblSrc`  
 [in] Il **doppie** da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_R8`.  
  
 `cySrc`  
 [in] Il **CY** da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà `VT_CY`.  
  
 `pSrc`  
 [in] Il `IDispatch` o **IUnknown** puntatore da assegnare al `CComVariant` oggetto. `AddRef` verrà chiamato sul puntatore a interfaccia. Il tipo di `CComVariant` oggetto sarà **VT_DISPATCH** o **VT_UNKNOWN**, rispettivamente.  
  
 O, **SAFEARRAY** puntatore da assegnare al `CComVariant` oggetto. Una copia del **SAFEARRAY** viene archiviato nel `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà una combinazione del tipo originale del **SAFEARRAY** e **VT_ARRAY**.  
  
 `cSrc`  
 [in] Il carattere da assegnare al `CComVariant` oggetto. Il tipo di `CComVariant` oggetto sarà **VT_I1**.  
  
##  <a name="operator_eq_eq"></a>  CComVariant:: operator = =  
 Indica se il `CComVariant` oggetto specificato equivale a **VARIANT**.  
  
```
bool operator==(const VARIANT& varSrc) const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il valore e il tipo di *varSrc* sono uguali al valore e al tipo, rispettivamente, del `CComVariant` oggetto. in caso contrario, **false**. L'operatore utilizza la lingua dell'utente predefinito per eseguire il confronto.  
  
 L'operatore confronta solo il valore dei tipi variant. Confronta stringhe, interi e punti a virgola mobile, ma non le matrici o record.  
  
##  <a name="operator_neq"></a>  CComVariant:: operator! =  
 Indica se il `CComVariant` oggetto non è uguale specificato **VARIANT**.  
  
```
bool operator!=(const VARIANT& varSrc) const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il valore o tipo di *varSrc* non è uguale al valore o al tipo, rispettivamente, del `CComVariant` oggetto. in caso contrario, **false**. L'operatore utilizza la lingua dell'utente predefinito per eseguire il confronto.  
  
 L'operatore confronta solo il valore dei tipi variant. Confronta stringhe, interi e punti a virgola mobile, ma non le matrici o record.  
  
##  <a name="operator_lt"></a>  CComVariant:: operator &lt;  
 Indica se il `CComVariant` oggetto è minore di specificato **VARIANT**.  
  
```
bool operator<(const VARIANT& varSrc) const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il valore di `CComVariant` oggetto è minore del valore di *varSrc*. in caso contrario, **false**. L'operatore utilizza la lingua dell'utente predefinito per eseguire il confronto.  
  
##  <a name="operator_gt"></a>  CComVariant:: operator &gt;  
 Indica se il `CComVariant` oggetto è maggiore di specificato **VARIANT**.  
  
```
bool operator>(const VARIANT& varSrc) const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce **true** se il valore di `CComVariant` oggetto è maggiore del valore di *varSrc*. in caso contrario, **false**. L'operatore utilizza la lingua dell'utente predefinito per eseguire il confronto.  
  
##  <a name="readfromstream"></a>  CComVariant::ReadFromStream  
 Imposta l'oggetto sottostante **VARIANT** per il **VARIANT** contenuti nel flusso specificato.  
  
```
HRESULT ReadFromStream(IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia sul flusso contenente i dati.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 **ReadToStream** richiede una chiamata precedente a [WriteToStream](#writetostream).  
  
##  <a name="setbyref"></a>  CComVariant::SetByRef  
 Inizializza il `CComVariant` oggetto e imposta il **vt** membro **VT_BYREF**.  
  
```
template < typename T >
void SetByRef(T* pT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di **VARIANT**, ad esempio, `BSTR`, `int`, o `char`.  
  
 *pT*  
 Il puntatore utilizzato per inizializzare il `CComVariant` oggetto.  
  
### <a name="remarks"></a>Note  
 `SetByRef` è un modello di funzione che inizializza il `CComVariant` oggetto al puntatore *pT* e imposta il **vt** membro **VT_BYREF**. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Utilities#76](../../atl/codesnippet/cpp/ccomvariant-class_1.cpp)]  
  
##  <a name="writetostream"></a>  CComVariant:: WriteToStream  
 Salva sottostante **VARIANT** in un flusso.  
  
```
HRESULT WriteToStream(IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `pStream`  
 [in] Un puntatore al [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia in un flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)