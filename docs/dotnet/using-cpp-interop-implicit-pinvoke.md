---
title: Utilizzando l'interoperabilità C++ (PInvoke implicito) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a91c9833358744730b9ad9c63f5a14729d9d0968
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-c-interop-implicit-pinvoke"></a>Utilizzo delle funzionalità di interoperabilità C++ (PInvoke implicito)
A differenza di altri linguaggi .NET, Visual C++ include il supporto di interoperabilità che consente al codice gestito ed esista nella stessa applicazione e anche nello stesso file (con il [managed, unmanaged](../preprocessor/managed-unmanaged.md) pragma). Questo consente agli sviluppatori di Visual C++ integrare le funzionalità .NET esistente alle applicazioni di Visual C++ senza alcun impatto sul resto dell'applicazione.  
  
 È inoltre possibile chiamare funzioni non gestite da un modulo gestito utilizzando [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
 PInvoke implicito è utile quando non è necessario specificare la modalità di marshalling di parametri di funzione o uno qualsiasi di altri dettagli che possono essere specificati quando si chiama in modo esplicito DllImportAttribute.  
  
 Visual C++ fornisce due modalità per le funzioni gestite e per l'interoperabilità:  
  
-   [Uso esplicito di PInvoke in C++ (attributo DllImport)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)  
  
 Utilizzo esplicito di PInvoke è supportato da .NET Framework ed è disponibile nella maggior parte dei linguaggi .NET. Ma come suggerisce il nome, l'interoperabilità C++ specifica di Visual C++.  
  
## <a name="c-interop"></a>interoperabilità C++  
 Interoperabilità C++ è preferibile esplicito di PInvoke perché garantisce l'indipendenza dai tipi, viene in genere meno difficile da implementare, è più crea dei problemi se viene modificato, l'API non gestita e rende i miglioramenti delle prestazioni possibili che non sono possibili con esplicita PInvoke. Interoperabilità C++ non è tuttavia possibile se il codice sorgente non gestito non è disponibile.  
  
## <a name="c-com-interop"></a>interoperabilità COM C++  
 Quando si tratta di interazione con i componenti COM, le funzionalità di interoperabilità supportate da Visual C++ offrono un particolare vantaggio rispetto agli altri linguaggi .NET. Anziché essere vincolati alle restrizioni di .NET Framework [Tlbimp.exe (utilità di importazione di tipo libreria)](/dotnet/framework/tools/tlbimp-exe-type-library-importer), ad esempio un supporto limitato per tipi di dati e l'esposizione obbligatoria di tutti i membri di ogni interfaccia COM, l'interoperabilità C++ consente a COM componenti a cui accedere a verrà e non è necessario separare gli assembly di interoperabilità. Per ulteriori informazioni, vedere [Using COM da .NET](http://msdn.microsoft.com/en-us/03976661-6278-4227-a6c1-3b3315502c15).  
  
## <a name="blittable-types"></a>Tipi copiabili  
 Per le API non gestite che utilizzano tipi semplici intrinseci (vedere [tipi copiabili e Non copiabili](http://msdn.microsoft.com/Library/d03b050e-2916-49a0-99ba-f19316e5c1b3)), è necessario alcun codice speciale in quanto questi tipi di dati hanno la stessa rappresentazione in memoria, ma richiedono tipi di dati più complessi marshalling dei dati esplicita. Per un esempio, vedere [procedura: chiamare DLL Native da codice Using PInvoke gestita](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md).  
  
## <a name="example"></a>Esempio  
  
```  
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
  
-   [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di strutture tramite l'interoperabilità C++](../dotnet/how-to-marshal-structures-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di matrici tramite l'interoperabilità C++](../dotnet/how-to-marshal-arrays-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di callback e delegati tramite l'interoperabilità C++](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di puntatori incorporati tramite l'interoperabilità C++](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md)  
  
-   [Procedura: Accedere ai caratteri in System::String](../dotnet/how-to-access-characters-in-a-system-string.md)  
  
-   [Procedura: Convertire una stringa char * in una matrice System::Byte](../dotnet/how-to-convert-char-star-string-to-system-byte-array.md)  
  
-   [Procedura: convertire System:: String in wchar_t * o char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)  
  
-   [Procedura: Convertire System::String in stringhe standard](../dotnet/how-to-convert-system-string-to-standard-string.md)  
  
-   [Procedura: Convertire stringhe standard in System::String](../dotnet/how-to-convert-standard-string-to-system-string.md)  
  
-   [Procedura: Ottenere un puntatore a una matrice di byte](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)  
  
-   [Procedura: Caricare risorse non gestite in una matrice di byte](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)  
  
-   [Procedura: Modificare una classe di riferimenti in una funzione nativa](../dotnet/how-to-modify-reference-class-in-a-native-function.md)  
  
-   [Procedura: Determinare se un'immagine è nativa o CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)  
  
-   [Procedura: Aggiungere DLL native alla Global Assembly Cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)  
  
-   [Procedura: Mantenere riferimenti al tipo di valore nel tipo nativo](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)  
  
-   [Procedura: Mantenere i riferimenti agli oggetti nella memoria non gestita](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)  
  
-   [Procedura: rilevare compilazioni /clr](../dotnet/how-to-detect-clr-compilation.md)  
  
-   [Procedura: Eseguire la conversione tra System::Guid e _GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)  
  
-   [Procedura: Specificare un parametro out](../dotnet/how-to-specify-an-out-parameter.md)  
  
-   [Procedura: utilizzare un tipo nativo in una compilazione /clr](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)  
  
-   [Procedura: Dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)  
  
-   [Procedura: Eseguire il wrapping di una classe nativa affinché possa essere usata in C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)  
  
 Per informazioni sull'utilizzo dei delegati in uno scenario di interoperabilità, vedere [delegato (estensioni del componente C++)](../windows/delegate-cpp-component-extensions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)