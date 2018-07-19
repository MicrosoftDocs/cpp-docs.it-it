---
title: Cast di oggetti classe MFC di tipo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.classes
dev_langs:
- C++
helpviewer_keywords:
- macros [MFC], type casting
- pointers [MFC], type casting
- type casts [MFC]
- casting types [MFC]
- macros [MFC], casting pointers
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d90b188b99f4f0711635cc47c03383617b9046e
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886011"
---
# <a name="type-casting-of-mfc-class-objects"></a>Cast di tipo degli oggetti classe MFC
Le macro di cast di tipo consentono di eseguire il cast di un puntatore specificato a un puntatore che punta a un oggetto di classe specifica, con o senza verificare che il cast è valido.  
  
 Nella tabella seguente elenca le macro di cast di tipo MFC.  
  
### <a name="macros-that-cast-pointers-to-mfc-class-objects"></a>Macro di cui eseguire il Cast di puntatori agli oggetti classe MFC  
  
|||  
|-|-|  
|[DYNAMIC_DOWNCAST](#dynamic_downcast)|Esegue il cast di un puntatore a un puntatore a un oggetto della classe durante il controllo per verificare se il cast è valido.|  
|[STATIC_DOWNCAST](#static_downcast)|Esegue il cast di un puntatore a un oggetto da una classe a un puntatore di un tipo correlato. In una build di debug, genera un'ASSERZIONE se l'oggetto non è un "tipo di" tipo di destinazione.|  
  
##  <a name="dynamic_downcast"></a>  DYNAMIC_DOWNCAST  
 Fornisce un modo comodo per eseguire il cast di un puntatore a un puntatore a un oggetto della classe durante il controllo per verificare se il cast è valido.  
  
```   
DYNAMIC_DOWNCAST(class, pointer)  
```  
  
### <a name="parameters"></a>Parametri  
 *class*  
 Il nome di una classe.  
  
 *pointer*  
 Un puntatore a eseguire il cast a un puntatore a un oggetto di tipo *classe*.  
  
### <a name="remarks"></a>Note  
 La macro verrà eseguito il cast di *puntatore* parametro a un puntatore a un oggetto delle *classe* tipo del parametro.  
  
 Se l'oggetto fa riferimento il puntatore è un "tipo di" classe identificata, la macro restituisce il puntatore appropriato. Se non si tratta di un cast valide, la macro restituisce NULL.  
  
##  <a name="static_downcast"></a>  STATIC_DOWNCAST  
 I cast *pobject* a un puntatore a un *class_name* oggetto.  
  
```   
STATIC_DOWNCAST(class_name, pobject)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe sottoposto a cast a.  
  
 *pObject*  
 Il puntatore per eseguire il cast a un puntatore a un *class_name* oggetto.  
  
### <a name="remarks"></a>Note  
 *pObject* deve essere NULL o puntare a un oggetto di una classe che deriva direttamente o indirettamente, da *class_name*. Nelle build dell'applicazione con il simbolo del preprocessore debug definito, verrà verificata la macro se *pobject* non è NULL, o se invece punta a un oggetto che non è un "tipo di" classe specificata nel *class_name*parametro (vedere [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)). Non- **debug** build, la macro esegue il cast senza alcun controllo del tipo.  
  
 La classe specificata nella *class_name* parametro deve essere derivato da `CObject` e deve usare il DECLARE_DYNAMIC e IMPLEMENT_DYNAMIC, il DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE, o DECLARE_SERIAL e IMPLEMENT_ Macro seriale come illustrato nell'articolo [classe CObject: derivazione di una classe da CObject](../../mfc/deriving-a-class-from-cobject.md).  
  
 Ad esempio, si potrebbe eseguire il cast puntatore a `CMyDoc`, denominato `pMyDoc`, a un puntatore a `CDocument` utilizzando la seguente espressione:  
  
 [!code-cpp[NVC_MFCDocView#197](../../mfc/codesnippet/cpp/type-casting-of-mfc-class-objects_1.cpp)]  
  
 Se `pMyDoc` non punta a un oggetto derivato direttamente o indirettamente da `CDocument`, verrà verificata la macro.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
