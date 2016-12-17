---
title: "Fundamentals of ATL COM Objects | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL COM objects"
  - "ATL, COM"
  - "oggetti COM, ATL"
  - "COM, e ATL"
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
caps.latest.revision: 25
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Fundamentals of ATL COM Objects
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella figura seguente vengono illustrate la relazione tra le classi e le interfacce utilizzate per definire un oggetto COM ATL.  
  
 ![Struttura ATL](../atl/media/vc307y1.png "vc307Y1")  
  
> [!NOTE]
>  Questo diagramma mostra che `CComObject` è derivato da `CYourClass` mentre `CComAggObject` e `CComPolyObject` includono `CYourClass` come variabile membro.  
  
 Esistono tre modi per definire un oggetto COM ATL.  L'opzione standard è di utilizzare la classe `CComObject` derivata da `CYourClass`.  La seconda opzione consiste nel creare un oggetto aggregato utilizzando la classe `CComAggObject`.  La terza opzione consiste di utilizzare la classe `CComPolyObject`.  `CComPolyObject` funge da ibrido: può essere utilizzata come classe `CComObject` o come classe `CComAggObject`, a seconda di come viene innanzitutto creato.  Per ulteriori informazioni sull'utilizzo della classe `CComPolyObject`, vedere [CComPolyObject Class](../atl/reference/ccompolyobject-class.md).  
  
 Quando si utilizza COM ATL standard, utilizzare due oggetti: un oggetto esterno e un oggetto interno.  I client esterni accedono alla funzionalità dell'oggetto interno delle funzioni wrapper definite nell'oggetto esterno.  l'oggetto esterno è di tipo `CComObject`.  
  
 Quando si utilizza un oggetto aggregato, l'oggetto esterno non fornisce wrapper per la funzionalità dell'oggetto interno.  Invece, l'oggetto esterno fornisce un puntatore cui si accede direttamente dai client esterni.  In questo scenario, l'oggetto esterno è di tipo `CComAggObject`.  L'oggetto interno è una variabile membro dell'oggetto esterno ed è di tipo `CYourClass`.  
  
 Poiché il client non deve passare l'oggetto esterno interagire con l'oggetto interno, gli oggetti vengono aggregati in genere più efficienti.  Inoltre, l'oggetto esterno non deve conoscere la funzionalità dell'oggetto aggregato, dato che l'interfaccia dell'oggetto aggregato è disponibile direttamente il client.  Tuttavia, non tutti gli oggetti possono essere aggregati.  Perché un oggetto sia aggregato, deve essere progettato con aggregazione in base.  
  
 ATL implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) in due fasi:  
  
-   A[CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), o [CComPolyObject](../atl/reference/ccompolyobject-class.md) i metodi **IUnknown**.  
  
-   [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio dei riferimenti e collegamenti esterni **IUnknown**.  
  
 Altri aspetti dell'oggetto COM ATL vengono gestiti da altre classi:  
  
-   [CComCoClass](../atl/reference/ccomcoclass-class.md) definisce la factory della classe predefinita dell'oggetto e il modello di aggregazione.  
  
-   [IDispatchImpl](../atl/reference/idispatchimpl-class.md) fornisce un'implementazione predefinita della parte `IDispatch Interface` di tutte le interfacce duali l'oggetto.  
  
-   [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implementa l'interfaccia **ISupportErrorInfo** che fornisce informazioni sugli errori può essere propagata nella catena di chiamate correttamente.  
  
## Argomenti della sezione  
 [implementare CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)  
 Le voci della mappa di esempio COM di visualizzazione per implementare `CComObjectRootEx`.  
  
 [implementare CComObject, CComAggObject e CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)  
 Viene illustrato come le macro **DECLARE\_\*\_AGGREGATABLE** influiscono sull'utilizzo `CComObject`, `CComAggObject`e `CComPolyObject`.  
  
 [IDispatch e che supportano IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)  
 Vengono elencate le classi di implementazione ATL da utilizzare per il supporto `IDispatch` e interfacce **IErrorInfo**.  
  
 [IDispEventImpl di supporto](../atl/supporting-idispeventimpl.md)  
 Vengono illustrate le operazioni necessarie per implementare un punto di connessione per la classe.  
  
 [Modificare la factory della classe predefinita e il modello di aggregazione](../atl/changing-the-default-class-factory-and-aggregation-model.md)  
 Mostrare che la macro da utilizzare per modificare la factory e l'aggregazione della classe predefinita modelli.  
  
 [creare un oggetto aggregato](../atl/creating-an-aggregated-object.md)  
 Elenca i passaggi per creare un oggetto aggregato.  
  
## Sezioni correlate  
 [Creare un progetto ATL](../atl/reference/creating-an-atl-project.md)  
 Vengono fornite informazioni sulla creazione di un oggetto COM ATL.  
  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Vengono forniti collegamenti ad argomenti concettuali sulla programmazione mediante Active Template Library.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)