---
title: Struttura CDaoIndexFieldInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoIndexFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoIndexFieldInfo structure
- DAO (Data Access Objects), Index Fields collection
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 975b3a704936adc9d4205938bb2c757ab650f0d9
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoindexfieldinfo-structure"></a>Struttura CDaoIndexFieldInfo
Il `CDaoIndexFieldInfo` struttura contiene informazioni su un oggetto campo indice definito per l'accesso oggetti DAO (data).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoIndexFieldInfo  
{  
    CString m_strName;          // Primary  
    BOOL m_bDescending;         // Primary  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto campo di indice. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_bDescending*  
 Indica l'ordine di indice definito dall'oggetto index. **TRUE** se l'ordine è decrescente.  
  
## <a name="remarks"></a>Note  
 Un oggetto indice può avere un numero di campi, che indica quali campi indicizzato in un oggetto tabledef (o un recordset in una tabella di base). I riferimenti al database primario precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto ottenuto chiamando il `GetIndexInfo` funzione membro di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).  
  
 Gli oggetti indice e indice campo non sono rappresentate da una classe MFC. Al contrario, nell'oggetto DAO oggetti oggetti MFC sottostanti della classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contiene una raccolta di oggetti di indice, denominata raccolta di indici. Ogni oggetto indice, a sua volta, contiene una raccolta di oggetti campo. Queste classi forniscono le funzioni membro per accedere ai singoli elementi di informazioni sugli indici, o è possibile accedere contemporaneamente con un `CDaoIndexInfo` oggetto chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore. Il `CDaoIndexInfo` oggetto, quindi, un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoIndexFieldInfo` oggetti.  
  
 Chiamare il `GetIndexInfo` funzione membro dell'oggetto tabledef o recordset contenitore in cui gli indici è memorizzato l'oggetto indice si è interessati. Accedere quindi la `m_pFieldInfos` membro del [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto. La lunghezza del `m_pFieldInfos` matrice verrà archiviata in `m_nFields`. `CDaoIndexFieldInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoIndexFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)   
 [CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)


