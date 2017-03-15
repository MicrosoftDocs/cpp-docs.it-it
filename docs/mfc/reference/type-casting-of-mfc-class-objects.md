---
title: Digitare il cast degli oggetti classe MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.classes
dev_langs:
- C++
helpviewer_keywords:
- macros, type casting
- pointers, type casting
- type casts
- casting types
- macros, casting pointers
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
caps.latest.revision: 15
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
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: f1ae094e7085017f03daab3f73323da13ab1be39
ms.lasthandoff: 02/24/2017

---
# <a name="type-casting-of-mfc-class-objects"></a>Cast di tipo degli oggetti classe MFC
Le macro di cast di tipo consentono di eseguire il cast di un puntatore specificato a un puntatore che punta a un oggetto di classe specifico, con o senza verificare che il cast non è valido.  
  
 Nella tabella seguente elenca le macro di cast di tipo MFC.  
  
### <a name="macros-that-cast-pointers-to-mfc-class-objects"></a>Macro di cui eseguire il Cast di puntatori agli oggetti classe MFC  
  
|||  
|-|-|  
|[DYNAMIC_DOWNCAST](#dynamic_downcast)|Esegue il cast di un puntatore a un puntatore a un oggetto della classe durante la verifica per vedere se il cast non è valido.|  
|[STATIC_DOWNCAST](#static_downcast)|Esegue il cast di un puntatore a un oggetto da una classe a un puntatore di tipo correlato. In una build di debug, viene generato un **ASSERT** se l'oggetto non è un "tipo di" il tipo di destinazione.|  
  
##  <a name="a-namedynamicdowncasta--dynamicdowncast"></a><a name="dynamic_downcast"></a>DYNAMIC_DOWNCAST  
 Fornisce un modo comodo per eseguire il cast di un puntatore a un puntatore a un oggetto della classe durante la verifica per vedere se il cast non è valido.  
  
```   
DYNAMIC_DOWNCAST(class, pointer)  
```  
  
### <a name="parameters"></a>Parametri  
 `class`  
 Il nome di una classe.  
  
 `pointer`  
 Un puntatore a eseguire il cast a un puntatore a un oggetto di tipo `class`.  
  
### <a name="remarks"></a>Note  
 La macro verrà eseguito il cast di `pointer` parametro a un puntatore a un oggetto del `class` tipo del parametro.  
  
 Se l'oggetto a cui fa riferimento il puntatore è un "tipo di" la classe identificata, la macro restituisce il puntatore del mouse appropriato. Se non è un cast valido, la macro restituisce **NULL**.  
  
##  <a name="a-namestaticdowncasta--staticdowncast"></a><a name="static_downcast"></a>STATIC_DOWNCAST  
 Cast *pobject* a un puntatore a un *class_name* oggetto.  
  
```   
STATIC_DOWNCAST(class_name, pobject)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe viene eseguito il cast a.  
  
 *pObject*  
 Il puntatore per eseguire il cast a un puntatore a un *class_name* oggetto.  
  
### <a name="remarks"></a>Note  
 *pObject* devono essere **NULL**, o puntare a un oggetto di una classe derivata direttamente o indirettamente, da *class_name*. Nelle build dell'applicazione con il **debug** simbolo del preprocessore definito, la macro verrà **ASSERT** se *pobject* non **NULL**, o se punta a un oggetto che non è un "tipo di" della classe specificata nella *class_name* parametro (vedere [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)). Non- **debug** compilazioni, la macro esegue il cast senza alcun controllo di tipo.  
  
 La classe specificata nel *class_name* parametro deve essere derivato da `CObject` e devono utilizzare il `DECLARE_DYNAMIC` e `IMPLEMENT_DYNAMIC`, il `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro come descritto nell'articolo [CObject (classe): derivando una classe da CObject](../../mfc/deriving-a-class-from-cobject.md).  
  
 Ad esempio, è possibile eseguire il cast un puntatore a `CMyDoc`, denominato `pMyDoc`, a un puntatore a **CDocument** utilizzando la seguente espressione:  
  
 [!code-cpp[NVC_MFCDocView&#197;](../../mfc/codesnippet/cpp/type-casting-of-mfc-class-objects_1.cpp)]  
  
 Se `pMyDoc` non fa riferimento a un oggetto derivato direttamente o indirettamente da **CDocument**, la macro verrà **ASSERT**.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

