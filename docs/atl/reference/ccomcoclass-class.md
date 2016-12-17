---
title: "CComCoClass Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComCoClass"
  - "ATL.CComCoClass"
  - "ATL::CComCoClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aggregation [C++], aggregation models"
  - "CComCoClass class"
ms.assetid: 67cfefa4-8df9-47fa-ad58-2d1a1ae25762
caps.latest.revision: 19
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComCoClass Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare istanze di una classe e ottenere le proprietà.  
  
## Sintassi  
  
```  
  
      template<  
   class T,  
   const CLSID* pclsid = &CLSID_NULL  
>  
class CComCoClass  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `CComCoClass`.  
  
 *pclsid*  
 Un puntatore al CLSID dell'oggetto.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCoClass::CreateInstance](../Topic/CComCoClass::CreateInstance.md)|\(Proprietà statica\) crea un'istanza della classe e query per l'interfaccia.|  
|[CComCoClass::Error](../Topic/CComCoClass::Error.md)|\(Proprietà statica\) restituisce informazioni dettagliate sul client.|  
|[CComCoClass::GetObjectCLSID](../Topic/CComCoClass::GetObjectCLSID.md)|\(Proprietà statica\) restituisce l'identificatore di classe dell'oggetto.|  
|[CComCoClass::GetObjectDescription](../Topic/CComCoClass::GetObjectDescription.md)|Override \(statico\) per restituire la descrizione dell'oggetto.|  
  
## Note  
 `CComCoClass` fornisce metodi per recuperare il CLSID di un oggetto, le informazioni di errore di selezione e creare istanze della classe.  Qualsiasi classe registrata in [mappa oggetto](http://msdn.microsoft.com/it-it/b57619cc-534f-4b8f-bfd4-0c12f937202f) deve essere derivata da `CComCoClass`.  
  
 `CComCoClass` definisce anche la factory della classe predefinita e il modello di aggregazione per l'oggetto.  `CComCoClass` utilizza le due macro:  
  
-   [DECLARE\_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md) dichiara la class factory per essere [CComClassFactory](../../atl/reference/ccomclassfactory-class.md).  
  
-   [DECLARE\_AGGREGATABLE](../Topic/DECLARE_AGGREGATABLE.md) indicare che l'oggetto può essere aggregatoe.  
  
 È possibile eseguire l'override di queste impostazioni predefinite specificando un'altra macro nella definizione della classe.  Ad esempio, per utilizzare [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) anziché `CComClassFactory`, specificare la macro [DECLARE\_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) :  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/CPP/ccomcoclass-class_1.h)]  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)