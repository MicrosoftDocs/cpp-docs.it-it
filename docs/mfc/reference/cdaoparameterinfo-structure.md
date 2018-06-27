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
ms.openlocfilehash: 2ef473912489e9c757574545be2f8a53d7f3f9b9
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951600"
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
 *m_strName*  
 Identifica in modo univoco l'oggetto parameter. Per altre informazioni, vedere l'argomento "Proprietà Name" nella Guida di DAO.  
  
 *m_nType*  
 Un valore che indica il tipo di dati di un oggetto parametro. Per un elenco dei possibili valori, vedere la *m_nType* appartenente il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Per altre informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.  
  
 *m_varValue*  
 Il valore del parametro, archiviato una [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.  
  
## <a name="remarks"></a>Note  
 I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) funzione membro nella classe `CDaoQueryDef`.  
  
 MFC non include gli oggetti parametro DAO in una classe. DAO querydef oggetti MFC sottostante `CDaoQueryDef` oggetti archiviano i parametri in raccolte di parametri. Per accedere agli oggetti parametro in un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) dell'oggetto, chiamare l'oggetto querydef `GetParameterInfo` funzione membro per un nome di parametro specifico o un indice nella raccolta di parametri. È possibile usare il [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) funzione di membro in combinazione con `GetParameterInfo` per scorrere la raccolta di parametri.  
  
 Le informazioni recuperate dal [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) le funzioni membro vengono archiviate un `CDaoParameterInfo` struttura. Chiamare `GetParameterInfo` per l'oggetto querydef in cui raccolta di parametri è archiviato l'oggetto parameter.  
  
> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, utilizzare il [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) funzioni membro della classe `CDaoRecordset`.  
  
 `CDaoParameterInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoParameterInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)
