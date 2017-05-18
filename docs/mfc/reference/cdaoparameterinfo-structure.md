---
title: Struttura CDaoParameterInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoParameterInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoParameterInfo structure
- DAO (Data Access Objects), Parameters collection
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
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
ms.openlocfilehash: b41d26b736ea9f84c53f71dbd71949f74fb8ae52
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoparameterinfo-structure"></a>Struttura CDaoParameterInfo
Il `CDaoParameterInfo` struttura contiene informazioni su un oggetto parametro definito per l'accesso oggetti DAO (data).  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CDaoParameterInfo  
{  
    CString m_strName;       // Primary  
    short m_nType;           // Primary  
    ColeVariant m_varValue;  // Secondary  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 `m_strName`  
 Identifica in modo univoco l'oggetto parametro. Per ulteriori informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 `m_nType`  
 Un valore che indica il tipo di dati di un oggetto parametro. Per un elenco dei valori possibili, vedere il `m_nType` membro del [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Per ulteriori informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
 *m_varValue*  
 Il valore del parametro, archiviato in un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) funzione membro nella classe `CDaoQueryDef`.  
  
 MFC non include DAO gli oggetti parametro in una classe. Oggetto querydef DAO oggetti MFC sottostante `CDaoQueryDef` oggetti archiviare i parametri in raccolte di parametri. Per accedere agli oggetti parametro in un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) oggetto, chiamare l'oggetto querydef `GetParameterInfo` una funzione membro per un nome di parametro specifico o un indice nella raccolta di parametri. È possibile utilizzare il [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) funzione membro in combinazione con `GetParameterInfo` per scorrere la raccolta di parametri.  
  
 Le informazioni recuperate dal [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) funzione membro viene archiviata in una `CDaoParameterInfo` struttura. Chiamare `GetParameterInfo` per l'oggetto querydef nella raccolta i cui parametri è archiviato l'oggetto parametro.  
  
> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, utilizzare il [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) funzioni membro della classe `CDaoRecordset`.  
  
 `CDaoParameterInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoParameterInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoQueryDef (classe)](../../mfc/reference/cdaoquerydef-class.md)

