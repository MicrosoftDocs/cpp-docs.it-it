---
title: Macro della mappa dell&quot;oggetto | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
caps.latest.revision: 16
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: f03ca61c6ab3c550c316b380d34eb5fa4f3b61de
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="object-map-macros"></a>Macro di mapping degli oggetti
Queste macro definiscono mappe di oggetti e le voci.  
  
|||  
|-|-|  
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Consente di specificare la descrizione di testo dell'oggetto di classe, che verrà immesso nella mappa oggetto.|  
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Passa un oggetto ATL nella mappa oggetto, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.|  
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="declare_object_description"></a>DECLARE_OBJECT_DESCRIPTION  
 Consente di specificare una descrizione di testo per l'oggetto della classe.  
  
```
DECLARE_OBJECT_DESCRIPTION( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Descrizione dell'oggetto classe.  
  
### <a name="remarks"></a>Note  
 Questa descrizione ATL conclude la mappa di oggetti tramite il [OBJECT_ENTRY](http://msdn.microsoft.com/en-us/abd10ee2-54f0-4f94-9ec2-ddf8f4c8c8cd) (macro).  
  
 `DECLARE_OBJECT_DESCRIPTION`implementa un `GetObjectDescription` funzione, è possibile utilizzare per eseguire l'override di [CComCoClass::GetObjectDescription](ccomcoclass-class.md#getobjectdescription) metodo.  

  
 Il `GetObjectDescription` funzione viene chiamata dal **IComponentRegistrar::GetComponents**. **IComponentRegistrar** è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto di registrazione componenti con la creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il **IComponentRegistrar** interfaccia. **IComponentRegistrar** in genere viene utilizzato da Microsoft Transaction Server.  
  
 Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[123 NVC_ATL_Windowing](../../atl/codesnippet/cpp/object-map-macros_1.h)]  
  
##  <a name="object_entry_auto"></a>OBJECT_ENTRY_AUTO  
 Passa un oggetto ATL nella mappa oggetto, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.  
  
```
OBJECT_ENTRY_AUTO( clsid, class )
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] CLSID di una classe COM implementata dalla classe C++ denominata `class`.  
  
 `class`  
 [in] Nome della classe C++ che implementa la classe COM rappresentata da `clsid`.  
  
### <a name="remarks"></a>Note  
 Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.  
  
 `OBJECT_ENTRY_AUTO`immette i puntatori a funzioni della classe dell'autore e classe factory creatore della classe `CreateInstance` funzioni per questo oggetto nella mappa oggetto ATL generato automaticamente. Quando [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver) viene chiamato, viene aggiornato il Registro di sistema per ogni oggetto nella mappa oggetto.  

  
 Nella tabella seguente viene descritto come le informazioni aggiunte alla mappa dell'oggetto viene ottenute dalla classe di base come secondo parametro per questa macro.  
  
|Informazioni|Ottenuto da|  
|---------------------|-------------------|  
|Registrazione COM|[Macro del Registro di sistema](../../atl/reference/registry-macros.md)|  
|Creazione della classe factory|[Macro di Class Factory](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Creazione di istanze|[Macro di aggregazione](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Registrazione del componente categoria|[Macro di categoria](../../atl/reference/category-macros.md)|  
|Pulizia e l'inizializzazione a livello di classe|[ObjectMain](ccomobjectrootex-class.md#objectmain)|  

  
##  <a name="object_entry_non_createable_ex_auto"></a>OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO  
 Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.  
  
```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO( clsid, class )
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] CLSID di una classe COM implementata dalla classe C++ denominata `class`.  
  
 `class`  
 [in] Nome della classe C++ che implementa la classe COM rappresentata da `clsid`.  
  
### <a name="remarks"></a>Note  
 Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.  
  
 `OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO`Consente di specificare che un oggetto deve essere registrato e inizializzato (vedere [OBJECT_ENTRY_AUTO](#object_entry_auto) per ulteriori informazioni), ma non devono essere creabile tramite `CoCreateInstance`.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)

