---
title: Macro del Registro di sistema
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
ms.openlocfilehash: fd012b4300f4cd72cdc9ab363b770ac1dbefa06e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326049"
---
# <a name="registry-macros"></a>Macro del Registro di sistema

Queste macro definiscono utili funzionalità della libreria dei tipi e del Registro di sistema.

|||
|-|-|
|[_ATL_STATIC_REGISTRY](#_atl_static_registry)|Indica che si desidera che il codice di registrazione per l'oggetto sia presente nell'oggetto per evitare una dipendenza da ATL. DLL.|
|[DECLARE_LIBID](#declare_libid)|Fornisce un modo per ATL per ottenere il *libid* della libreria dei tipi.|
|[DECLARE_NO_REGISTRY](#declare_no_registry)|Consente di evitare la registrazione ATL predefinita.|
|[DECLARE_REGISTRY](#declare_registry)|Consente di immettere o rimuovere la voce dell'oggetto principale nel Registro di sistema.|
|[DECLARE_REGISTRY_APPID_RESOURCEID](#declare_registry_appid_resourceid)|Specifica le informazioni necessarie per registrare automaticamente *l'appid*.|
|[DECLARE_REGISTRY_RESOURCE](#declare_registry_resource)|Trova la risorsa denominata ed esegue lo script del Registro di sistema al suo interno.|
|[DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid)|Trova la risorsa identificata da un numero ID ed esegue lo script del Registro di sistema al suo interno.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="_atl_static_registry"></a><a name="_atl_static_registry"></a>_ATL_STATIC_REGISTRY

Simbolo che indica che si desidera che il codice di registrazione per l'oggetto sia presente nell'oggetto per evitare una dipendenza da ATL. DLL.

```
#define _ATL_STATIC_REGISTRY
```

### <a name="remarks"></a>Osservazioni

Quando si definisce ATL_STATIC_REGISTRY, è necessario utilizzare il codice seguente:When you define ATL_STATIC_REGISTRY, you should use the following code:

[!code-cpp[NVC_ATL_EventHandlingSample#5](../../atl/codesnippet/cpp/registry-macros_1.cpp)]

## <a name="declare_libid"></a><a name="declare_libid"></a>DECLARE_LIBID

Fornisce un modo per ATL per ottenere il *libid* della libreria dei tipi.

```
DECLARE_LIBID( libid )
```

### <a name="parameters"></a>Parametri

*libid*<br/>
GUID della libreria dei tipi.

### <a name="remarks"></a>Osservazioni

Utilizzare DECLARE_LIBID `CAtlModuleT`in una classe derivata.

### <a name="example"></a>Esempio

I progetti ATL generati da procedure guidate senza attributi distino un esempio di utilizzo di questa macro.

## <a name="declare_no_registry"></a><a name="declare_no_registry"></a>DECLARE_NO_REGISTRY

Utilizzare DECLARE_NO_REGISTRY se si desidera evitare qualsiasi registrazione ATL predefinita per la classe in cui viene visualizzata questa macro.

```
DECLARE_NO_REGISTRY()
```

## <a name="declare_registry"></a><a name="declare_registry"></a>DECLARE_REGISTRY

Immette la registrazione della classe standard nel Registro di sistema o la rimuove dal Registro di sistema.

```
DECLARE_REGISTRY(
    class,
    pid,
    vpid,
    nid,
    flags )
```

### <a name="parameters"></a>Parametri

*classe*<br/>
[in] Incluso per compatibilità con le versioni precedenti.

*Pid*<br/>
[in] LPCTSTR che è un identificatore di programma specifico della versione.

*vpid*<br/>
[in] LPCTSTR che è un identificatore di programma indipendente dalla versione.

*nid*<br/>
[in] Oggetto UINT che è un indice della stringa di risorsa nel Registro di sistema da utilizzare come descrizione del programma.

*Bandiere*<br/>
[in] DWORD contenente il modello di threading del programma nel Registro di sistema. Deve essere uno dei valori seguenti: THREADFLAGS_APARTMENT, THREADFLAGS_BOTH o AUTPRXFLAG.

### <a name="remarks"></a>Osservazioni

La registrazione standard è costituita dal CLSID, dall'ID programma, dall'ID programma indipendente dalla versione, dalla stringa di descrizione e dal modello di thread.

Quando si crea un oggetto o un controllo utilizzando l'Aggiunta guidata classe ATL, la procedura guidata implementa automaticamente il supporto del Registro di sistema basato su script e aggiunge la macro [di DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) ai file. Se non si desidera il supporto del Registro di sistema basato su script, è necessario sostituire questa macro con DECLARE_REGISTRY. DECLARE_REGISTRY inserisce solo le cinque chiavi di base descritte in precedenza nel Registro di sistema. È necessario scrivere manualmente il codice per inserire altre chiavi nel Registro di sistema.

## <a name="declare_registry_appid_resourceid"></a><a name="declare_registry_appid_resourceid"></a>DECLARE_REGISTRY_APPID_RESOURCEID

Specifica le informazioni necessarie per registrare automaticamente *l'appid*.

```
DECLARE_REGISTRY_APPID_RESOURCEID(
    resid,
    appid )
```

### <a name="parameters"></a>Parametri

*Resid*<br/>
ID di risorsa del file RGS che contiene informazioni *sull'appid*.

*Appid*<br/>
Un valore GUID.

### <a name="remarks"></a>Osservazioni

Utilizzare DECLARE_REGISTRY_APPID_RESOURCEID `CAtlModuleT`in una classe derivata.

### <a name="example"></a>Esempio

Le classi aggiunte ai progetti ATL con la procedura guidata Aggiungi codice classe dibaseranno un esempio di utilizzo di questa macro.

## <a name="declare_registry_resource"></a><a name="declare_registry_resource"></a>DECLARE_REGISTRY_RESOURCE

Ottiene la risorsa denominata contenente il file del Registro di sistema ed esegue lo script per immettere oggetti nel Registro di sistema o rimuoverli dal Registro di sistema.

```
DECLARE_REGISTRY_RESOURCE( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Identificatore di stringa della risorsa.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto o un controllo utilizzando la Creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il supporto del Registro di sistema basato su script e aggiungerà il [DECLARE_REGISTRY_RESOURCEID](#declare_registry_resourceid) macro, che è simile a DECLARE_REGISTRY_RESOURCE, ai file.

È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso ottimizzato al Registro di sistema. Per eseguire il collegamento statico al codice della funzione di registrazione, aggiungere la riga seguente al file *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera che ATL sostituisca i valori di sostituzione in fase di esecuzione, non specificare la DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID macro. Creare invece una `_ATL_REGMAP_ENTRIES` matrice di strutture, in cui ogni voce contiene un segnaposto di variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule::UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice . In questo modo tutti i `_ATL_REGMAP_ENTRIES` valori di sostituzione nelle strutture vengono aggiunti alla mappa di sostituzione della funzione di registrazione.

Per ulteriori informazioni sui parametri sostituibili e gli script, vedere l'articolo Componente del Registro di [sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="declare_registry_resourceid"></a><a name="declare_registry_resourceid"></a>DECLARE_REGISTRY_RESOURCEID

Uguale [a DECLARE_REGISTRY_RESOURCE](#declare_registry_resource) ad eccezione del fatto che utilizza un UINT generato dalla procedura guidata per identificare la risorsa, anziché un nome di stringa.

```
DECLARE_REGISTRY_RESOURCEID( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Identificatore della risorsa generato dalla procedura guidata.

### <a name="remarks"></a>Osservazioni

Quando si crea un oggetto o un controllo utilizzando la Creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il supporto del Registro di sistema basato su script e aggiungerà la macro DECLARE_REGISTRY_RESOURCEID ai file.

È possibile collegare in modo statico con il componente del Registro di sistema ATL (Registrar) per l'accesso ottimizzato al Registro di sistema. Per eseguire il collegamento statico al codice della funzione di registrazione, aggiungere la riga seguente al file *stdafx.h* (*pch.h* in Visual Studio 2019 e versioni successive):

[!code-cpp[NVC_ATL_COM#56](../../atl/codesnippet/cpp/registry-macros_2.h)]

Se si desidera che ATL sostituisca i valori di sostituzione in fase di esecuzione, non specificare la DECLARE_REGISTRY_RESOURCE o DECLARE_REGISTRY_RESOURCEID macro. Creare invece una `_ATL_REGMAP_ENTRIES` matrice di strutture, in cui ogni voce contiene un segnaposto di variabile associato a un valore per sostituire il segnaposto in fase di esecuzione. Chiamare quindi [CAtlModule::UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced) o [CAtlModule::UpdateRegistryFromResourceS](catlmodule-class.md#updateregistryfromresources), passando la matrice . In questo modo tutti i `_ATL_REGMAP_ENTRIES` valori di sostituzione nelle strutture vengono aggiunti alla mappa di sostituzione della funzione di registrazione.

Per ulteriori informazioni sui parametri sostituibili e gli script, vedere l'articolo Componente del Registro di [sistema ATL (Registrar)](../../atl/atl-registry-component-registrar.md).

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
