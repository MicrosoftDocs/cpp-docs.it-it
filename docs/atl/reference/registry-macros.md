---
title: Macro del registro di sistema
ms.date: 08/19/2019
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
ms.openlocfilehash: c2a70c15473798ba6eb2ef35e0b7ded395708586
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417502"
---
# <a name="registry-macros"></a>Macro del registro di sistema

Queste macro definiscono funzionalità utili per la libreria dei tipi e il registro di sistema.

|||
|-|-|
|[_ATL_STATIC_REGISTRY](#_atl_static_registry)|Indica che si desidera che il codice di registrazione per l'oggetto sia presente nell'oggetto per evitare una dipendenza da ATL. DLL.|
|[DECLARE_LIBID](#declare_libid)|Fornisce un metodo per ATL per ottenere *LIBID* della libreria dei tipi.|
|[DECLARE_NO_REGISTRY](#declare_no_registry)|Evita la registrazione predefinita di ATL.|
|[DECLARE_REGISTRY](#declare_registry)|Inserisce o rimuove la voce dell'oggetto principale nel registro di sistema.|
|[DECLARE_REGISTRY_APPID_RESOURCEID](#declare_registry_appid_resourceid)|Specifica le informazioni necessarie per registrare automaticamente l' *AppID*.|
|[DECLARE_REGISTRY_RESOURCE](#declare_registry_resource)|Trova la risorsa denominata ed esegue lo script del registro di sistema al suo interno.|
|[DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid)|Trova la risorsa identificata da un numero ID ed esegue lo script del registro di sistema al suo interno.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="_atl_static_registry"></a>_ATL_STATIC_REGISTRY

Simbolo che indica se si desidera che il codice di registrazione per l'oggetto sia presente nell'oggetto per evitare una dipendenza da ATL. DLL.

```
#define _ATL_STATIC_REGISTRY
```

### <a name="remarks"></a>Osservazioni

Quando si definiscono ATL_STATIC_REGISTRY, è necessario usare il codice seguente:

[!code-cpp[NVC_ATL_EventHandlingSample#5](../../atl/codesnippet/cpp/registry-macros_1.cpp)]

##  <a name="declare_libid"></a>DECLARE_LIBID

Fornisce un metodo per ATL per ottenere *LIBID* della libreria dei tipi.

```
DECLARE_LIBID( libid )
```

### <a name="parameters"></a>Parametri

*LIBID*<br/>
GUID della libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Usare DECLARE_LIBID in una classe derivata da `CAtlModuleT`.

### <a name="example"></a>Esempio

I progetti ATL generati dalla procedura guidata senza attributi avranno un esempio di utilizzo di questa macro.

##  <a name="declare_no_registry"></a>DECLARE_NO_REGISTRY

Utilizzare DECLARE_NO_REGISTRY se si desidera evitare la registrazione ATL predefinita per la classe in cui viene visualizzata la macro.

```
DECLARE_NO_REGISTRY()
```

##  <a name="declare_registry"></a>DECLARE_REGISTRY

Immette la registrazione della classe standard nel registro di sistema o la rimuove dal registro di sistema.

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
in Incluso per la compatibilità con le versioni precedenti.

*pid*<br/>
in Un LPCTSTR che corrisponde a un identificatore di programma specifico della versione.

*VPID*<br/>
in Un LPCTSTR che è un identificatore del programma indipendente dalla versione.

*NID*<br/>
in UINT che rappresenta un indice della stringa di risorsa nel registro di sistema da utilizzare come descrizione del programma.

*flags*<br/>
in Valore DWORD contenente il modello di threading del programma nel registro di sistema. Deve essere uno dei valori seguenti: THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="remarks"></a>Osservazioni

La registrazione standard è costituita dal CLSID, dall'ID del programma, dall'ID del programma indipendente dalla versione, dalla stringa di descrizione e dal modello di thread.

Quando si crea un oggetto o un controllo tramite la procedura guidata Aggiungi classe ATL, la procedura guidata implementa automaticamente il supporto del registro di sistema basato su script e aggiunge la macro [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) ai file. Se non si desidera il supporto del registro di sistema basato su script, è necessario sostituire questa macro con DECLARE_REGISTRY. DECLARE_REGISTRY inserisce solo le cinque chiavi di base descritte in precedenza nel registro di sistema. È necessario scrivere manualmente il codice per inserire altre chiavi nel registro di sistema.

##  <a name="declare_registry_appid_resourceid"></a>DECLARE_REGISTRY_APPID_RESOURCEID

Specifica le informazioni necessarie per registrare automaticamente l' *AppID*.

```
DECLARE_REGISTRY_APPID_RESOURCEID(
    resid,
    appid )
```

### <a name="parameters"></a>Parametri

*da un Resid*<br/>
ID risorsa del file con estensione rgs che contiene informazioni sull' *AppID*.

*AppID*<br/>
GUID.

### <a name="remarks"></a>Osservazioni

Usare DECLARE_REGISTRY_APPID_RESOURCEID in una classe derivata da `CAtlModuleT`.

### <a name="example"></a>Esempio

Le classi aggiunte ai progetti ATL con la procedura guidata Aggiungi codice della classe includeranno un esempio di utilizzo di questa macro.

##  <a name="declare_registry_resource"></a>DECLARE_REGISTRY_RESOURCE

Ottiene la risorsa denominata che contiene il file del registro di sistema ed esegue lo script per immettere gli oggetti nel registro di sistema o rimuoverli dal registro di sistema.

```
DECLARE_REGISTRY_RESOURCE( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Identificatore di stringa della risorsa.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto o un controllo utilizzando la creazione guidata progetto ATL, la procedura guidata implementa automaticamente il supporto del registro di sistema basato su script e aggiunge la macro [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) , che è simile a DECLARE_REGISTRY_RESOURCE, ai file.

È possibile collegare staticamente con il componente del registro di sistema ATL (Registrar) per l'accesso al registro di sistema ottimizzato. Per collegarsi in modo statico al codice del registrar, aggiungere la riga seguente al file *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera che ATL sostituisca i valori di sostituzione in fase di esecuzione, non specificare il DECLARE_REGISTRY_RESOURCE o la macro DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di strutture di `_ATL_REGMAP_ENTRIES`, in cui ogni voce contiene un segnaposto della variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule:: UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. In questo modo vengono aggiunti tutti i valori sostitutivi nelle strutture `_ATL_REGMAP_ENTRIES` alla mappa di sostituzione del registrar.

Per ulteriori informazioni sui parametri sostituibili e sullo scripting, vedere l'articolo relativo [al componente del registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

##  <a name="declare_registry_resourceid"></a>DECLARE_REGISTRY_RESOURCEID

Uguale a [DECLARE_REGISTRY_RESOURCE](#declare_registry_resource) ad eccezione del fatto che usa un uint generato dalla procedura guidata per identificare la risorsa, anziché un nome di stringa.

```
DECLARE_REGISTRY_RESOURCEID( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Identificatore generato dalla procedura guidata della risorsa.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto o un controllo utilizzando la creazione guidata progetto ATL, la procedura guidata implementa automaticamente il supporto del registro di sistema basato su script e aggiunge la macro DECLARE_REGISTRY_RESOURCEID ai file.

È possibile collegare staticamente con il componente del registro di sistema ATL (Registrar) per l'accesso al registro di sistema ottimizzato. Per collegarsi in modo statico al codice del registrar, aggiungere la riga seguente al file *stdafx. h* (*PCH. h* in Visual Studio 2019 e versioni successive):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera che ATL sostituisca i valori di sostituzione in fase di esecuzione, non specificare il DECLARE_REGISTRY_RESOURCE o la macro DECLARE_REGISTRY_RESOURCEID. In alternativa, creare una matrice di strutture di `_ATL_REGMAP_ENTRIES`, in cui ogni voce contiene un segnaposto della variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule:: UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule:: UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice. In questo modo vengono aggiunti tutti i valori sostitutivi nelle strutture `_ATL_REGMAP_ENTRIES` alla mappa di sostituzione del registrar.

Per ulteriori informazioni sui parametri sostituibili e sullo scripting, vedere l'articolo relativo [al componente del registro di sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
