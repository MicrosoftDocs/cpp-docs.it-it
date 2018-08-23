---
title: Integrazione con CLR (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 527ce8beaf5fb08d0642026336be193e3b39d73b
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42581124"
---
# <a name="clr-integration-ccx"></a>Integrazione CLR (C++/CX)
Una gestione speciale di ricezione alcuni tipi Windows Runtime in C + + c++ /CX e i linguaggi basati su common language runtime (CLR). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente, C + + c++ /CX appositamente esegue il mapping di tipi come Platform:: Delegate e platform:: String.  
  
## <a name="mapping-the-windows-runtime-to-ccx"></a>Mapping di Runtime di Windows per C + + c++ /CX  
 Quando C + c++ /CLI CX legge un file di metadati (con estensione winmd) di Windows, il compilatore esegue automaticamente il mapping tipi e spazi dei nomi comuni di Windows Runtime di C + + c++ /CX gli spazi dei nomi e tipi. Ad esempio, il tipo Windows Runtime numerico `UInt32` viene automaticamente mappato a `default::uint32`.  
  
 C + c++ /CX esegue il mapping di diversi altri tipi di Windows Runtime per il **piattaforma** dello spazio dei nomi. Ad esempio, il **spazio** handle HSTRING, che rappresenta una stringa di testo Unicode di sola lettura, viene eseguito il mapping di C + c++ /CX `Platform::String` classe. Quando un'operazione di Windows Runtime viene restituito un errore HRESULT, questo viene mappato a una C + + c++ /CX `Platform::Exception`. Per altre informazioni, vedere [Built-in Types](http://msdn.microsoft.com/en-us/acc196fd-09da-4882-b554-6c94685ec75f).  
  
 C + c++ /CX esegue anche il mapping di determinati tipi negli spazi dei nomi Windows Runtime per migliorare le funzionalità del tipo. Per questi tipi C + +, c++ /CX fornisce costruttori e metodi che sono specifiche di C++ e non sono disponibili nel file con estensione winmd standard del tipo helper.  
  
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
  
## <a name="mapping-the-clr-to-ccx"></a>Mapping di CLR per C + + c++ /CX  
 Quando i compilatori c# o Visual C++ leggono un file con estensione winmd, eseguono automaticamente il mapping determinati tipi nel file di metadati per C + appropriati c++ /CX o CLR tipi. Ad esempio, in CLR, il IVector\<T > viene eseguito il mapping di interfaccia in IList\<T >. Ma in C + + c++ /CX, la IVector\<T > interfaccia non è mappata a un altro tipo.  
  
 IReference\<T > nel Runtime di Windows viene eseguito il mapping a Nullable\<T > in .NET.  
  
## <a name="see-also"></a>Vedere anche  
 [Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)