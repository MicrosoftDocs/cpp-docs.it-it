---
title: "CComClassFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComClassFactory"
  - "CComClassFactory"
  - "ATL::CComClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComClassFactory class"
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CComClassFactory Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa l'interfaccia [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364).  
  
## Sintassi  
  
```  
  
   class CComClassFactory : public IClassFactory,   
public CComObjectRootEx< CComGlobalsThreadModel >  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactory::CreateInstance](../Topic/CComClassFactory::CreateInstance.md)|Crea un oggetto del CLSID specificato.|  
|[CComClassFactory::LockServer](../Topic/CComClassFactory::LockServer.md)|Blocca il class factory in memoria.|  
  
## Note  
 `CComClassFactory` implementa l'interfaccia [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364), che contiene metodi per creare un oggetto di un CLSID particolare nonché blocca il class factory in memoria per consentire i nuovi oggetti da creare rapidamente.  **IClassFactory** deve essere implementato per ogni classe che registra nel Registro di sistema e a cui assegnare a un CLSID.  
  
 Gli oggetti ATL in genere acquisiscono una class factory derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md).  Questa classe include macro [DECLARE\_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md), che dichiara `CComClassFactory` come la factory della classe predefinita.  Per ignorare questa impostazione predefinita, specificare una delle macro `DECLARE_CLASSFACTORY`*XXX* nella definizione della classe.  Ad esempio, la macro [DECLARE\_CLASSFACTORY\_EX](../Topic/DECLARE_CLASSFACTORY_EX.md) utilizza la classe specificata per il class factory:  
  
 [!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/CPP/ccomclassfactory-class_1.h)]  
  
 La definizione della classe sopra specifica che **CMyClassFactory** verrà utilizzato come la factory della classe predefinita dell'oggetto.  **CMyClassFactory** deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.  
  
 ATL fornisce altre tre macro che indica una class factory:  
  
-   [DECLARE\_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) utilizza [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione di una licenza.  
  
-   [DECLARE\_CLASSFACTORY\_AUTO\_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) utilizza [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che crea oggetti in più apartment.  
  
-   [DECLARE\_CLASSFACTORY\_SINGLETON](../Topic/DECLARE_CLASSFACTORY_SINGLETON.md) utilizza [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che crea un singolo oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md).  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md)   
 [Class Overview](../../atl/atl-class-overview.md)