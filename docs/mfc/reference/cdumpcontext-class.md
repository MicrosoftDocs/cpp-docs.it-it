---
description: 'Altre informazioni su: classe CDumpContext'
title: Classe CDumpContext
ms.date: 11/04/2016
f1_keywords:
- CDumpContext
- AFX/CDumpContext
- AFX/CDumpContext::CDumpContext
- AFX/CDumpContext::DumpAsHex
- AFX/CDumpContext::Flush
- AFX/CDumpContext::GetDepth
- AFX/CDumpContext::HexDump
- AFX/CDumpContext::SetDepth
helpviewer_keywords:
- CDumpContext [MFC], CDumpContext
- CDumpContext [MFC], DumpAsHex
- CDumpContext [MFC], Flush
- CDumpContext [MFC], GetDepth
- CDumpContext [MFC], HexDump
- CDumpContext [MFC], SetDepth
ms.assetid: 98c52b2d-14b5-48ed-b423-479a4d1c60fa
ms.openlocfilehash: 955be92c4a3b08fe6e1d5a947166133143667ac7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97184776"
---
# <a name="cdumpcontext-class"></a>Classe CDumpContext

Supporta l'output di diagnostica orientato al flusso sotto forma di testo leggibile.

## <a name="syntax"></a>Sintassi

```
class CDumpContext
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDumpContext:: CDumpContext](#cdumpcontext)|Costruisce un oggetto `CDumpContext`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDumpContext::D umpAsHex](#dumpashex)|Esegui il dump dell'elemento indicato in formato esadecimale.|
|[CDumpContext:: Flush](#flush)|Scarica tutti i dati nel buffer del contesto di dump.|
|[CDumpContext:: getDepth](#getdepth)|Ottiene un intero che corrisponde alla profondità del dump.|
|[CDumpContext:: HexDump](#hexdump)|Dump di byte contenuti in una matrice in formato esadecimale.|
|[CDumpContext:: sedepth](#setdepth)|Imposta la profondità del dump.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore CDumpContext:: &lt;&lt;](#operator_lt_lt)|Inserisce variabili e oggetti nel contesto di dump.|

## <a name="remarks"></a>Commenti

`CDumpContext` non dispone di una classe base.

[](diagnostic-services.md#afxdump) `CDumpContext` Per la maggior parte del dump, è possibile usare afxDump, un oggetto predichiarato. L' `afxDump` oggetto è disponibile solo nella versione di debug del libreria Microsoft Foundation Class.

Molti dei servizi di [diagnostica](../../mfc/reference/diagnostic-services.md) della memoria usano `afxDump` per l'output.

Nell'ambiente Windows, l'output dall' `afxDump` oggetto predefinito, concettualmente simile al `cerr` flusso, viene indirizzato al debugger tramite la funzione di Windows `OutputDebugString` .

La `CDumpContext` classe dispone di un operatore di inserimento ( **<<** ) di overload per i `CObject` puntatori che scaricano i dati dell'oggetto. Se è necessario un formato di dump personalizzato per un oggetto derivato, eseguire l'override di [CObject::D UMP](../../mfc/reference/cobject-class.md#dump). La maggior parte delle classi Microsoft Foundation implementa una funzione membro sottoposta a override `Dump` .

Le classi che non sono derivate da `CObject` , ad esempio `CString` , `CTime` e `CTimeSpan` , dispongono di propri `CDumpContext` operatori di inserimento di overload, come le strutture usate spesso come `CFileStatus` , `CPoint` e `CRect` .

Se si usa la [IMPLEMENT_DYNAMIC](../../mfc/reference/run-time-object-model-services.md#implement_dynamic) o la macro [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) nell'implementazione della classe, in `CObject::Dump` verrà stampato il nome della `CObject` classe derivata da. In caso contrario, verrà stampato `CObject` .

La `CDumpContext` classe è disponibile con le versioni di debug e di rilascio della libreria, ma la `Dump` funzione membro è definita solo nella versione di debug. Usare **#ifdef**  /  `#endif` istruzioni _DEBUG per racchiudere il codice di diagnostica, incluse le `Dump` funzioni membro personalizzate.

Prima di creare `CDumpContext` un oggetto personalizzato, è necessario creare un `CFile` oggetto che funge da destinazione del dump.

Per ulteriori informazioni su `CDumpContext` , vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

**#define _DEBUG**

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDumpContext`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cdumpcontextcdumpcontext"></a><a name="cdumpcontext"></a> CDumpContext:: CDumpContext

Costruisce un oggetto della classe `CDumpContext` .

```
CDumpContext(CFile* pFile = NULL);
```

### <a name="parameters"></a>Parametri

*pFile*<br/>
Puntatore all' `CFile` oggetto che rappresenta la destinazione del dump.

### <a name="remarks"></a>Commenti

L' `afxDump` oggetto viene costruito automaticamente.

Non scrivere nell'oggetto sottostante `CFile` mentre il contesto di dump è attivo; in caso contrario, il dump verrà interferito. Nell'ambiente Windows, l'output viene indirizzato al debugger tramite la funzione Windows `OutputDebugString` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#12](../../mfc/codesnippet/cpp/cdumpcontext-class_1.cpp)]

## <a name="cdumpcontextdumpashex"></a><a name="dumpashex"></a> CDumpContext::D umpAsHex

Esegui il dump del tipo specificato formattato come numeri esadecimali.

```
CDumpContext& DumpAsHex(BYTE b);
CDumpContext& DumpAsHex(DWORD dw);
CDumpContext& DumpAsHex(int n);
CDumpContext& DumpAsHex(LONG l);
CDumpContext& DumpAsHex(LONGLONG n);
CDumpContext& DumpAsHex(UINT u);
CDumpContext& DumpAsHex(ULONGLONG n);
CDumpContext& DumpAsHex(WORD w);
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CDumpContext`.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro per eseguire il dump dell'elemento del tipo specificato come numero esadecimale. Per eseguire il dump di una matrice, chiamare [CDumpContext:: Hexdump](#hexdump).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#13](../../mfc/codesnippet/cpp/cdumpcontext-class_2.cpp)]

## <a name="cdumpcontextflush"></a><a name="flush"></a> CDumpContext:: Flush

Impone la scrittura dei dati rimanenti nei buffer nel file associato al contesto di dump.

```cpp
void Flush();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#14](../../mfc/codesnippet/cpp/cdumpcontext-class_3.cpp)]

