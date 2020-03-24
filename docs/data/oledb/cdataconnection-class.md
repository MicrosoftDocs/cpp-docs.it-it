---
title: Classe CDataConnection
ms.date: 03/27/2019
f1_keywords:
- ATL::CDataConnection
- ATL.CDataConnection
- CDataConnection
- CDataConnection.CDataConnection
- ATL.CDataConnection.CDataConnection
- CDataConnection::CDataConnection
- ATL::CDataConnection::CDataConnection
- CDataConnection.Copy
- ATL.CDataConnection.Copy
- ATL::CDataConnection::Copy
- CDataConnection::Copy
- CDataConnection.Open
- ATL.CDataConnection.Open
- CDataConnection::Open
- ATL::CDataConnection::Open
- CDataConnection.OpenNewSession
- ATL.CDataConnection.OpenNewSession
- ATL::CDataConnection::OpenNewSession
- OpenNewSession
- CDataConnection::OpenNewSession
- CDataConnection::operatorBOOL
- ATL::CDataConnection::operatorBOOL
- CDataConnection.operatorBOOL
- ATL.CDataConnection.operatorBOOL
- CDataSource&
- CDataConnection.operatorCDataSource&
- operatorCDataSource&
- CDataConnection::operatorCDataSource&
- CDataSource*
- CDataConnection::operatorCDataSource*
- CDataConnection.operatorCDataSource*
- operatorCDataSource*
- CSession&
- CDataConnection::operatorCSession&
- CDataConnection.operatorCSession&
- operatorCSession&
- CDataConnection.operatorCSession*
- CDataConnection::operatorCSession*
- operatorCSession*
- CSession*
helpviewer_keywords:
- CDataConnection class
- CDataConnection class, constructor
- Copy method
- Open method
- OpenNewSession method
- BOOL operator
- operator bool
- BOOL operator
- operator bool
- CDataSource& operator
- operator & (CDataSource)
- CDataSource* operator
- operator * (CDataSource)
- operator CSession&
- CSession& operator
- operator CSession*
- CSession* operator
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
ms.openlocfilehash: 385445081f84f65ff7030466a238a5a96abd63be
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212063"
---
# <a name="cdataconnection-class"></a>Classe CDataConnection

Gestisce la connessione con l'origine dati.

## <a name="syntax"></a>Sintassi

```cpp
class CDataConnection
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CDataConnection](#cdataconnection)|Costruttore. Crea un'istanza e Inizializza un oggetto `CDataConnection`.|
|[Copia](#copy)|Crea una copia di una connessione dati esistente.|
|[Apri](#open)|Apre una connessione a un'origine dati utilizzando una stringa di inizializzazione.|
|[OpenNewSession](#opennewsession)|Apre una nuova sessione nella connessione corrente.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore BOOL](#op_bool)|Determina se la sessione corrente è aperta o meno.|
|[operator bool](#op_bool_ole)|Determina se la sessione corrente è aperta o meno.|
|[operatore CDataSource &](#op_cdata_amp)|Restituisce un riferimento all'oggetto `CDataSource` contenuto.|
|[operatore CDataSource *](#op_cdata_star)|Restituisce un puntatore all'oggetto `CDataSource` contenuto.|
|[operatore CSession &](#op_csession_amp)|Restituisce un riferimento all'oggetto `CSession` contenuto.|
|[operatore CSession *](#op_csession_star)|Restituisce un puntatore all'oggetto `CSession` contenuto.|

## <a name="remarks"></a>Osservazioni

`CDataConnection` è una classe utile per la creazione di client perché incapsula gli oggetti necessari (origine dati e sessione) e alcune delle operazioni che è necessario eseguire durante la connessione a un'origine dati

Senza `CDataConnection`, è necessario creare un oggetto `CDataSource`, chiamare il metodo [OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md) , quindi creare un'istanza di un oggetto [CSession](../../data/oledb/csession-class.md) , chiamare il metodo [Open](../../data/oledb/csession-open.md) , quindi creare un oggetto [CCommand](../../data/oledb/ccommand-class.md) e chiamare i relativi metodi `Open`*.

Con `CDataConnection`, è sufficiente creare un oggetto connessione, passargli una stringa di inizializzazione, quindi usare tale connessione per aprire i comandi. Se si prevede di utilizzare ripetutamente la connessione al database, è consigliabile lasciare aperta la connessione e `CDataConnection` rappresenta un modo pratico per eseguire questa operazione.

> [!NOTE]
>  Se si crea un'applicazione di database che deve gestire più sessioni, sarà necessario usare [OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md).

## <a name="cdataconnectioncdataconnection"></a><a name="cdataconnection"></a>CDataConnection:: CDataConnection

Crea un'istanza e Inizializza un oggetto `CDataConnection`.

### <a name="syntax"></a>Sintassi

```cpp
CDataConnection();
CDataConnection(const CDataConnection &ds);
```

#### <a name="parameters"></a>Parametri

*DS*<br/>
in Riferimento a una connessione dati esistente.

### <a name="remarks"></a>Osservazioni

Il primo override crea un nuovo oggetto `CDataConnection` con le impostazioni predefinite.

Il secondo override crea un nuovo oggetto `CDataConnection` con impostazioni equivalenti all'oggetto connessione dati specificato.

## <a name="cdataconnectioncopy"></a><a name="copy"></a>CDataConnection:: Copy

Crea una copia di una connessione dati esistente.

### <a name="syntax"></a>Sintassi

```cpp
CDataConnection& Copy(const CDataConnection & ds) throw();
```

#### <a name="parameters"></a>Parametri

*DS*<br/>
in Riferimento a una connessione dati esistente da copiare.

## <a name="cdataconnectionopen"></a><a name="open"></a>CDataConnection:: Open

Apre una connessione a un'origine dati utilizzando una stringa di inizializzazione.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(LPCOLESTR szInitString) throw();
```

