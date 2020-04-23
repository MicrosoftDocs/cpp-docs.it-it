---
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
ms.openlocfilehash: e89bbc5f263dc9303140e43914619090109b8315
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753204"
---
# <a name="cdumpcontext-class"></a>Classe CDumpContext

Supporta l'output di diagnostica orientato al flusso sotto forma di testo leggibile.

## <a name="syntax"></a>Sintassi

```
class CDumpContext
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDumpContext::CDumpContext](#cdumpcontext)|Costruisce un oggetto `CDumpContext`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDumpContext::DumpAsHex](#dumpashex)|Esegue il dump dell'elemento indicato in formato esadecimale.|
|[CDumpContext::Flush](#flush)|Scarica tutti i dati nel buffer del contesto di dump.|
|[CDumpContext::GetDepth](#getdepth)|Ottiene un numero intero corrispondente alla profondità del dump.|
|[CDumpContext::HexDump](#hexdump)|Esegue il dump dei byte contenuti in una matrice in formato esadecimale.|
|[CDumpContext::SetDepth](#setdepth)|Imposta la profondità del dump.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDumpContext::operatore&lt;&lt;](#operator_lt_lt)|Inserisce variabili e oggetti nel contesto di dump.|

## <a name="remarks"></a>Osservazioni

`CDumpContext`non dispone di una classe base.

È possibile utilizzare [afxDump](diagnostic-services.md#afxdump) `CDumpContext` , un oggetto predichiarato, per la maggior parte del dumping. L'oggetto `afxDump` è disponibile solo nella versione di debug della libreria Microsoft Foundation Class.

Molti dei [servizi](../../mfc/reference/diagnostic-services.md) di `afxDump` diagnostica della memoria utilizzano per l'output.

Nell'ambiente Windows, l'output `afxDump` dell'oggetto predefinito, `cerr` concettualmente simile al flusso, viene `OutputDebugString`instradato al debugger tramite la funzione Windows.

La `CDumpContext` classe dispone di **<<** un operatore di inserimento di overload ( ) per `CObject` i puntatori che eseguono il dump dei dati dell'oggetto. Se è necessario un formato di dump personalizzato per un oggetto derivato, eseguire l'override di [CObject::Dump](../../mfc/reference/cobject-class.md#dump). La maggior parte delle `Dump` classi Microsoft Foundation implementa una funzione membro sottoposta a override.

Le classi non `CObject`derivate `CString`da `CTime`, `CTimeSpan`ad esempio , `CDumpContext` e , dispongono di propri `CFileStatus` `CPoint`operatori `CRect`di inserimento di overload, come le strutture utilizzate spesso, ad esempio , e .

Se si utilizza la macro [IMPLEMENT_DYNAMIC](../../mfc/reference/run-time-object-model-services.md#implement_dynamic) o [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) `CObject::Dump` nell'implementazione della `CObject`classe, verrà stampato il nome della classe derivata. In caso contrario, verrà stampato `CObject`.

La `CDumpContext` classe è disponibile con entrambe le versioni `Dump` Debug e Release della libreria, ma la funzione membro è definita solo nella versione Debug. Utilizzare **#ifdef _DEBUG**  /  `#endif` istruzioni per tramandare `Dump` il codice di diagnostica, incluse le funzioni membro personalizzate.

Prima di creare `CDumpContext` un oggetto personalizzato, è necessario creare un `CFile` oggetto che funga da destinazione di dump.

Per ulteriori `CDumpContext`informazioni su , vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

**#define _DEBUG**

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDumpContext`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cdumpcontextcdumpcontext"></a><a name="cdumpcontext"></a>CDumpContext::CDumpContext

Costruisce un oggetto `CDumpContext`della classe .

```
CDumpContext(CFile* pFile = NULL);
```

### <a name="parameters"></a>Parametri

*pFile (File)*<br/>
Puntatore all'oggetto `CFile` che è la destinazione di dump.

### <a name="remarks"></a>Osservazioni

L'oggetto `afxDump` viene costruito automaticamente.

Non scrivere nel `CFile` sottostante mentre il contesto di dump è attivo; in caso contrario, si interferirà con la discarica. Nell'ambiente Windows, l'output viene instradato `OutputDebugString`al debugger tramite la funzione Windows .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#12](../../mfc/codesnippet/cpp/cdumpcontext-class_1.cpp)]

## <a name="cdumpcontextdumpashex"></a><a name="dumpashex"></a>CDumpContext::DumpAsHex

Esegue il dump del tipo specificato formattato come numeri esadecimali.

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

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per eseguire il dump dell'elemento del tipo specificato come numero esadecimale. Per eseguire il dump di una matrice, chiamare [CDumpContext::HexDump](#hexdump).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#13](../../mfc/codesnippet/cpp/cdumpcontext-class_2.cpp)]

## <a name="cdumpcontextflush"></a><a name="flush"></a>CDumpContext::Flush

Forza la scrittura dei dati rimanenti nei buffer nel file allegato al contesto dump.

```cpp
void Flush();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#14](../../mfc/codesnippet/cpp/cdumpcontext-class_3.cpp)]

