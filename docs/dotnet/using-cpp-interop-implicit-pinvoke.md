---
description: 'Altre informazioni su: uso di interoperabilità C++ (PInvoke implicito)'
title: Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)
ms.date: 11/04/2016
helpviewer_keywords:
- blittable types [C++]
- platform invoke [C++], implicit
- interop [C++], features
- data marshaling [C++], C++ Interop features
- porting [C++], C++ native to .NET
- COM interfaces [C++]
- implicit platform invoke
- examples [C++], interoperability
- types [C++], blittable
- marshaling [C++], C++ Interop features
- platform invoke [C++], examples
- interoperability [C++]
- C++ Interop
- interoperability [C++], Implicit PInvoke
- C++, interop
- C++ COM Interop
- .NET [C++], porting C++ native to
ms.assetid: 5f710bf1-88ae-4c4e-8326-b3f0b7c4c68a
ms.openlocfilehash: e2b1f1aeef68fd6329ef04a53249d7dce627f2c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255548"
---
# <a name="using-c-interop-implicit-pinvoke"></a>Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)

Diversamente da altri linguaggi .NET, Visual C++ dispone di supporto per l'interoperabilità che consente di esistere codice gestito e non gestito nella stessa applicazione e anche nello stesso file (con i pragma [gestiti e non gestiti](../preprocessor/managed-unmanaged.md) ). Ciò consente agli sviluppatori Visual C++ di integrare le funzionalità .NET in applicazioni Visual C++ esistenti senza compromettere il resto dell'applicazione.

È anche possibile chiamare funzioni non gestite da un modulo gestito usando [dllexport, dllimport](../cpp/dllexport-dllimport.md).

PInvoke implicito è utile quando non è necessario specificare la modalità di marshalling dei parametri della funzione o uno qualsiasi degli altri dettagli che è possibile specificare quando si chiama in modo esplicito DllImportAttribute.

Visual C++ offre due modi per interagire con le funzioni gestite e non gestite:

