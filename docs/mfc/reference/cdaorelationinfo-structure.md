---
title: Struttura CDaoRelationInfo | Documenti Microsoft
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
ms.openlocfilehash: 8887c9735b91c43e9dc43140df792841eecef5ed
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122608"
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
*m_strName*  
 Identifica in modo univoco l'oggetto di relazione. Per altre informazioni, vedere l'argomento "Proprietà Name" nella Guida di DAO.  
  
 *m_strTable*  
 Assegna un nome della tabella primaria della relazione.  
  
 *m_strForeignTable*  
 Assegna un nome di tabella esterna nella relazione. Una tabella esterna è una tabella utilizzata per contenere le chiavi esterne. In generale, utilizzare una tabella esterna per stabilire o applicare l'integrità referenziale. Nella tabella esterna è posto generalmente sul lato molti di una relazione uno-a-molti. Le tabelle che contengono codici per gli stati American o in Canada o gli ordini dei clienti sono esempi di tabelle esterne.  
  
 *m_lAttributes*  
 Contiene informazioni sul tipo di relazione. Il valore di questo membro può essere uno dei seguenti:  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è applicato (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationLeft** la relazione è un join sinistro. Un left outer join include tutti i record dal primo (sinistra) di due tabelle, anche se non sono presenti valori corrispondenti per i record della seconda tabella (destra).  
  
- **dbRelationRight** la relazione è un join a destra. Un right outer join include tutti i record del secondo (destra) di due tabelle, anche se non sono presenti valori corrispondenti per i record della prima tabella (a sinistra).  
  
- **dbRelationUpdateCascade** aggiornamenti deve essere propagata.  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
*m_pFieldInfos*  
 Un puntatore a una matrice di [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) strutture. La matrice contiene un oggetto per ogni campo nella relazione. Il `m_nFields` (membro dati) fornisce un conteggio degli elementi della matrice.  
  
*m_nFields*  
 Quante `CDaoRelationFieldInfo` gli oggetti di `m_pFieldInfos` (membro dati).  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Gli oggetti della relazione non sono rappresentati da una classe MFC. Al contrario, l'oggetto DAO sottostante un oggetto MFC del `CDaoDatabase` classe gestisce una raccolta di oggetti relazione: `CDaoDatabase` fornisce funzioni membro per accedere alcuni singoli elementi delle informazioni sulle relazioni, è possono accedere ad esse tutti contemporaneamente con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro dell'oggetto di database che lo contiene.  
  
 Le informazioni recuperate dal [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) le funzioni membro vengono archiviate un `CDaoRelationInfo` struttura. `CDaoRelationInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)
