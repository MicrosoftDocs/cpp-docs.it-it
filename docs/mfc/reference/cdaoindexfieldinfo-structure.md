---
title: Struttura CDaoIndexFieldInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoIndexFieldInfo
helpviewer_keywords:
- CDaoIndexFieldInfo structure [MFC]
- DAO (Data Access Objects), Index Fields collection
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
ms.openlocfilehash: 10c786ef4fed9ecb3bbbb93526cd68a11e18d58c
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303663"
---
# <a name="cdaoindexfieldinfo-structure"></a>Struttura CDaoIndexFieldInfo

La struttura `CDaoIndexFieldInfo` contiene informazioni su un oggetto campo di indice definito per DAO (Data Access Objects).

DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta.

## <a name="syntax"></a>Sintassi

```
struct CDaoIndexFieldInfo
{
    CString m_strName;          // Primary
    BOOL m_bDescending;         // Primary
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Assegna un nome univoco all'oggetto campo dell'indice. Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_bDescending*<br/>
Indica l'ordine degli indici definito dall'oggetto index. TRUE se l'ordine è decrescente.

## <a name="remarks"></a>Osservazioni

Un oggetto index può avere un numero di campi, che indica i campi su cui è indicizzato un oggetto TableDef (o un recordset basato su una tabella). I riferimenti al database primario precedente indicano il modo in cui vengono restituite le informazioni nel membro `m_pFieldInfos` di un oggetto [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) ottenuto chiamando la funzione membro `GetIndexInfo` della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).

Gli oggetti indice e gli oggetti campo indice non sono rappresentati da una classe MFC. Gli oggetti DAO sottostanti oggetti MFC della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono invece una raccolta di oggetti index, denominata raccolta Indexes. Ogni oggetto index, a sua volta, contiene una raccolta di oggetti Field. Queste classi forniscono funzioni membro per accedere a singoli elementi di informazioni sull'indice oppure è possibile accedervi contemporaneamente con un oggetto `CDaoIndexInfo` chiamando la funzione membro `GetIndexInfo` dell'oggetto contenitore. L'oggetto `CDaoIndexInfo`, quindi, dispone di un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoIndexFieldInfo` oggetti.

Chiamare la funzione membro `GetIndexInfo` dell'oggetto TableDef o recordset contenitore nella cui raccolta indexes è archiviato l'oggetto index a cui si è interessati. Accedere quindi al membro `m_pFieldInfos` dell'oggetto [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) . La lunghezza della matrice di `m_pFieldInfos` viene archiviata nel `m_nFields`. `CDaoIndexFieldInfo` definisce anche una funzione membro `Dump` nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto `CDaoIndexFieldInfo`.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef:: GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)<br/>
[CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)
