---
title: Struttura CDaoIndexFieldInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoIndexFieldInfo
helpviewer_keywords:
- CDaoIndexFieldInfo structure [MFC]
- DAO (Data Access Objects), Index Fields collection
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
ms.openlocfilehash: d03a6f6eadd4cf6ccb5279edf18675605d0b1485
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304275"
---
# <a name="cdaoindexfieldinfo-structure"></a>Struttura CDaoIndexFieldInfo

Il `CDaoIndexFieldInfo` struttura contiene informazioni su un oggetto di campo di indice è definito per data access Object (DAO).

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
Identifica in modo univoco l'oggetto di campo di indice. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_bDescending*<br/>
Indica l'ordine di indice definito dall'oggetto index. TRUE se l'ordine è decrescente.

## <a name="remarks"></a>Note

Un oggetto indice può avere un numero di campi, che indica quali campi indicizzato in un tabledef (o un recordset in una tabella di base). I riferimenti al database primario precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto ottenuto chiamando il `GetIndexInfo` funzione membro di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).

Gli oggetti indice e gli oggetti campo di indice non sono rappresentati da una classe MFC. Al contrario, nell'oggetto DAO oggetti oggetti MFC sottostanti della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono una raccolta di oggetti index, chiamato raccolta di indici. Ogni oggetto indice, a sua volta, contiene una raccolta di oggetti campo. Queste classi rendono disponibili le funzioni membro per accedere a singoli elementi di informazioni sugli indici, oppure è possibile accedervi in una sola volta con un `CDaoIndexInfo` chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore. Il `CDaoIndexInfo` oggetto, quindi, ha un membro di dati `m_pFieldInfos`, che punta a una matrice di `CDaoIndexFieldInfo` oggetti.

Chiamare il `GetIndexInfo` funzione membro dell'oggetto recordset o tabledef contenitore in cui gli indici è archiviato l'oggetto indice si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto. La lunghezza del `m_pFieldInfos` matrice viene archiviata in `m_nFields`. `CDaoIndexFieldInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoIndexFieldInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)<br/>
[CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)
