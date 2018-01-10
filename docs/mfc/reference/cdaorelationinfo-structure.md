---
title: Struttura CDaoRelationInfo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CDaoRelationInfo
dev_langs: C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationInfo structure [MFC]
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 047b81ebaa903d2b9bdddcf6c606d1e9fe649482
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdaorelationinfo-structure"></a>Struttura CDaoRelationInfo
Il `CDaoRelationInfo` struttura contiene informazioni su una relazione definita tra i campi di due tabelle in un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoRelationInfo  
{  
    CDaoRelationInfo();
*// Constructor  
    CString m_strName;      // Primary  
    CString m_strTable;     // Primary  
    CString m_strForeignTable;              // Primary  
    long m_lAttributes;     // Secondary  
    CDaoRelationFieldInfo* m_pFieldInfos;   // Secondary  
    short m_nFields;        // Secondary *// Below the // Implementation comment: *// Destructor, not otherwise documented  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto di relazione. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_strTable*  
 Nome della tabella primaria della relazione.  
  
 *m_strForeignTable*  
 Definisce la tabella esterna nella relazione. Una tabella esterna è una tabella utilizzata per contenere chiavi esterne. In generale, utilizzare una tabella esterna per stabilire o applicare l'integrità referenziale. La tabella esterna è in genere sul lato molti di una relazione uno-a-molti. Esempi di tabelle esterne includono tabelle che contengono codici per il American stati o province canadese o gli ordini dei clienti.  
  
 `m_lAttributes`  
 Contiene informazioni sul tipo di relazione. Il valore di questo membro può essere uno dei seguenti:  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationLeft** la relazione è un join sinistro. Un left outer join include tutti i record dal primo (sinistra) di due tabelle, anche se non sono presenti valori corrispondenti per i record della seconda tabella (destra).  
  
- **dbRelationRight** la relazione è un join di destra. Un right outer join include tutti i record del secondo (destra) di due tabelle, anche se non sono presenti valori corrispondenti per i record della prima tabella (a sinistra).  
  
- **dbRelationUpdateCascade** aggiornamenti deve essere propagata.  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
 `m_pFieldInfos`  
 Un puntatore a una matrice di [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) strutture. La matrice contiene un oggetto per ogni campo nella relazione. Il `m_nFields` (membro dati) fornisce un conteggio degli elementi della matrice.  
  
 `m_nFields`  
 Il numero di `CDaoRelationFieldInfo` gli oggetti di `m_pFieldInfos` (membro dati).  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Gli oggetti della relazione non sono rappresentati da una classe MFC. Invece, l'oggetto DAO sottostante di un oggetto MFC del `CDaoDatabase` classe gestisce una raccolta di oggetti relazione: `CDaoDatabase` fornisce funzioni di membro per alcuni singoli elementi di informazioni sulle relazioni o di accedere a possano accedervi in una sola volta con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro dell'oggetto di database che lo contiene.  
  
 Le informazioni recuperate dal [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) le funzioni membro vengono archiviate un `CDaoRelationInfo` struttura. `CDaoRelationInfo`definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)