## <a name="cdumpcontextgetdepth"></a><a name="getdepth"></a> CDumpContext:: getDepth

Determina se un dump profondo o superficiale è in corso.

```
int GetDepth() const;
```

### <a name="return-value"></a>Valore restituito

Profondità del dump impostata da `SetDepth` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [sedepth](#setdepth).

## <a name="cdumpcontexthexdump"></a><a name="hexdump"></a> CDumpContext:: HexDump

Dump di una matrice di byte formattati come numeri esadecimali.

```cpp
void HexDump(
    LPCTSTR lpszLine,
    BYTE* pby,
    int nBytes,
    int nWidth);
```

### <a name="parameters"></a>Parametri

*lpszLine*<br/>
Stringa da restituire all'inizio di una nuova riga.

*PBY*<br/>
Puntatore a un buffer contenente i byte di cui eseguire il dump.

*nBytes*<br/>
Numero di byte di cui eseguire il dump.

*nWidth*<br/>
Numero massimo di byte scaricati per riga (non la larghezza della riga di output).

### <a name="remarks"></a>Commenti

Per eseguire il dump di un singolo tipo di elemento specifico come numero esadecimale, chiamare [CDumpContext::D umpashex](#dumpashex).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#15](../../mfc/codesnippet/cpp/cdumpcontext-class_4.cpp)]

## <a name="cdumpcontextoperator-ltlt"></a><a name="operator_lt_lt"></a> Operatore CDumpContext:: &lt;&lt;

Restituisce i dati specificati al contesto di dump.

```
CDumpContext& operator<<(const CObject* pOb);
CDumpContext& operator<<(const CObject& ob);
CDumpContext& operator<<(LPCTSTR lpsz);
CDumpContext& operator<<(const void* lp);
CDumpContext& operator<<(BYTE by);
CDumpContext& operator<<(WORD w);
CDumpContext& operator<<(DWORD dw);
CDumpContext& operator<<(int n);
CDumpContext& operator<<(double d);
CDumpContext& operator<<(float f);
CDumpContext& operator<<(LONG l);
CDumpContext& operator<<(UINT u);
CDumpContext& operator<<(LPCWSTR lpsz);
CDumpContext& operator<<(LPCSTR lpsz);
CDumpContext& operator<<(LONGLONG n);
CDumpContext& operator<<(ULONGLONG n);
CDumpContext& operator<<(HWND h);
CDumpContext& operator<<(HDC h);
CDumpContext& operator<<(HMENU h);
CDumpContext& operator<<(HACCEL h);
CDumpContext& operator<<(HFONT h);
```

### <a name="return-value"></a>Valore restituito

Riferimento `CDumpContext`. Usando il valore restituito, è possibile scrivere più inserimenti in una singola riga di codice sorgente.

### <a name="remarks"></a>Commenti

L'operatore di inserimento è sovraccarico per i `CObject` puntatori e per la maggior parte dei tipi primitivi. Un puntatore a un carattere restituisce un dump del contenuto della stringa. un puntatore a **`void`** genera un dump esadecimale solo dell'indirizzo. Un LONGLONG genera un dump di un intero con segno a 64 bit; Un ULONGLONG genera un dump di un Unsigned Integer a 64 bit.

Se si usa la macro IMPLEMENT_DYNAMIC o IMPLEMENT_SERIAL nell'implementazione della classe, l'operatore di inserimento, fino a `CObject::Dump` , stamperà il nome della `CObject` classe derivata da. In caso contrario, verrà stampato `CObject` . Se si esegue l'override della `Dump` funzione della classe, è possibile fornire un output più significativo del contenuto dell'oggetto anziché un dump esadecimale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#17](../../mfc/codesnippet/cpp/cdumpcontext-class_5.cpp)]

## <a name="cdumpcontextsetdepth"></a><a name="setdepth"></a> CDumpContext:: sedepth

Imposta la profondità per il dump.

```cpp
void SetDepth(int nNewDepth);
```

### <a name="parameters"></a>Parametri

*nNewDepth*<br/>
Nuovo valore di profondità.

### <a name="remarks"></a>Commenti

Se si esegue il dump di un tipo primitivo o semplice `CObject` che non contiene puntatori ad altri oggetti, è sufficiente un valore pari a 0. Un valore maggiore di 0 specifica un dump approfondito in cui viene eseguito il dump di tutti gli oggetti in modo ricorsivo. Ad esempio, un dump approfondito di una raccolta effettuerà il dump di tutti gli elementi della raccolta. È possibile utilizzare altri valori di profondità specifici nelle classi derivate.

> [!NOTE]
> I riferimenti circolari non vengono rilevati nei dump profondi e possono generare cicli infiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#16](../../mfc/codesnippet/cpp/cdumpcontext-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
