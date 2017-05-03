---
title: "Deprecazione di tipi e membri (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b20b01c1-a439-4ff0-8cf3-d7280c492813
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Deprecazione di tipi e membri (C++/CX)
In C\+\+\/CX è supportata la deprecazione dei tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e dei membri per i producer e i consumer utilizzando l'attributo [Deprecated](http://msdn.microsoft.com/it-it/8b02ad36-3b5f-4361-888b-e6a99040e57c). Se usi un'API a cui è stato applicato questo attributo, compare un messaggio di avviso in fase di compilazione che indica che l'API è deprecata e inoltre consiglia l'uso di un'API alternativa. Nei tuoi tipi e metodi pubblici puoi applicare questo attributo e fornire il tuo messaggio personalizzato.  
  
> [!CAUTION]
>  L'attributo [Deprecated](http://msdn.microsoft.com/it-it/8b02ad36-3b5f-4361-888b-e6a99040e57c) serve solo per i tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Per le classi standard e i membri C\+\+, usare [\_\_declspec\(deprecated\)](http://msdn.microsoft.com/library/044swk7y.aspx).  
  
## Esempio  
 Il seguente esempio mostra come deprecare le tue API pubbliche, ad esempio in un componente di Windows Runtime. Il secondo parametro, di tipo [Windows:Foundation::Metadata::DeprecationType](http://msdn.microsoft.com/it-it/ee01e63d-37d0-4273-accc-fca174f88bfa) specifica se l'API viene deprecata o rimossa. Attualmente è supportato solo il valore DeprecationType::Deprecated. Il terzo parametro nell'attributo specifica [Windows::Foundation::Metadata::Platform](http://msdn.microsoft.com/it-it/1eae292d-1ab7-4d97-a58c-b0beffd51ef5) a cui si applica l'attributo.  
  
```  
  
namespace wfm = Windows::Foundation::Metadata; public ref class Bicycle sealed { public: property double Speed; [wfm::Deprecated("Use the Speed property to compute the angular speed of the wheel", wfm::DeprecationType::Deprecate, 0x0)] double ComputeAngularVelocity(); };  
```  
  
## Destinazioni supportate  
 Nella seguente tabella sono elencati i costrutti a cui può essere applicato l'attributo Deprecated:  
  
||  
|-|  
|Controllo XAML|  
|delegato|  
|event|  
|campo di enumerazione|  
|enum|  
|struct|  
|metodo|  
|classe|  
|interfaccia|  
|proprietà|  
|campo struct|  
|costruttore con parametri|  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)