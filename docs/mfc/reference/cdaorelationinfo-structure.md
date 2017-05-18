---
title: Struttura CDaoRelationInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoRelationInfo
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), Relations collection
- CDaoRelationInfo structure
ms.assetid: 92dda090-fe72-4090-84ec-429498a48aad
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 7c3a8195aed2c3b3fe5c78c98afcc6e72a83cc21
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Identifica in modo univoco l'oggetto relazione. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 *m_strTable*  
 Nome della tabella primaria della relazione.  
  
 *m_strForeignTable*  
 Definisce la tabella esterna nella relazione. Una tabella esterna è una tabella utilizzata per contenere le chiavi esterne. In generale, utilizzare una tabella esterna per stabilire o applicare l'integrità referenziale. La tabella esterna è in genere sul lato molti di una relazione uno-a-molti. Le tabelle esterne includono tabelle che contengono codici per gli stati American o in Canada o gli ordini dei clienti.  
  
 `m_lAttributes`  
 Contiene informazioni sul tipo di relazione. Il valore di questo membro può essere uno dei seguenti:  
  
- **dbRelationUnique** relazione è uno a uno.  
  
- **dbRelationDontEnforce** relazione non è (non l'integrità referenziale).  
  
- **dbRelationInherited** relazione esiste in un database non correnti che contiene le due tabelle collegate.  
  
- **dbRelationLeft** la relazione è un join sinistro. Un left outer join include tutti i record dal primo (sinistra) di due tabelle, anche se non sono presenti valori corrispondenti per i record nella seconda tabella (destra).  
  
- **dbRelationRight** la relazione è un join destro. Un right outer join include tutti i record del secondo (destra) di due tabelle, anche se non sono presenti valori corrispondenti per i record della prima tabella (sinistra).  
  
- **dbRelationUpdateCascade** aggiornamenti deve essere propagata.  
  
- **dbRelationDeleteCascade** verranno eseguite le operazioni di eliminazione a catena.  
  
 `m_pFieldInfos`  
 Un puntatore a una matrice di [CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md) strutture. La matrice contiene un oggetto per ogni campo nella relazione. Il `m_nFields` (membro dati) fornisce un conteggio degli elementi della matrice.  
  
 `m_nFields`  
 Il numero di `CDaoRelationFieldInfo` gli oggetti di `m_pFieldInfos` (membro dati).  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro nella classe `CDaoDatabase`.  
  
 Gli oggetti della relazione non sono rappresentati da una classe MFC. Invece, l'oggetto DAO sottostante un oggetto MFC di `CDaoDatabase` classe mantiene una raccolta di oggetti di relazione: `CDaoDatabase` fornisce funzioni membro per accedere a alcuni elementi singoli di informazioni sulle relazioni, o possono accedervi contemporaneamente con un `CDaoRelationInfo` oggetto chiamando il `GetRelationInfo` funzione membro dell'oggetto di database che contiene.  
  
 Le informazioni recuperate dal [CDaoDatabase::GetRelationInfo](../../mfc/reference/cdaodatabase-class.md#getrelationinfo) funzione membro viene archiviata in una `CDaoRelationInfo` struttura. `CDaoRelationInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoRelationInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CDaoRelationFieldInfo](../../mfc/reference/cdaorelationfieldinfo-structure.md)