#### <a name="parameters"></a>Parametri

*szInitString*<br/>
in Stringa di inizializzazione per l'origine dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdataconnectionopennewsession"></a><a name="opennewsession"></a>CDataConnection:: OpenNewSession

Apre una nuova sessione utilizzando l'origine dati dell'oggetto connessione corrente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenNewSession(CSession & session) throw();
```

#### <a name="parameters"></a>Parametri

*sessione*<br/>
[in/out] Riferimento al nuovo oggetto sessione.

### <a name="remarks"></a>Osservazioni

La nuova sessione utilizza l'oggetto origine dati contenuto dell'oggetto connessione corrente come padre e può accedere a tutte le stesse informazioni dell'origine dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdataconnectionoperator-bool"></a><a name="op_bool"></a>CDataConnection:: operator BOOL

Determina se la sessione corrente è aperta o meno.

### <a name="syntax"></a>Sintassi

```cpp
operator BOOL() throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce il valore **bool** (typedef MFC). **True** indica che la sessione corrente è aperta; **False** indica che la sessione corrente è chiusa.

## <a name="cdataconnectionoperator-bool-ole-db"></a><a name="op_bool_ole"></a>CDataConnection:: operator bool (OLE DB)

Determina se la sessione corrente è aperta o meno.

### <a name="syntax"></a>Sintassi

```cpp
operator bool() throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce un **bool** valore boolC++ (tipo di dati). **true** indica che la sessione corrente è aperta; **false** indica che la sessione corrente è chiusa.

## <a name="cdataconnectionoperator-cdatasourceamp"></a><a name="op_cdata_amp"></a>&amp; CDataConnection:: operator CDataSource

Restituisce un riferimento all'oggetto `CDataSource` contenuto.

### <a name="syntax"></a>Sintassi

```cpp
operator const CDataSource&() throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce un riferimento all'oggetto `CDataSource` contenuto, consentendo di passare un oggetto `CDataConnection` in cui è previsto un riferimento `CDataSource`.

### <a name="example"></a>Esempio

Se si dispone di una funzione (ad esempio `func` riportata di seguito) che accetta un riferimento `CDataSource`, è possibile utilizzare `CDataSource&` per passare invece un oggetto `CDataConnection`.

[!code-cpp[NVC_OLEDB_Consumer#3](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_1.cpp)]

[!code-cpp[NVC_OLEDB_Consumer#4](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_2.cpp)]

## <a name="cdataconnectionoperator-cdatasource"></a><a name="op_cdata_star"></a>CDataConnection:: operator CDataSource *

Restituisce un puntatore all'oggetto `CDataSource` contenuto.

### <a name="syntax"></a>Sintassi

```cpp
operator const CDataSource*() throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce un puntatore all'oggetto `CDataSource` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CDataSource`.

Vedere [operator CDataSource &](../../data/oledb/cdataconnection-operator-cdatasource-amp.md) per un esempio di utilizzo.

## <a name="cdataconnectionoperator-csessionamp"></a><a name="op_csession_amp"></a>&amp; CDataConnection:: operator CSession

Restituisce un riferimento all'oggetto `CSession` contenuto.

### <a name="syntax"></a>Sintassi

```cpp
operator const CSession&();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce un riferimento all'oggetto `CSession` contenuto, consentendo di passare un oggetto `CDataConnection` in cui è previsto un riferimento `CSession`.

### <a name="example"></a>Esempio

Se si dispone di una funzione (ad esempio `func` riportata di seguito) che accetta un riferimento `CSession`, è possibile utilizzare `CSession&` per passare invece un oggetto `CDataConnection`.

[!code-cpp[NVC_OLEDB_Consumer#5](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_1.cpp)]

[!code-cpp[NVC_OLEDB_Consumer#6](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_2.cpp)]

## <a name="cdataconnectionoperator-csession"></a><a name="op_csession_star"></a>CDataConnection:: operator CSession *

Restituisce un puntatore all'oggetto `CSession` contenuto.

### <a name="syntax"></a>Sintassi

```cpp
operator const CSession*() throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce un puntatore all'oggetto `CSession` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CSession`.

### <a name="example"></a>Esempio

Vedere [operator CSession &](../../data/oledb/cdataconnection-operator-csession-amp.md) per un esempio di utilizzo.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
