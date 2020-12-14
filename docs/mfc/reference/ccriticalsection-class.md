---
description: 'Altre informazioni su: classe CCriticalSection'
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
ms.openlocfilehash: 0041eea4453ec02159b26805bd5e7a264a410504
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227793"
---
# <a name="ccriticalsection-class"></a>Classe CCriticalSection

Rappresenta una "sezione critica", ovvero un oggetto di sincronizzazione che consente a un thread alla volta di accedere a una risorsa o a una sezione di codice.

## <a name="syntax"></a>Sintassi

```
class CCriticalSection : public CSyncObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCriticalSection:: CCriticalSection](#ccriticalsection)|Costruisce un oggetto `CCriticalSection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCriticalSection:: Lock](#lock)|Utilizzare per ottenere l'accesso all' `CCriticalSection` oggetto.|
|[CCriticalSection:: Unlock](#unlock)|Rilascia l'oggetto `CCriticalSection`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CCriticalSection:: operator CRITICAL_SECTION *](#operator_critical_section_star)|Recupera un puntatore all'oggetto CRITICAL_SECTION interno.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CCriticalSection:: m_sect](#m_sect)|Oggetto CRITICAL_SECTION.|

## <a name="remarks"></a>Commenti

Le sezioni critiche sono utili quando è possibile consentire a un solo thread alla volta di modificare i dati o altre risorse controllate. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta. Utilizzando un `CCriticalSection` oggetto per controllare l'elenco collegato, un solo thread alla volta può ottenere l'accesso all'elenco.

> [!NOTE]
> La funzionalità della `CCriticalSection` classe viene fornita da un oggetto critical_section Win32 effettivo.

Vengono usate sezioni critiche anziché mutex (vedere [CMutex](../../mfc/reference/cmutex-class.md)) quando la velocità è fondamentale e la risorsa non verrà usata tra i limiti del processo.

Esistono due metodi per l'utilizzo di un `CCriticalSection` oggetto: autonomo e incorporato in una classe.

- Metodo autonomo per usare un oggetto autonomo `CCriticalSection` , costruire l' `CCriticalSection` oggetto quando necessario. Dopo un risultato positivo dal costruttore, bloccare in modo esplicito l'oggetto con una chiamata a [Lock](#lock). Chiamare [Unlock](#unlock) dopo aver eseguito l'accesso alla sezione critica. Questo metodo, benché più chiaro per qualcuno che legge il codice sorgente, è più soggetto a errori, in quanto è necessario ricordarsi di bloccare e sbloccare la sezione critica prima e dopo l'accesso.

   Un metodo più preferibile consiste nell'usare la classe [CSingleLock](../../mfc/reference/csinglelock-class.md) . Dispone anche di un `Lock` `Unlock` metodo e, ma non è necessario sbloccare la risorsa se si verifica un'eccezione.

- Metodo incorporato è inoltre possibile condividere una classe con più thread aggiungendo un `CCriticalSection` membro dati di tipo alla classe e bloccando il membro dati quando necessario.

Per ulteriori informazioni sull'utilizzo degli `CCriticalSection` oggetti, vedere l'articolo [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="ccriticalsectionccriticalsection"></a><a name="ccriticalsection"></a> CCriticalSection:: CCriticalSection

Costruisce un oggetto `CCriticalSection`.

```
CCriticalSection();
```

### <a name="remarks"></a>Commenti

Per accedere o rilasciare un `CCriticalSection` oggetto, creare un oggetto [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) . Se l' `CCriticalSection` oggetto viene usato autonomamente, chiamare la relativa funzione membro [Unlock](#unlock) per rilasciarlo.

Se il costruttore non riesce ad allocare la memoria di sistema necessaria, viene generata automaticamente un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)).

### <a name="example"></a>Esempio

  Vedere l'esempio per [CCriticalSection:: Lock](#lock).

## <a name="ccriticalsectionlock"></a><a name="lock"></a> CCriticalSection:: Lock

Chiamare questa funzione membro per ottenere l'accesso all'oggetto sezione critica.

```
BOOL Lock();
BOOL Lock(DWORD dwTimeout);
```

### <a name="parameters"></a>Parametri

*dwTimeout*<br/>
`Lock` Ignora il valore del parametro.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

`Lock` è una chiamata di blocco che non verrà restituita fino a quando non viene segnalato l'oggetto della sezione critica (diventa disponibile).

Se sono necessarie attese temporizzate, è possibile usare un oggetto [CMutex](../../mfc/reference/cmutex-class.md) invece di un `CCriticalSection` oggetto.

Se `Lock` non riesce ad allocare la memoria di sistema necessaria, viene generata automaticamente un'eccezione di memoria (di tipo [CMemoryException](../../mfc/reference/cmemoryexception-class.md)).

### <a name="example"></a>Esempio

Questo esempio illustra l'approccio annidato della sezione critica controllando l'accesso a una risorsa condivisa ( `_strShared` oggetto statico) usando un `CCriticalSection` oggetto condiviso. La `SomeMethod` funzione illustra l'aggiornamento di una risorsa condivisa in modo sicuro.

[!code-cpp[NVC_MFC_Utilities#11](../../mfc/codesnippet/cpp/ccriticalsection-class_1.h)]

## <a name="ccriticalsectionm_sect"></a><a name="m_sect"></a> CCriticalSection:: m_sect

Contiene un oggetto sezione critico utilizzato da tutti i `CCriticalSection` metodi.

```
CRITICAL_SECTION m_sect;
```

## <a name="ccriticalsectionoperator-critical_section"></a><a name="operator_critical_section_star"></a> CCriticalSection:: operator CRITICAL_SECTION *

Recupera un oggetto CRITICAL_SECTION.

```
operator CRITICAL_SECTION*();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare un puntatore all'oggetto interno CRITICAL_SECTION.

## <a name="ccriticalsectionunlock"></a><a name="unlock"></a> CCriticalSection:: Unlock

Rilascia l' `CCriticalSection` oggetto per l'utilizzo da parte di un altro thread.

```
BOOL Unlock();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l' `CCriticalSection` oggetto è di proprietà del thread e la versione è stata completata; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se `CCriticalSection` viene usato autonomamente, `Unlock` deve essere chiamato immediatamente dopo aver completato l'uso della risorsa controllata dalla sezione critica. Se viene utilizzato un oggetto [CSingleLock](../../mfc/reference/csinglelock-class.md) , `CCriticalSection::Unlock` verrà chiamato dalla funzione membro dell'oggetto lock `Unlock` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CCriticalSection:: Lock](#lock).

## <a name="see-also"></a>Vedi anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMutex](../../mfc/reference/cmutex-class.md)
