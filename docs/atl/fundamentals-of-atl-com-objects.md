---
title: Nozioni di base di oggetti COM ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- COM, and ATL
- ATL, COM
- ATL COM objects
- COM objects, ATL
ms.assetid: 0f9c9d98-cc28-45da-89ac-dc94cee422fe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 955f8f6be96feeaf0f22f02c125dcdeaceb8e7f8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fundamentals-of-atl-com-objects"></a>Nozioni di base di oggetti COM ATL
Nella figura seguente viene illustrata la relazione tra le classi e interfacce che consentono di definire un oggetto COM ATL.  
  
 ![Struttura ATL](../atl/media/vc307y1.gif "vc307y1")  
  
> [!NOTE]
>  Questo diagramma mostra che `CComObject` è derivato da `CYourClass` mentre `CComAggObject` e `CComPolyObject` includono `CYourClass` come una variabile membro.  
  
 Esistono tre modi per definire un oggetto COM ATL. L'opzione standard consiste nell'utilizzare il `CComObject` classe derivata da `CYourClass`. La seconda opzione consiste nel creare un oggetto aggregato utilizzando la `CComAggObject` classe. La terza opzione consiste nell'utilizzare il `CComPolyObject` classe. `CComPolyObject` funge da una configurazione ibrida: possono funzionare come un `CComObject` classe o come un `CComAggObject` (classe), a seconda del modo in cui viene creato inizialmente. Per ulteriori informazioni sull'utilizzo di `CComPolyObject` classe, vedere [CComPolyObject classe](../atl/reference/ccompolyobject-class.md).  
  
 Quando si utilizza standard ATL COM, è possibile utilizzare due: un oggetto esterno e un oggetto interno. I client esterni di accedere alla funzionalità dell'oggetto interno tramite le funzioni wrapper vengono definite nell'oggetto esterno. L'oggetto esterno è di tipo `CComObject`.  
  
 Quando si utilizza un oggetto aggregato, l'oggetto esterno non fornisce wrapper per la funzionalità dell'oggetto interno. Al contrario, l'oggetto esterno fornisce un puntatore accessibile direttamente da client esterni. In questo scenario, l'oggetto esterno è di tipo `CComAggObject`. L'oggetto interno è una variabile membro dell'oggetto esterno ed è di tipo `CYourClass`.  
  
 Poiché il client non è necessario scorrere l'oggetto esterno per interagire con l'oggetto interno, gli oggetti aggregati sono in genere più efficienti. Inoltre, l'oggetto esterno non deve conoscere le funzionalità dell'oggetto aggregato, dato che l'interfaccia dell'oggetto aggregato è direttamente disponibile al client. Tuttavia, non tutti gli oggetti possono essere aggregati. Per un oggetto da aggregare, deve essere progettato con aggregazione presente.  
  
 ATL implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) in due fasi:  
  
-   [CComObject](../atl/reference/ccomobject-class.md), [CComAggObject](../atl/reference/ccomaggobject-class.md), oppure [CComPolyObject](../atl/reference/ccompolyobject-class.md) implementa il **IUnknown** metodi.  
  
-   [CComObjectRoot](../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) gestisce il conteggio dei riferimenti e i puntatori outer del **IUnknown**.  
  
 Altri aspetti di un oggetto COM ATL sono gestiti da altre classi:  
  
-   [CComCoClass](../atl/reference/ccomcoclass-class.md) definisce il modello dell'oggetto predefinito classe factory e l'aggregazione.  
  
-   [IDispatchImpl](../atl/reference/idispatchimpl-class.md) fornisce un'implementazione predefinita del `IDispatch Interface` parte delle interfacce duali sull'oggetto.  
  
-   [ISupportErrorInfoImpl](../atl/reference/isupporterrorinfoimpl-class.md) implementa la **ISupportErrorInfo** interfaccia che garantisce le informazioni sugli errori che può essere propagata fino alla catena di chiamata in modo corretto.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Implementazione di CComObjectRootEx](../atl/implementing-ccomobjectrootex.md)  
 Mostra le voci della mappa COM per l'implementazione di esempio `CComObjectRootEx`.  
  
 [Implementazione di CComObject, CComAggObjec e CComPolyObject](../atl/implementing-ccomobject-ccomaggobject-and-ccompolyobject.md)  
 Viene illustrato come la **viene\*Aggregatable** macro influiscono sull'uso di `CComObject`, `CComAggObject`, e `CComPolyObject`.  
  
 [Supporto di IDispatch e IErrorInfo](../atl/supporting-idispatch-and-ierrorinfo.md)  
 Sono elencate le classi di implementazione ATL da utilizzare per supportare il `IDispatch` e **IErrorInfo** interfacce.  
  
 [Supporto di IDispEventImpl](../atl/supporting-idispeventimpl.md)  
 Vengono illustrati i passaggi per implementare un punto di connessione per la classe.  
  
 [Modifica della class factory e del modello di aggregazione predefiniti](../atl/changing-the-default-class-factory-and-aggregation-model.md)  
 Mostra le macro da usare per modificare il modello predefinito classe factory e l'aggregazione.  
  
 [Creazione di un oggetto aggregato](../atl/creating-an-aggregated-object.md)  
 Elenca i passaggi per la creazione di un oggetto aggregato.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)  
 Vengono fornite informazioni sulla creazione di un oggetto COM ATL.  
  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