- [Utilizzo di PInvoke esplicito in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

PInvoke esplicito è supportato dal .NET Framework ed è disponibile nella maggior parte dei linguaggi .NET. Tuttavia, come suggerisce il nome, l'interoperabilità C++ è specifica del Visual C++.

## <a name="c-interop"></a>interoperabilità C++

L'interoperabilità C++ garantisce una maggiore indipendenza dai tipi ed è in genere meno noiosa da implementare. Tuttavia, l'interoperabilità C++ non è un'opzione se il codice sorgente non gestito non è disponibile o per i progetti multipiattaforma.

## <a name="c-com-interop"></a>interoperabilità COM C++

Le funzionalità di interoperabilità supportate da Visual C++ offrono un particolare vantaggio rispetto ad altri linguaggi .NET quando si tratta di interoperabilità con i componenti COM. Anziché essere limitati alle restrizioni del .NET Framework [Tlbimp.exe (utilità di importazione della libreria dei tipi)](/dotnet/framework/tools/tlbimp-exe-type-library-importer), ad esempio il supporto limitato per i tipi di dati e l'esposizione obbligatoria di ogni membro di ogni interfaccia com, l'interoperabilità C++ consente l'accesso ai componenti com e non richiede assembly di interoperabilità distinti. A differenza di Visual Basic e C#, Visual C++ possibile usare direttamente gli oggetti COM usando i normali meccanismi COM, ad esempio **CoCreateInstance** e **QueryInterface**. Ciò è possibile a causa delle funzionalità di interoperabilità C++ che fanno sì che il compilatore inserisca automaticamente il codice di transizione per spostarsi dalle funzioni gestite a quelle non gestite e viceversa.

Utilizzando l'interoperabilità C++, è possibile utilizzare i componenti COM quando vengono normalmente utilizzati oppure possono essere inclusi nelle classi C++. Queste classi wrapper sono denominate runtime personalizzati Callable Wrappers, o CRCWs, e hanno due vantaggi rispetto all'uso di COM direttamente nel codice dell'applicazione:

- La classe risultante può essere utilizzata da linguaggi diversi da Visual C++.

- I dettagli dell'interfaccia COM possono essere nascosti dal codice client gestito. I tipi di dati .NET possono essere usati al posto dei tipi nativi e i dettagli del marshalling dei dati possono essere eseguiti in modo trasparente all'interno di CRCW.

Indipendentemente dal fatto che COM venga usato direttamente o tramite CRCW, è necessario effettuare il marshalling dei tipi di argomento diversi da quelli semplici.

## <a name="blittable-types"></a>Tipi copiabili

Per le API non gestite che usano semplici tipi intrinseci (vedere [tipi copiabili e non copiabili](/dotnet/framework/interop/blittable-and-non-blittable-types)), non è necessaria alcuna codifica speciale perché questi tipi di dati hanno la stessa rappresentazione in memoria, ma i tipi di dati più complessi richiedono il marshalling esplicito dei dati. Per un esempio, vedere [procedura: chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md).

## <a name="example"></a>Esempio

```cpp
// vcmcppv2_impl_dllimp.cpp
// compile with: /clr:pure user32.lib
using namespace System::Runtime::InteropServices;

// Implicit DLLImport specifying calling convention
extern "C" int __stdcall MessageBeep(int);

// explicit DLLImport needed here to use P/Invoke marshalling because
// System::String ^ is not the type of the first parameter to printf
[DllImport("msvcrt.dll", EntryPoint = "printf", CallingConvention = CallingConvention::Cdecl,  CharSet = CharSet::Ansi)]
// or just
// [DllImport("msvcrt.dll")]
int printf(System::String ^, ...);

int main() {
   // (string literals are System::String by default)
   printf("Begin beep\n");
   MessageBeep(100000);
   printf("Done\n");
}
```

```Output
Begin beep
Done
```

## <a name="in-this-section"></a>Contenuto della sezione

- [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di strutture utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-structures-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di matrici utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-arrays-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md)

- [Procedura: accedere ai caratteri in System:: String](../dotnet/how-to-access-characters-in-a-system-string.md)

- [Procedura: convertire una stringa char * in una matrice System:: byte](../dotnet/how-to-convert-char-star-string-to-system-byte-array.md)

- [Procedura: convertire System:: String in wchar_t * o char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)

- [Procedura: convertire System:: String in una stringa standard](../dotnet/how-to-convert-system-string-to-standard-string.md)

- [Procedura: convertire una stringa standard in System:: String](../dotnet/how-to-convert-standard-string-to-system-string.md)

- [Procedura: ottenere un puntatore a una matrice di byte](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)

- [Procedura: caricare risorse non gestite in una matrice di byte](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)

- [Procedura: modificare una classe di riferimento in una funzione nativa](../dotnet/how-to-modify-reference-class-in-a-native-function.md)

- [Procedura: determinare se un'immagine è nativa o CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)

- [Procedura: aggiungere DLL native alla Global assembly cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)

- [Procedura: mantenere un riferimento al tipo di valore nel tipo nativo](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)

- [Procedura: mantenere il riferimento a un oggetto nella memoria non gestita](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)

- [Procedura: rilevare la compilazione/clr](../dotnet/how-to-detect-clr-compilation.md)

- [Procedura: eseguire la conversione tra System:: GUID e _GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)

- [Procedura: specificare un parametro out](../dotnet/how-to-specify-an-out-parameter.md)

- [Procedura: usare un tipo nativo in una compilazione/clr](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)

- [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)

- [Procedura: eseguire il wrapping di una classe nativa per l'utilizzo in C #](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

Per informazioni sull'uso di delegati in uno scenario di interoperabilità, vedere [delegate (estensioni del componente C++)](../extensions/delegate-cpp-component-extensions.md).

## <a name="see-also"></a>Vedi anche

- [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)
