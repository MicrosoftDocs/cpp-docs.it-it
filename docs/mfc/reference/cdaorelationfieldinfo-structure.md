---
title: Struttura CDaoRelationFieldInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoRelationFieldInfo
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationFieldInfo structure [MFC]
ms.assetid: 47cb89ca-dc80-47ce-96fd-cc4b88512558
ms.openlocfilehash: 9a00d1cbaf58729863a85d4e9053c9241e9566ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599407"
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
