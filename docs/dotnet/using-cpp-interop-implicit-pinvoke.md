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
ms.openlocfilehash: aaa07373b7dd22807290ceefa9197b4013c61fe5
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58778234"
---
# <a name="using-c-interop-implicit-pinvoke"></a>Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)

A differenza di altri linguaggi .NET, Visual C++ include il supporto di interoperabilità che consente al codice gestita e a esistere nella stessa applicazione e anche nello stesso file (con il [managed, unmanaged](../preprocessor/managed-unmanaged.md) pragma). Ciò consente agli sviluppatori di Visual C++ integrare le funzionalità di .NET nelle applicazioni Visual C++ esistenti senza interferire con il resto dell'applicazione.

È anche possibile chiamare funzioni non gestite da un modulo gestito utilizzando [dllexport, dllimport](../cpp/dllexport-dllimport.md).

PInvoke implicito è utile quando non è necessario specificare la modalità di marshalling di parametri di funzione o uno degli altri dettagli che possono essere specificati quando si chiama in modo esplicito DllImportAttribute.

Visual C++ offre due modi per le funzioni gestite e per l'interoperabilità:

- [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

Esplicito di PInvoke è supportato da .NET Framework ed è disponibile nella maggior parte dei linguaggi .NET. Ma, come suggerisce il nome, l'interoperabilità C++ è specifico di Visual C++.

## <a name="c-interop"></a>interoperabilità C++

Interoperabilità C++ è consigliato rispetto esplicito di PInvoke in quanto fornisce una migliore indipendenza dai tipi, viene in genere meno noioso da implementare, è più crea dei problemi se l'API non gestita viene modificato e rende esplicita la miglioramenti delle prestazioni possibili che non sono possibili con PInvoke. Interoperabilità C++, tuttavia, non è possibile se il codice sorgente non gestito non è disponibile.

## <a name="c-com-interop"></a>interoperabilità COM C++

Le funzionalità di interoperabilità è supportate da Visual C++ offrono un particolare vantaggio rispetto agli altri linguaggi .NET quando si tratta di interoperabilità con i componenti COM. Anziché essere vincolati alle restrizioni di .NET Framework [Tlbimp.exe (tipo di libreria utilità di importazione)](/dotnet/framework/tools/tlbimp-exe-type-library-importer), ad esempio un supporto limitato per i tipi di dati e l'esposizione obbligatoria di ogni membro di tutte le interfacce COM, interoperabilità C++ consente a COM i componenti per accedere al verrà e non è necessario separare gli assembly di interoperabilità. A differenza di Visual Basic e C#, Visual C++ è possibile usare oggetti COM direttamente tramite i normali meccanismi di COM (ad esempio **CoCreateInstance** e **QueryInterface**). Ciò è possibile a causa delle funzionalità di interoperabilità C++ che consentono al compilatore di inserire automaticamente il codice di transizione per spostare da gestito a funzioni e viceversa.

Tramite l'interoperabilità C++, componenti COM possono essere utilizzati come vengono utilizzati normalmente o può essere incapsulati all'interno di classi C++. Queste classi wrapper vengono chiamate personalizzato runtime callable wrapper o CRCWs e dispongono di due vantaggi rispetto all'uso di COM direttamente nel codice dell'applicazione:

- La classe risulta può essere utilizzata dai linguaggi diversi da Visual C++.

- I dettagli dell'interfaccia COM possono essere nascosta dal codice client gestito. Tipi di dati .NET possono essere usati al posto di tipi nativi e i dettagli del marshalling dei dati possono essere eseguiti in modo trasparente all'interno del CRCW.

Indipendentemente dal fatto che COM viene utilizzato direttamente o tramite CRCW, è necessario effettuare il marshalling dei tipi di argomento diverso da semplici, tipi copiabili da blt.

## <a name="blittable-types"></a>Tipi copiabili da blt

Per le API non gestite che usano tipi semplici, intrinseci (vedere [tipi copiabili e Non copiabili da blt](/dotnet/framework/interop/blittable-and-non-blittable-types)), è necessario alcun codice speciale in quanto questi tipi di dati hanno la stessa rappresentazione nella memoria, ma richiedono tipi di dati più complessi marshalling dei dati espliciti. Per un esempio, vedere [Procedura: Chiamare DLL Native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md).

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

- [Procedura: Convertire System:: String in wchar_t * o char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)

- [Procedura: Convertire System::String in stringhe standard](../dotnet/how-to-convert-system-string-to-standard-string.md)

- [Procedura: Convertire stringhe standard in System::String](../dotnet/how-to-convert-standard-string-to-system-string.md)

- [Procedura: Ottenere un puntatore a una matrice di byte](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)

- [Procedura: Caricare risorse non gestite in una matrice di byte](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)

- [Procedura: Modificare una classe di riferimenti in una funzione nativa](../dotnet/how-to-modify-reference-class-in-a-native-function.md)

- [Procedura: Determinare se un'immagine è nativa o CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)

- [Procedura: Aggiungere DLL native alla Global Assembly Cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)

- [Procedura: Mantenere riferimenti al tipo valore nel tipo nativo](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)

- [Procedura: Mantenere i riferimenti agli oggetti nella memoria non gestita](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)

- [Procedura: Rilevare compilazioni /clr](../dotnet/how-to-detect-clr-compilation.md)

- [Procedura: Eseguire la conversione tra System::Guid e _GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)

- [Procedura: Specificare un parametro out](../dotnet/how-to-specify-an-out-parameter.md)

- [Procedura: Usare un tipo nativo in una compilazione /clr](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)

- [Procedura: Dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)

- [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

Per informazioni sull'utilizzo dei delegati in uno scenario di interoperabilità, vedere [delegato (estensioni del componente C++)](../extensions/delegate-cpp-component-extensions.md).

## <a name="see-also"></a>Vedere anche

- [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)
