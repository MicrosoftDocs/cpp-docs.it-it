---
title: Classe ComPtr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::ComPtr
dev_langs: C++
helpviewer_keywords: ComPtr class
ms.assetid: a6551902-6819-478a-8df7-b6f312ab1fb0
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 04f8181c7308d63cc4fe07aaf4a05d34ccfaf132
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptr-class"></a>ComPtr (classe)
Crea un tipo di *puntatore intelligente* che rappresenta l'interfaccia specificata dal parametro di modello. ComPtr mantiene automaticamente un conteggio dei riferimenti per il puntatore di interfaccia sottostante e rilascia l'interfaccia quando il conteggio dei riferimenti va a zero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtr;  
  
template<  
   class U  
>  
friend class ComPtr;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 L'interfaccia rappresentata dal ComPtr.  
  
 `U`  
 Una classe per cui il ComPtr corrente è un elemento friend. (Il modello che usa questo parametro è protetto.)  
  
## <a name="remarks"></a>Note  
 ComPtr<> dichiara un tipo che rappresenta il puntatore di interfaccia sottostante. Utilizzare ComPtr<> per dichiarare una variabile, quindi utilizzare l'operatore freccia di accesso ai membri (`->`) per accedere a una funzione membro di interfaccia.  
  
 Per altre informazioni sui puntatori intelligenti, vedere la sottosezione "Puntatori intelligenti COM" dell'argomento [COM Coding Practices](http://msdn.microsoft.com/en-us/76aca556-b4d6-4e67-a2a3-4439900f0c39)in MSDN Library.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InterfaceType`|Un sinonimo per il tipo specificato dal parametro di modello `T` .|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ComPtr::ComPtr](../windows/comptr-comptr-constructor.md)|Inizializza una nuova istanza della classe ComPtr. Gli overload forniscono costruttori predefiniti, di copia, di spostamento e di conversione.|  
|[Distruttore ComPtr::~ComPtr](../windows/comptr-tilde-comptr-destructor.md)|Deinizializza un'istanza di ComPtr.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ComPtr::As](../windows/comptr-as-method.md)|Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dal parametro del modello specificato.|  
|[Metodo ComPtr::AsIID](../windows/comptr-asiid-method.md)|Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificato.|  
|[Metodo ComPtr::AsWeak](../windows/comptr-asweak-method.md)|Restituisce un riferimento debole all'oggetto corrente.|  
|[Metodo ComPtr::Attach](../windows/comptr-attach-method.md)|Associa questo ComPtr con il tipo di interfaccia specificato dal parametro del tipo di modello corrente.|  
|[Metodo ComPtr::CopyTo](../windows/comptr-copyto-method.md)|Copia l'interfaccia corrente o specificata associata con questo ComPtr al puntatore di output specificato.|  
|[Metodo ComPtr::Detach](../windows/comptr-detach-method.md)|Rimuove l'associazione di questo ComPtr dall'interfaccia da esso rappresentata.|  
|[Metodo ComPtr::Get](../windows/comptr-get-method.md)|Recupera un puntatore all'interfaccia associata a questo ComPtr.|  
|[Metodo ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md)|Recupera l'indirizzo del membro dati [ptr_](../windows/comptr-ptr-data-member.md) , che contiene un puntatore all'interfaccia rappresentata da questo ComPtr.|  
|[Metodo ComPtr::ReleaseAndGetAddressOf](../windows/comptr-releaseandgetaddressof-method.md)|Rilascia l'interfaccia associata a questo ComPtr, quindi recupera l'indirizzo del membro dati [ptr_](../windows/comptr-ptr-data-member.md) , che contiene un puntatore a interfaccia che è stata rilasciata.|  
|[ComPtr::Reset](../windows/comptr-reset.md)|Rilascia tutti i riferimenti per il puntatore all'interfaccia associata a questo oggetto ComPtr.|  
|[Metodo ComPtr::Swap](../windows/comptr-swap-method.md)|Scambia l'interfaccia gestita dal ComPtr corrente con l'interfaccia gestita dal ComPtr specificato.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ComPtr::InternalAddRef](../windows/comptr-internaladdref-method.md)|Incrementa il conteggio dei riferimenti dell'interfaccia associata a questo ComPtr.|  
|[Metodo ComPtr::InternalRelease](../windows/comptr-internalrelease-method.md)|Esegue un'operazione di rilascio COM sull'interfaccia associata a questo ComPtr.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)|Indica se un ComPtr gestisce o meno la durata degli oggetti di un'interfaccia.|  
|[Operatore ComPtr::operator&](../windows/comptr-operator-ampersand-operator.md)|Recupera l'indirizzo del ComPtr corrente.|  
|[Operatore ComPtr::operator=](../windows/comptr-operator-assign-operator.md)|Assegna un valore al ComPtr corrente.|  
|[Operatore ComPtr::operator->](../windows/comptr-operator-arrow-operator.md)|Recupera un puntatore al tipo specificato dal parametro di modello corrente.|  
|[Operatore ComPtr::operator==](../windows/comptr-operator-equality-operator.md)|Indica se due oggetti ComPtr sono uguali.|  
|[Operatore ComPtr::operator!=](../windows/comptr-operator-inequality-operator.md)|Indica se due oggetti ComPtr sono diversi.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro ComPtr::ptr_ Data](../windows/comptr-ptr-data-member.md)|Contiene un puntatore all'interfaccia associata a questo ComPtr e da esso gestita.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ComPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)