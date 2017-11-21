---
title: Integrazione con CLR (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
caps.latest.revision: "10"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 0220d13f6c378d5081f6043382e7d58888ff3c2b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="clr-integration-ccx"></a>Integrazione CLR (C++/CX)
Alcuni tipi di Windows Runtime ricevano una gestione speciale in C + + CX e le lingue che si basano su common language runtime (CLR). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente, C + + CX appositamente esegue il mapping di tipi come Platform:: Delegate e platform:: String.  
  
## <a name="mapping-the-windows-runtime-to-ccx"></a>Mapping di Windows Runtime di C + + CX  
 Quando C + + CX legge un file di metadati (. winmd) di Windows, il compilatore esegue automaticamente il mapping tipi e spazi dei nomi comuni di Windows Runtime di C + + CX gli spazi dei nomi e tipi. Ad esempio, il tipo Windows Runtime numerico `UInt32` viene automaticamente eseguito il mapping a `default::uint32`.  
  
 C + + CX esegue il mapping di molti altri tipi di Windows Runtime per il **piattaforma** dello spazio dei nomi. Ad esempio, il **spazio** handle HSTRING, che rappresenta una stringa di testo Unicode di sola lettura, viene eseguito il mapping di C + + CX `Platform::String` classe. Quando un'operazione di Windows Runtime viene restituito un HRESULT di errore, questo viene mappato a C + + CX `Platform::Exception`. Per altre informazioni, vedere [Built-in Types](http://msdn.microsoft.com/en-us/acc196fd-09da-4882-b554-6c94685ec75f).  
  
 C + + CX inoltre esegue il mapping di determinati tipi negli spazi dei nomi Windows Runtime per migliorare le funzionalità del tipo. Per questi tipi C + + CX fornisce costruttori e metodi che sono specifiche di C++ e non sono disponibili nel file con estensione winmd standard del tipo helper.  
  
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
  
## <a name="mapping-the-clr-to-ccx"></a>Mapping di Common Language Runtime di C + + CX  
 Quando i compilatori di c# o Visual C++ leggono un file con estensione winmd, eseguono automaticamente il mapping determinati tipi di file di metadati per appropriato C + + CX o CLR tipi. Ad esempio, in CLR, la IVector\<T > viene eseguito il mapping di interfaccia in IList\<T >. Ma in C + + CX, il IVector\<T > interfaccia non è stato eseguito il mapping a un altro tipo.  
  
 Per IReference\<T > in Windows Runtime esegue il mapping a Nullable\<T > in .NET.  
  
## <a name="see-also"></a>Vedere anche  
 [Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)