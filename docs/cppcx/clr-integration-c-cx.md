---
title: Integrazione CLR (C++/CX)
ms.date: 01/22/2017
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
ms.openlocfilehash: df0c5e9cfaf9a4148c8d16b68ee04b4e9ce82e6a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62257777"
---
# <a name="clr-integration-ccx"></a>Integrazione CLR (C++/CX)

Alcuni tipi Windows Runtime in una gestione speciale di ricezione C++/CX e i linguaggi basati su common language runtime (CLR). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente, C++/CX appositamente esegue il mapping di tipi come Platform:: Delegate e platform:: String.

## <a name="mapping-the-windows-runtime-to-ccx"></a>Il Runtime di Windows e di mapping C++/CX

Quando C++/CX legge un file di metadati (con estensione winmd) di Windows, il compilatore esegue il mapping di spazi dei nomi comuni di Windows Runtime e tipi a automaticamente C++/CX gli spazi dei nomi e tipi. Ad esempio, il tipo Windows Runtime numerico `UInt32` viene automaticamente mappato a `default::uint32`.

C + c++ /CX esegue il mapping di diversi altri tipi di Windows Runtime per il **piattaforma** dello spazio dei nomi. Ad esempio, il **spazio** handle HSTRING, che rappresenta una stringa di testo Unicode di sola lettura, viene eseguito il mapping di C + c++ /CX `Platform::String` classe. Quando un'operazione di Windows Runtime viene restituito un errore HRESULT, ne viene eseguito il mapping a un C++/CX `Platform::Exception`.

C + c++ /CX esegue anche il mapping di determinati tipi negli spazi dei nomi Windows Runtime per migliorare le funzionalità del tipo. Per questi tipi, C++/CX fornisce costruttori e metodi specifici di helper C++ e non sono disponibili nel file con estensione winmd standard del tipo.

Gli elenchi seguenti illustrano gli struct di valore che supportano i nuovi costruttori e metodi helper. Se in precedenza è stato scritto codice che usa gli elenchi di inizializzazione degli struct, modificarlo in modo da usare i costruttori aggiunti di recente.

**Windows::Foundation**

- Punto

- Rect

- Dimensione

**Windows::UI**

- Colore

**Windows::UI::Xaml**

- CornerRadius

- Durata

- GridLength

- Thickness

**Windows::UI::Xaml::Interop**

- TypeName

**Windows::UI::Xaml::Media**

- Matrix

**Windows::UI::Xaml::Media::Animation**

- KeyTime

- RepeatBehavior

**Windows::UI::Xaml::Media::Media3D**

- Matrix3D

## <a name="mapping-the-clr-to-ccx"></a>Mapping di CLR per C++/CX

Quando i compilatori c# o Visual C++ leggono un file con estensione winmd, eseguono automaticamente il mapping determinati tipi nel file di metadati per C + appropriati c++ /CX o CLR tipi. Ad esempio, in CLR, il IVector\<T > viene eseguito il mapping di interfaccia in IList\<T >. Ma in C++/CX, la IVector\<T > interfaccia non è mappata a un altro tipo.

IReference\<T > nel Runtime di Windows viene eseguito il mapping a Nullable\<T > in .NET.

## <a name="see-also"></a>Vedere anche

[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)
