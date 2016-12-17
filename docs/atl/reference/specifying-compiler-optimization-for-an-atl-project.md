---
title: "Impostazione dell&#39;ottimizzazione del compilatore per un progetto ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.optimization"
  - "vc.appwiz.ATL.vtable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), ottimizzazione del compilatore"
  - "ATL_DISABLE_NO_VTABLE (macro)"
  - "ATL_NO_VTABLE (macro)"
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazione dell&#39;ottimizzazione del compilatore per un progetto ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md) genera nuove classi con la macro ATL\_NO\_VTABLE, come riportato di seguito:  
  
```  
class ATL_NO_VTABLE CProjName  
{  
   ...  
};  
```  
  
 Viene quindi definita la macro \_ATL\_NO\_VTABLE nel seguente modo:  
  
```  
#ifdef _ATL_DISABLE_NO_VTABLE  
   #define ATL_NO_VTABLE  
#else  
   #define ATL_NO_VTABLE __declspec(novtable)  
#endif  
```  
  
 Se non si definisce \_ATL\_DISABLE\_NO\_VTABLE, la macro ATL\_NO\_VTABLE si espande come `declspec(novtable)`.  L'utilizzo di `declspec(novtable)`in una dichiarazione di classe impedisce quindi l'inizializzazione del puntatore vtable nel costruttore e nel distruttore della classe.  Quando viene compilato il progetto, il linker elimina il puntatore vtable e tutte le funzioni a cui fa riferimento.  
  
 È necessario utilizzare ATL\_NO\_VTABLE e `declspec(novtable)` solo con le classi base non creabili direttamente.  Il modificatore `declspec(novtable)` non deve invece essere utilizzato con la classe derivata di livello più basso del progetto, poiché questa \(in genere [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md) o [CComPolyObject](../../atl/reference/ccompolyobject-class.md)\) inizializza il puntatore vtable per il progetto.  
  
 Le funzioni di tipo virtual non devono essere chiamate dal costruttore di un oggetto che utilizza `declspec(novtable)`.  È quindi opportuno spostare le chiamate al metodo [FinalConstruct](../Topic/CComObjectRootEx::FinalConstruct.md).  
  
 Se non si è certi dell'utilizzo del modificatore `declspec(novtable)`, è possibile rimuovere la macro ATL\_NO\_VTABLE da qualsiasi definizione di classe oppure disabilitarla a livello globale specificando  
  
```  
#define _ATL_DISABLE_NO_VTABLE  
```  
  
 in stdafx.h, prima di includere gli altri file di intestazione ATL.  
  
## Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [novtable](../../cpp/novtable.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)