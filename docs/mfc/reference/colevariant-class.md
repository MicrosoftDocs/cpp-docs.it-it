---
title: Classe COleVariant | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleVariant
- AFXDISP/COleVariant
- AFXDISP/COleVariant::COleVariant
- AFXDISP/COleVariant::Attach
- AFXDISP/COleVariant::ChangeType
- AFXDISP/COleVariant::Clear
- AFXDISP/COleVariant::Detach
- AFXDISP/COleVariant::GetByteArrayFromVariantArray
- AFXDISP/COleVariant::SetString
dev_langs: C++
helpviewer_keywords:
- COleVariant [MFC], COleVariant
- COleVariant [MFC], Attach
- COleVariant [MFC], ChangeType
- COleVariant [MFC], Clear
- COleVariant [MFC], Detach
- COleVariant [MFC], GetByteArrayFromVariantArray
- COleVariant [MFC], SetString
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3c3c9d961c69616df05975f2d484d0bbfd43f514
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="colevariant-class"></a>Classe COleVariant
Incapsula il tipo di dati [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleVariant : public tagVARIANT  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant:: COleVariant](#colevariant)|Costruisce un oggetto `COleVariant`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant::Attach](#attach)|Collega un **VARIANT** per un `COleVariant`.|  
|[COleVariant::ChangeType](#changetype)|Modifica il tipo di variante di questo `COleVariant` oggetto.|  
|[COleVariant::Clear](#clear)|Rimuove il `COleVariant` oggetto.|  
|[COleVariant::Detach](#detach)|Scollega un **VARIANT** da un `COleVariant` e restituisce il **VARIANT**.|  
|[COleVariant::GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Recupera una matrice di byte da una matrice di variant esistente.|  
|[COleVariant::SetString](#setstring)|Imposta la stringa a un determinato tipo, in genere ANSI.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant::operator LPCVARIANT](#operator_lpcvariant)|Converte un `COleVariant` valore in un `LPCVARIANT`.|  
|[COleVariant::operator LPVARIANT](#operator_lpvariant)|Converte un `COleVariant` dell'oggetto in un `LPVARIANT`.|  
|[COleVariant::operator =](#operator_eq)|Copia un `COleVariant` valore.|  
|[COleVariant::operator = =](#operator_eq_eq)|Confronta due `COleVariant` valori.|  
|[COleVariant::operator &lt; &lt;,&gt;&gt;](#operator_lt_lt__gt_gt)|Output un `COleVariant` valore `CArchive` o `CDumpContext` e inserisce un `COleVariant` oggetto `CArchive`.|  
  
## <a name="remarks"></a>Note  
 Questo tipo di dati viene utilizzato nell'automazione OLE. In particolare, il [DISPPARAMS](http://msdn.microsoft.com/en-us/a16e5a21-766e-4287-b039-13429aa78f8b) struttura contiene un puntatore a una matrice di **VARIANT** strutture. Oggetto **DISPPARAMS** struttura viene utilizzata per passare i parametri per [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
> [!NOTE]
>  Questa classe è derivata dal **VARIANT** struttura. Ciò significa che è possibile passare un `COleVariant` in un parametro che richiede un **VARIANT** e che i membri dei dati di **VARIANT** struttura sono membri di dati accessibili di `COleVariant`.  
  
 I due relativi classi MFC [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) incapsulare i tipi di dati variant **valuta** ( `VT_CY`) e **data** ( `VT_DATE`). Il `COleVariant` classe è ampiamente utilizzata nelle classi DAO, vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118), [valuta](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e), [DISPPARAMS](http://msdn.microsoft.com/en-us/a16e5a21-766e-4287-b039-13429aa78f8b), e [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d) voci in Windows SDK.  
  
 Per ulteriori informazioni sul `COleVariant` classe e il relativo utilizzo nell'automazione OLE, vedere "Passaggio di parametri nell'automazione OLE" nell'articolo [automazione](../../mfc/automation.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `COleVariant`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="attach"></a>COleVariant::Attach  
 Chiamare questa funzione per collegare il determinato [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) oggetto corrente `COleVariant` oggetto.  
  
```  
void Attach(VARIANT& varSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 Un oggetto esistente **VARIANT** oggetti da collegare all'oggetto corrente `COleVariant` oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione imposta il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) di *varSrc* a `VT_EMPTY`.  
  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) e [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) voci in Windows SDK.  
  
##  <a name="colevariant"></a>COleVariant:: COleVariant  
 Costruisce un oggetto `COleVariant`.  
  
```  
COleVariant(); 
COleVariant(const VARIANT& varSrc); 
COleVariant(const COleVariant& varSrc); 
COleVariant(LPCVARIANT pSrc); 
COleVariant(LPCTSTR lpszSrc); 
COleVariant(LPCTSTR lpszSrc, VARTYPE vtSrc); 
COleVariant(CString& strSrc); 
COleVariant(BYTE nSrc); 
COleVariant(short nSrc, VARTYPE vtSrc = VT_I2); 
COleVariant(long lSrc,VARTYPE vtSrc = VT_I4); 
COleVariant(const COleCurrency& curSrc); 
COleVariant(float fltSrc); 
COleVariant(double dblSrc); 
COleVariant(const COleDateTime& timeSrc); 
COleVariant(const CByteArray& arrSrc); 
COleVariant(const CLongBinary& lbSrc); 
COleVariant(LPCITEMIDLIST pidl);
```  
  
### <a name="parameters"></a>Parametri  
 *varSrc*  
 Un oggetto esistente `COleVariant` o **VARIANT** oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `pSrc`  
 Un puntatore a un **VARIANT** oggetti che verranno copiati nel nuovo `COleVariant` oggetto.  
  
 `lpszSrc`  
 Una stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.  
  
 `vtSrc`  
 Il `VARTYPE` per il nuovo `COleVariant` oggetto.  
  
 `strSrc`  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `nSrc`, `lSrc`  
 Un valore numerico da copiare nel nuovo oggetto `COleVariant`.  
  
 `vtSrc`  
 Il `VARTYPE` per il nuovo `COleVariant` oggetto.  
  
 `curSrc`  
 Oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `fltSrc`, `dblSrc`  
 Un valore numerico da copiare nel nuovo oggetto `COleVariant`.  
  
 `timeSrc`  
 Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `arrSrc`  
 Oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `lbSrc`  
 Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.  
  
 `pidl`  
 Un puntatore a un [ITEMIDLIST](http://msdn.microsoft.com/library/windows/desktop/bb773321) struttura da copiare nel nuovo `COleVariant` oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creano nuovi `COleVariant` oggetti inizializzati sul valore specificato. Di seguito una breve descrizione di ognuno di questi costruttori.  
  
- **() COleVariant** crea un oggetto vuoto `COleVariant` oggetto `VT_EMPTY`.  
  
- **COleVariant (** *varSrc* **)** copia esistente **VARIANT** o `COleVariant` oggetto. Il tipo variant viene mantenuto.  
  
- **COleVariant (** `pSrc` **)** copia esistente **VARIANT** o `COleVariant` oggetto. Il tipo variant viene mantenuto.  
  
- **COleVariant (** `lpszSrc` **)** copia una stringa nel nuovo oggetto, `VT_BSTR` (UNICODE).  
  
- **COleVariant (** `lpszSrc` **,** `vtSrc` **)** copia una stringa nel nuovo oggetto. Il parametro `vtSrc` deve essere `VT_BSTR` (UNICODE) o `VT_BSTRT` (ANSI).  
  
- **COleVariant (** `strSrc` **)** copia una stringa nel nuovo oggetto, **VT_BSTR** (UNICODE).  
  
- **COleVariant (** `nSrc` **)** consente di copiare un intero a 8 bit nel nuovo oggetto, `VT_UI1`.  
  
- **COleVariant (** `nSrc` **,** `vtSrc` **)** consente di copiare un intero a 16 bit (o valore booleano) nel nuovo oggetto. Il parametro `vtSrc` deve essere `VT_I2` o `VT_BOOL`.  
  
- **COleVariant (** `lSrc` **,** `vtSrc` **)** consente di copiare un intero a 32 bit (o `SCODE` valore) nel nuovo oggetto. Il parametro `vtSrc` deve essere `VT_I4`, `VT_ERROR`, o `VT_BOOL`.  
  
- **COleVariant (** `curSrc` **)** copie un **COleCurrency** valore nel nuovo oggetto, `VT_CY`.  
  
- **COleVariant (** `fltSrc` **)** copia un valore a virgola mobile a 32 bit nel nuovo oggetto, `VT_R4`.  
  
- **COleVariant (** `dblSrc` **)** copia un valore a virgola mobile a 64 bit nel nuovo oggetto, `VT_R8`.  
  
- **COleVariant (** `timeSrc` **)** copie un `COleDateTime` valore nel nuovo oggetto, `VT_DATE`.  
  
- **COleVariant (** `arrSrc` **)** copie un `CByteArray` oggetto nel nuovo oggetto, `VT_EMPTY`.  
  
- **COleVariant (** `lbSrc` **)** copie un `CLongBinary` oggetto nel nuovo oggetto, `VT_EMPTY`.  
  
 Per ulteriori informazioni su `SCODE`, vedere [struttura dei codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) in Windows SDK.  
  
##  <a name="changetype"></a>COleVariant::ChangeType  
 Converte il tipo del valore variant in questo `COleVariant` oggetto.  
  
```  
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `vartype`  
 Il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) per questo `COleVariant` oggetto.  
  
 `pSrc`  
 Un puntatore al [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) oggetto da convertire. Se questo valore è **NULL**, questo `COleVariant` oggetto viene utilizzato come origine per la conversione.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118), [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4), e [VariantChangeType](http://msdn.microsoft.com/en-us/48a51e32-95d7-4eeb-8106-f5043ffa2fd1) voci in Windows SDK.  
  
##  <a name="clear"></a>COleVariant::Clear  
 Cancella il **VARIANT**.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Consente di impostare il **VARTYPE** di questo oggetto `VT_EMPTY`. Il `COleVariant` distruttore chiama questa funzione.  
  
 Per ulteriori informazioni, vedere il `VARIANT`, `VARTYPE`, e `VariantClear` voci in Windows SDK.  
  
##  <a name="detach"></a>COleVariant::Detach  
 Scollega sottostante [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) oggetto da questo `COleVariant` oggetto.  
  
```  
VARIANT Detach();
```  
  
### <a name="remarks"></a>Note  
 La funzione imposta il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) per questo `COleVariant` oggetto `VT_EMPTY`.  
  
> [!NOTE]
>  Dopo la chiamata **scollegamento**, è responsabilità del chiamante per chiamare **VariantClear** dell'oggetto risultante **VARIANT** struttura.  
  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118), [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4), e [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835) voci in Windows SDK.  
  
##  <a name="getbytearrayfromvariantarray"></a>COleVariant::GetByteArrayFromVariantArray  
 Recupera una matrice di byte da una matrice di variant esistente  
  
```  
void GetByteArrayFromVariantArray(CByteArray& bytes);
```  
  
### <a name="parameters"></a>Parametri  
 `bytes`  
 Un riferimento a un oggetto esistente [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto.  
  
##  <a name="operator_lpcvariant"></a>COleVariant::operator LPCVARIANT  
 Questo operatore di cast restituisce un `VARIANT` struttura il cui valore viene copiato da questo `COleVariant` oggetto.  
  
```  
operator LPCVARIANT() const; 
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="operator_lpvariant"></a>COleVariant::operator LPVARIANT  
 Chiamare l'operatore di cast per accedere all'oggetto `VARIANT` struttura per questo `COleVariant` oggetto.  
  
```  
operator LPVARIANT();
```   
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Modifica il valore di **VARIANT** struttura a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questo `COleVariant` oggetto.  
  
##  <a name="operator_eq"></a>COleVariant::operator =  
 Questi operatori di assegnazione di overload copiare il valore di origine in questo `COleVariant` oggetto.  
  
```  
const COleVariant& operator=(const VARIANT& varSrc); 
const COleVariant& operator=(LPCVARIANT pSrc); 
const COleVariant& operator=(const COleVariant& varSrc); 
const COleVariant& operator=(const LPCTSTR lpszSrc);
const COleVariant& operator=(const CString& strSrc); 
const COleVariant& operator=(BYTE nSrc); 
const COleVariant& operator=(short nSrc); 
const COleVariant& operator=(long lSrc); 
const COleVariant& operator=(const COleCurrency& curSrc); 
const COleVariant& operator=(float fltSrc); 
const COleVariant& operator=(double dblSrc); 
const COleVariant& operator=(const COleDateTime& dateSrc); 
const COleVariant& operator=(const CByteArray& arrSrc); 
const COleVariant& operator=(const CLongBinary& lbSrc);
```  
  
### <a name="remarks"></a>Note  
 Di seguito una breve descrizione di ciascun operatore:  
  
- **operatore = (** *varSrc***)** copia esistente **VARIANT** o `COleVariant` oggetto in questo oggetto.  
  
- **operatore = (** `pSrc` **)** copie di **VARIANT** oggetto a cui accede `pSrc` in questo oggetto.  
  
- **operatore = (** `lpszSrc` **)** copia una stringa con terminazione null in questo oggetto e imposta il **VARTYPE** a `VT_BSTR`.  
  
- **operatore = (** `strSrc` **)** copie un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto in questo oggetto e un set di **VARTYPE** a `VT_BSTR`.  
  
- **operatore = (** `nSrc` **)** copia un valore integer di 8 o 16 bit in questo oggetto. Se `nSrc` è un valore a 8 bit, il **VARTYPE** di questo oggetto è impostato su `VT_UI1`. Se `nSrc` è un valore a 16 bit e **VARTYPE** di è `VT_BOOL`è mantenuto; in caso contrario, viene impostato su `VT_I2`.  
  
- **operatore = (** `lSrc` **)** copia un valore integer a 32 bit in questo oggetto. Se il **VARTYPE** di è `VT_ERROR`è mantenuto; in caso contrario, viene impostato su `VT_I4`.  
  
- **operatore = (** `curSrc` **)** copie un [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto in questo oggetto e un set di **VARTYPE** a `VT_CY`.  
  
- **operatore = (** `fltSrc` **)** copia un valore a virgola mobile a 32 bit in questo oggetto e imposta il **VARTYPE** a `VT_R4`.  
  
- **operatore = (** `dblSrc` **)** copia un valore a virgola mobile a 64 bit in questo oggetto e imposta il **VARTYPE** a `VT_R8`.  
  
- **operatore = (** `dateSrc` **)** copie un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto in questo oggetto e un set di **VARTYPE** a `VT_DATE`.  
  
- **operatore = (** `arrSrc` **)** copie un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto in questo `COleVariant` oggetto.  
  
- **operatore = (** `lbSrc` **)** copie un [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto in questo `COleVariant` oggetto.  
  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) e [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) voci in Windows SDK.  
  
##  <a name="operator_eq_eq"></a>COleVariant::operator = =  
 Questo operatore confronta due valori variant e restituito diverso da zero se sono uguali. in caso contrario 0.  
  
```  
BOOL operator==(const VARIANT& varSrc) const; 
BOOL operator==(LPCVARIANT pSrc) const;
```  
  
##  <a name="operator_lt_lt__gt_gt"></a>COleVariant::operator &lt; &lt;,&gt;&gt;  
 Output un `COleVariant` valore `CArchive` o **CdumpContext** e inserisce un `COleVariant` oggetto `CArchive`.  
  
```  
friend CDumpContext& AFXAPI operator<<(
    CDumpContext& dc,  
    OleVariant varSrc);
 
friend CArchive& AFXAPI operator<<(
    CArchive& ar,  
    COleVariant varSrc);
 
friend CArchive& AFXAPI operator>>(
    CArchive& ar,  
    COleVariant& varSrc);
```  
  
### <a name="remarks"></a>Note  
 Il `COleVariant` inserimento (  **< \<** ) supporta l'operatore di dump di diagnostica e l'archiviazione in un archivio. L'estrazione (  **>>** ) (operatore) supporta il caricamento da un archivio.  
  
##  <a name="setstring"></a>COleVariant::SetString  
 Imposta la stringa a un determinato tipo.  
  
```  
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSrc`  
 Una stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.  
  
 *VtSrc*  
 Il **VARTYPE** per il nuovo `COleVariant` oggetto.  
  
### <a name="remarks"></a>Note  
 Il parametro `vtSrc` deve essere `VT_BSTR` (UNICODE) o `VT_BSTRT` (ANSI). `SetString`in genere utilizzato per impostare le stringhe in formato ANSI, poiché il valore predefinito per il [COleVariant:: COleVariant](#colevariant) costruttore con una stringa o parametro del puntatore stringa e no **VARTYPE** è in formato UNICODE.  
  
 Un recordset in una build non UNICODE DAO prevede stringhe ANSI. Di conseguenza, le funzioni che usano per DAO `COleVariant` oggetti, se non si sta creando un recordset UNICODE, è necessario utilizzare il **COleVariant:: COleVariant (** `lpszSrc` **,** `vtSrc` **)**  form del costruttore con `vtSrc` impostato su `VT_BSTRT` (ANSI) oppure usare `SetString` con `vtSrc` impostato su `VT_BSTRT` per rendere le stringhe ANSI. Ad esempio, il `CDaoRecordset` funzioni [CDaoRecordset::Seek](../../mfc/reference/cdaorecordset-class.md#seek) e [CDaoRecordset::SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) utilizzare `COleVariant` gli oggetti come parametri. Se il recordset DAO non è UNICODE, questi oggetti devono essere ANSI.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



