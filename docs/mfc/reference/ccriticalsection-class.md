---
title: Classe CCriticalSection
ms.date: 11/04/2016
f1_keywords:
- CCriticalSection
- AFXMT/CCriticalSection
- AFXMT/CCriticalSection::CCriticalSection
- AFXMT/CCriticalSection::Lock
- AFXMT/CCriticalSection::Unlock
- AFXMT/CCriticalSection::m_sect
helpviewer_keywords:
- CCriticalSection [MFC], CCriticalSection
- CCriticalSection [MFC], Lock
- CCriticalSection [MFC], Unlock
- CCriticalSection [MFC], m_sect
ms.assetid: f776f74b-5b0b-4f32-9c13-2b8e4a0d7b2b
ms.openlocfilehash: d79199a332f6930619e6b4995b04bc590b6ea580
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369370"
---
# <a name="ccriticalsection-class"></a>Classe CCriticalSection

Rappresenta una "sezione critica", ovvero un oggetto di sincronizzazione che consente a un thread alla volta di accedere a una risorsa o a una sezione di codice.

## <a name="syntax"></a>Sintassi

```
class CCriticalSection : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCriticalSection::CCriticalSection](#ccriticalsection)|Costruisce un oggetto `CCriticalSection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCriticalSection::Lock](#lock)|Utilizzare per accedere `CCriticalSection` all'oggetto.|
|[CCriticalSection::Sblocca](#unlock)|Rilascia l'oggetto `CCriticalSection`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCriticalSection::operator CRITICAL_SECTION](#operator_critical_section_star)|Recupera un puntatore all'oggetto CRITICAL_SECTION interno.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCriticalSection::m_sect](#m_sect)|Oggetto CRITICAL_SECTION.|

## <a name="remarks"></a>Osservazioni

Le sezioni critiche sono utili quando è possibile modificare i dati o altre risorse controllate solo un thread alla volta. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta. Utilizzando un `CCriticalSection` oggetto per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.

> [!NOTE]
> La funzionalità `CCriticalSection` della classe viene fornita da un oggetto CRITICAL_SECTION Win32 effettivo.

Le sezioni critiche vengono utilizzate al posto dei mutex (vedere [CMutex](../../mfc/reference/cmutex-class.md)) quando la velocità è critica e la risorsa non verrà utilizzata oltre i limiti del processo.

Esistono due metodi per `CCriticalSection` l'utilizzo di un oggetto: autonomo e incorporato in una classe.

- Metodo autonomo Per utilizzare un `CCriticalSection` oggetto autonomo, `CCriticalSection` costruire l'oggetto quando è necessario. Dopo un ritorno riuscito dal costruttore, bloccare in modo esplicito l'oggetto con una chiamata a [Lock](#lock). [Sblocco](#unlock) chiamata al termine dell'accesso alla sezione critica. Questo metodo, mentre più chiaro a qualcuno che legge il codice sorgente, è più soggetto a errori in quanto è necessario ricordare di bloccare e sbloccare la sezione critica prima e dopo l'accesso.

   Un metodo più preferibile consiste nell'utilizzare la [classe CSingleLock.A](../../mfc/reference/csinglelock-class.md) more preferable method is to use the CSingleLock class. Ha anche `Lock` un `Unlock` metodo e, ma non devi preoccuparti di sbloccare la risorsa se si verifica un'eccezione.

- Metodo incorporato È inoltre possibile condividere una `CCriticalSection`classe con più thread aggiungendo un membro dati di tipo -type alla classe e bloccando il membro dati quando necessario.

Per ulteriori informazioni `CCriticalSection` sull'utilizzo degli oggetti, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="ccriticalsectionccriticalsection"></a><a name="ccriticalsection"></a>CCriticalSection::CCriticalSection

Costruisce un oggetto `CCriticalSection`.

```
CCriticalSection();
```

### <a name="remarks"></a>Osservazioni

Per accedere o `CCriticalSection` rilasciare un oggetto, creare un [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il relativo [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se `CCriticalSection` l'oggetto viene utilizzato in modo autonomo, chiamare la relativa funzione membro [Unlock](#unlock) per rilasciarlo.

Se il costruttore non riesce ad allocare la memoria di sistema richiesta, viene generata automaticamente un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CCriticalSection::Lock](#lock).

## <a name="ccriticalsectionlock"></a><a name="lock"></a>CCriticalSection::Lock

Chiamare questa funzione membro per ottenere l'accesso all'oggetto sezione critica.

```
BOOL Lock();
BOOL Lock(DWORD dwTimeout);
```

### <a name="parameters"></a>Parametri

*dwTimeout (dwTimeout)*<br/>
`Lock`ignora il valore di questo parametro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Lock`è una chiamata di blocco che non verrà restituita fino a quando l'oggetto sezione critica non viene segnalato (diventa disponibile).

Se sono necessarie attese a tempo, è possibile `CCriticalSection` utilizzare un oggetto [CMutex](../../mfc/reference/cmutex-class.md) anziché un oggetto.

Se `Lock` non riesce ad allocare la memoria di sistema necessaria, viene generata automaticamente un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)).

### <a name="example"></a>Esempio

In questo esempio viene illustrato l'approccio di sezione `_strShared` critica annidata `CCriticalSection` controllando l'accesso a una risorsa condivisa (l'oggetto statico) utilizzando un oggetto condiviso. La `SomeMethod` funzione illustra l'aggiornamento sicuro di una risorsa condivisa.

[!code-cpp[NVC_MFC_Utilities#11](../../mfc/codesnippet/cpp/ccriticalsection-class_1.h)]

## <a name="ccriticalsectionm_sect"></a><a name="m_sect"></a>CCriticalSection::m_sect

Contiene un oggetto sezione critica `CCriticalSection` utilizzato da tutti i metodi.

```
CRITICAL_SECTION m_sect;
```

## <a name="ccriticalsectionoperator-critical_section"></a><a name="operator_critical_section_star"></a>CCriticalSection::operator CRITICAL_SECTION

Recupera un oggetto CRITICAL_SECTION.

```
operator CRITICAL_SECTION*();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare un puntatore all'oggetto interno CRITICAL_SECTION.

## <a name="ccriticalsectionunlock"></a><a name="unlock"></a>CCriticalSection::Sblocca

Rilascia `CCriticalSection` l'oggetto per l'utilizzo da parte di un altro thread.

```
BOOL Unlock();
```

### <a name="return-value"></a>Valore restituito

Diverso da `CCriticalSection` zero se l'oggetto era di proprietà del thread e il rilascio ha avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se `CCriticalSection` l'oggetto viene utilizzato `Unlock` in modo autonomo, deve essere chiamato immediatamente dopo aver completato l'utilizzo della risorsa controllata dalla sezione critica. Se viene utilizzato un [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto, `CCriticalSection::Unlock` verrà chiamato `Unlock` dalla funzione membro dell'oggetto di blocco.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CCriticalSection::Lock](#lock).

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMutex](../../mfc/reference/cmutex-class.md)
