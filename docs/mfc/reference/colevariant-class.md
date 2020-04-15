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
ms.openlocfilehash: f907ed7c058f87cf03530411bc8fa4a3c108a4f0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374829"
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
|[COleVariant::COleVariant](#colevariant)|Costruisce un oggetto `COleVariant`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant::Attach](#attach)|Associa un VARIANT a `COleVariant`un oggetto .|
|[COleVariant::ChangeType](#changetype)|Modifica il tipo `COleVariant` di variante di questo oggetto.|
|[COleVariant::Clear](#clear)|Cancella questo oggetto `COleVariant`.|
|[COleVariant::Detach](#detach)|Stacca un VARIANT `COleVariant` da a e restituisce il VARIANT.|
|[COleVariant::GetByteArrayFromVariantArray](#getbytearrayfromvariantarray)|Recupera una matrice di byte da una matrice variant esistente.|
|[COleVariant::SetString](#setstring)|Imposta la stringa su un tipo specifico, in genere ANSI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleVariant::operator LPCVARIANT](#operator_lpcvariant)|Converte `COleVariant` un valore `LPCVARIANT`in un oggetto .|
|[COleVariant::operatorE LPVARIANT](#operator_lpvariant)|Converte `COleVariant` un oggetto `LPVARIANT`in un oggetto .|
|[COleVariant::operatore](#operator_eq)|Copia un `COleVariant` valore.|
|[COleVariant::operatore](#operator_eq_eq)|Confronta due `COleVariant` valori.|
|[COleVariant::operator &lt; &lt;,&gt;&gt;](#operator_lt_lt__gt_gt)|Restituisce `COleVariant` un `CArchive` valore `CDumpContext` in o `COleVariant` e `CArchive`immette un oggetto da .|

## <a name="remarks"></a>Osservazioni

Questo tipo di dati viene utilizzato nell'automazione OLE. In particolare, la struttura [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams) contiene un puntatore a una matrice di strutture VARIANT. Una `DISPPARAMS` struttura viene utilizzata per passare parametri a [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

> [!NOTE]
> Questa classe è `VARIANT` derivata dalla struttura. Ciò significa che `COleVariant` è possibile passare `VARIANT` un in un parametro che richiede un e che i membri dati della `VARIANT` struttura sono membri dati accessibili di `COleVariant`.

Le due classi MFC correlate [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) incapsulano i tipi di dati variant CURRENCY ( `VT_CY`) e DATE ( `VT_DATE`). La `COleVariant` classe viene ampiamente utilizzata nelle classi DAO; vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).

Per ulteriori informazioni, vedere le voci [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [CURRENCY](/windows/win32/api/wtypes/ns-wtypes-cy~r1), [DISPPARAMS](/windows/win32/api/oaidl/ns-oaidl-dispparams)e [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) in Windows SDK.

Per ulteriori informazioni `COleVariant` sulla classe e sul relativo utilizzo nell'automazione OLE, vedere "Passaggio di parametri nell'automazione OLE" nell'articolo [Automazione](../../mfc/automation.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tagVARIANT`

`COleVariant`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdisp.h

## <a name="colevariantattach"></a><a name="attach"></a>COleVariant::Attach

Chiamare questa funzione per associare l'oggetto [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) specificato all'oggetto corrente. `COleVariant`

```
void Attach(VARIANT& varSrc);
```

### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` esistente da associare all'oggetto corrente. `COleVariant`

### <a name="remarks"></a>Osservazioni

Questa funzione imposta il VARTYPE di *varSrc* su VT_EMPTY.

Per ulteriori informazioni, vedere le voci [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) e [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum) in Windows SDK.

## <a name="colevariantcolevariant"></a><a name="colevariant"></a>COleVariant::COleVariant

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
Oggetto `COleVariant` esistente `VARIANT` da copiare nel `COleVariant` nuovo oggetto.

*pSrc*<br/>
Puntatore a `VARIANT` un oggetto che verrà `COleVariant` copiato nel nuovo oggetto.

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*vtSrc*<br/>
Oggetto `VARTYPE` per `COleVariant` il nuovo oggetto.

*strSrc*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*nSrc*, *lSrc* Valore numerico da `COleVariant` copiare nel nuovo oggetto.

*vtSrc*<br/>
Oggetto `VARTYPE` per `COleVariant` il nuovo oggetto.

*curSrc*<br/>
Oggetto [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*fltSrc*, *dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `COleVariant`.

*timeSrc*<br/>
Oggetto [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto da copiare nel nuovo `COleVariant` oggetto.

*arrSrc*<br/>
Oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) da copiare `COleVariant` nel nuovo oggetto.

*lbSrc*<br/>
Oggetto [CLongBinary](../../mfc/reference/clongbinary-class.md) da copiare `COleVariant` nel nuovo oggetto.

*pidl*<br/>
Puntatore a una struttura [ITEMIDLIST](/windows/win32/api/shtypes/ns-shtypes-itemidlist) da `COleVariant` copiare nel nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `COleVariant` creano nuovi oggetti inizializzati sul valore specificato. Segue una breve descrizione di ciascuno di questi costruttori.

- **COleVariant( )** Crea un `COleVariant` oggetto vuoto, VT_EMPTY.

- **COleVariant(** *varSrc* **)** Copia un `VARIANT` oggetto `COleVariant` esistente o. Il tipo variant viene mantenuto.

- **COleVariant(** *pSrc* **)** Copia un `VARIANT` oggetto `COleVariant` esistente o. Il tipo variant viene mantenuto.

- **COleVariant(** *lpszSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant(** *lpszSrc* **,** *vtSrc* **)** Copia una stringa nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_BSTR (UNICODE) o VT_BSTRT (ANSI).

- **COleVariant(** *strSrc* **)** Copia una stringa nel nuovo oggetto, VT_BSTR (UNICODE).

- **COleVariant(** *nSrc* **)** Copia un intero a 8 bit nel nuovo oggetto, VT_UI1.

- **COleVariant(** *nSrc* **,** *vtSrc* **)** Copia un numero intero a 16 bit (o valore booleano) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I2 o VT_BOOL.

- **COleVariant(** *lSrc* **,** *vtSrc* **)** Copia un intero a 32 bit (o valore SCODE) nel nuovo oggetto. Il parametro *vtSrc* deve essere VT_I4, VT_ERROR o VT_BOOL.

- **COleVariant(** *rcSrc* **)** Copia un `COleCurrency` valore nel nuovo oggetto, VT_CY.

- **COleVariant(** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit nel nuovo oggetto, VT_R4.

- **COleVariant(** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit nel nuovo oggetto, VT_R8.

- **COleVariant(** *timeSrc* **)** Copia un `COleDateTime` valore nel nuovo oggetto, VT_DATE.

- **COleVariant(** *arrSrc* **)** Copia un `CByteArray` oggetto nel nuovo oggetto, VT_EMPTY.

- **COleVariant(** *lbSrc* **)** Copia un `CLongBinary` oggetto nel nuovo oggetto, VT_EMPTY.

Per ulteriori informazioni su SCODE, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

## <a name="colevariantchangetype"></a><a name="changetype"></a>COleVariant::ChangeType

Converte il tipo di `COleVariant` valore variant in questo oggetto.

```
void ChangeType(VARTYPE vartype, LPVARIANT pSrc = NULL);
```

### <a name="parameters"></a>Parametri

*Vartype*<br/>
VARTYPE per `COleVariant` questo oggetto.

*pSrc*<br/>
Puntatore all'oggetto [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) da convertire. Se questo valore è `COleVariant` NULL, questo oggetto viene utilizzato come origine per la conversione.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere le voci [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum)e [VariantChangeType](/windows/win32/api/oleauto/nf-oleauto-variantchangetype) in Windows SDK.

## <a name="colevariantclear"></a><a name="clear"></a>COleVariant::Clear

Cancella la classe `VARIANT`.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

In questo modo varTYPE per questo oggetto viene impostato su VT_EMPTY. Il `COleVariant` distruttore chiama questa funzione.

Per ulteriori informazioni, `VARIANT`vedere , `VariantClear` VARTYPE e le voci in Windows SDK.

## <a name="colevariantdetach"></a><a name="detach"></a>COleVariant::Detach

Scollega l'oggetto [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) `COleVariant` sottostante da questo oggetto.

```
VARIANT Detach();
```

### <a name="remarks"></a>Osservazioni

Questa funzione imposta varTYPE `COleVariant` per questo oggetto su VT_EMPTY.

> [!NOTE]
> Dopo `Detach`aver chiamato , è responsabilità `VariantClear` del `VARIANT` chiamante chiamare la struttura risultante.

Per ulteriori informazioni, vedere le voci [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant), [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum)e [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) in Windows SDK.

## <a name="colevariantgetbytearrayfromvariantarray"></a><a name="getbytearrayfromvariantarray"></a>COleVariant::GetByteArrayFromVariantArray

Recupera una matrice di byte da una matrice variant esistente

```
void GetByteArrayFromVariantArray(CByteArray& bytes);
```

### <a name="parameters"></a>Parametri

*Byte*<br/>
Riferimento a un oggetto [CByteArray](../../mfc/reference/cbytearray-class.md) esistente.

## <a name="colevariantoperator-lpcvariant"></a><a name="operator_lpcvariant"></a>COleVariant::operator LPCVARIANT

Questo operatore `VARIANT` di cast restituisce `COleVariant` una struttura il cui valore viene copiato da questo oggetto.

```
operator LPCVARIANT() const;
```

### <a name="remarks"></a>Osservazioni

## <a name="colevariantoperator-lpvariant"></a><a name="operator_lpvariant"></a>COleVariant::operatorE LPVARIANT

Chiamare questo operatore di `VARIANT` cast `COleVariant` per accedere alla struttura sottostante per questo oggetto.

```
operator LPVARIANT();
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Se si modifica `VARIANT` il valore nella struttura a cui accede il `COleVariant` puntatore restituito da questa funzione, il valore di questo oggetto verrà modificato.

## <a name="colevariantoperator-"></a><a name="operator_eq"></a>COleVariant::operatore

Questi operatori di assegnazione di `COleVariant` overload copiano il valore di origine in questo oggetto.

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

Di seguito è fornita una breve descrizione di ciascun operatore:

- **operatore : (** *varSrc* **)** Copia un oggetto `COleVariant` o un oggetto variant esistente in questo oggetto.

- **operatore : (** *pSrc* **)** Copia l'oggetto VARIANT a cui accede *pSrc* in questo oggetto.

- **operatore : (** *lpszSrc* **)** Copia una stringa con terminazione null in questo oggetto e imposta VARTYPE su VT_BSTR.

- **operatore : (** *strSrc* **)** Copia un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md) in questo oggetto e imposta VARTYPE su VT_BSTR.

- **operatore : (** *nSrc* **)** Copia un valore integer a 8 o 16 bit in questo oggetto. Se *nSrc* è un valore a 8 bit, il VARTYPE di questo è impostato su VT_UI1. Se *nSrc* è un valore a 16 bit e il VARTYPE di questo tipo è VT_BOOL, viene mantenuto; in caso contrario, è impostato su VT_I2.

- **operatore : (** *lSrc* **)** Copia un valore integer a 32 bit in questo oggetto. Se il VARTYPE di questo è VT_ERROR, viene mantenuto; in caso contrario, è impostato su VT_I4.

- **operatore : (** *curSrc* **)** Copia un [COleCurrency](../../mfc/reference/colecurrency-class.md) oggetto in questo oggetto e imposta il VARTYPE per VT_CY.

- **operatore : (** *fltSrc* **)** Copia un valore a virgola mobile a 32 bit in questo oggetto e imposta VARTYPE su VT_R4.

- **operatore : (** *dblSrc* **)** Copia un valore a virgola mobile a 64 bit in questo oggetto e imposta VARTYPE su VT_R8.

- **operatore : (** *dateSrc* **)** Copia un [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto in questo oggetto e imposta il VARTYPE per VT_DATE.

- **operatore : (** *arrSrc* **)** Copia un [CByteArray](../../mfc/reference/cbytearray-class.md) oggetto `COleVariant` in questo oggetto.

- **operatore : (** *lbSrc* **)** Copia un [CLongBinary](../../mfc/reference/clongbinary-class.md) oggetto `COleVariant` in questo oggetto.

Per ulteriori informazioni, vedere le voci [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) e [VARENUM](/windows/win32/api/wtypes/ne-wtypes-varenum) in Windows SDK.

## <a name="colevariantoperator-"></a><a name="operator_eq_eq"></a>COleVariant::operatore

Questo operatore confronta due valori variant e restituisce diverso da zero se sono uguali; in caso contrario 0.

```
BOOL operator==(const VARIANT& varSrc) const;
BOOL operator==(LPCVARIANT pSrc) const;
```

## <a name="colevariantoperator-ltlt-gtgt"></a><a name="operator_lt_lt__gt_gt"></a>COleVariant::operator &lt; &lt;,&gt;&gt;

Restituisce `COleVariant` un `CArchive` valore `CdumpContext` in o `COleVariant` e `CArchive`immette un oggetto da .

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

L'operatore `COleVariant` di inserimento (**\<**) supporta il dump diagnostico e l'archiviazione in un archivio. L'operatore di estrazione (**>>**) supporta il caricamento da un archivio.

## <a name="colevariantsetstring"></a><a name="setstring"></a>COleVariant::SetString

Imposta la stringa su un tipo particolare.

```
void SetString(LPCTSTR lpszSrc, VARTYPE vtSrc);
```

### <a name="parameters"></a>Parametri

*lpszSrc*<br/>
Stringa con terminazione null da copiare nel nuovo `COleVariant` oggetto.

*VtSrc*<br/>
VARTYPE per il `COleVariant` nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Il parametro *vtSrc* deve essere VT_BSTR (UNICODE) o VT_BSTRT (ANSI). `SetString`viene in genere utilizzato per impostare le stringhe su ANSI, poiché il valore predefinito per il [COleVariant::COleVariant](#colevariant) costruttore con una stringa o un parametro del puntatore di stringa e nessun VARTYPE è UNICODE.

Un recordset DAO in una build non UNICODE prevede che le stringhe siano ANSI. Pertanto, per le `COleVariant` funzioni DAO che utilizzano oggetti, se non si crea un recordset UNICODE, è necessario utilizzare la forma di costruttore **COleVariant::COleVariant(** *lpszSrc* **,** *vtSrc* **)** con *vtSrc* impostato su VT_BSTRT (ANSI) o utilizzare `SetString` con *vtSrc* impostato per VT_BSTRT per creare stringhe ANSI. Ad esempio, `CDaoRecordset` le funzioni [CDaoRecordset::Seek](../../mfc/reference/cdaorecordset-class.md#seek) e [CDaoRecordset::SetFieldValue](../../mfc/reference/cdaorecordset-class.md#setfieldvalue) utilizzano `COleVariant` gli oggetti come parametri. Questi oggetti devono essere ANSI se il recordset DAO non è UNICODE.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
