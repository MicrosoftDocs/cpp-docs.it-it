---
title: Struttura CDaoIndexFieldInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDaoIndexFieldInfo
dev_langs: C++
helpviewer_keywords:
- CDaoIndexFieldInfo structure [MFC]
- DAO (Data Access Objects), Index Fields collection
ms.assetid: 097ee8a6-83b1-4db7-8f05-d62a2deefe19
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f671694f6539dd254c5c93bf4c605792e6188a69
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdaoindexfieldinfo-structure"></a>Struttura CDaoIndexFieldInfo
Il `CDaoIndexFieldInfo` struttura contiene informazioni su un oggetto di campo indice definito per l'accesso oggetti DAO (data).  
  
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
 Identifica in modo univoco l'oggetto di campo di indice. Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_bDescending*  
 Indica l'indice di ordinamento definito dall'oggetto index. **TRUE** se l'ordine è decrescente.  
  
## <a name="remarks"></a>Note  
 Un oggetto di indice può avere un numero di campi, che indica quali campi indicizzato in un oggetto tabledef (o un recordset in una tabella di base). I riferimenti al database primario precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto ottenuto chiamando il `GetIndexInfo` funzione membro di classe [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md#getindexinfo) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md#getindexinfo).  
  
 Gli oggetti indice e indice campo non sono rappresentate da una classe MFC. Invece di DAO oggetti MFC sottostanti della classe di oggetti [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) o [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) contiene una raccolta di oggetti di indice, denominato raccolta di indici. Ogni oggetto indice, a sua volta, contiene una raccolta di oggetti campo. Queste classi forniscono le funzioni membro per accedere ai singoli elementi di informazioni sugli indici, o è possibile accedere contemporaneamente con un `CDaoIndexInfo` oggetto chiamando il `GetIndexInfo` funzione membro dell'oggetto contenitore. Il `CDaoIndexInfo` oggetto, quindi, un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoIndexFieldInfo` oggetti.  
  
 Chiamare il `GetIndexInfo` funzione membro dell'oggetto tabledef o recordset contenitore in cui gli indici è archiviato l'oggetto indice si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) oggetto. La lunghezza di `m_pFieldInfos` matrice viene archiviata in `m_nFields`. `CDaoIndexFieldInfo`definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoIndexFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoTableDef::GetIndexInfo](../../mfc/reference/cdaotabledef-class.md#getindexinfo)   
 [CDaoRecordset::GetIndexInfo](../../mfc/reference/cdaorecordset-class.md#getindexinfo)

