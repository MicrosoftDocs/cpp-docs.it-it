---
title: Classe CPrivateObjectSecurityDesc | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::ConvertToAutoInherit
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Create
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Get
- ATLSECURITY/ATL::CPrivateObjectSecurityDesc::Set
dev_langs: C++
helpviewer_keywords: CPrivateObjectSecurityDesc class
ms.assetid: 2c4bbb13-bf99-4833-912a-197f6815bb5d
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ef8836dec60eca6a7dac13af21c81adf72b5b319
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cprivateobjectsecuritydesc-class"></a>Classe CPrivateObjectSecurityDesc
Questa classe rappresenta un oggetto descrittore di sicurezza di un oggetto privato.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CPrivateObjectSecurityDesc : public CSecurityDesc
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc](#cprivateobjectsecuritydesc)|Costruttore.|  
|[CPrivateObjectSecurityDesc:: ~ CPrivateObjectSecurityDesc](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrivateObjectSecurityDesc::ConvertToAutoInherit](#converttoautoinherit)|Chiamare questo metodo per convertire un descrittore di sicurezza e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo ereditabili di accesso (ACE).|  
|[CPrivateObjectSecurityDesc::Create](#create)|Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato da Gestione risorse di chiamata.|  
|[CPrivateObjectSecurityDesc::Get](#get)|Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza di un oggetto privato.|  
|[CPrivateObjectSecurityDesc::Set](#set)|Chiamare questo metodo per modificare il descrittore di sicurezza di un oggetto privato.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 Questa classe, derivata da [CSecurityDesc](../../atl/reference/csecuritydesc-class.md), fornisce metodi per creare e gestire il descrittore di sicurezza di un oggetto privato.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CSecurityDesc](../../atl/reference/csecuritydesc-class.md)  
  
 `CPrivateObjectSecurityDesc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h  
  
##  <a name="converttoautoinherit"></a>CPrivateObjectSecurityDesc::ConvertToAutoInherit  
 Chiamare questo metodo per convertire un descrittore di sicurezza e i relativi elenchi di controllo di accesso (ACL) in un formato che supporta la propagazione automatica delle voci di controllo ereditabili di accesso (ACE).  
  
```
bool ConvertToAutoInherit(  
    const CSecurityDesc* pParent,
    GUID* ObjectType,
    bool bIsDirectoryObject,
    PGENERIC_MAPPING GenericMapping) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pParent`  
 Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto fa riferimento il contenitore padre dell'oggetto. Se non vi è alcun contenitore padre, questo parametro è NULL.  
  
 `ObjectType`  
 Puntatore a un **GUID** struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare `ObjectType` su NULL se l'oggetto non ha un GUID.  
  
 `bIsDirectoryObject`  
 Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.  
  
 `GenericMapping`  
 Puntatore a un [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo tentativi per determinare se le voci ACE nel controllo di accesso discrezionale (DACL) di elenco e un elenco di controllo di accesso di sistema (SACL) del descrittore di sicurezza corrente quelli ereditati dal descrittore di sicurezza padre. Chiama il [ConvertToAutoInheritPrivateObjectSecurity](http://msdn.microsoft.com/library/windows/desktop/aa376403) (funzione).  
  
##  <a name="cprivateobjectsecuritydesc"></a>CPrivateObjectSecurityDesc::CPrivateObjectSecurityDesc  
 Costruttore.  
  
```
CPrivateObjectSecurityDesc() throw();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il `CPrivateObjectSecurityDesc` oggetto.  
  
##  <a name="dtor"></a>CPrivateObjectSecurityDesc:: ~ CPrivateObjectSecurityDesc  
 Distruttore.  
  
```
~CPrivateObjectSecurityDesc() throw();
```  
  
### <a name="remarks"></a>Note  
 Il distruttore libera tutte le risorse allocate ed elimina il descrittore di sicurezza dell'oggetto privato.  
  
##  <a name="create"></a>CPrivateObjectSecurityDesc::Create  
 Chiamare questo metodo per allocare e inizializzare un descrittore di sicurezza relativo per l'oggetto privato creato da Gestione risorse di chiamata.  
  
```
bool Create(  
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    bool bIsDirectoryObject,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();

bool Create(  
    const CSecurityDesc* pParent,
    const CSecurityDesc* pCreator,
    GUID* ObjectType,
    bool bIsContainerObject,
    ULONG AutoInheritFlags,
    const CAccessToken& Token,
    PGENERIC_MAPPING GenericMapping) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pParent`  
 Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto fa riferimento la directory padre in cui viene creato un nuovo oggetto. Se è disponibile alcuna directory padre, impostato su NULL.  
  
 `pCreator`  
 Puntatore a un descrittore di sicurezza fornito dall'autore dell'oggetto. Se l'autore dell'oggetto non viene passato in modo esplicito le informazioni di sicurezza per il nuovo oggetto, impostare questo parametro su NULL.  
  
 `bIsDirectoryObject`  
 Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.  
  
 `Token`  
 Riferimento al [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto per il processo client per il quale l'oggetto viene creato.  
  
 `GenericMapping`  
 Puntatore a un [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.  
  
 `ObjectType`  
 Puntatore a un **GUID** struttura che identifica il tipo di oggetto associato all'oggetto corrente. Impostare `ObjectType` su NULL se l'oggetto non ha un GUID.  
  
 *bIsContainerObject*  
 Specifica se il nuovo oggetto può contenere altri oggetti. Il valore true indica che il nuovo oggetto è un contenitore. Il valore false indica che il nuovo oggetto non è un contenitore.  
  
 `AutoInheritFlags`  
 Un set di flag di bit che controllano come voci di controllo di accesso (ACE) vengono ereditate dai `pParent`. Vedere [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [CreatePrivateObjectSercurity](http://msdn.microsoft.com/library/windows/desktop/aa376405) o [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581).  
  
 Il secondo metodo, che consente di specificare il tipo di oggetto GUID del nuovo oggetto o controllare come vengono ereditate ACE, è disponibile nei sistemi che eseguono Windows 2000 e versioni successive.  
  
> [!NOTE]
>  Un descrittore di sicurezza relativo è un descrittore di sicurezza che archivia tutte le relative informazioni di sicurezza in un blocco di memoria contiguo.  
  
##  <a name="get"></a>CPrivateObjectSecurityDesc::Get  
 Chiamare questo metodo per recuperare informazioni dal descrittore di sicurezza di un oggetto privato.  
  
```
bool Get(  
    SECURITY_INFORMATION si,
    CSecurityDesc* pResult) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `si`  
 Un set di flag di bit che indicano le parti del descrittore di sicurezza da recuperare. Questo valore può essere una combinazione del [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) flag di bit.  
  
 `pResult`  
 Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto che riceve una copia delle informazioni richieste dal descrittore di sicurezza specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il descrittore di sicurezza è una struttura e i dati associati che contiene le informazioni di sicurezza per un oggetto a protezione diretta.  
  
##  <a name="operator_eq"></a>CPrivateObjectSecurityDesc::operator =  
 Operatore di assegnazione.  
  
```
CPrivateObjectSecurityDesc& operator= (const CPrivateObjectSecurityDesc& rhs) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `rhs`  
 Il `CPrivateObjectSecurityDesc` oggetto da assegnare all'oggetto corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CPrivateObjectSecurityDesc` oggetto.  
  
##  <a name="set"></a>CPrivateObjectSecurityDesc::Set  
 Chiamare questo metodo per modificare il descrittore di sicurezza di un oggetto privato.  
  
```
bool Set(  
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();

bool Set(  
    SECURITY_INFORMATION si,
    const CSecurityDesc& Modification,
    ULONG AutoInheritFlags,
    PGENERIC_MAPPING GenericMapping,
    const CAccessToken& Token) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `si`  
 Un set di flag di bit che indicano le parti del descrittore di sicurezza da impostare. Questo valore può essere una combinazione del [SECURITY_INFORMATION](http://msdn.microsoft.com/library/windows/desktop/aa379573) flag di bit.  
  
 *Modifica*  
 Puntatore a un [CSecurityDesc](../../atl/reference/csecuritydesc-class.md) oggetto. Le parti di questo descrittore di sicurezza indicato dal `si` parametro vengono applicate al descrittore di sicurezza dell'oggetto.  
  
 `GenericMapping`  
 Puntatore a un [GENERIC_MAPPING](http://msdn.microsoft.com/library/windows/desktop/aa446633) struttura che specifica il mapping tra ogni diritto a diritti specifici per l'oggetto generico.  
  
 `Token`  
 Riferimento al [CAccessToken](../../atl/reference/caccesstoken-class.md) oggetto per il processo client per il quale l'oggetto viene creato.  
  
 `AutoInheritFlags`  
 Un set di flag di bit che controllano come voci di controllo di accesso (ACE) vengono ereditate dai `pParent`. Vedere [CreatePrivateObjectSecurityEx](http://msdn.microsoft.com/library/windows/desktop/aa446581) per altri dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se l'operazione ha esito positivo, false in caso di esito negativo.  
  
### <a name="remarks"></a>Note  
 Il secondo metodo, che consente di specificare il tipo di oggetto GUID dell'oggetto o controllare come vengono ereditate ACE, è disponibile nei sistemi che eseguono Windows 2000 e versioni successive.  
  
## <a name="see-also"></a>Vedere anche  
 [SECURITY_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Funzioni di sicurezza globale](../../atl/reference/security-global-functions.md)   
 [Classe CSecurityDesc](../../atl/reference/csecuritydesc-class.md)
