---
title: Classe CDynamicStringAccessor
ms.date: 11/04/2016
f1_keywords:
- CDynamicStringAccessor
- CDynamicStringAccessor.GetString
- CDynamicStringAccessor::GetString
- CDynamicStringAccessor::SetString
- CDynamicStringAccessor.SetString
helpviewer_keywords:
- CDynamicStringAccessor class
- GetString method
- SetString method
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
ms.openlocfilehash: dff36dfb2b898c6a4df65492e2d9386c748f049b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534615"
---
# <a name="cdynamicstringaccessor-class"></a>Classe CDynamicStringAccessor

Consente di accedere a un'origine dati quando non si conosce lo schema del database (la struttura sottostante del database).

## <a name="syntax"></a>Sintassi

```cpp
template< typename BaseType, DBTYPEENUM OleDbType >
class CDynamicStringAccessorT : public CDynamicAccessor
```

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetString](#getstring)|Recupera i dati specificati di colonna come stringa.|
|[SetString](#setstring)|Imposta i dati specificati di colonna come stringa.|

## <a name="remarks"></a>Note

Sebbene [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) richiede i dati in formato nativo indicato dal provider, `CDynamicStringAccessor` richiede che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa. Ciò è particolarmente utile per eseguire semplici operazioni che non richiedono il calcolo di valori nell'archivio dati, ad esempio visualizzare o stampare il contenuto dell'archivio dati.

Il tipo nativo di dati della colonna nell'archivio dati non è importante; se il provider supporta la conversione di dati, potrà fornire i dati in formato stringa. Se il provider non supporta la conversione dal tipo di dati nativo a una stringa (che non è comune), la chiamata di richiesta restituirà il valore di esito positivo DB_S_ERRORSOCCURED e lo stato per la colonna corrispondente indicherà un problema di conversione DBSTATUS_E_CANTCONVERTVALUE.

Usare `CDynamicStringAccessor` metodi per ottenere informazioni. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.

Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere dati dal buffer, utilizzare [GetString](../../data/oledb/cdynamicstringaccessor-getstring.md), o se archiviarlo per il buffer usando [SetString](../../data/oledb/cdynamicstringaccessor-setstring.md).

Per informazioni ed esempi di utilizzo delle classi della funzione di accesso dinamico, vedere [usando le funzioni di accesso dinamico](../../data/oledb/using-dynamic-accessors.md).

## <a name="getstring"></a> CDynamicStringAccessor:: GetString

Recupera i dati specificati di colonna come stringa.

### <a name="syntax"></a>Sintassi

```cpp
BaseType* GetString(DBORDINAL nColumn) const throw();

BaseType* GetString(const CHAR* pColumnName) const throw();

BaseType* GetString(const WCHAR* pColumnName) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. Numeri di colonna partono da 1. Un valore pari a 0 fa riferimento per la colonna del segnalibro, se presente.

*pColumnName*<br/>
[in] Un puntatore a una stringa di caratteri che contiene il nome della colonna.

### <a name="return-value"></a>Valore restituito

Un puntatore al valore stringa recuperato dalla colonna specificata. Il valore è di tipo `BaseType`, che sarà **CHAR** oppure **WCHAR** a seconda che sia definito Unicode oppure No. Restituisce NULL se la colonna specificata non viene trovata.

### <a name="remarks"></a>Note

Il secondo override form accetta il nome della colonna come una stringa ANSI. Il terzo di eseguire l'override form accetta il nome della colonna come stringa Unicode.

## <a name="setstring"></a> :: GetString

Imposta i dati specificati di colonna come stringa.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT SetString(DBORDINAL nColumn,
   BaseType* data) throw();

HRESULT SetString(const CHAR* pColumnName,
   BaseType* data) throw();

HRESULT SetString(const WCHAR* pColumnName,
   BaseType* data) throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. Numeri di colonna partono da 1. Il valore speciale 0 fa riferimento alla colonna segnalibro, se presente.

*pColumnName*<br/>
[in] Un puntatore a una stringa di caratteri che contiene il nome della colonna.

*data*<br/>
[in] Puntatore ai dati stringa da scrivere nella colonna specificata.

### <a name="return-value"></a>Valore restituito

Puntatore al valore stringa per cui impostare la colonna specificata. Il valore è di tipo `BaseType`, che sarà **CHAR** oppure **WCHAR** a seconda che sia definito Unicode oppure No.

### <a name="remarks"></a>Note

Il secondo override form accetta il nome della colonna come una stringa ANSI e il terzo di sostituzione form accetta il nome della colonna come stringa Unicode.

Se _SECURE_ATL è definito con un valore diverso da zero, verrà generato un errore di asserzione di runtime se l'input *dati* stringa è più lunga la lunghezza massima consentita della colonna di dati di riferimento. In caso contrario, la stringa di input verrà troncata se supera la lunghezza massima consentita.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)