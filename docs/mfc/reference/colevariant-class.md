---
title: Classe COleVariant
ms.date: 11/04/2016
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
helpviewer_keywords:
- COleVariant [MFC], COleVariant
- COleVariant [MFC], Attach
- COleVariant [MFC], ChangeType
- COleVariant [MFC], Clear
- COleVariant [MFC], Detach
- COleVariant [MFC], GetByteArrayFromVariantArray
- COleVariant [MFC], SetString
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
ms.openlocfilehash: 63bce4695e4e1142b797f24cfbbae71638177d04
ms.sourcegitcommit: 13f42c339fb7af935e3a93ac80e350d5e784c9f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2020
ms.locfileid: "87470901"
---
# <a name="colevariant-class"></a>Classe COleVariant

Incapsula il tipo di dati [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) .

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
|[COleVariant:: Connetti](#attach)|Connette un oggetto VARIANT a un oggetto `COleVariant` .|
|[COleVariant:: ChangeType](#changetype)|Modifica il tipo Variant di questo `COleVariant` oggetto.|
|[COleVariant:: Clear](#clear)|Cancella questo oggetto `COleVariant`.|
|[COleVariant::D etach](#detach)|Scollega un VARIANT da un oggetto `COleVariant` e restituisce il VARIANT.|
|[COleVariant:: GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Recupera una matrice di byte da una matrice variant esistente.|
|[COleVariant:: sestring](#setstring)|Imposta la stringa su un tipo particolare, in genere ANSI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant:: operator LPCVARIANT](#operator_lpcvariant)|Converte un `COleVariant` valore in un oggetto `LPCVARIANT` .|
|[COleVariant:: operator LPVARIANT](#operator_lpvariant)|Converte un `COleVariant` oggetto in un oggetto `LPVARIANT` .|
|[COleVariant:: operator =](#operator_eq)|Copia un `COleVariant` valore.|
|[COleVariant:: operator = =](#operator_eq_eq)|Confronta due `COleVariant` valori.|
|[Operatore COleVariant:: &lt; &lt; ,&gt;&gt;](#operator_lt_lt__gt_gt)|Restituisce un `COleVariant` valore a `CArchive` o `CDumpContext` e immette un `COleVariant` oggetto da `CArchive` .|

## <a name="remarks"></a>Osservazioni

Questo tipo di dati viene utilizzato nell'automazione OLE. In particolare, la struttura [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams) contiene un puntatore a una matrice di strutture VARIANT. `DISPPARAMS`Per passare parametri a [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke)viene utilizzata una struttura.

> [!NOTE]
> Questa classe è derivata dalla `VARIANT` struttura. Ciò significa che è possibile passare un oggetto `COleVariant` in un parametro che chiama per un `VARIANT` e che i membri dati della `VARIANT` struttura sono membri dati accessibili di `COleVariant` .

Le due classi MFC correlate [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) incapsulano i tipi di dati Variant Currency ( `VT_CY` ) e date ( `VT_DATE` ). La `COleVariant` classe viene ampiamente utilizzata nelle classi DAO. vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Per ulteriori informazioni, vedere le voci [Variant](/windows/win32/api/oaidl/ns-oaidl-variant), [Currency](/windows/win32/api/wtypes/ns-wtypes-cy-r1), [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams)e [IDispatch:: Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) nel Windows SDK.

Per ulteriori informazioni sulla `COleVariant` classe e sul relativo utilizzo nell'automazione OLE, vedere "passaggio di parametri in automazione OLE" nell'articolo [automazione](../../mfc/automation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="colevariantattach"></a><a name="attach"></a>COleVariant:: Connetti

Chiamare questa funzione per alleghi l'oggetto [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) specificato all' `COleVariant` oggetto corrente.

```cpp
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto esistente `VARIANT` da collegare all' `COleVariant` oggetto corrente.

### <a name="remarks"></a>Osservazioni

Questa funzione imposta il VARTYPE di *varSrc* su VT_EMPTY.

Per ulteriori informazioni, vedere le voci [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) e [VarEnum](/windows/win32/api/wtypes/ne-wtypes-varenum) nel Windows SDK.

## <a name="colevariantcolevariant"></a><a name="colevariant"></a>COleVariant:: COleVariant

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

*varSrc*<br/>
`COleVariant`Oggetto o esistente `VARIANT` da copiare nel nuovo `COleVariant` oggetto.

*pSrc*<br/>
Puntatore a un `VARIANT` oggetto che verrà copiato nel nuovo `COleVariant` oggetto.

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
`VARTYPE`Per il nuovo `COleVariant` oggetto.

*strSrc*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) da copiare nel nuovo `COleVariant` oggetto.

*nsrc*, *lSrc* un valore numerico da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
`VARTYPE`Per il nuovo `COleVariant` oggetto.

*curSrc*<br/>
Oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) da copiare nel nuovo `COleVariant` oggetto.

*fltSrc*, *dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `COleVariant`.

*timeSrc*<br/>
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) da copiare nel nuovo `COleVariant` oggetto.

*arrSrc*<br/>
Oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) da copiare nel nuovo `COleVariant` oggetto.

*lbSrc*<br/>
Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) da copiare nel nuovo `COleVariant` oggetto.

*PIDL*<br/>
Puntatore a una struttura [ItemId](/windows/win32/api/shtypes/ns-shtypes-itemidlist) da copiare nel nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori creano nuovi `COleVariant` oggetti inizializzati sul valore specificato. Di seguito viene riportata una breve descrizione di ognuno di questi costruttori.

- **COleVariant ()** Crea un `COleVariant` oggetto vuoto, VT_EMPTY.

- **COleVariant (** *varSrc* **)** Copia un `VARIANT` oggetto o esistente `COleVariant` . Il tipo variant viene mantenuto.

- **COleVariant (** *pSrc* **)** Copia un `VARIANT` oggetto o esistente `COleVariant` . Il tipo variant viene mantenuto.

- **COleVariant (** *lpszSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *lpszSrc* **,** *vtSrc* **)** Copia una stringa nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_BSTR (Unicode) o VT_BSTRT (ANSI).

- **COleVariant (** *strSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant (** *nsrc* **)** Copia un intero a 8 bit nel nuovo oggetto, VT_UI1.

- **COleVariant (** *nsrc* **,** *vtSrc* **)** Copia un intero a 16 bit (o un valore booleano) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I2 o VT_BOOL.

- **COleVariant (** *lSrc* **,** *vtSrc* **)** Copia un intero a 32 bit (o un valore SCODE) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I4, VT_ERROR o VT_BOOL.

- **COleVariant (** *curSrc* **)** Copia un `COleCurrency` valore nel nuovo oggetto, VT_CY.

- **COleVariant (** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit nel nuovo oggetto, VT_R4.

- **COleVariant (** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit nel nuovo oggetto, VT_R8.

- **COleVariant (** *timeSrc* **)** Copia un `COleDateTime` valore nel nuovo oggetto, VT_DATE.

- **COleVariant (** *arrSrc* **)** Copia un `CByteArray` oggetto nel nuovo oggetto, VT_EMPTY.

- **COleVariant (** *lbSrc* **)** Copia un `CLongBinary` oggetto nel nuovo oggetto, VT_EMPTY.

Per ulteriori informazioni su SCODE, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes) nell'Windows SDK.

## <a name="colevariantchangetype"></a><a name="changetype"></a>COleVariant:: ChangeType

Converte il tipo di valore Variant in questo `COleVariant` oggetto.

```cpp
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*VarType*<br/>
VARTYPE per questo `COleVariant` oggetto.

*pSrc*<br/>
Puntatore all'oggetto [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) da convertire. Se questo valore è NULL, questo `COleVariant` oggetto viene usato come origine per la conversione.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere le voci [Variant](/windows/win32/api/oaidl/ns-oaidl-variant), [VarEnum](/windows/win32/api/wtypes/ne-wtypes-varenum)e [VariantChangeType](/windows/win32/api/oleauto/nf-oleauto-variantchangetype) nel Windows SDK.

## <a name="colevariantclear"></a><a name="clear"></a>COleVariant:: Clear

Cancella la classe `VARIANT`.

```cpp
void Clear();
```

### <a name="remarks"></a>Osservazioni

In questo modo, il VARTYPE per questo oggetto viene impostato su VT_EMPTY. Il `COleVariant` distruttore chiama questa funzione.

Per ulteriori informazioni, vedere le `VARIANT` voci, VARTYPE e `VariantClear` nell'Windows SDK.

## <a name="colevariantdetach"></a><a name="detach"></a>COleVariant::D etach

Disconnette l'oggetto [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) sottostante da questo `COleVariant` oggetto.

```
VARIANT Detach();
```

### <a name="remarks"></a>Osservazioni

Questa funzione imposta il VARTYPE per l' `COleVariant` oggetto VT_EMPTY.

> [!NOTE]
> Dopo `Detach` la chiamata a, è responsabilità del chiamante chiamare `VariantClear` sulla struttura risultante `VARIANT` .

Per ulteriori informazioni, vedere le voci [Variant](/windows/win32/api/oaidl/ns-oaidl-variant), [VarEnum](/windows/win32/api/wtypes/ne-wtypes-varenum)e [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) nel Windows SDK.

## <a name="colevariantgetbytearrayfromvariantarray"></a><a name="getbytearrayfromvariantarray"></a>COleVariant:: GetByteArrayFromVariantArray

Recupera una matrice di byte da una matrice variant esistente

```cpp
void GetByteArrayFromVariantArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*byte*<br/>
Riferimento a un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) esistente.

## <a name="colevariantoperator-lpcvariant"></a><a name="operator_lpcvariant"></a>COleVariant:: operator LPCVARIANT

Questo operatore di cast restituisce una `VARIANT` struttura il cui valore viene copiato da questo `COleVariant` oggetto.

```
operator LPCVARIANT() const;
```

### <a name="remarks"></a>Osservazioni

## <a name="colevariantoperator-lpvariant"></a><a name="operator_lpvariant"></a>COleVariant:: operator LPVARIANT

Chiamare questo operatore di cast per accedere alla `VARIANT` struttura sottostante per questo `COleVariant` oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> La modifica del valore nella `VARIANT` struttura a cui accede il puntatore restituito da questa funzione modificherà il valore di questo `COleVariant` oggetto.

## <a name="colevariantoperator-"></a><a name="operator_eq"></a>COleVariant:: operator =

Questi operatori di assegnazione di overload copiano il valore di origine in questo `COleVariant` oggetto.

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

### <a name="remarks"></a>Osservazioni

Di seguito viene riportata una breve descrizione di ogni operatore:

- **operatore = (** *varSrc* **)** Copia un oggetto VARIANT o esistente `COleVariant` in questo oggetto.

- **operatore = (** *pSrc* **)** Copia l'oggetto VARIANT accessibile da *pSrc* in questo oggetto.

- **operatore = (** *lpszSrc* **)** Copia una stringa con terminazione null in questo oggetto e imposta VARTYPE su VT_BSTR.

- **operatore = (** *strSrc* **)** Copia un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) in questo oggetto e imposta il VARTYPE su VT_BSTR.

- **operatore = (** *nsrc* **)** Copia un valore integer a 8 o a 16 bit in questo oggetto. Se *nsrc* è un valore a 8 bit, il VarType di questo oggetto viene impostato su VT_UI1. Se *nsrc* è un valore a 16 bit e il VarType di questo oggetto è VT_BOOL, viene mantenuto; in caso contrario, è impostato su VT_I2.

- **operatore = (** *lSrc* **)** Copia un valore integer a 32 bit in questo oggetto. Se il VARTYPE di questo oggetto è VT_ERROR, viene mantenuto; in caso contrario, è impostato su VT_I4.

- **operatore = (** *curSrc* **)** Copia un oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) in questo oggetto e imposta il VARTYPE su VT_CY.

- **operatore = (** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit in questo oggetto e imposta il VARTYPE su VT_R4.

- **operatore = (** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit in questo oggetto e imposta il VARTYPE su VT_R8.

- **operatore = (** *dateSrc* **)** Copia un oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) in questo oggetto e imposta il VARTYPE su VT_DATE.

- **operatore = (** *arrSrc* **)** Copia un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) in questo `COleVariant` oggetto.

- **operatore = (** *lbSrc* **)** Copia un oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) in questo `COleVariant` oggetto.

Per ulteriori informazioni, vedere le voci [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) e [VarEnum](/windows/win32/api/wtypes/ne-wtypes-varenum) nel Windows SDK.

## <a name="colevariantoperator-"></a><a name="operator_eq_eq"></a>COleVariant:: operator = =

Questo operatore confronta due valori Variant e restituisce un valore diverso da zero se sono uguali. in caso contrario, 0.

```
BOOL operator==(const VARIANT& varSrc) const;
BOOL operator==(LPCVARIANT pSrc) const;
```

## <a name="colevariantoperator-ltlt-gtgt"></a><a name="operator_lt_lt__gt_gt"></a>Operatore COleVariant:: &lt; &lt; ,&gt;&gt;

Restituisce un `COleVariant` valore a `CArchive` o `CdumpContext` e immette un `COleVariant` oggetto da `CArchive` .

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

### <a name="remarks"></a>Osservazioni

L' `COleVariant` **\<\<**) operator supports diagnostic dumping and storing to an archive. The extraction (**>>** operatore di inserimento () supporta il caricamento da un archivio.

## <a name="colevariantsetstring"></a><a name="setstring"></a>COleVariant:: sestring

Imposta la stringa su un tipo particolare.

```cpp
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```

### <a name="parameters"></a>Parametri

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*VtSrc*<br/>
VARTYPE per il nuovo `COleVariant` oggetto.

### <a name="remarks"></a>Osservazioni

Il parametro *vtSrc* deve essere VT_BSTR (Unicode) o VT_BSTRT (ANSI). `SetString`viene in genere usato per impostare le stringhe su ANSI, poiché il valore predefinito per il costruttore [COleVariant:: COleVariant](#colevariant) con una stringa o un parametro puntatore di stringa e nessun VarType è Unicode.

Un recordset DAO in una compilazione non UNICODE prevede che le stringhe siano ANSI. Per le funzioni DAO che utilizzano `COleVariant` oggetti, pertanto, se non si crea un recordset Unicode, è necessario utilizzare il form **COleVariant:: COleVariant (** *lpszSrc* **,** *vtSrc* **)** del costruttore con *vtSrc* impostato su VT_BSTRT (ANSI) oppure utilizzare `SetString` con *vtSrc* impostato su VT_BSTRT per creare stringhe ANSI. Ad esempio, le `CDaoRecordset` funzioni [CDaoRecordset:: Seek](../../mfc/reference/cdaorecordset-class.md#seek) e [CDaoRecordset:: SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) utilizzano `COleVariant` oggetti come parametri. Questi oggetti devono essere ANSI se il recordset DAO non è UNICODE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
