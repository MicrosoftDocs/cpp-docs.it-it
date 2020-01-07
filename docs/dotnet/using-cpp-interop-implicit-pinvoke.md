---
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
ms.openlocfilehash: d26fbefd87b3ba6d6ca7e183be78608777f383b5
ms.sourcegitcommit: 27d9db019f6d84c94de9e6aff0170d918cee6738
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2020
ms.locfileid: "75676929"
---
# <a name="using-c-interop-implicit-pinvoke"></a>Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)

A differenza di altri linguaggi .NET, C++ Visual ha un supporto di interoperabilità che consente di esistere codice gestito e non gestito nella stessa applicazione e anche nello stesso file (con i pragma [gestiti e non gestiti](../preprocessor/managed-unmanaged.md) ). Ciò consente agli C++ sviluppatori di visualizzare di integrare le funzionalità .NET C++ in applicazioni visive esistenti senza compromettere il resto dell'applicazione.

È anche possibile chiamare funzioni non gestite da un modulo gestito usando [dllexport, dllimport](../cpp/dllexport-dllimport.md).

PInvoke implicito è utile quando non è necessario specificare la modalità di marshalling dei parametri della funzione o uno qualsiasi degli altri dettagli che è possibile specificare quando si chiama in modo esplicito DllImportAttribute.

Visual C++ offre due modi per interagire con le funzioni gestite e non gestite:

- [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

PInvoke esplicito è supportato dal .NET Framework ed è disponibile nella maggior parte dei linguaggi .NET. Tuttavia, come suggerisce il nome C++ , l'interoperabilità C++è specifica dell'oggetto visivo.

## <a name="c-interop"></a>interoperabilità C++

C++L'interoperabilità garantisce una maggiore indipendenza dai tipi ed è in genere meno noiosa da implementare. Tuttavia, C++ l'interoperabilità non è un'opzione se il codice sorgente non gestito non è disponibile o per i progetti multipiattaforma.

## <a name="c-com-interop"></a>interoperabilità COM C++

Le funzionalità di interoperabilità supportate C++ da Visual offrono un particolare vantaggio rispetto ad altri linguaggi .NET quando si tratta di interoperabilità con i componenti com. Anziché essere limitati alle restrizioni del .NET Framework [Tlbimp. exe (utilità di importazione della libreria dei tipi)](/dotnet/framework/tools/tlbimp-exe-type-library-importer), ad esempio il supporto limitato per i tipi di dati e l'esposizione obbligatoria di ogni membro di ogni interfaccia C++ com, l'interoperabilità consente di accedere ai componenti com in modo da non richiedere assembly di interoperabilità distinti. A differenza di Visual Basic C#e, C++ Visual può utilizzare direttamente gli oggetti com utilizzando i normali meccanismi com, ad esempio **CoCreateInstance** e **QueryInterface**. Questa operazione è possibile a C++ causa delle funzionalità di interoperabilità che comportano l'inserimento automatico del codice di transizione da parte del compilatore per lo spostamento dalle funzioni gestite a quelle non gestite e viceversa.

Utilizzando C++ l'interoperabilità, è possibile utilizzare i componenti com quando vengono utilizzati in genere o incapsulati all'interno C++ delle classi. Queste classi wrapper sono denominate runtime personalizzati Callable Wrappers, o CRCWs, e hanno due vantaggi rispetto all'uso di COM direttamente nel codice dell'applicazione:

- La classe risultante può essere utilizzata da linguaggi diversi dall'oggetto C++visivo.

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

## <a name="in-this-section"></a>In questa sezione

- [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di strutture tramite l'interoperabilità C++](../dotnet/how-to-marshal-structures-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di matrici tramite l'interoperabilità C++](../dotnet/how-to-marshal-arrays-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di callback e delegati tramite l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di puntatori incorporati tramite l'interoperabilità C++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md)

- [Procedura: Accedere ai caratteri in System::String](../dotnet/how-to-access-characters-in-a-system-string.md)

- [Procedura: Convertire una stringa char * in una matrice System::Byte](../dotnet/how-to-convert-char-star-string-to-system-byte-array.md)

- [Procedura: convertire System:: String in wchar_t * o char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)

- [Procedura: Convertire System::String in stringhe standard](../dotnet/how-to-convert-system-string-to-standard-string.md)

- [Procedura: Convertire stringhe standard in System::String](../dotnet/how-to-convert-standard-string-to-system-string.md)

- [Procedura: Ottenere un puntatore a una matrice di byte](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)

- [Procedura: Caricare risorse non gestite in una matrice di byte](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)

- [Procedura: Modificare una classe di riferimenti in una funzione nativa](../dotnet/how-to-modify-reference-class-in-a-native-function.md)

- [Procedura: Determinare se un'immagine è nativa o CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)

- [Procedura: Aggiungere DLL native alla Global Assembly Cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)

- [Procedura: Mantenere riferimenti al tipo di valore nel tipo nativo](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)

- [Procedura: Mantenere i riferimenti agli oggetti nella memoria non gestita](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)

- [Procedura: rilevare la compilazione/clr](../dotnet/how-to-detect-clr-compilation.md)

- [Procedura: Eseguire la conversione tra System::Guid e _GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)

- [Procedura: Specificare un parametro out](../dotnet/how-to-specify-an-out-parameter.md)

- [Procedura: usare un tipo nativo in una compilazione/clr](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)

- [Procedura: Dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)

- [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

Per informazioni sull'utilizzo di delegati in uno scenario di interoperabilità, vedere [delegate (C++ estensioni del componente)](../extensions/delegate-cpp-component-extensions.md).

## <a name="see-also"></a>Vedere anche

- [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)
