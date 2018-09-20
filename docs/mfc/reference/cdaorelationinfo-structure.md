---
title: Struttura CDaoRelationInfo | Microsoft Docs
ms.custom: ''
ms.date: 06/25/2018
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoRelationInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationInfo structure [MFC]
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ca5fceb25fdc9640248e0e510efb0c2f18eb506
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380087"
---
# <a name="cdaorelationinfo-structure"></a>Struttura CDaoRelationInfo

Il `CDaoRelationInfo` struttura contiene informazioni su una relazione definita tra i campi di due tabelle in un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.

## <a name="syntax"></a>Sintassi

```cpp
struct CDaoRelationInfo
{
    CDaoRelationInfo();                     // Constructor
    CString m_strName;                      // Primary
    CString m_strTable;                     // Primary
    CString m_strForeignTable;              // Primary
    long m_lAttributes;                     // Secondary
    CDaoRelationFieldInfo* m_pFieldInfos;   // Secondary
    short m_nFields;                        // Secondary
    // Below the // Implementation comment:
    // Destructor, not otherwise documented
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto di relazione. Per altre informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_strTable*<br/>
Assegna un nome della tabella primaria della relazione.

*m_strForeignTable*<br/>
Assegna un nome di tabella esterna nella relazione. Una tabella esterna è una tabella utilizzata per contenere le chiavi esterne. In genere, si usa una tabella esterna per stabilire o applicare l'integrità referenziale. La tabella esterna è in genere sul lato molti di una relazione uno-a-molti. Le tabelle che contengono codici per gli stati American o in Canada o gli ordini dei clienti sono esempi di tabelle esterne.

*m_lAttributes*<br/>
Contiene informazioni sul tipo di relazione. Il valore di questo membro può essere uno dei seguenti:

- `dbRelationUnique` Relazione è uno a uno.

- `dbRelationDontEnforce` Relazione non applicata (non l'integrità referenziale).

- `dbRelationInherited` Esiste una relazione in un database non correnti che contiene le due tabelle associate.

- `dbRelationLeft` La relazione è un join a sinistra. Un left outer join include tutti i record dal primo (sinistra) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella tabella secondo (destra).

- `dbRelationRight` La relazione è un join a destra. Un right outer join include tutti i record dal secondo (destra) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella prima tabella (a sinistra).

- `dbRelationUpdateCascade` Si trasmetterà gli aggiornamenti.

- `dbRelationDeleteCascade` Verranno eseguite le operazioni di eliminazione a catena.

*m_pFieldInfos*<br/>
Un puntatore a una matrice di [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) strutture. La matrice contiene un oggetto per ogni campo nella relazione. Il `m_nFields` (membro dati) fornisce un conteggio degli elementi della matrice.

*m_nFields*<br/>
I numerosi `CDaoRelationFieldInfo` gli oggetti nel `m_pFieldInfos` (membro dati).

## <a name="remarks"></a>Note

I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione di membro nella classe `CDaoDatabase`.

Gli oggetti della relazione non sono rappresentati da una classe MFC. Al contrario, oggetto DAO sottostante a un oggetto MFC del `CDaoDatabase` classe mantiene una raccolta di oggetti di relazione: `CDaoDatabase` fornisce funzioni membro per accedere alcuni singoli elementi di informazioni sulle relazioni oppure è possono accedervi tutti contemporaneamente con una `CDaoRelationInfo` chiamando il `GetRelationInfo` funzione membro dell'oggetto di database che lo contiene.

Le informazioni recuperate dal [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) le funzioni membro vengono archiviate un `CDaoRelationInfo` struttura. `CDaoRelationInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoRelationInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)
