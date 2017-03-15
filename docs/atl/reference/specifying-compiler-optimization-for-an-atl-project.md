---
title: Impostazione dell&quot;ottimizzazione del compilatore per un progetto ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.optimization
- vc.appwiz.ATL.vtable
dev_langs:
- C++
helpviewer_keywords:
- ATL_DISABLE_NO_VTABLE macro
- ATL projects, compiler optimization
- ATL_NO_VTABLE macro
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
caps.latest.revision: 10
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: abdad4367e75c1971ba5d11af1a60992d1bb3dd4
ms.lasthandoff: 02/24/2017

---
# <a name="specifying-compiler-optimization-for-an-atl-project"></a>Impostazione dell'ottimizzazione del compilatore per un progetto ATL
Per impostazione predefinita, il [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md) genera nuove classi con la macro ATL_NO_VTABLE, come indicato di seguito:  
  
```  
class ATL_NO_VTABLE CProjName  
{  
 ...  
};  
```  
  
 Viene quindi definita la macro ATL_NO_VTABLE come indicato di seguito:  
  
```  
#ifdef _ATL_DISABLE_NO_VTABLE  
 #define ATL_NO_VTABLE  
#else  
 #define ATL_NO_VTABLE __declspec(novtable)  
#endif  
```  
  
 Se non si definisce ATL_DISABLE_NO_VTABLE, la macro ATL_NO_VTABLE si espande in `declspec(novtable)`. Utilizzando `declspec(novtable)`in una classe dichiarazione impedisce il puntatore vtable inizializzazione nel costruttore di classe e del distruttore. Quando si compila il progetto, il linker Elimina vtable e tutte le funzioni a cui fa riferimento.  
  
 È necessario utilizzare ATL_NO_VTABLE e, di conseguenza `declspec(novtable)`, con solo le classi base non creabili direttamente. Non è necessario utilizzare `declspec(novtable)` con la classe più derivata nel progetto, poiché questa classe (in genere [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md), o [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) consente di inizializzare il puntatore vtable per il progetto.  
  
 Non è necessario chiamare le funzioni virtuali dal costruttore di qualsiasi oggetto che utilizza `declspec(novtable)`. È necessario spostare tali chiamate per il [FinalConstruct](ccomobjectrootex-class.md#finalconstruct) metodo.  

  
 Se si è certi della necessità di utilizzare il `declspec(novtable)` modificatore, è possibile rimuovere la macro ATL_NO_VTABLE da qualsiasi definizione di classe oppure è possibile disabilitare a livello globale specificando  
  
```  
#define _ATL_DISABLE_NO_VTABLE  
```  
  
 in stdafx. h, prima di tutti gli altri ATL i file di intestazione sono inclusi.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop tramite le creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [novtable](../../cpp/novtable.md)   
 [Configurazioni predefinite progetto ATL](../../atl/reference/default-atl-project-configurations.md)


