---
title: Struttura CDaoParameterInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoParameterInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoParameterInfo structure [MFC]
- DAO (Data Access Objects), Parameters collection
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e743e7456c185acd100c898cfb946182d63ce63
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33366239"
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
 Un valore che indica il tipo di dati di un oggetto parametro. Per un elenco dei possibili valori, vedere il `m_nType` appartenente il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Per ulteriori informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
 *m_varValue*  
 Il valore del parametro, archiviato un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) funzione membro nella classe `CDaoQueryDef`.  
  
 MFC non include gli oggetti parametro DAO in una classe. Oggetti di querydef DAO MFC sottostante `CDaoQueryDef` oggetti archiviano i parametri in raccolte di parametri. Per accedere agli oggetti parametro in un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) dell'oggetto, chiamare l'oggetto querydef `GetParameterInfo` funzione membro per un nome di parametro specifico o un indice nella raccolta di parametri. È possibile utilizzare il [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) funzione membro in combinazione con `GetParameterInfo` per scorrere la raccolta di parametri.  
  
 Le informazioni recuperate dal [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) le funzioni membro vengono archiviate un `CDaoParameterInfo` struttura. Chiamare `GetParameterInfo` per l'oggetto querydef nella raccolta i cui parametri si trova l'oggetto parametro.  
  
> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, utilizzare il [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) funzioni membro della classe `CDaoRecordset`.  
  
 `CDaoParameterInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoParameterInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)
