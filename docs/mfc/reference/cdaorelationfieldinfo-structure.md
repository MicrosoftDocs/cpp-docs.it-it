---
description: 'Altre informazioni su: struttura CDaoRelationFieldInfo'
title: Struttura CDaoRelationFieldInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoRelationFieldInfo
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationFieldInfo structure [MFC]
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
ms.openlocfilehash: eb470752a9e9da5f610dd59976f2716fa1c4e18a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248164"
---
# <a name="cdaorelationfieldinfo-structure"></a>Struttura CDaoRelationFieldInfo

La `CDaoRelationFieldInfo` struttura contiene informazioni su un campo in una relazione definita per gli oggetti DAO (Data Access Objects).

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
Nome del campo nella tabella primaria della relazione.

*m_strForeignName*<br/>
Nome del campo nella tabella esterna della relazione.

## <a name="remarks"></a>Commenti

Un oggetto relazione DAO specifica i campi in una tabella primaria e i campi in una tabella esterna che definiscono la relazione. I riferimenti al database primario nella definizione della struttura precedente indicano il modo in cui vengono restituite le informazioni nel `m_pFieldInfos` membro di un oggetto [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) ottenuto chiamando la funzione membro [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) della classe `CDaoDatabase` .

Gli oggetti relazione e gli oggetti campo relazione non sono rappresentati da una classe MFC. Gli oggetti DAO sottostanti oggetti MFC della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) contengono invece una raccolta di oggetti relation, denominata raccolta Relations. Ogni oggetto relazione, a sua volta, contiene una raccolta di oggetti campo relazione. Ogni oggetto campo relazione mette in correlazione un campo nella tabella primaria con un campo nella tabella esterna. Insieme, gli oggetti campo relazione definiscono un gruppo di campi in ogni tabella, che insieme definiscono la relazione. `CDaoDatabase` consente di accedere agli oggetti relazione con un `CDaoRelationInfo` oggetto chiamando la `GetRelationInfo` funzione membro. L' `CDaoRelationInfo` oggetto, quindi, dispone di un membro dati, `m_pFieldInfos` , che punta a una matrice di `CDaoRelationFieldInfo` oggetti.

Chiamare la funzione membro [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) dell'oggetto contenitore `CDaoDatabase` nella cui raccolta di relazioni è archiviato l'oggetto relazione a cui si è interessati. Accedere quindi al `m_pFieldInfos` membro dell'oggetto [CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md) . `CDaoRelationFieldInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoRelationFieldInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Struttura CDaoRelationInfo](../../mfc/reference/cdaorelationinfo-structure.md)
