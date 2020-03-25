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
ms.openlocfilehash: 4a4c86987ceff0f04986d32011ba941e0d2319fe
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211302"
---
# <a name="crestrictions-class"></a>Classe CRestrictions

Classe generica che consente di specificare restrizioni per i set di righe dello schema.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, short nRestrictions, const GUID* pguid>
class CRestrictions :
   public CSchemaRowset <T, nRestrictions>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe utilizzata per la funzione di accesso.

*nRestrictions*<br/>
Numero di colonne di restrizione per il set di righe dello schema.

*pguid*<br/>
Puntatore al GUID per lo schema.

## <a name="requirements"></a>Requisiti

**Intestazione:** Atldbsch. h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[Apri](#open)|Restituisce un set di risultati in base alle restrizioni fornite dall'utente.|

## <a name="crestrictionsopen"></a><a name="open"></a>CRestrictions:: Open

Restituisce un set di risultati in base alle restrizioni fornite dall'utente.

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

*sessione*<br/>
in Specifica un oggetto sessione esistente usato per la connessione all'origine dati.

*lpszParam*<br/>
in Specifica le restrizioni per il set di righe dello schema.

*bBind*<br/>
in Specifica se associare automaticamente la mappa delle colonne. Il valore predefinito è **true**, che determina l'associazione automatica della mappa delle colonne. Se si imposta *bBind* su **false** , viene impedita l'associazione automatica della mappa delle colonne, in modo che sia possibile eseguire il binding manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP).

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile specificare un massimo di sette restrizioni per un set di righe dello schema.

Per informazioni sulle restrizioni definite su ogni set di righe dello schema, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) .

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)
