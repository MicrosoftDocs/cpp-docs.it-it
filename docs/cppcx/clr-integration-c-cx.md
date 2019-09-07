---
title: Integrazione CLR (C++/CX)
ms.date: 01/22/2017
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
ms.openlocfilehash: 44ef35d1a62706cae37285c06547a8b9b7deb35c
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740288"
---
# <a name="clr-integration-ccx"></a>Integrazione CLR (C++/CX)

Alcuni tipi di Windows Runtime ricevono una gestione C++speciale in/CX e i linguaggi basati sul Common Language Runtime (CLR). Questo articolo illustra il mapping di numerosi tipi di un linguaggio in un altro linguaggio. Ad esempio, CLR esegue il mapping di Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap a System.Collections.IDictionary e così via. Analogamente C++,/CX esegue appositamente il mapping di tipi quali platform::D elegate e Platform:: String.

## <a name="mapping-the-windows-runtime-to-ccx"></a>Mapping del Windows Runtime a C++/CX

Quando C++/CX legge un file di metadati di Windows (con estensione winmd), il compilatore esegue automaticamente il mapping tra i C++tipi e gli spazi dei nomi Windows Runtime comuni agli spazi dei nomi e ai tipi di/CX. Ad esempio, il tipo `UInt32` di Windows Runtime numerico viene mappato automaticamente a. `default::uint32`

C++/CX esegue il mapping di diversi altri tipi di Windows Runtime allo spazio dei nomi **Platform** . Ad esempio, l'handle di **Windows:: Foundation** HString, che rappresenta una stringa di testo Unicode di sola lettura, viene mappato `Platform::String` alla classe C++/CX. Quando un'operazione di Windows Runtime restituisce un errore HRESULT, viene eseguito il mapping C++a `Platform::Exception`un/CX.

/CX C++esegue anche il mapping di determinati tipi negli spazi dei nomi Windows Runtime per migliorare la funzionalità del tipo. Per questi tipi, C++/CX fornisce costruttori helper e metodi specifici di C++ e non sono disponibili nel file standard con estensione WinMD del tipo.

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

## <a name="mapping-the-clr-to-ccx"></a>Mapping di CLR a C++/CX

Quando Microsoft C++ o C# i compilatori leggono un file con estensione WinMD, eseguono automaticamente il mapping di alcuni tipi nel file C++di metadati ai tipi CLR o/CX appropriati. Ad esempio, in CLR, l'interfaccia IVector\<t > viene mappata a IList\<t >. In C++/CX, tuttavia, non\<è stato eseguito il mapping dell'interfaccia IVector T > a un altro tipo.

IReference\<t > nell'Windows Runtime esegue il mapping a\<Nullable t > in .NET.

## <a name="see-also"></a>Vedere anche

[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)