## <a name="cdumpcontextgetdepth"></a><a name="getdepth"></a>CDumpContext::GetDepth

Determina se un dump profondo o superficiale è in corso.

```
int GetDepth() const;
```

### <a name="return-value"></a>Valore restituito

Profondità del dump impostata da `SetDepth`.

### <a name="example"></a>Esempio

  Vedere l'esempio per [SetDepth](#setdepth).

## <a name="cdumpcontexthexdump"></a><a name="hexdump"></a>CDumpContext::HexDump

Esegue il dump di una matrice di byte formattati come numeri esadecimali.

```cpp
void HexDump(
    LPCTSTR lpszLine,
    BYTE* pby,
    int nBytes,
    int nWidth);
```

### <a name="parameters"></a>Parametri

*lpszLine (linea di lavoro)*<br/>
Stringa da restituire all'inizio di una nuova riga.

*pby*<br/>
Puntatore a un buffer contenente i byte di cui eseguire il dump.

*nByte*<br/>
Numero di byte di cui eseguire il dump.

*nLarghezza*<br/>
Numero massimo di byte scaricati per riga (non la larghezza della riga di output).

### <a name="remarks"></a>Osservazioni

Per eseguire il dump di un singolo tipo di elemento specifico come numero esadecimale, chiamare [CDumpContext::DumpAsHex](#dumpashex).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#15](../../mfc/codesnippet/cpp/cdumpcontext-class_4.cpp)]

## <a name="cdumpcontextoperator-ltlt"></a><a name="operator_lt_lt"></a>CDumpContext::operatore&lt;&lt;

Restituisce i dati specificati nel contesto dump.

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

Riferimento `CDumpContext`. Utilizzando il valore restituito, è possibile scrivere più inserimenti su una singola riga di codice sorgente.

### <a name="remarks"></a>Osservazioni

L'operatore di `CObject` inserimento è sottoposto a overload per i puntatori e per la maggior parte dei tipi primitivi. Un puntatore a i risultati carattere in un dump di contenuto di stringa; un puntatore a **void** genera un dump esadecimale solo dell'indirizzo. Un LONGLONG genera un dump di un intero con segno a 64 bit. Un ULONGLONG genera un dump di un intero senza segno a 64 bit.

Se si utilizza la IMPLEMENT_DYNAMIC o IMPLEMENT_SERIAL macro nell'implementazione `CObject::Dump`della classe, l'operatore di inserimento, tramite , stamperà il nome della `CObject`classe derivata. In caso contrario, verrà stampato `CObject`. Se si `Dump` esegue l'override della funzione della classe , è possibile fornire un output più significativo del contenuto dell'oggetto anziché un dump esadecimale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#17](../../mfc/codesnippet/cpp/cdumpcontext-class_5.cpp)]

## <a name="cdumpcontextsetdepth"></a><a name="setdepth"></a>CDumpContext::SetDepth

Imposta la profondità per il dump.

```cpp
void SetDepth(int nNewDepth);
```

### <a name="parameters"></a>Parametri

*nNewDepth (profondità)*<br/>
Nuovo valore di profondità.

### <a name="remarks"></a>Osservazioni

Se si esegue il dump di `CObject` un tipo primitivo o semplice che non contiene puntatori ad altri oggetti, è sufficiente un valore pari a 0. Un valore maggiore di 0 specifica un dump completo in cui tutti gli oggetti vengono scaricati in modo ricorsivo. Ad esempio, un dump completo di una raccolta eseguirà il dump di tutti gli elementi della raccolta. È possibile utilizzare altri valori di profondità specifici nelle classi derivate.

> [!NOTE]
> I riferimenti circolari non vengono rilevati in dump profondi e possono causare cicli infiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#16](../../mfc/codesnippet/cpp/cdumpcontext-class_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)
