---
title: Classe WeakRef | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef
dev_langs:
- C++
helpviewer_keywords:
- WeakRef class
ms.assetid: 572be703-c641-496c-8af5-ad6164670ba1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ba7efc595be55b807cd3f044269db0debcb72407
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="weakref-class"></a>Classe WeakRef
Rappresenta un *riferimento debole* che può essere usato solamente da Windows Runtime, non da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class WeakRef : public ComPtr<IWeakReference>  
```  
  
## <a name="remarks"></a>Note  
 Un oggetto WeakRef mantiene un *riferimento sicuro*che è associato a un oggetto e può essere valido o non valido. Chiamare il metodo As() o AsIID() per ottenere un riferimento sicuro. Quando il riferimento sicuro è valido, può accedere all'oggetto associato. Quando il riferimento sicuro non è valido (`nullptr`), l'oggetto associato è inaccessibile.  
  
 Un oggetto WeakRef in genere viene usato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o da un thread esterno. Ad esempio, costruire un oggetto WeakRef da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.  
  
 Tenere presente che si verifica un cambiamento di comportamento nei metodi [As](../windows/weakref-as-method.md), [AsIID](../windows/weakref-asiid-method.md) e [CopyTo](../windows/weakref-copyto-method.md) in Windows 10 SDK. In precedenza, dopo aver chiamato uno di questi metodi, era possibile controllare il WeakRef per `nullptr` per determinare se un riferimento sicuro era stato ottenuto correttamente, come nel codice seguente:  
  
```cpp  
WeakRef wr;  
strongComptrRef.AsWeak(&wr);  
  
// Now suppose that the object strongComPtrRef points to no longer exists  
// and the following code tries to get a strong ref from the weak ref:  
ComPtr<ISomeInterface> strongRef;  
HRESULT hr = wr.As(&strongRef);  
  
// This check won't work with the Windows 10 SDK version of the library.  
// Check the input pointer instead.  
if(wr == nullptr)  
{  
    wprintf(L"Couldn’t get strong ref!");  
}  
  
```  
  
 Il codice riportato sopra non funziona quando si usa Windows 10 SDK o versioni successive. Controllare invece il puntatore passato per `nullptr`.  
  
```cpp  
if (strongRef == nullptr)  
{  
    wprintf(L"Couldn't get strong ref!");  
 }  
  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore WeakRef::WeakRef](../windows/weakref-weakref-constructor.md)|Inizializza una nuova istanza della classe WeakRef.|  
|[Distruttore WeakRef::~WeakRef](../windows/weakref-tilde-weakref-destructor.md)|Annulla l'inizializzazione dell'istanza corrente della classe WeakRef.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo WeakRef::As](../windows/weakref-as-method.md)|Imposta il parametro del puntatore ComPtr specificato per rappresentare l'interfaccia specificata.|  
|[Metodo WeakRef::AsIID](../windows/weakref-asiid-method.md)|Imposta il parametro del puntatore ComPtr specificato per rappresentare l'ID di interfaccia specificato.|  
|[Metodo WeakRef::CopyTo](../windows/weakref-copyto-method.md)|Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore WeakRef::operator&](../windows/weakref-operator-ampersand-operator.md)|Restituisce un oggetto ComPtrRef che rappresenta l'oggetto WeakRef corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ComPtr`  
  
 `WeakRef`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)