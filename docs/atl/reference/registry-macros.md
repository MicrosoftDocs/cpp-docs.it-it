---
title: Le macro del Registro di sistema | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::_ATL_STATIC_REGISTRY
- atlcom/ATL::DECLARE_LIBID
- atlcom/ATL::DECLARE_NO_REGISTRY
- atlcom/ATL::DECLARE_REGISTRY
- atlcom/ATL::DECLARE_REGISTRY_APPID_RESOURCEID
- atlcom/ATL::DECLARE_REGISTRY_RESOURCE
- atlcom/ATL::DECLARE_REGISTRY_RESOURCEID
dev_langs:
- C++
helpviewer_keywords:
- registry, ATL macros
ms.assetid: 3ee041da-c63b-42a4-89cf-2a4b2a6f81ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ed9b172217f1ca7ada7d8752151126b53055df37
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365217"
---
# <a name="registry-macros"></a>Macro del Registro di sistema
Queste macro definiscono strutture di tipo utile libreria e del Registro di sistema.  
  
|||  
|-|-|  
|[ATL_STATIC_REGISTRY](#_atl_static_registry)|Indica che si desidera che il codice di registrazione per l'oggetto si trovi nell'oggetto per evitare una dipendenza su ATL. DLL.|  
|[DECLARE_LIBID](#declare_libid)|Fornisce un modo per ATL ottenere il *libid* della libreria dei tipi.|  
|[DECLARE_NO_REGISTRY](#declare_no_registry)|Evita la registrazione ATL predefinito.|  
|[DECLARE_REGISTRY](#declare_registry)|Entra o rimuove una voce dell'oggetto principale nel Registro di sistema.|  
|[DECLARE_REGISTRY_APPID_RESOURCEID](#declare_registry_appid_resourceid)|Specifica le informazioni necessarie per registrare automaticamente il *appid*.|  
|[MACRO DECLARE_REGISTRY_RESOURCE](#declare_registry_resource)|Consente di individuare la risorsa denominata ed esegue lo script del Registro di sistema all'interno di esso.|  
|[DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid)|Trova la risorsa identificata da un numero di ID e viene eseguito lo script del Registro di sistema.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
    
##  <a name="_atl_static_registry"></a>  ATL_STATIC_REGISTRY  
 Un simbolo che indica il codice di registrazione per l'oggetto si trovi nell'oggetto per evitare una dipendenza su ATL. DLL.  
  
```
#define _ATL_STATIC_REGISTRY
```  
  
### <a name="remarks"></a>Note  
 Quando si definisce **ATL_STATIC_REGISTRY**, è consigliabile utilizzare il codice seguente:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#5](../../atl/codesnippet/cpp/registry-macros_1.cpp)]  
  
##  <a name="declare_libid"></a>  DECLARE_LIBID  
 Fornisce un modo per ATL ottenere il *libid* della libreria dei tipi.  
  
```
DECLARE_LIBID( libid )
```  
  
### <a name="parameters"></a>Parametri  
 *LIBID*  
 Il GUID della libreria dei tipi.  
  
### <a name="remarks"></a>Note  
 Utilizzare `DECLARE_LIBID` in un `CAtlModuleT`-classe derivata.  
  
### <a name="example"></a>Esempio  
 Attributi non generato dalla procedura guidata ATL (progetti) saranno necessario un esempio dell'utilizzo di questa macro.  
  
##  <a name="declare_no_registry"></a>  DECLARE_NO_REGISTRY  
 Utilizzare `DECLARE_NO_REGISTRY` se si desidera evitare qualsiasi registrazione ATL predefinito per la classe in cui viene visualizzata questa macro.  
  
```
DECLARE_NO_REGISTRY()
```  
  
##  <a name="declare_registry"></a>  DECLARE_REGISTRY  
 Immette la registrazione della classe standard nel Registro di sistema o lo rimuove dal Registro di sistema.  
  
```
DECLARE_REGISTRY(
    class, 
    pid, 
    vpid, 
    nid, 
    flags )
```  
  
### <a name="parameters"></a>Parametri  
 `class`  
 [in] Incluso per compatibilità con le versioni precedenti.  
  
 `pid`  
 [in] Un `LPCTSTR` che è un ID di programma specifici della versione.  
  
 *vpid*  
 [in] Un `LPCTSTR` che è un ID di programma indipendente dalla versione.  
  
 *nID*  
 [in] Oggetto **UINT** che rappresenta un indice della stringa di risorsa nel Registro di sistema da utilizzare come la descrizione del programma.  
  
 `flags`  
 [in] Oggetto `DWORD` contenente il programma di modello di threading nel Registro di sistema. Deve essere uno dei seguenti valori: **THREADFLAGS_APARTMENT**, **THREADFLAGS_BOTH**, o **AUTPRXFLAG**.  
  
### <a name="remarks"></a>Note  
 La registrazione standard è costituito il CLSID, ID di programma, ID di programma indipendente dalla versione, la stringa di descrizione e il modello di thread.  
  
 Quando si crea un oggetto o controllare mediante la creazione guidata classe aggiungere ATL, la procedura guidata automaticamente implementa il supporto basato su script del Registro di sistema e aggiunge il [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) macro ai file. Se non si desidera supporto basato su script del Registro di sistema, è necessario sostituire questa macro con `DECLARE_REGISTRY`. `DECLARE_REGISTRY` Inserisce solo le chiavi di base cinque descritte in precedenza nel Registro di sistema. È necessario scrivere manualmente il codice per inserire le altre chiavi del Registro di sistema.  
  
##  <a name="declare_registry_appid_resourceid"></a>  DECLARE_REGISTRY_APPID_RESOURCEID  
 Specifica le informazioni necessarie per registrare automaticamente il *appid*.  
  
```
DECLARE_REGISTRY_APPID_RESOURCEID(
    resid, 
    appid )
```  
  
### <a name="parameters"></a>Parametri  
 *RESID*  
 L'id di risorsa del file con estensione RGS che contiene informazioni sul *appid*.  
  
 *AppID*  
 Un valore GUID.  
  
### <a name="remarks"></a>Note  
 Utilizzare `DECLARE_REGISTRY_APPID_RESOURCEID` in un `CAtlModuleT`-classe derivata.  
  
### <a name="example"></a>Esempio  
 Le classi aggiunte ai progetti ATL con la creazione guidata aggiunta classe dispongono di un esempio dell'utilizzo di questa macro.  
  
##  <a name="declare_registry_resource"></a>  MACRO DECLARE_REGISTRY_RESOURCE  
 Ottiene la risorsa denominata contenente il file del Registro di sistema e viene eseguito lo script per immettere gli oggetti nel Registro di sistema o rimuoverli dal Registro di sistema.  
  
```
DECLARE_REGISTRY_RESOURCE( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Identificatore della risorsa di tipo stringa.  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto o controllare mediante la creazione guidata progetto ATL, la procedura guidata verrà automaticamente implementano il supporto del Registro di sistema basato su script e aggiungere il [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) (macro), che è simile a `DECLARE_REGISTRY_RESOURCE`, per il file.  
  
 È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso del Registro di sistema ottimizzato. Per collegare in modo statico il codice di registrazione, aggiungere la riga seguente nel file stdafx. h:  
  
 [!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]  
  
 Se si desidera ATL per sostituire i valori di sostituzione in fase di esecuzione, non si specifica il `DECLARE_REGISTRY_RESOURCE` o `DECLARE_REGISTRY_RESOURCEID` (macro). In alternativa, creare una matrice di **_ATL_REGMAP_ENTRIES** strutture, in cui ogni voce contiene un segnaposto variabile abbinato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. Aggiunge tutti i valori di sostituzione nel **_ATL_REGMAP_ENTRIES** strutture alla mappa di sostituzione del Registrar.  

  
 Per ulteriori informazioni sui parametri sostituibili e script, vedere l'articolo [il componente di registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).  
  
##  <a name="declare_registry_resourceid"></a>  DECLARE_REGISTRY_RESOURCEID  
 Uguale a [macro DECLARE_REGISTRY_RESOURCE](#declare_registry_resource) ad eccezione del fatto che usa un generato dalla procedura guidata **UINT** per identificare la risorsa, anziché un nome di stringa.  
  
```
DECLARE_REGISTRY_RESOURCEID( x )
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 [in] Identificatore generato dalla procedura guidata della risorsa.  
  
### <a name="remarks"></a>Note  
 Quando si crea un oggetto o controllare mediante la creazione guidata progetto ATL, la procedura guidata verrà automaticamente implementano il supporto del Registro di sistema basato su script e aggiungere il `DECLARE_REGISTRY_RESOURCEID` macro ai file.  
  
 È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso del Registro di sistema ottimizzato. Per collegare in modo statico il codice di registrazione, aggiungere la riga seguente nel file stdafx. h:  
  
 [!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]  
  
 Se si desidera ATL per sostituire i valori di sostituzione in fase di esecuzione, non si specifica il `DECLARE_REGISTRY_RESOURCE` o `DECLARE_REGISTRY_RESOURCEID` (macro). In alternativa, creare una matrice di **_ATL_REGMAP_ENTRIES** strutture, in cui ogni voce contiene un segnaposto variabile abbinato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. Aggiunge tutti i valori di sostituzione nel **_ATL_REGMAP_ENTRIES** strutture alla mappa di sostituzione del Registrar.  

  
 Per ulteriori informazioni sui parametri sostituibili e script, vedere l'articolo [il componente di registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
