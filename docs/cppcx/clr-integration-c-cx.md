---
title: "Integrazione CLR (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 10
---
# Integrazione CLR (C++/CX)
Alcuni tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] vengono gestiti in un modo particolare in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] e nei linguaggi basati su Common Language Runtime \(CLR\). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente,[!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] esegue in special modo il mapping di tipi come Platform::Delegate e Platform::String.  
  
## Mapping di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] a [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]  
 Quando in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] viene letto un file di metadati di Windows \(con estensione winmd\), il compilatore esegue automaticamente il mapping degli spazi dei nomi comuni e dei tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] agli spazi dei nomi e ai tipi di [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]. Ad esempio, per il tipo numerico `UInt32` di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] viene eseguito automaticamente il mapping a `default::uint32`.  
  
 In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] viene eseguito il mapping di molti altri tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] allo spazio dei nomi **Platform**. Ad esempio, per l'handle HSTRING di **Windows::Foundation**, che rappresenta una stringa di testo Unicode di sola lettura, viene eseguito il mapping alla classe [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] `Platform::String`. Quando un'operazione di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] restituisce un errore HRESULT, viene eseguito il mapping a [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] `Platform::Exception`. Per altre informazioni, vedere [Built\-in Types](http://msdn.microsoft.com/it-it/acc196fd-09da-4882-b554-6c94685ec75f).  
  
 In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] viene anche eseguito il mapping di determinati tipi negli spazi dei nomi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] per migliorare le funzionalità del tipo. Per questi tipi, [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] fornisce costruttori e metodi helper specifici del linguaggio C\+\+ che non sono disponibili nel file WINMD standard del tipo.  
  
 Gli elenchi seguenti illustrano gli struct di valore che supportano i nuovi costruttori e metodi helper. Se in precedenza è stato scritto codice che usa gli elenchi di inizializzazione degli struct, modificarlo in modo da usare i costruttori aggiunti di recente.  
  
 **Windows::Foundation**  
  
-   Punto  
  
-   Rect  
  
-   Dimensione  
  
 **Windows::UI**  
  
-   Colore  
  
 **Windows::UI::Xaml**  
  
-   CornerRadius  
  
-   Durata  
  
-   GridLength  
  
-   Thickness  
  
 **Windows::UI::Xaml::Interop**  
  
1.  TypeName  
  
 **Windows::UI::Xaml::Media**  
  
-   Matrix  
  
 **Windows::UI::Xaml::Media::Animation**  
  
-   KeyTime  
  
-   RepeatBehavior  
  
 **Windows::UI::Xaml::Media::Media3D**  
  
-   Matrix3D  
  
## Mapping di CLR a [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]  
 Quando i compilatori C\# o Visual C\+\+ leggono un file WINMD, eseguono automaticamente il mapping di alcuni tipi nel file di metadati ai tipi di [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] o CLR appropriati. Ad esempio, in CLR viene eseguito il mapping dell'interfaccia IVector\<T\> a IList\<T\>. In [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)], invece, non viene eseguito il mapping dell'interfaccia IVector\<T\> ad altri tipi.  
  
 Per IReference\<T\> in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] viene eseguito il mapping a Nullable\<T\> in .NET.  
  
## Vedere anche  
 [Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)