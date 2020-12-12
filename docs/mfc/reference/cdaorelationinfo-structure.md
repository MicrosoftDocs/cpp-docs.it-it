---
description: 'Altre informazioni su: struttura CDaoRelationInfo'
title: Struttura CDaoRelationInfo
ms.date: 06/25/2018
f1_keywords:
- CDaoRelationInfo
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationInfo structure [MFC]
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
ms.openlocfilehash: efcc880d30dd18108005d9c4f265238b81551532
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222242"
---
# <a name="cdaorelationinfo-structure"></a>Struttura CDaoRelationInfo

La `CDaoRelationInfo` struttura contiene informazioni su una relazione definita tra i campi di due tabelle in un oggetto [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) .

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
Assegna un nome univoco all'oggetto Relation. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_strTable*<br/>
Assegna un nome alla tabella primaria nella relazione.

*m_strForeignTable*<br/>
Assegna un nome alla tabella esterna nella relazione. Una tabella esterna è una tabella utilizzata per contenere chiavi esterne. In genere, è possibile utilizzare una tabella esterna per stabilire o applicare l'integrità referenziale. La tabella esterna si trova in genere sul lato molti di una relazione uno-a-molti. Tra gli esempi di tabelle esterne sono incluse le tabelle contenenti codici per gli Stati americani, le province canadesi o gli ordini dei clienti.

*m_lAttributes*<br/>
Contiene informazioni sul tipo di relazione. Il valore di questo membro può essere uno dei seguenti:

- `dbRelationUnique` La relazione è uno-a-uno.

- `dbRelationDontEnforce` La relazione non viene applicata (nessuna integrità referenziale).

- `dbRelationInherited` La relazione esiste in un database non corrente che contiene le due tabelle associate.

- `dbRelationLeft` La relazione è un join a sinistra. Un left outer join include tutti i record della prima (a sinistra) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella seconda tabella (a destra).

- `dbRelationRight` La relazione è un join a destra. Un right outer join include tutti i record della seconda (a destra) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella prima tabella (a sinistra).

- `dbRelationUpdateCascade` Gli aggiornamenti si propagano a cascata.

- `dbRelationDeleteCascade` Le eliminazioni si propagano a cascata.

*m_pFieldInfos*<br/>
Puntatore a una matrice di strutture [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) . La matrice contiene un oggetto per ogni campo nella relazione. Il `m_nFields` membro dati fornisce un conteggio degli elementi della matrice.

*m_nFields*<br/>
Numero di `CDaoRelationFieldInfo` oggetti nel `m_pFieldInfos` membro dati.

## <a name="remarks"></a>Commenti

I riferimenti a primary e Secondary sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) nella classe `CDaoDatabase` .

Gli oggetti relation non sono rappresentati da una classe MFC. Al contrario, l'oggetto DAO sottostante un oggetto MFC della `CDaoDatabase` classe mantiene una raccolta di oggetti relation: `CDaoDatabase` fornisce funzioni membro per accedere ad alcuni singoli elementi di informazioni di relazione oppure è possibile accedervi contemporaneamente con un `CDaoRelationInfo` oggetto chiamando la `GetRelationInfo` funzione membro dell'oggetto di database contenitore.

Le informazioni recuperate dalla funzione membro [CDaoDatabase:: GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) vengono archiviate in una `CDaoRelationInfo` struttura. `CDaoRelationInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoRelationInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)
