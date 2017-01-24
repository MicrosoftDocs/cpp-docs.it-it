---
title: "Struttura CDaoParameterInfo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDaoParameterInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDaoParameterInfo (struttura)"
  - "DAO (Data Access Objects), Parameters (raccolta)"
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura CDaoParameterInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `CDaoParameterInfo` contiene informazioni su un oggetto parametro definito per gli oggetti di accesso ai dati \(DAO\).  
  
## Sintassi  
  
```  
  
      struct CDaoParameterInfo  
{  
   CString m_strName;       // Primary  
   short m_nType;           // Primary  
   ColeVariant m_varValue;  // Secondary  
};  
```  
  
#### Parametri  
 `m_strName`  
 In modo univoco assegnare all'oggetto Parameter.  Per ulteriori informazioni, vedere l'argomento "proprietà name" nella Guida di DAO.  
  
 `m_nType`  
 Un valore che indica il tipo di dati object Parameter.  Per un elenco di valori possibili, vedere il membro di `m_nType` della struttura di [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md).  Per ulteriori informazioni, vedere l'argomento "proprietà tipo" nella Guida di DAO.  
  
 *m\_varValue*  
 Il valore del parametro, memorizzato in un oggetto di [COleVariant](../../mfc/reference/colevariant-class.md).  
  
## Note  
 I riferimenti al di sopra principale e secondario indicano quali le informazioni restituite dalla funzione membro di [GetParameterInfo](../Topic/CDaoQueryDef::GetParameterInfo.md) nella classe `CDaoQueryDef`.  
  
 MFC non incapsula gli oggetti parametro di DAO in una classe.  Gli oggetti di querydef di DAO che sono alla base degli oggetti MFC `CDaoQueryDef` archiviano i parametri nelle raccolte di parametri.  Per accedere agli oggetti Parameter in [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) object, chiamare la funzione membro di `GetParameterInfo` l'oggetto pulsante querydef per un nome di parametro specifico o un indice nella raccolta di parametri.  È possibile utilizzare la funzione membro di [CDaoQueryDef::GetParameterCount](../Topic/CDaoQueryDef::GetParameterCount.md) insieme a `GetParameterInfo` per scorrere in ciclo la raccolta di parametri.  
  
 Le informazioni recuperate dalla funzione membro di [CDaoQueryDef::GetParameterInfo](../Topic/CDaoQueryDef::GetParameterInfo.md) vengono archiviate in una struttura di `CDaoParameterInfo`.  Chiamata `GetParameterInfo` per l'oggetto di cui querydef della raccolta di parametri l'oggetto parametro viene archiviato.  
  
> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, utilizzare le funzioni membro di [SetParamValue](../Topic/CDaoRecordset::SetParamValue.md) e di [GetParamValue](../Topic/CDaoRecordset::GetParamValue.md) di classe `CDaoRecordset`.  
  
 `CDaoParameterInfo` definisce anche una funzione membro di `Dump` nelle build di debug.  È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto di `CDaoParameterInfo`.  
  
## Requisiti  
 **Intestazione:** afxdao.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)