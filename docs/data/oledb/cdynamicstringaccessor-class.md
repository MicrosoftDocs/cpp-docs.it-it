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
ms.openlocfilehash: a0590bc015c5487315b8cbd38f0baf91eb3082cc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211866"
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

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[GetString](#getstring)|Recupera i dati specificati di colonna come stringa.|
|[SetString](#setstring)|Imposta i dati specificati di colonna come stringa.|

## <a name="remarks"></a>Osservazioni

Mentre [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) richiede i dati nel formato nativo segnalato dal provider, `CDynamicStringAccessor` richiede che il provider recuperi tutti i dati a cui si accede dall'archivio dati come dati di stringa. Questa operazione è particolarmente utile per le attività semplici che non richiedono il calcolo dei valori nell'archivio dati, ad esempio la visualizzazione o la stampa del contenuto dell'archivio dati.

Il tipo nativo di dati della colonna nell'archivio dati non è importante; se il provider supporta la conversione di dati, potrà fornire i dati in formato stringa. Se il provider non supporta la conversione dal tipo di dati nativo a una stringa (non è comune), la chiamata di richiesta restituirà il valore DB_S_ERRORSOCCURED e lo stato per la colonna corrispondente indicherà un problema di conversione con DBSTATUS_E_CANTCONVERTVALUE.

Utilizzare `CDynamicStringAccessor` metodi per ottenere informazioni sulle colonne. Queste informazioni sulla colonna vengono usate per creare una funzione di accesso dinamicamente in fase di esecuzione.

Le informazioni sulla colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere i dati dal buffer usando [GetString](../../data/oledb/cdynamicstringaccessor-getstring.md)oppure archiviarli nel buffer usando [sestring](../../data/oledb/cdynamicstringaccessor-setstring.md).

Per una discussione ed esempi sull'uso delle classi di funzioni di accesso dinamiche, vedere [uso delle funzioni di accesso dinamiche](../../data/oledb/using-dynamic-accessors.md).

## <a name="cdynamicstringaccessorgetstring"></a><a name="getstring"></a>CDynamicStringAccessor:: GetString

Recupera i dati specificati di colonna come stringa.

### <a name="syntax"></a>Sintassi

```cpp
BaseType* GetString(DBORDINAL nColumn) const throw();

BaseType* GetString(const CHAR* pColumnName) const throw();

BaseType* GetString(const WCHAR* pColumnName) const throw();
```

#### <a name="parameters"></a>Parametri

*nColumn*<br/>
[in] Numero di colonna. I numeri di colonna iniziano con 1. Un valore pari a 0 indica la colonna del segnalibro, se presente.

*pColumnName*<br/>
in Puntatore a una stringa di caratteri che contiene il nome della colonna.

### <a name="return-value"></a>Valore restituito

Puntatore al valore stringa recuperato dalla colonna specificata. Il valore è di tipo `BaseType`, che sarà **char** o **WCHAR** a seconda che _UNICODE sia definito o meno. Restituisce NULL se la colonna specificata non viene trovata.

### <a name="remarks"></a>Osservazioni

Il secondo modulo di sostituzione accetta il nome della colonna come stringa ANSI. Il terzo modulo di sostituzione accetta il nome della colonna come stringa Unicode.

## <a name="cdynamicstringaccessorsetstring"></a><a name="setstring"></a>CDynamicStringAccessor:: sestring

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
[in] Numero di colonna. I numeri di colonna iniziano con 1. Il valore speciale 0 indica la colonna del segnalibro, se presente.

*pColumnName*<br/>
in Puntatore a una stringa di caratteri che contiene il nome della colonna.

*data*<br/>
in Puntatore ai dati stringa da scrivere nella colonna specificata.

### <a name="return-value"></a>Valore restituito

Puntatore al valore stringa in cui impostare la colonna specificata. Il valore è di tipo `BaseType`, che sarà **char** o **WCHAR** a seconda che _UNICODE sia definito o meno.

### <a name="remarks"></a>Osservazioni

Il secondo modulo di sostituzione accetta il nome della colonna come stringa ANSI e il terzo modulo di sostituzione accetta il nome della colonna come stringa Unicode.

Se _SECURE_ATL è definito per avere un valore diverso da zero, verrà generato un errore di asserzione di runtime se la stringa di *dati* di input supera la lunghezza massima consentita della colonna di dati a cui si fa riferimento. In caso contrario, la stringa di input verrà troncata se supera la lunghezza massima consentita.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CAccessor](../../data/oledb/caccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
[Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
[Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)
