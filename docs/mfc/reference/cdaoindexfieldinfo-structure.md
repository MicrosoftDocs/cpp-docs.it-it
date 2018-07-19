---
title: Struttura CDaoIndexFieldInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoIndexFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoIndexFieldInfo structure [MFC]
- DAO (Data Access Objects), Index Fields collection
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 37149e2a4a2780c97cc7c2774c64e9a6037d37a7
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37337879"
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
 *m_strName*  
 Identifica in modo univoco l'oggetto di campo di indice. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_bDescending*  
 Indica l'ordine di indice definito dall'oggetto index. TRUE se l'ordine è decrescente.  
  
## <a name="remarks"></a>Note  
 Un oggetto indice può avere un numero di campi, che indica quali campi indicizzato in un tabledef (o un recordset in una tabella di base). I riferimenti al database primario precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto ottenuto chiamando il `GetIndexInfo` funzione membro di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).  
  
 Gli oggetti indice e gli oggetti campo di indice non sono rappresentati da una classe MFC. Al contrario, nell'oggetto DAO oggetti oggetti MFC sottostanti della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) oppure [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contengono una raccolta di oggetti index, chiamato raccolta di indici. Ogni oggetto indice, a sua volta, contiene una raccolta di oggetti campo. Queste classi rendono disponibili le funzioni membro per accedere a singoli elementi di informazioni sugli indici, oppure è possibile accedervi in una sola volta con un `CDaoIndexInfo` chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore. Il `CDaoIndexInfo` oggetto, quindi, ha un membro di dati `m_pFieldInfos`, che punta a una matrice di `CDaoIndexFieldInfo` oggetti.  
  
 Chiamare il `GetIndexInfo` funzione membro dell'oggetto recordset o tabledef contenitore in cui gli indici è archiviato l'oggetto indice si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto. La lunghezza del `m_pFieldInfos` matrice viene archiviata in `m_nFields`. `CDaoIndexFieldInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoIndexFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)   
 [CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)

