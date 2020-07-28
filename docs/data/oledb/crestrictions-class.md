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
ms.openlocfilehash: 9fb911b469497a007550c042ade97b5a463e78fe
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220444"
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

## <a name="members"></a>Membri

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
in Specifica se associare automaticamente la mappa delle colonne. Il valore predefinito è **`true`** , che fa sì che la mappa a colonne venga associata automaticamente. L'impostazione di *bBind* su **`false`** impedisce l'associazione automatica della mappa delle colonne in modo che sia possibile eseguire il binding manualmente. (L'associazione manuale è di particolare interesse per gli utenti OLAP).

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile specificare un massimo di sette restrizioni per un set di righe dello schema.

Per informazioni sulle restrizioni definite su ogni set di righe dello schema, vedere [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) .

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classi del set di righe dello schema e classi typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)
