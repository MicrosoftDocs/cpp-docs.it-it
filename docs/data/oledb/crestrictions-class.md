---
title: Classe CRestrictions
ms.date: 11/04/2016
f1_keywords:
- ATL::CRestrictions
- CRestrictions
- ATL.CRestrictions
- CRestrictions.Open
- ATL::CRestrictions::Open
- ATL.CRestrictions.Open
- CRestrictions::Open
helpviewer_keywords:
- CRestrictions class
- Open method
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
ms.openlocfilehash: 309bb7e707d649cf78528f3d0df6cf8e43201823
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62361880"
---
# <a name="crestrictions-class"></a>Classe CRestrictions

Una classe generica che consente di specificare le restrizioni per i set di righe dello schema.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, short nRestrictions, const GUID* pguid>
class CRestrictions :
   public CSchemaRowset <T, nRestrictions>
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe utilizzata per la funzione di accesso.

*nRestrictions*<br/>
Il numero di colonne di restrizione per il set di righe dello schema.

*pguid*<br/>
Puntatore al GUID dello schema.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbsch. h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Apri](#open)|Restituisce un risultato impostate in base alle restrizioni fornito dall'utente.|

## <a name="open"></a> CRestrictions:: Open

Restituisce un risultato impostate in base alle restrizioni fornito dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Open(const CSession& session,
   LPCTSTR lpszParam 1 = NULL,
   LPCTSTR lpszParam 2 = NULL,
   LPCTSTR lpszParam 3 = NULL,
   LPCTSTR lpszParam 4 = NULL,
   LPCTSTR lpszParam 5 = NULL,
   LPCTSTR lpszParam 6 = NULL,
   LPCTSTR lpszParam 7 = NULL,
   bool bBind = true);
```

#### <a name="parameters"></a>Parametri

*session*<br/>
[in] Specifica un oggetto sessione esistente utilizzato per la connessione all'origine dati.

*lpszParam*<br/>
[in] Specifica le restrizioni nel set di righe dello schema.

*bBind*<br/>
[in] Specifica se associare automaticamente la mappa delle colonne. Il valore predefinito è **true**, in modo che la mappa delle colonne deve essere associato automaticamente. L'impostazione *bBind* al **false** impedisce l'associazione automatica del mapping di colonna in modo che è possibile associare manualmente. (Associazione manuale è di particolare interesse per gli utenti OLAP).

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

È possibile specificare un massimo di sette restrizioni su un set di righe dello schema.

Visualizzare [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) per informazioni sulle restrizioni definite in ogni set di righe dello schema.

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)