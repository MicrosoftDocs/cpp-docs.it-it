---
description: 'Altre informazioni su: integrazione con CLR (C++/CX)'
title: Integrazione CLR (C++/CX)
ms.date: 01/22/2017
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
ms.openlocfilehash: ae335168ee456f0461154ab48e9d92325fdc599b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190237"
---
# <a name="clr-integration-ccx"></a>Integrazione CLR (C++/CX)

Alcuni tipi di Windows Runtime ricevono una gestione speciale in C++/CX e i linguaggi basati sul Common Language Runtime (CLR). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente, C++/CX esegue appositamente il mapping di tipi quali Platform::D elegate e Platform:: String.

## <a name="mapping-the-windows-runtime-to-ccx"></a>Mapping del Windows Runtime a C++/CX

Quando C++/CX legge un file di metadati di Windows (con estensione winmd), il compilatore esegue automaticamente il mapping tra i tipi e gli spazi dei nomi Windows Runtime comuni agli spazi dei nomi e ai tipi C++/CX. Ad esempio, il tipo di Windows Runtime numerico `UInt32` viene mappato automaticamente a `default::uint32` .

C++/CX esegue il mapping di diversi altri tipi di Windows Runtime allo spazio dei nomi **Platform** . Ad esempio, l'handle di **Windows:: Foundation** HString, che rappresenta una stringa di testo Unicode di sola lettura, viene mappato alla classe/CX di C++ `Platform::String` . Quando un'operazione di Windows Runtime restituisce un errore HRESULT, viene eseguito il mapping a un/CX C++ `Platform::Exception` .

Il/CX C++ esegue anche il mapping di determinati tipi negli spazi dei nomi Windows Runtime per migliorare la funzionalità del tipo. Per questi tipi, C++/CX fornisce costruttori helper e metodi specifici per C++ e non sono disponibili nel file standard con estensione WinMD del tipo.

Gli elenchi seguenti illustrano gli struct di valore che supportano i nuovi costruttori e metodi helper. Se in precedenza è stato scritto codice che usa gli elenchi di inizializzazione degli struct, modificarlo in modo da usare i costruttori aggiunti di recente.

**Windows:: Foundation**

- Point

- Rect

- Dimensione

**Windows:: UI**

- Colore

**Windows:: UI:: XAML**

- CornerRadius

- Duration

- GridLength

- Thickness

**Windows::UI::Xaml::Interop**

- TypeName

**Windows:: UI:: XAML:: media**

- Matrice

**Windows:: UI:: XAML:: media:: Animation**

- KeyTime

- RepeatBehavior

**Windows::UI::Xaml::Media::Media3D**

- Matrix3D

## <a name="mapping-the-clr-to-ccx"></a>Mapping di CLR a C++/CX

Quando i compilatori Microsoft C++ o C# leggono un file con estensione WinMD, eseguono automaticamente il mapping di alcuni tipi nel file di metadati ai tipi CLR o/CX appropriati di C++. Ad esempio, in CLR \<T> viene eseguito il mapping dell'interfaccia IVector a IList \<T> . Tuttavia, in C++/CX, l' \<T> interfaccia IVector non è mappata a un altro tipo.

IReference \<T> nella Windows Runtime esegue il mapping a Nullable \<T> in .NET.

## <a name="see-also"></a>Vedi anche

[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)
