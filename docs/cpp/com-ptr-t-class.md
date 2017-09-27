---
title: classe com_ptr_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _com_ptr_t
dev_langs:
- C++
helpviewer_keywords:
- _com_ptr_t class
ms.assetid: 3753a8a0-03d4-4cfd-8a9a-74872ea53971
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 3979a33f095092c5cbaac91793c501e31304a6d4
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="comptrt-class"></a>Classe _com_ptr_t
**Sezione specifica Microsoft**  
  
 Un oggetto `_com_ptr_t` incapsula un puntatore all'interfaccia COM e viene chiamato un puntatore "intelligente". Questa classe modello gestisce l'allocazione e deallocazione tramite le chiamate di funzione per il **IUnknown** funzioni membro: `QueryInterface`, `AddRef`, e **versione**.  
  
 Un puntatore intelligente è in genere a cui fa riferimento la definizione typedef fornita dal **COM_SMARTPTR_TYPEDEF** (macro). Questa macro accetta un nome dell'interfaccia e l'IID e dichiara una specializzazione di `_com_ptr_t` con il nome dell'interfaccia più un suffisso di `Ptr`. Ad esempio:  
  
```  
_COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
```  
  
 dichiara il `_com_ptr_t` specializzazione **IMyInterfacePtr**.  
  
 Un set di [funzione modelli](../cpp/relational-function-templates.md), non i membri di questo modello di classe, supporta confronti con un puntatore intelligente a destra dell'operatore di confronto.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[com_ptr_t](../cpp/com-ptr-t-com-ptr-t.md)|Costruisce un oggetto `_com_ptr_t`.|  
  
### <a name="low-level-operations"></a>Operazioni di basso livello  
  
|||  
|-|-|  
|[AddRef](../cpp/com-ptr-t-addref.md)|Chiamate di `AddRef` funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.|  
|[Attach](../cpp/com-ptr-t-attach.md)|Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.|  
|[CreateInstance](../cpp/com-ptr-t-createinstance.md)|Crea una nuova istanza di un oggetto dato un **CLSID** o **ProgID**.|  
|[Detach](../cpp/com-ptr-t-detach.md)|Estrae e restituisce un puntatore a interfaccia incapsulato.|  
|[GetActiveObject](../cpp/com-ptr-t-getactiveobject.md)|Associa a un'istanza esistente di un oggetto dato un **CLSID** o **ProgID**.|  
|[GetInterfacePtr](../cpp/com-ptr-t-getinterfaceptr.md)|Restituisce un puntatore a interfaccia incapsulato.|  
|[QueryInterface](../cpp/com-ptr-t-queryinterface.md)|Chiamate di `QueryInterface` funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.|  
|[Rilascio](../cpp/com-ptr-t-release.md)|Chiamate di **versione** funzione membro di **IUnknown** sul puntatore a interfaccia incapsulato.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/com-ptr-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_com_ptr_t` esistente.|  
|[gli operatori = =,! =, \<, >, \<=, > =](../cpp/com-ptr-t-relational-operators.md)|Confrontare l'oggetto del puntatore intelligente con un altro puntatore intelligente, puntatore a interfaccia raw o **NULL**.|  
|[Estrattori](../cpp/com-ptr-t-extractors.md)|Estrae il puntatore a interfaccia COM incapsulato.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** comip  
  
 **Lib:** comsuppw.lib o comsuppwd.lib (vedere [/Zc: wchar_t (wchar_t è il tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
