---
title: "safe_cast (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "safe_cast"
  - "safe_cast_cpp"
  - "stdcli::language::safe_cast"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "safe_cast keyword [C++]"
ms.assetid: 4fa688bf-a8ec-49bc-a4c5-f48134efa4f7
caps.latest.revision: 26
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# safe_cast (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In caso di esito positivo, l'operazione `safe_cast` restituisce l'espressione specificata come tipo specificato. In caso contrario, genera un'eccezione `InvalidCastException`.  
  
## Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
### Sintassi  
  
```cpp  
  
[default]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### Parametri  
  
### Note  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 `safe_cast` consente di modificare il tipo di un'espressione specificata.  In situazioni in cui si prevede che una variabile o parametro sia convertibile in un determinato tipo, è possibile usare safe\_cast senza un blocco try\-catch per rilevare errori di programmazione durante lo sviluppo.  Per altre informazioni, vedere [Cast \(C\+\+\/CX\)](http://msdn.microsoft.com/library/windows/apps/hh755802.aspx).  
  
### Sintassi  
  
```cpp  
  
[default]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### Parametri  
 *type\-id*  
 Il tipo in cui convertire *expression*.  Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
 *expression*  
 Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
### Note  
 Tramite `safe_cast` viene generata l'eccezione `InvalidCastException` se non è possibile convertire *expression* nel tipo specificato da *type\-id*.  Per rilevare `InvalidCastException`, specificare l'opzione del compilatore [\/EH \(Modello di gestione delle eccezioni\)](../build/reference/eh-exception-handling-model.md) e usare un'istruzione try\/catch.  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio di codice riportato di seguito viene illustrato come usare `safe_cast` con [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
```cpp#  
// safe_cast_ZW.cpp  
// compile with: /ZW /EHsc  
  
using namespace default;  
using namespace Platform;  
  
interface class I1 {};  
interface class I2 {};  
interface class I3 {};  
  
ref class X : public I1, public I2 {};  
  
int main(Array<String^>^ args) {  
   I1^ i1 = ref new X;  
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X  
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead  
   try {  
      I3^ i4 = safe_cast<I3^>(i1);   // Fails because i1 is not derived from I3.  
   }   
   catch(InvalidCastException^ ic) {  
     wprintf(L"Caught expected exception: %s\n", ic->Message);  
   }  
}  
```  
  
 **Output**  
  
  **Rilevata eccezione prevista: InvalidCastException**   
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 `safe_cast` consente di modificare il tipo di un'espressione e generare codice MSIL verificabile.  
  
### Sintassi  
  
```cpp  
  
[cli]:: safe_cast<  
type-id  
>(  
expression  
)  
  
```  
  
### Parametri  
 *type\-id*  
 Handle a un tipo riferimento o valore, un tipo valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
 *expression*  
 Espressione che restituisce un handle a tipo riferimento o valore oppure un riferimento di rilevamento a un tipo riferimento o valore.  
  
### Note  
 L'espressione di operando viene convertita in un oggetto di tipo type\-id tramite l'espressione `safe_cast<`*type\-id*`>(`*expression*`)`.  
  
 Il compilatore accetta [static\_cast](../cpp/static-cast-operator.md) nella maggior parte delle posizioni in cui accetta `safe_cast`.  Tuttavia, è garantito che `safe_cast` generi codice MSIL verificabile, mentre `static_cast` potrebbe generare codice MSIL non verificabile.  Per altre informazioni sul codice verificabile, vedere [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md) e [Peverify.exe \(PEVerify Tool\)](../Topic/Peverify.exe%20\(PEVerify%20Tool\).md).  
  
 Come `static_cast`, `safe_cast` richiama le conversioni definite dall'utente.  
  
 Per altre informazioni sui cast, vedere [Operatori di cast](../cpp/casting-operators.md).  
  
 `safe_cast` non applica **const\_cast**  \(cast lontano da **const**\).  
  
 `safe_cast` è nello spazio dei nomi cli.  Per altre informazioni, vedere [Platform, default, and cli Namespaces](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
 Per altre informazioni su **safe\_cast**, vedere:  
  
-   [C\-Style Casts with \/clr \(C\+\+\/CLI\)](../windows/c-style-casts-with-clr-cpp-cli.md)  
  
-   [Procedura: utilizzare safe\_cast in C\+\+\/CLI](../dotnet/how-to-use-safe-cast-in-cpp-cli.md)  
  
-   [Procedura: downcast con safe\_cast](../misc/how-to-downcast-with-safe-cast.md)  
  
-   [Procedura: utilizzare safe\_cast e tipi generici](../misc/how-to-use-safe-cast-and-generic-types.md)  
  
-   [Procedura: utilizzare safe\_cast conversioni definite dall'utente](../misc/how-to-use-safe-cast-and-user-defined-conversions.md)  
  
-   [Procedura: utilizzare safe\_cast e boxing](../misc/how-to-use-safe-cast-and-boxing.md)  
  
-   [Procedura: utilizzare safe\_cast e unboxing](../misc/how-to-use-safe-cast-and-unboxing.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Un esempio del caso in cui il compilatore non accetterà un `static_cast` ma accetterà un `safe_cast` è per i cast tra tipi di interfaccia non correlati.  Con `safe_cast`, il compilatore non genererà un errore di conversione ed eseguirà un controllo in fase di esecuzione per vedere se è possibile eseguire il cast  
  
```cpp  
// safe_cast.cpp  
// compile with: /clr  
using namespace System;  
  
interface class I1 {};  
interface class I2 {};  
interface class I3 {};  
  
ref class X : public I1, public I2 {};  
  
int main() {  
   I1^ i1 = gcnew X;  
   I2^ i2 = safe_cast<I2^>(i1);   // OK, I1 and I2 have common type: X  
   // I2^ i3 = static_cast<I2^>(i1);   C2440 use safe_cast instead  
   try {  
      I3^ i4 = safe_cast<I3^>(i1);   // fail at runtime, no common type  
   }   
   catch(InvalidCastException^) {  
      Console::WriteLine("Caught expected exception");  
   }  
}  
```  
  
 **Output**  
  
  **Eccezione prevista intercettata**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)