---
title: Struttura CDaoRelationFieldInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDaoRelationFieldInfo
dev_langs: C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationFieldInfo structure [MFC]
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8b9d27154608a19da1e575a46ec424f11eec2e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdaorelationfieldinfo-structure"></a>Struttura CDaoRelationFieldInfo
Il `CDaoRelationFieldInfo` struttura contiene informazioni su un campo in una relazione definita per l'accesso oggetti DAO (data).  
  
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
 Il nome del campo nella tabella primaria della relazione.  
  
 `m_strForeignName`  
 Il nome del campo nella tabella esterna della relazione.  
  
## <a name="remarks"></a>Note  
 Un oggetto relation DAO specifica i campi in una tabella primaria e i campi di una tabella esterna che definiscono la relazione. I riferimenti primari nella definizione della struttura precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto ottenuto chiamando il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo)funzione membro di classe `CDaoDatabase`.  
  
 Gli oggetti della relazione e gli oggetti campo della relazione non sono rappresentati da una classe MFC. Invece di DAO oggetti MFC sottostanti della classe di oggetti [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contengono una raccolta di oggetti di relazione, denominata la raccolta di relazioni. Ogni oggetto relation, a sua volta, contiene una raccolta di oggetti campo relazione. Ogni oggetto field relazione correla un campo nella tabella primaria con un campo nella tabella esterna. Insieme, gli oggetti campo relazione definiscono un gruppo di campi in ogni tabella, che contribuiscono a definire la relazione. `CDaoDatabase`permette di accedere a oggetti di relazione con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro. Il `CDaoRelationInfo` oggetto, quindi, un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoRelationFieldInfo` oggetti.  
  
 Chiamare il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro dell'oggetto contenitore `CDaoDatabase` dell'oggetto in cui le relazioni di raccolta è archiviato l'oggetto di relazione si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto. `CDaoRelationFieldInfo`definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)
