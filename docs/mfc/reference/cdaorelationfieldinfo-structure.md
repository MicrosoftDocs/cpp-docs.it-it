---
title: Struttura CDaoRelationFieldInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoRelationFieldInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationFieldInfo structure [MFC]
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8d86faf89aea0f991a9fdd27bec6bb7969404986
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956911"
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
 *m_strName*  
 Il nome del campo nella tabella primaria della relazione.  
  
 *m_strForeignName*  
 Il nome del campo nella tabella esterna della relazione.  
  
## <a name="remarks"></a>Note  
 Un oggetto relation DAO specifica i campi in una tabella primaria e i campi di una tabella esterna che definiscono la relazione. I riferimenti al primario nella definizione della struttura precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto ottenuto chiamando il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo)funzione membro di classe `CDaoDatabase`.  
  
 Gli oggetti della relazione e gli oggetti campo della relazione non sono rappresentati da una classe MFC. Al contrario, il DAO oggetti oggetti MFC sottostanti della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contiene una raccolta di oggetti relazione, denominata la raccolta di relazioni. Ogni oggetto relation, a sua volta, contiene una raccolta di oggetti campo relazione. Ogni oggetto field relazione mette in correlazione un campo nella tabella primaria e un campo nella tabella esterna. Insieme, gli oggetti campo relazione definiscono un gruppo di campi in ogni tabella, che contribuiscono a definire la relazione. `CDaoDatabase` permette di accedere a oggetti di relazione con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro. Il `CDaoRelationInfo` oggetto, quindi, un membro dati, `m_pFieldInfos`, che punta a una matrice di `CDaoRelationFieldInfo` oggetti.  
  
 Chiamare il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro dell'oggetto contenitore `CDaoDatabase` dell'oggetto in cui le relazioni di raccolta è archiviato l'oggetto di relazione si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto. `CDaoRelationFieldInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationFieldInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)
