---
title: FtmBase (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase
dev_langs:
- C++
helpviewer_keywords:
- FtmBase class
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 662e40dd7e111b976be105129861b8ea26e5d0d9
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646176"
---
# <a name="ftmbase-class"></a>FtmBase (classe)
Rappresenta un oggetto gestore del marshalling a thread libero.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class FtmBase : public Microsoft::WRL::Implements<  
   Microsoft::WRL::RuntimeClassFlags<WinRtClassicComMix>,   
   Microsoft::WRL::CloakedIid<IMarshal> >;  
```  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere [classe di RuntimeClass](runtimeclass-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore FtmBase::FtmBase](../windows/ftmbase-ftmbase-constructor.md)|Inizializza una nuova istanza di **FtmBase** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo FtmBase::CreateGlobalInterfaceTable](../windows/ftmbase-createglobalinterfacetable-method.md)|Crea una tabella di interfaccia globale (GIT).|  
|[Metodo FtmBase::DisconnectObject](../windows/ftmbase-disconnectobject-method.md)|Rilascia forzatamente tutte le connessioni esterne a un oggetto. Server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.|  
|[Metodo FtmBase::GetMarshalSizeMax](../windows/ftmbase-getmarshalsizemax-method.md)|Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling il puntatore di interfaccia specificata sull'oggetto specificato.|  
|[Metodo FtmBase::GetUnmarshalClass](../windows/ftmbase-getunmarshalclass-method.md)|Ottiene il CLSID utilizzato da COM per individuare la DLL contenente il codice per il proxy corrispondente. COM carica la DLL per creare un'istanza del proxy non inizializzata.|  
|[Metodo FtmBase::MarshalInterface](../windows/ftmbase-marshalinterface-method.md)|Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.|  
|[Metodo FtmBase::ReleaseMarshalData](../windows/ftmbase-releasemarshaldata-method.md)|Elimina un pacchetto viene eseguito il marshalling dei dati.|  
|[Metodo FtmBase::UnmarshalInterface](../windows/ftmbase-unmarshalinterface-method.md)|Inizializza un proxy appena creato e restituisce un puntatore a interfaccia a tale proxy.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo dati FtmBase::marshaller_](../windows/ftmbase-marshaller-data-member.md)|Contiene un riferimento al gestore del marshalling a thread libero.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `FtmBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ftm.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)