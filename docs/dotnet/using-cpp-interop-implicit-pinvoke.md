---
title: "Utilizzo delle funzionalit&#224; di interoperabilit&#224; C++ (PInvoke implicito) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".NET [C++], porting di C++ nativo a"
  - "tipi copiabili [C++]"
  - "interoperabilità COM C++"
  - "interoperabilità C++"
  - "C++, interoperabilità"
  - "interfacce COM [C++]"
  - "marshalling dei dati [C++], funzioni di interoperabilità C++"
  - "esempi [C++], interoperabilità"
  - "platform invoke implicito"
  - "interoperabilità [C++], funzionalità"
  - "interoperabilità [C++]"
  - "interoperabilità [C++], Implicit PInvoke"
  - "marshalling [C++], funzioni di interoperabilità C++"
  - "platform invoke [C++], esempi"
  - "platform invoke [C++], impliciti"
  - "porting [C++], C++ nativo a .NET"
  - "tipi [C++], copiabili"
ms.assetid: 5f710bf1-88ae-4c4e-8326-b3f0b7c4c68a
caps.latest.revision: 27
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo delle funzionalit&#224; di interoperabilit&#224; C++ (PInvoke implicito)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A differenza degli altri linguaggi .NET, in Visual C\+\+ viene fornito il supporto per l'interoperabilità che consente la presenza di codice gestito e codice non gestito nella stessa applicazione e persino nello stesso file \(con le direttive pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md)\).  Questo consente agli sviluppatori Visual C\+\+ di integrare le funzionalità .NET nelle applicazioni Visual C\+\+ esistenti, senza alcun impatto sul resto dell'applicazione.  
  
 È anche possibile chiamare funzioni non gestite da un modulo gestito utilizzando [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
 L'utilizzo di PInvoke implicito è utile quando non occorre specificare il modo in cui verrà eseguito il marshalling dei parametri di funzione o quando gli eventuali altri dettagli possono essere specificati al momento della chiamata esplicita a DllImportAttribute.  
  
 In Visual C\+\+ vengono forniti due modi per consentire l'interoperabilità tra le funzioni gestite e non gestite:  
  
-   [Utilizzo esplicito di PInvoke in C\+\+ \(attributo DllImport\)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)  
  
 L'utilizzo di PInvoke esplicito è supportato da .NET Framework ed è disponibile nella maggior parte dei linguaggi .NET.  Al contrario, l'interoperabilità C\+\+ è specifica per il linguaggio Visual C\+\+.  
  
## Interoperabilità C\+\+  
 L'interoperabilità C\+\+ è consigliata rispetto a PInvoke esplicito poiché fornisce un supporto indipendente dai tipi migliore, è in genere più semplice da implementare, crea meno problemi in caso di modifica dell'API non gestita e rende possibili miglioramenti in termini di prestazioni impensabili con PInvoke esplicito.  L'interoperabilità C\+\+, tuttavia, non è possibile se non è disponibile il codice sorgente non gestito o quando si esegue la compilazione con **\/clr:safe**. Per ulteriori informazioni, vedere [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## Interoperabilità COM C\+\+  
 Le funzionalità di interoperabilità supportate da Visual C\+\+ offrono un particolare vantaggio rispetto agli altri linguaggi .NET quando vengono fornite per consentire l'interoperabilità con i componenti COM.  Anziché essere vincolati alle restrizioni dell'[Tlbimp.exe \(Type Library Importer\)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md) di .NET Framework, ad esempio il supporto limitato per i tipi di dati e l'esposizione obbligatoria di ciascun membro di ogni interfaccia COM, l'interoperabilità C\+\+ consente infatti di accedere liberamente ai componenti COM e non richiede l'utilizzo di assembly di interoperabilità separati.  Per ulteriori informazioni, vedere [Using COM from .NET](http://msdn.microsoft.com/it-it/03976661-6278-4227-a6c1-3b3315502c15).  
  
## Tipi copiabili  
 Per le API non gestite che utilizzano tipi semplici intrinseci \(vedere [Blittable and Non\-Blittable Types](../Topic/Blittable%20and%20Non-Blittable%20Types.md)\) non è necessario alcun codice speciale, poiché questi tipi di dati hanno la stessa rappresentazione in memoria. I tipi di dati più complessi, invece, richiedono l'esecuzione esplicita del marshalling dei dati.  Per un esempio, vedere [Procedura: chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md).  
  
## Esempio  
  
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
  
  **Segnale acustico di inizio**  
**Completato**   
## Argomenti della sezione  
  
-   [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di strutture utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-structures-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di matrici utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-arrays-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di puntatori incorporati utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md)  
  
-   [Procedura: accedere ai caratteri in System::String](../dotnet/how-to-access-characters-in-a-system-string.md)  
  
-   [Procedura: convertire una stringa char \* in una matrice System::Byte](../dotnet/how-to-convert-char-star-string-to-system-byte-array.md)  
  
-   [Procedura: convertire System::String in wchar\_t\* o char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)  
  
-   [Procedura: convertire System::String in stringhe standard](../dotnet/how-to-convert-system-string-to-standard-string.md)  
  
-   [Procedura: convertire stringhe standard in System::String](../dotnet/how-to-convert-standard-string-to-system-string.md)  
  
-   [Procedura: ottenere un puntatore a una matrice di byte](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)  
  
-   [Procedura: caricare risorse non gestite in una matrice di byte](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)  
  
-   [Procedura: modificare una classe di riferimenti in una funzione nativa](../dotnet/how-to-modify-reference-class-in-a-native-function.md)  
  
-   [Procedura: determinare se un'immagine è nativa o CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)  
  
-   [Procedura: aggiungere DLL native alla Global Assembly Cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)  
  
-   [Procedura: mantenere riferimenti al tipo di valore nel tipo nativo](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)  
  
-   [Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)  
  
-   [Procedura: rilevare compilazioni \/clr](../dotnet/how-to-detect-clr-compilation.md)  
  
-   [Procedura: eseguire la conversione tra System::Guid e \_GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)  
  
-   [Procedura: specificare un parametro out](../dotnet/how-to-specify-an-out-parameter.md)  
  
-   [Procedura: utilizzare un tipo nativo in una compilazione \/clr](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)  
  
-   [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)  
  
-   [Procedura: eseguire il wrapping di una classe nativa affinché possa essere utilizzata in C\#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)  
  
 Per informazioni sull'utilizzo dei delegati in uno scenario di interoperabilità, vedere [delegato](../windows/delegate-cpp-component-extensions.md).  
  
## Vedere anche  
 [Chiamata a funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)