---
title: Struttura CDaoRelationFieldInfo | Microsoft Docs
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
ms.openlocfilehash: 0e61eb5a1abab68d4833bb8eb0953758234d9be6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46423540"
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

*m_strName*<br/>
Il nome del campo nella tabella primaria della relazione.

*m_strForeignName*<br/>
Il nome del campo della tabella esterna della relazione.

## <a name="remarks"></a>Note

Un oggetto relazione DAO specifica i campi in una tabella primaria e i campi di una tabella esterna che definiscono la relazione. I riferimenti al sito primario nella definizione della struttura precedente indicano la modalità in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto ottenuto chiamando il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo)funzione membro di classe `CDaoDatabase`.

Gli oggetti della relazione e gli oggetti campo della relazione non sono rappresentati da una classe MFC. Al contrario, nell'oggetto DAO oggetti oggetti MFC sottostanti della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contengono una raccolta di oggetti di relazione, denominata la raccolta di relazioni. Ogni oggetto relation, a sua volta, contiene una raccolta di oggetti di relazione campo. Ogni oggetto campo relation mette in correlazione un campo nella tabella primaria con un campo della tabella esterna. Insieme, gli oggetti campo relazione definiscono un gruppo di campi in ogni tabella, che insieme definiscono la relazione. `CDaoDatabase` Consente di accedere gli oggetti di relazione con un `CDaoRelationInfo` chiamando il `GetRelationInfo` funzione membro. Il `CDaoRelationInfo` oggetto, quindi, ha un membro di dati `m_pFieldInfos`, che punta a una matrice di `CDaoRelationFieldInfo` oggetti.

Chiamare il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione di membro dell'oggetto contenitore `CDaoDatabase` dell'oggetto in cui le relazioni di raccolta è archiviato l'oggetto di relazione si è interessati. Accedere quindi il `m_pFieldInfos` membro del [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) oggetto. `CDaoRelationFieldInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoRelationFieldInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)
