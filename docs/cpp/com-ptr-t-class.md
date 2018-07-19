---
title: classe com_ptr_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t
dev_langs:
- C++
helpviewer_keywords:
- _com_ptr_t class
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb343431a52df9fae32bb17f3303738c04385cf5
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943257"
---
# <a name="comptrt-class"></a>Classe _com_ptr_t
**Sezione specifica Microsoft**  
  
 Un oggetto `_com_ptr_t` incapsula un puntatore all'interfaccia COM e viene chiamato un puntatore "intelligente". Questa classe modello gestisce l'allocazione delle risorse e la deallocazione tramite le chiamate di funzione per il `IUnknown` funzioni membro: `QueryInterface`, `AddRef`, e `Release`.  
  
 Un puntatore intelligente è in genere fa riferimento alla definizione typedef fornita dalla macro COM_SMARTPTR_TYPEDEF. Questa macro accetta un nome dell'interfaccia e l'IID e dichiara una specializzazione di `_com_ptr_t` con il nome dell'interfaccia più un suffisso di `Ptr`. Ad esempio:  
  
```cpp 
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
```  
  
 Consente di dichiarare la `_com_ptr_t` specializzazione `IMyInterfacePtr`.  
  
 Un set di [modelli di funzione](../cpp/relational-function-templates.md), non i membri di questo modello di classe, supporta confronti con un puntatore intelligente a destra dell'operatore di confronto.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[_com_ptr_t](../cpp/com-ptr-t-com-ptr-t.md)|Costruisce un oggetto `_com_ptr_t`.|  
  
### <a name="low-level-operations"></a>Operazioni di basso livello  
  
|||  
|-|-|  
|[AddRef](../cpp/com-ptr-t-addref.md)|Chiama il `AddRef` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.|  
|[Attach](../cpp/com-ptr-t-attach.md)|Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.|  
|[CreateInstance](../cpp/com-ptr-t-createinstance.md)|Crea una nuova istanza di un oggetto dato un `CLSID` o `ProgID`.|  
|[Detach](../cpp/com-ptr-t-detach.md)|Estrae e restituisce un puntatore a interfaccia incapsulato.|  
|[GetActiveObject](../cpp/com-ptr-t-getactiveobject.md)|Collega a un'istanza esistente di un oggetto dato un `CLSID` o `ProgID`.|  
|[GetInterfacePtr](../cpp/com-ptr-t-getinterfaceptr.md)|Restituisce un puntatore a interfaccia incapsulato.|  
|[QueryInterface](../cpp/com-ptr-t-queryinterface.md)|Chiama il `QueryInterface` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.|  
|[Rilascio](../cpp/com-ptr-t-release.md)|Chiama il `Release` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/com-ptr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_com_ptr_t` esistente.|  
|[gli operatori = =,! =, \<, >, \<=, > =](../cpp/com-ptr-t-relational-operators.md)|Confrontare l'oggetto del puntatore intelligente a un altro puntatore intelligente, puntatore a interfaccia raw o NULL.|  
|[Estrattori](../cpp/com-ptr-t-extractors.md)|Estrae il puntatore a interfaccia COM incapsulato.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<comip >  
  
 **Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t Is tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)