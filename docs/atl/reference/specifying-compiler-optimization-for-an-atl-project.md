---
title: Impostazione dell'ottimizzazione del compilatore per un progetto ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c6e60f22b7b91567948dfc2efc90935fce266d7e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
 Se non si definisce ATL_DISABLE_NO_VTABLE, la macro ATL_NO_VTABLE si espande in `declspec(novtable)`. Utilizzando `declspec(novtable)`in una classe dichiarazione impedisce il puntatore vtable inizializzazione nel costruttore della classe e un distruttore. Quando si compila il progetto, il linker Elimina vtable e tutte le funzioni a cui fa riferimento.  
  
 È necessario utilizzare ATL_NO_VTABLE e di conseguenza `declspec(novtable)`, con solo le classi base non creabili direttamente. Non è necessario utilizzare `declspec(novtable)` con la classe più derivata nel progetto, poiché questa classe (in genere [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md), o [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) Inizializza il puntatore vtable per il progetto.  
  
 È necessario chiamare non funzioni virtuali dal costruttore di qualsiasi oggetto che utilizza `declspec(novtable)`. È consigliabile spostare tali chiamate per il [FinalConstruct](ccomobjectrootex-class.md#finalconstruct) metodo.  

  
 Se si è certi se è necessario utilizzare il `declspec(novtable)` modificatore, è possibile rimuovere la macro ATL_NO_VTABLE da qualsiasi definizione di classe, oppure è possibile disattivare a livello globale specificando  
  
```  
#define _ATL_DISABLE_NO_VTABLE  
```  
  
 in stdafx h prima di tutti gli altri ATL file di intestazione sono inclusi.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto di Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [novtable](../../cpp/novtable.md)   
 [Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

