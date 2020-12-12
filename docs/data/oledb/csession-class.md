---
description: 'Altre informazioni su: classe CSession'
title: Classe CSession
ms.date: 11/04/2016
f1_keywords:
- CSession
- ATL::CSession
- ATL.CSession
- CSession.Abort
- CSession::Abort
- ATL.CSession.Abort
- ATL::CSession::Abort
- CSession::Close
- ATL.CSession.Close
- CSession.Close
- ATL::CSession::Close
- CSession.Commit
- ATL.CSession.Commit
- ATL::CSession::Commit
- CSession::Commit
- GetTransactionInfo
- CSession.GetTransactionInfo
- ATL.CSession.GetTransactionInfo
- CSession::GetTransactionInfo
- ATL::CSession::GetTransactionInfo
- ATL::CSession::Open
- CSession::Open
- CSession.Open
- ATL.CSession.Open
- CSession::StartTransaction
- StartTransaction
- ATL.CSession.StartTransaction
- CSession.StartTransaction
- ATL::CSession::StartTransaction
helpviewer_keywords:
- CSession class
- Abort method
- Close method
- Commit method
- GetTransactionInfo method
- Open method
- StartTransaction method
ms.assetid: 83cd798f-b45d-4f11-a23c-29183390450c
ms.openlocfilehash: 41ebf1c9d93e1443504f92b052e770c251324633
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268431"
---
# <a name="csession-class"></a>Classe CSession

Rappresenta una singola sessione di accesso al database.

## <a name="syntax"></a>Sintassi

```cpp
class CSession
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[Interruzione](#abort)|Annulla (termina) la transazione.|
|[Close](#close)|Chiude la sessione.|
|[Eseguire il commit](#commit)|Consente di eseguire il commit della transazione.|
|[GetTransactionInfo](#gettransactioninfo)|Restituisce informazioni relative a una transazione.|
|[Apri](#open)|Apre una nuova sessione per l'oggetto origine dati.|
|[StartTransaction](#starttransaction)|Inizia una nuova transazione per questa sessione.|

## <a name="remarks"></a>Commenti

Una o più sessioni possono essere associate a ogni connessione del provider (origine dati), rappresentata da un oggetto [CDataSource](../../data/oledb/cdatasource-class.md) . Per creare un nuovo oggetto `CSession` per un oggetto `CDataSource` , chiamare [CSession:: Open](#open). Per iniziare una transazione di database, `CSession` fornisce il `StartTransaction` metodo. Una volta avviata una transazione, è possibile eseguirne il commit utilizzando il `Commit` metodo oppure annullarla utilizzando il `Abort` metodo.

## <a name="csessionabort"></a><a name="abort"></a> CSession:: Abort

Termina la transazione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Abort(BOID* pboidReason = NULL,
   BOOL bRetaining = FALSE,
   BOOL bAsync = FALSE) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ITransaction:: Abort](/previous-versions/windows/desktop/ms709833(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="csessionclose"></a><a name="close"></a> CSession:: Close

Chiude la sessione, che è stata aperta da [CSession:: Open](#open).

### <a name="syntax"></a>Sintassi

```cpp
void Close() throw();
```

### <a name="remarks"></a>Osservazioni

Rilascia il `m_spOpenRowset` puntatore.

## <a name="csessioncommit"></a><a name="commit"></a> CSession:: commit

Consente di eseguire il commit della transazione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Commit(BOOL bRetaining = FALSE,
   DWORD grfTC = XACTTC_SYNC,
   DWORD grfRM = 0) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ITransaction:: commit](/previous-versions/windows/desktop/ms713008(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [ITransaction:: commit](/previous-versions/windows/desktop/ms713008(v=vs.85)).

## <a name="csessiongettransactioninfo"></a><a name="gettransactioninfo"></a> CSession:: GetTransactionInfo

Restituisce informazioni relative a una transazione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetTransactionInfo(XACTTRANSINFO* pInfo) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ITransaction:: GetTransactionInfo](/previous-versions/windows/desktop/ms714975(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [ITransaction:: GetTransactionInfo](/previous-versions/windows/desktop/ms714975(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="csessionopen"></a><a name="open"></a> CSession:: Open

Apre una nuova sessione per l'oggetto origine dati.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(const CDataSource& ds,
   DBPROPSET *pPropSet = NULL,
   ULONG ulPropSets = 0) throw();
```

#### <a name="parameters"></a>Parametri

*DS*<br/>
in Origine dati per la quale deve essere aperta la sessione.

*pPropSet*<br/>
in Puntatore a una matrice di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) che contiene le proprietà e i valori da impostare. Vedere [set di proprietà e gruppi di proprietà](/previous-versions/windows/desktop/ms713696(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* nel Windows SDK.

*ulPropSets*<br/>
in Numero di strutture [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) passate nell'argomento *pPropSet* .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

È necessario aprire l'oggetto origine dati utilizzando [CDataSource:: Open](./cdatasource-class.md#open) prima di passarlo a `CSession::Open` .

## <a name="csessionstarttransaction"></a><a name="starttransaction"></a> CSession:: StartTransaction

Inizia una nuova transazione per questa sessione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT StartTransaction(ISOLEVEL isoLevel = ISOLATIONLEVEL_READCOMMITTED,
   ULONG isoFlags = 0,
   ITransactionOptions* pOtherOptions = NULL,
   ULONG* pulTransactionLevel = NULL) const throw();
```

#### <a name="parameters"></a>Parametri

Vedere [ITransactionLocal:: StartTransaction](/previous-versions/windows/desktop/ms709786(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [ITransactionLocal:: StartTransaction](/previous-versions/windows/desktop/ms709786(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedi anche

[CatDB](../../overview/visual-cpp-samples.md)<br/>
[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
