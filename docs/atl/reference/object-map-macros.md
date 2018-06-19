---
title: Macro della mappa dell'oggetto | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::DECLARE_OBJECT_DESCRIPTION
- atlcom/ATL::OBJECT_ENTRY_AUTO
- atlcom/ATL::OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO
dev_langs:
- C++
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 671fd80bc2c4ad320efb282fd659899756c2ecbc
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32362943"
---
# <a name="object-map-macros"></a>Oggetto macro della mappa
Queste macro definiscono mappe di oggetti e le voci.  
  
|||  
|-|-|  
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Consente di specificare una descrizione di testo dell'oggetto di classe, che verrà inserita nella mappa oggetto.|  
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Inserisce un oggetto ATL nella mappa oggetto, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.|  
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="declare_object_description"></a>  DECLARE_OBJECT_DESCRIPTION  
 Consente di specificare una descrizione di testo per l'oggetto di classe.  
  
```
DECLARE_OBJECT_DESCRIPTION( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Descrizione dell'oggetto di classe.  
  
### <a name="remarks"></a>Note  
 ATL entra in questa descrizione nella mappa oggetto tramite il [OBJECT_ENTRY](http://msdn.microsoft.com/en-us/abd10ee2-54f0-4f94-9ec2-ddf8f4c8c8cd) (macro).  
  
 `DECLARE_OBJECT_DESCRIPTION` implementa una `GetObjectDescription` funzione, che è possibile utilizzare per eseguire l'override di [CComCoClass::GetObjectDescription](ccomcoclass-class.md#getobjectdescription) metodo.  

  
 Il `GetObjectDescription` funzione viene chiamata **IComponentRegistrar::GetComponents**. **IComponentRegistrar** è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto di registrazione dei componenti con la creazione guidata progetto ATL, la procedura guidata verrà implementata automaticamente il **IComponentRegistrar** interfaccia. **IComponentRegistrar** viene in genere utilizzata da Microsoft Transaction Server.  
  
 Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#123](../../atl/codesnippet/cpp/object-map-macros_1.h)]  
  
##  <a name="object_entry_auto"></a>  OBJECT_ENTRY_AUTO  
 Inserisce un oggetto ATL nella mappa oggetto, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.  
  
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
  
 `OBJECT_ENTRY_AUTO` immette i puntatori di funzione del classe dell'autore e la classe factory creatore classe `CreateInstance` funzioni per questo oggetto nella mappa oggetto ATL generato automaticamente. Quando [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver) viene chiamato, viene aggiornato il Registro di sistema per ogni oggetto nella mappa oggetto.  

  
 La tabella seguente descrive come le informazioni aggiunte alla mappa dell'oggetto viene ottenute dalla classe di base come secondo parametro per questa macro.  
  
|Informazioni per|Ottenuto da|  
|---------------------|-------------------|  
|Registrazione COM|[Macro del Registro di sistema](../../atl/reference/registry-macros.md)|  
|Creazione della classe factory|[Macro di Class Factory](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Creazione di istanze|[Macro di aggregazione](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Registrazione di categoria di componenti|[Macro di categoria](../../atl/reference/category-macros.md)|  
|Pulizia e l'inizializzazione a livello di classe|[ObjectMain](ccomobjectrootex-class.md#objectmain)|  

  
##  <a name="object_entry_non_createable_ex_auto"></a>  OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO  
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
  
 `OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO` Consente di specificare che un oggetto deve essere registrato e inizializzato (vedere [OBJECT_ENTRY_AUTO](#object_entry_auto) per altre informazioni), ma non deve essere creabile esternamente tramite `CoCreateInstance`.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
