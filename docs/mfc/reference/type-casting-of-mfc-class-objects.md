---
title: Cast di oggetti classe MFC di tipo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.macros.classes
dev_langs: C++
helpviewer_keywords:
- macros [MFC], type casting
- pointers [MFC], type casting
- type casts [MFC]
- casting types [MFC]
- macros [MFC], casting pointers
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8a6ab8b0a644c859afcd73944f048a6549350502
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="type-casting-of-mfc-class-objects"></a>Cast di tipo degli oggetti classe MFC
Le macro di cast di tipo forniscono un modo per eseguire il cast di un puntatore specificato a un puntatore che punta a un oggetto della classe specifico, con o senza verificare che il cast è valido.  
  
 Nella tabella seguente sono elencate le macro di cast di tipo MFC.  
  
### <a name="macros-that-cast-pointers-to-mfc-class-objects"></a>Macro di cui eseguire il Cast di puntatori agli oggetti classe MFC  
  
|||  
|-|-|  
|[DYNAMIC_DOWNCAST](#dynamic_downcast)|Esegue il cast di un puntatore a un puntatore a un oggetto classe durante il controllo per verificare se il cast è valido.|  
|[STATIC_DOWNCAST](#static_downcast)|Esegue il cast di un puntatore a un oggetto da una classe a un puntatore di un tipo correlato. In una build di debug, provoca un **ASSERT** se l'oggetto non è un "tipo di" il tipo di destinazione.|  
  
##  <a name="dynamic_downcast"></a>DYNAMIC_DOWNCAST  
 Fornisce un modo pratico per eseguire il cast di un puntatore a un puntatore a un oggetto classe durante il controllo per verificare se il cast è valido.  
  
```   
DYNAMIC_DOWNCAST(class, pointer)  
```  
  
### <a name="parameters"></a>Parametri  
 `class`  
 Il nome di una classe.  
  
 `pointer`  
 Un puntatore a eseguire il cast a un puntatore a un oggetto di tipo `class`.  
  
### <a name="remarks"></a>Note  
 La macro eseguirà il cast di `pointer` parametro a un puntatore a un oggetto del `class` tipo del parametro.  
  
 Se l'oggetto a cui fa riferimento il puntatore è un "tipo di" la classe identificata, la macro restituisce il puntatore appropriato. Se non è un cast valido, la macro restituisce **NULL**.  
  
##  <a name="static_downcast"></a>STATIC_DOWNCAST  
 Cast *pobject* a un puntatore a un *class_name* oggetto.  
  
```   
STATIC_DOWNCAST(class_name, pobject)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe sottoposto a cast a.  
  
 *pObject*  
 Il puntatore di eseguire il cast a un puntatore a un *class_name* oggetto.  
  
### <a name="remarks"></a>Note  
 *pObject* devono essere **NULL**, o puntare a un oggetto di una classe derivata direttamente o indirettamente, da *class_name*. Nelle build dell'applicazione con il **debug** definito un simbolo del preprocessore, la macro verrà **ASSERT** se *pobject* non **NULL**, o Se invece punta a un oggetto che non è un "tipo di" della classe specificata nella *class_name* parametro (vedere [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)). Non- **debug** build, la macro esegue il cast senza alcun controllo di tipo.  
  
 La classe specificata nel *class_name* parametro deve essere derivato da `CObject` e deve utilizzare il `DECLARE_DYNAMIC` e `IMPLEMENT_DYNAMIC`, il `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o `DECLARE_SERIAL` e `IMPLEMENT_SERIAL`macro come descritto nell'articolo [classe CObject: derivazione di una classe da CObject](../../mfc/deriving-a-class-from-cobject.md).  
  
 Ad esempio, è possibile eseguire il cast un puntatore a `CMyDoc`, denominato `pMyDoc`, a un puntatore a **CDocument** utilizzando la seguente espressione:  
  
 [!code-cpp[NVC_MFCDocView#197](../../mfc/codesnippet/cpp/type-casting-of-mfc-class-objects_1.cpp)]  
  
 Se `pMyDoc` non punta a un oggetto derivato direttamente o indirettamente da **CDocument**, la macro verrà **ASSERT**.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
