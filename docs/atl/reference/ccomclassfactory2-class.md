---
title: "CComClassFactory2 Class | Microsoft Docs"
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
  - "ATL::CComClassFactory2<license>"
  - "CComClassFactory2"
  - "ATL.CComClassFactory2<license>"
  - "ATL::CComClassFactory2"
  - "ATL.CComClassFactory2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComClassFactory2 class"
ms.assetid: 19b66fd6-b9ed-47a0-822c-8132184f5a3e
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComClassFactory2 Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa l'interfaccia [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720).  
  
## Sintassi  
  
```  
  
      template <  
   class license  
>  
class CComClassFactory2 : public IClassFactory2,  
   public CComObjectRootEx<CComGlobalsThreadModel>,  
   public license  
```  
  
#### Parametri  
 *licenza*  
 Classe che implementa le seguenti funzioni statiche:  
  
-   **static BOOL VerifyLicenseKey\( BSTR**  `bstr`\);  
  
-   **static BOOL GetLicenseKey\( DWORD**  `dwReserved` **, BSTR\***  `pBstr`\);  
  
-   **BOOL statico IsLicenseValid\( \);**  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComClassFactory2::CreateInstance](../Topic/CComClassFactory2::CreateInstance.md)|Crea un oggetto del CLSID specificato.|  
|[CComClassFactory2::CreateInstanceLic](../Topic/CComClassFactory2::CreateInstanceLic.md)|Dato un codice di licenza, viene creato un oggetto del CLSID specificato.|  
|[CComClassFactory2::GetLicInfo](../Topic/CComClassFactory2::GetLicInfo.md)|Recupera informazioni che descrivono le funzionalità di gestione licenze di class factory.|  
|[CComClassFactory2::LockServer](../Topic/CComClassFactory2::LockServer.md)|Blocca il class factory in memoria.|  
|[CComClassFactory2::RequestLicKey](../Topic/CComClassFactory2::RequestLicKey.md)|Crea e restituisce un codice di licenza.|  
  
## Note  
 `CComClassFactory2` implementa l'interfaccia [IClassFactory2](http://msdn.microsoft.com/library/windows/desktop/ms692720), che è un'estensione [IClassFactory](http://msdn.microsoft.com/library/windows/desktop/ms694364).  Creazione di un oggetto dei comandi di**IClassFactory2** tramite una licenza.  Una class factory eseguito su un computer con licenza può fornire una chiave di licenza runtime.  Questo codice consente di licenza un'applicazione creare un'istanza degli oggetti quando una licenza a macchina completa non esiste.  
  
 Gli oggetti ATL in genere acquisiscono una class factory derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md).  Questa classe include macro [DECLARE\_CLASSFACTORY](../Topic/DECLARE_CLASSFACTORY.md), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come la factory della classe predefinita.  Per utilizzare `CComClassFactory2`, specificare la macro [DECLARE\_CLASSFACTORY2](../Topic/DECLARE_CLASSFACTORY2.md) nella definizione di classe dell'oggetto.  Di seguito è riportato un esempio:  
  
 [!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/CPP/ccomclassfactory2-class_1.h)]  
  
 **CMyLicense**, il parametro di modello a `CComClassFactory2`, deve implementare le funzioni `VerifyLicenseKey`, `GetLicenseKey`e `IsLicenseValid`statico.  L'esempio seguente è un esempio di una classe semplice di licenza:  
  
 [!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/CPP/ccomclassfactory2-class_2.h)]  
  
 `CComClassFactory2` deriva da entrambi i **CComClassFactory2Base** e *licenza*.  **CComClassFactory2Base**, a sua volta, deriva da **IClassFactory2** e da **CComObjectRootEx\< CComGlobalsThreadModel \>**.  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `license`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IClassFactory2`  
  
 `CComClassFactory2`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComClassFactoryAutoThread Class](../../atl/reference/ccomclassfactoryautothread-class.md)   
 [CComClassFactorySingleton Class](../../atl/reference/ccomclassfactorysingleton-class.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md)   
 [Class Overview](../../atl/atl-class-overview.md)