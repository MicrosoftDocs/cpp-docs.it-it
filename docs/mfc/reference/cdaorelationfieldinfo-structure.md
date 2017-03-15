---
title: Struttura CDaoRelationFieldInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoRelationFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationFieldInfo structure
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
caps.latest.revision: 13
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
ms.openlocfilehash: 23d7497502f611cf2311e574556186dc5f7c7d3d
ms.lasthandoff: 02/24/2017

---
# <a name="cdaorelationfieldinfo-structure"></a>Struttura CDaoRelationFieldInfo
Il `CDaoRelationFieldInfo` struttura contiene informazioni su un campo in una relazione definita per data access Object (DAO).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoRelationFieldInfo  
{  
    CString m_strName;           // Primary  
    CString m_strForeignName;    // Primary  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Il nome del campo della tabella primaria della relazione.  
  
 `m_strForeignName`  
 Il nome del campo della tabella esterna della relazione.  
  
## <a name="remarks"></a>Note  
 Un oggetto relation DAO specifica i campi in una tabella primaria e i campi di una tabella esterna che definiscono la relazione. I riferimenti a principale nella definizione della struttura precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto ottenuto chiamando il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro di classe `CDaoDatabase`.  
  
 Gli oggetti della relazione e gli oggetti campo della relazione non sono rappresentati da una classe MFC. Al contrario, nell'oggetto DAO oggetti oggetti MFC sottostanti della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contiene una raccolta di oggetti di relazione, denominata la raccolta di relazioni. Ogni oggetto relation, a sua volta, contiene una raccolta di oggetti campo relazione. Ogni oggetto campo relazione mette in correlazione con un campo della tabella esterna nella tabella primaria. Insieme, gli oggetti campo relazione definiscono un gruppo di campi in ogni tabella, che contribuiscono a definire la relazione. `CDaoDatabase`permette di accedere a oggetti di relazione con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro. Il `CDaoRelationInfo` oggetto, quindi, un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoRelationFieldInfo` oggetti.  
  
 Chiamare il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro dell'oggetto contenitore `CDaoDatabase` dell'oggetto in cui le relazioni di raccolta è archiviato l'oggetto relazione si è interessati. Accedere quindi la `m_pFieldInfos` membro del [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto. `CDaoRelationFieldInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)

