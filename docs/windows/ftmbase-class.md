---
title: Classe FtmBase | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase
dev_langs:
- C++
helpviewer_keywords:
- FtmBase class
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
caps.latest.revision: ''
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9499a5a30f99e639137532aad1763b434a196809
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="ftmbase-class"></a>FtmBase (classe)
Rappresenta un oggetto gestore del marshalling a thread libero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
class FtmBase : public Microsoft::WRL::Implements<  
   Microsoft::WRL::RuntimeClassFlags<WinRtClassicComMix>,   
   Microsoft::WRL::CloakedIid<IMarshal> >;  
```  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere l'argomento "IMarshal" nell'argomento secondario "Interfacce COM" dell'argomento "Riferimento COM" in MSDN Library.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore FtmBase::FtmBase](../windows/ftmbase-ftmbase-constructor.md)|Inizializza una nuova istanza della classe FtmBase.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo FtmBase::CreateGlobalInterfaceTable](../windows/ftmbase-createglobalinterfacetable-method.md)|Crea una tabella di interfaccia globale (GIT).|  
|[Metodo FtmBase::DisconnectObject](../windows/ftmbase-disconnectobject-method.md)|Forzatamente rilascia tutte le connessioni esterne a un oggetto. Server l'oggetto chiama l'implementazione dell'oggetto di questo metodo prima di arrestare.|  
|[Metodo FtmBase::GetMarshalSizeMax](../windows/ftmbase-getmarshalsizemax-method.md)|Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling di puntatore a interfaccia specificato per l'oggetto specificato.|  
|[Metodo FtmBase::GetUnmarshalClass](../windows/ftmbase-getunmarshalclass-method.md)|Ottiene il CLSID COM viene utilizzato per individuare la DLL contenente il codice per il proxy corrispondente. COM viene caricato la DLL per creare un'istanza del proxy non inizializzata.|  
|[Metodo FtmBase::MarshalInterface](../windows/ftmbase-marshalinterface-method.md)|Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.|  
|[Metodo FtmBase::ReleaseMarshalData](../windows/ftmbase-releasemarshaldata-method.md)|Elimina un pacchetto di dati sottoposti a marshalling.|  
|[Metodo FtmBase::UnmarshalInterface](../windows/ftmbase-unmarshalinterface-method.md)|Inizializza un nuovo proxy e restituisce un puntatore a interfaccia a tale proxy.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo dati FtmBase::marshaller_](../windows/ftmbase-marshaller-data-member.md)|Contiene un riferimento al gestore del marshalling a thread libero.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `FtmBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** . h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)