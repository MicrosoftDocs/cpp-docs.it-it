---
title: Macro del Registro di sistema
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::_ATL_STATIC_REGISTRY
- atlcom/ATL::DECLARE_LIBID
- atlcom/ATL::DECLARE_NO_REGISTRY
- atlcom/ATL::DECLARE_REGISTRY
- atlcom/ATL::DECLARE_REGISTRY_APPID_RESOURCEID
- atlcom/ATL::DECLARE_REGISTRY_RESOURCE
- atlcom/ATL::DECLARE_REGISTRY_RESOURCEID
helpviewer_keywords:
- registry, ATL macros
ms.assetid: 3ee041da-c63b-42a4-89cf-2a4b2a6f81ae
ms.openlocfilehash: bced900cd7bac666daf415d91a4540828c769025
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660382"
---
# <a name="registry-macros"></a>Macro del Registro di sistema

Queste macro definiscono strutture di tipo utile della libreria e del Registro di sistema.

|||
|-|-|
|[ATL_STATIC_REGISTRY](#_atl_static_registry)|Indica che si desidera che il codice di registrazione per l'oggetto sia nell'oggetto per evitare una dipendenza su ATL. DLL.|
|[DECLARE_LIBID](#declare_libid)|Fornisce un modo per ATL ottenere il *libid* della libreria dei tipi.|
|[DECLARE_NO_REGISTRY](#declare_no_registry)|Evita la registrazione ATL predefinito.|
|[DECLARE_REGISTRY](#declare_registry)|Entra o rimuove una voce dell'oggetto principale nel Registro di sistema.|
|[DECLARE_REGISTRY_APPID_RESOURCEID](#declare_registry_appid_resourceid)|Specifica le informazioni necessarie per registrare automaticamente il *appid*.|
|[MACRO DECLARE_REGISTRY_RESOURCE](#declare_registry_resource)|Trova la risorsa denominata ed esegue lo script del Registro di sistema all'interno di esso.|
|[DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid)|Trova la risorsa identificata da un numero ID ed esegue lo script del Registro di sistema all'interno di esso.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="_atl_static_registry"></a>  ATL_STATIC_REGISTRY

Un simbolo che indica che il codice di registrazione per l'oggetto sia nell'oggetto per evitare una dipendenza su ATL. DLL.

```
#define _ATL_STATIC_REGISTRY
```

### <a name="remarks"></a>Note

Quando si definiscono ATL_STATIC_REGISTRY, è consigliabile usare il codice seguente:

[!code-cpp[NVC_ATL_EventHandlingSample#5](../../atl/codesnippet/cpp/registry-macros_1.cpp)]

##  <a name="declare_libid"></a>  DECLARE_LIBID

Fornisce un modo per ATL ottenere il *libid* della libreria dei tipi.

```
DECLARE_LIBID( libid )
```

### <a name="parameters"></a>Parametri

*LIBID*<br/>
Il GUID della libreria dei tipi.

### <a name="remarks"></a>Note

Usare DECLARE_LIBID in un `CAtlModuleT`-classe derivata.

### <a name="example"></a>Esempio

I progetti ATL con attributi non generate dalla procedura guidata avranno un esempio dell'uso di questa macro.

##  <a name="declare_no_registry"></a>  DECLARE_NO_REGISTRY

Usare DECLARE_NO_REGISTRY se si vuole evitare qualsiasi registrazione ATL predefinito per la classe in cui viene visualizzata questa macro.

```
DECLARE_NO_REGISTRY()
```

##  <a name="declare_registry"></a>  DECLARE_REGISTRY

Viene attivata la registrazione della classe standard nel Registro di sistema o lo rimuove dal Registro di sistema.

```
DECLARE_REGISTRY(
    class,
    pid,
    vpid,
    nid,
    flags )
```

### <a name="parameters"></a>Parametri

*class*<br/>
[in] Opzione inclusa per compatibilità con le versioni precedenti.

*pid*<br/>
[in] LPCTSTR che è un identificatore di programma specifico della versione.

*vpid*<br/>
[in] LPCTSTR che è un identificatore di programma indipendente dalla versione.

*nID*<br/>
[in] UINT e rappresenta l'indice della stringa di risorsa nel Registro di sistema da utilizzare come descrizione del programma.

*flags*<br/>
[in] Un valore DWORD contenente modello di threading del programma nel Registro di sistema. Deve essere uno dei seguenti valori: THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="remarks"></a>Note

La registrazione standard è costituito dal CLSID, ID di programma, ID di programma indipendente dalla versione, la stringa di descrizione e modello di thread.

Quando si crea un oggetto o di controllo con la creazione guidata classe aggiungere ATL, la procedura guidata implementa il supporto del Registro di sistema basato su script automaticamente e aggiunge il [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) macro per i file. Se non si desidera supporto basato su script del Registro di sistema, è necessario sostituire questa macro con DECLARE_REGISTRY. DECLARE_REGISTRY inserisce solo le chiavi di base cinque descritte in precedenza nel Registro di sistema. Manualmente, è necessario scrivere codice per inserire le altre chiavi del Registro di sistema.

##  <a name="declare_registry_appid_resourceid"></a>  DECLARE_REGISTRY_APPID_RESOURCEID

Specifica le informazioni necessarie per registrare automaticamente il *appid*.

```
DECLARE_REGISTRY_APPID_RESOURCEID(
    resid,
    appid )
```

### <a name="parameters"></a>Parametri

*RESID*<br/>
L'id risorsa del file con estensione RGS che contiene informazioni sul *appid*.

*ID App*<br/>
Un valore GUID.

### <a name="remarks"></a>Note

Usare DECLARE_REGISTRY_APPID_RESOURCEID in un `CAtlModuleT`-classe derivata.

### <a name="example"></a>Esempio

Le classi aggiunte ai progetti ATL con la creazione guidata aggiunta classe avrà un esempio dell'uso di questa macro.

##  <a name="declare_registry_resource"></a>  MACRO DECLARE_REGISTRY_RESOURCE

Ottiene la risorsa denominata contenente il file del Registro di sistema ed esegue lo script per immettere gli oggetti nel Registro di sistema o rimuoverli dal Registro di sistema.

```
DECLARE_REGISTRY_RESOURCE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Identificatore della risorsa di tipo stringa.

### <a name="remarks"></a>Note

Quando si crea un oggetto o di controllo con la creazione guidata progetto ATL, la procedura guidata verrà automaticamente implementano il supporto del Registro di sistema basato su script e aggiungere il [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) (macro), che è simile a DECLARE_REGISTRY_ RISORSE, ai file.

È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso del Registro di sistema ottimizzato. Per collegare in modo statico al codice di Registrar, aggiungere la riga seguente al file stdafx. h:

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera ATL per sostituire i valori di sostituzione in fase di esecuzione, non specificare la macro macro DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un variabile segnaposto abbinato a un valore da sostituire il segnaposto in fase di esecuzione. Quindi chiamare [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) oppure [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. Ciò aggiunge tutti i valori di sostituzione nel `_ATL_REGMAP_ENTRIES` strutture alla mappa di sostituzione del Registrar.

Per altre informazioni sui parametri sostituibili e la creazione di script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

##  <a name="declare_registry_resourceid"></a>  DECLARE_REGISTRY_RESOURCEID

Uguale allo [macro DECLARE_REGISTRY_RESOURCE](#declare_registry_resource) ad eccezione del fatto che usa un UINT generato dalla procedura guidata per identificare la risorsa, anziché un nome di stringa.

```
DECLARE_REGISTRY_RESOURCEID( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Identificatore generato dalla creazione guidata della risorsa.

### <a name="remarks"></a>Note

Quando si crea un oggetto o controllo mediante la creazione guidata progetto ATL, la procedura guidata verrà automaticamente implementano il supporto del Registro di sistema basato su script e aggiungere la macro DECLARE_REGISTRY_RESOURCEID ai file.

È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso del Registro di sistema ottimizzato. Per collegare in modo statico al codice di Registrar, aggiungere la riga seguente al file stdafx. h:

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera ATL per sostituire i valori di sostituzione in fase di esecuzione, non specificare la macro macro DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di `_ATL_REGMAP_ENTRIES` strutture, in cui ogni voce contiene un variabile segnaposto abbinato a un valore da sostituire il segnaposto in fase di esecuzione. Quindi chiamare [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) oppure [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. Ciò aggiunge tutti i valori di sostituzione nel `_ATL_REGMAP_ENTRIES` strutture alla mappa di sostituzione del Registrar.

Per altre informazioni sui parametri sostituibili e la creazione di script, vedere l'articolo [il componente del Registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
